/**
 * \file
 * \brief This implements a queue/buffer for radio messages
 * \author (c) 2013-2014 Erich Styger, http://mcuoneclipse.com/
 * \note MIT License (http://opensource.org/licenses/mit-license.html), see 'RNet_License.txt'
 *
 * This module uses queues to retrieve and store radio messages.
 */

#include "RNetConf.h"
#include "RMSG.h"
#include "%@RTOS@'ModuleName'.h"
#include "RPHY.h"

/* Configuration for tx and rx queues */
#define RMSG_QUEUE_RX_NOF_ITEMS   (RNET_CONFIG_MSG_QUEUE_NOF_RX_ITEMS) /* number of items in the queue */
#define RMSG_QUEUE_TX_NOF_ITEMS   (RNET_CONFIG_MSG_QUEUE_NOF_TX_ITEMS) /* number of items in the queue */
#define RMSG_QUEUE_PUT_WAIT       (RNET_CONFIG_MSG_QUEUE_PUT_BLOCK_TIME_MS) /* blocking time for putting messages into queue */

static xQueueHandle RMSG_MsgRxQueue, RMSG_MsgTxQueue; /* queue for messages,  format is: kind(8bit) dataSize(8bit) data */

unsigned int RMSG_RxQueueNofItems(void) {
  return (unsigned int)%@RTOS@'ModuleName'%.uxQueueMessagesWaiting(RMSG_MsgRxQueue);
}

unsigned int RMSG_TxQueueNofItems(void) {
  return (unsigned int)%@RTOS@'ModuleName'%.uxQueueMessagesWaiting(RMSG_MsgTxQueue);
}

uint8_t RMSG_FlushRxQueue(void) {
  if (%@RTOS@'ModuleName'%.xQueueReset(RMSG_MsgRxQueue)!=pdPASS) {
    return ERR_FAILED;
  }
  return ERR_OK;
}

uint8_t RMSG_FlushTxQueue(void) {
  if (%@RTOS@'ModuleName'%.xQueueReset(RMSG_MsgTxQueue)!=pdPASS) {
    return ERR_FAILED;
  }
  return ERR_OK;
}

uint8_t RMSG_QueuePut(uint8_t *buf, size_t bufSize, uint8_t payloadSize, bool fromISR, bool isTx, bool toBack, RPHY_FlagsType flags) {
  /* data format is: dataSize(8bit) data */
  uint8_t res = ERR_OK;
  xQueueHandle queue;
  BaseType_t qRes;

  if (payloadSize>RPHY_PAYLOAD_SIZE) {
    return ERR_OVERFLOW; /* more data than can fit into payload! */
  }
  if (bufSize!=RPHY_BUFFER_SIZE) {
    return ERR_FAILED; /* must be exactly this buffer size!!! */
  }
  if (isTx) {
    queue = RMSG_MsgTxQueue;
  } else {
    queue = RMSG_MsgRxQueue;
  }
  RPHY_BUF_FLAGS(buf) = flags;
  RPHY_BUF_SIZE(buf) = payloadSize;
  if (fromISR) {
    signed portBASE_TYPE pxHigherPriorityTaskWoken;
    
    if (toBack) {
      qRes = %@RTOS@'ModuleName'%.xQueueSendToBackFromISR(queue, buf, &pxHigherPriorityTaskWoken);
    } else {
      qRes = %@RTOS@'ModuleName'%.xQueueSendToFrontFromISR(queue, buf, &pxHigherPriorityTaskWoken);
    }
    if (qRes!=pdTRUE) {
      /* was not able to send to the queue. Well, not much we can do here... */
      res = ERR_BUSY;
    }
  } else {
    if (toBack) {
      qRes = %@RTOS@'ModuleName'%.xQueueSendToBack(queue, buf, RMSG_QUEUE_PUT_WAIT);
    } else {
      qRes = %@RTOS@'ModuleName'%.xQueueSendToFront(queue, buf, RMSG_QUEUE_PUT_WAIT);
    }
    if (qRes!=pdTRUE) {
      res = ERR_BUSY;
    }
  }
  return res;
}

uint8_t RMSG_PutRetryTxMsg(uint8_t *buf, size_t bufSize) {
  if (bufSize<RPHY_BUFFER_SIZE) {
    return ERR_OVERFLOW; /* not enough space in buffer */
  }
  if (%@RTOS@'ModuleName'%.xQueueSendToFront(RMSG_MsgTxQueue, buf, 0)==pdPASS) {
    /* received message from queue */
    return ERR_OK;
  }
  return ERR_RXEMPTY;
}

uint8_t RMSG_GetTxMsg(uint8_t *buf, size_t bufSize) {
  if (bufSize<RPHY_BUFFER_SIZE) {
    return ERR_OVERFLOW; /* not enough space in buffer */
  }
  if (%@RTOS@'ModuleName'%.xQueueReceive(RMSG_MsgTxQueue, buf, 0)==pdPASS) {
    /* received message from queue */
    return ERR_OK;
  }
  return ERR_RXEMPTY;
}

uint8_t RMSG_GetRxMsg(uint8_t *buf, size_t bufSize) {
  /* first byte in the queue is the size of the item */
  if (bufSize<RPHY_BUFFER_SIZE) {
    return ERR_OVERFLOW; /* not enough space in buffer */
  }
  if (%@RTOS@'ModuleName'%.xQueueReceive(RMSG_MsgRxQueue, buf, 0)==pdPASS) { /* immediately returns if queue is empty */
    /* received message from queue */
    return ERR_OK;
  }
  return ERR_RXEMPTY;
}

uint8_t RMSG_QueueTxMsg(uint8_t *buf, size_t bufSize, uint8_t payloadSize, RPHY_FlagsType flags) {
  return RMSG_QueuePut(buf, bufSize, payloadSize, FALSE, TRUE, TRUE, flags);
}

uint8_t RMSG_QueueRxMsg(uint8_t *buf, size_t bufSize, uint8_t payloadSize, RPHY_FlagsType flags) {
  return RMSG_QueuePut(buf, bufSize, payloadSize, FALSE, FALSE, TRUE, flags);
}

%if defined(Shell)
static uint8_t RMSG_PrintHelp(const %@Shell@'ModuleName'%.StdIOType *io) {
  %@Shell@'ModuleName'%.SendHelpStr((unsigned char*)"rmsg", (unsigned char*)"Group of rmsg commands\r\n", io->stdOut);
  %@Shell@'ModuleName'%.SendHelpStr((unsigned char*)"  help|status", (unsigned char*)"Shows radio help or status\r\n", io->stdOut);
  return ERR_OK;
}

static uint8_t RMSG_PrintStatus(const %@Shell@'ModuleName'%.StdIOType *io) {
  uint8_t buf[32];

  %@Shell@'ModuleName'%.SendStatusStr((unsigned char*)"rmsg", (unsigned char*)"\r\n", io->stdOut);

  %@Utility@'ModuleName'%.Num32uToStr(buf, sizeof(buf), RMSG_RxQueueNofItems());
  %@Utility@'ModuleName'%.strcat(buf, sizeof(buf), (unsigned char*)" items\r\n");
  %@Shell@'ModuleName'%.SendStatusStr((unsigned char*)"  rx", buf, io->stdOut);
  %@Utility@'ModuleName'%.Num32uToStr(buf, sizeof(buf), RMSG_TxQueueNofItems());
  %@Utility@'ModuleName'%.strcat(buf, sizeof(buf), (unsigned char*)" items\r\n");
  %@Shell@'ModuleName'%.SendStatusStr((unsigned char*)"  tx", buf, io->stdOut);
  return ERR_OK;
}

uint8_t RMSG_ParseCommand(const unsigned char *cmd, bool *handled, const %@Shell@'ModuleName'%.StdIOType *io) {
  uint8_t res = ERR_OK;

  if (%@Utility@'ModuleName'%.strcmp((char*)cmd, (char*)%@Shell@'ModuleName'%.CMD_HELP)==0 || %@Utility@'ModuleName'%.strcmp((char*)cmd, (char*)"rmsg help")==0) {
    *handled = TRUE;
    return RMSG_PrintHelp(io);
  } else if (%@Utility@'ModuleName'%.strcmp((char*)cmd, (char*)%@Shell@'ModuleName'%.CMD_STATUS)==0 || %@Utility@'ModuleName'%.strcmp((char*)cmd, (char*)"rmsg status")==0) {
    *handled = TRUE;
    return RMSG_PrintStatus(io);
  }
  return res;
}
%endif

void RMSG_Deinit(void) {
  %@RTOS@'ModuleName'%.vQueueUnregisterQueue(RMSG_MsgRxQueue);
  %@RTOS@'ModuleName'%.vQueueDelete(RMSG_MsgRxQueue);
  RMSG_MsgRxQueue = NULL;

  %@RTOS@'ModuleName'%.vQueueUnregisterQueue(RMSG_MsgTxQueue);
  %@RTOS@'ModuleName'%.vQueueDelete(RMSG_MsgTxQueue);
  RMSG_MsgTxQueue = NULL;
}

void RMSG_Init(void) {
  RMSG_MsgRxQueue = %@RTOS@'ModuleName'%.xQueueCreate(RMSG_QUEUE_RX_NOF_ITEMS, RPHY_BUFFER_SIZE);
  if (RMSG_MsgRxQueue==NULL) { /* queue creation failed! */
    for(;;) {} /* not enough memory? */
  }
  %@RTOS@'ModuleName'%.vQueueAddToRegistry(RMSG_MsgRxQueue, "RadioRxMsg");
#if configUSE_TRACE_HOOKS
  vTraceSetQueueName(RMSG_MsgRxQueue, "RadioRxMsg");
#endif

  RMSG_MsgTxQueue = %@RTOS@'ModuleName'%.xQueueCreate(RMSG_QUEUE_TX_NOF_ITEMS, RPHY_BUFFER_SIZE);
  if (RMSG_MsgTxQueue==NULL) { /* queue creation failed! */
    for(;;) {} /* not enough memory? */
  }
  %@RTOS@'ModuleName'%.vQueueAddToRegistry(RMSG_MsgTxQueue, "RadioTxMsg");
#if configUSE_TRACE_HOOKS
  vTraceSetQueueName(RMSG_MsgTxQueue, "RadioTxMsg");
#endif
}
