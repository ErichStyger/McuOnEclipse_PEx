/*******************************************************************************
 * Trace Recorder Library for Tracealyzer v2.8.5
 * Percepio AB, www.percepio.com
 *
 * trcKernelPort.c
 *
 * The kernel-specific code for integration with FreeRTOS.
 *
 * Terms of Use
 * This software (the "Tracealyzer Recorder Library") is the intellectual
 * property of Percepio AB and may not be sold or in other ways commercially
 * redistributed without explicit written permission by Percepio AB.
 *
 * Separate conditions applies for the SEGGER branded source code included.
 *
 * The recorder library is free for use together with Percepio products.
 * You may distribute the recorder library in its original form, but public
 * distribution of modified versions require approval by Percepio AB.
 *
 * Disclaimer
 * The trace tool and recorder library is being delivered to you AS IS and
 * Percepio AB makes no warranty as to its use or performance. Percepio AB does
 * not and cannot warrant the performance or results you may obtain by using the
 * software or documentation. Percepio AB make no warranties, express or
 * implied, as to noninfringement of third party rights, merchantability, or
 * fitness for any particular purpose. In no event will Percepio AB, its
 * technology partners, or distributors be liable to you for any consequential,
 * incidental or special damages, including any lost profits or lost savings,
 * even if a representative of Percepio AB has been advised of the possibility
 * of such damages, or for any claim by any third party. Some jurisdictions do
 * not allow the exclusion or limitation of incidental, consequential or special
 * damages, or the exclusion of implied warranties or limitations on how long an
 * implied warranty may last, so the above limitations may not apply to you.
 *
 * Tabs are used for indent in this file (1 tab = 4 spaces)
 *
 * Copyright Percepio AB, 2015.
 * www.percepio.com
 ******************************************************************************/

#include "trcKernelPort.h"
#include "SEGGER_RTT_Conf.h"

#if (USE_TRACEALYZER_RECORDER == 1)

#include <stdint.h>
#include "trcRecorder.h"
#include "task.h"



/* TzCtrl task TCB */
xTaskHandle HandleTzCtrl;

/* Called by TzCtrl task periodically (every 100 ms) */
void CheckRecorderStatus(void);

/* The TzCtrl task - receives commands from Tracealyzer (start/stop) */
static portTASK_FUNCTION( TzCtrl, pvParameters );

/* Monitored by TzCtrl task, that give warnings as User Events */
extern volatile uint32_t NoRoomForSymbol;
extern volatile uint32_t NoRoomForObjectData;
extern volatile uint32_t LongestSymbolName;
extern volatile uint32_t MaxBytesTruncated;

#if ((RTT_MODE==SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL) && (MEASURE_BLOCKING_TIME))

/*** Used in blocking RTT mode, if enabled MEASURE_BLOCKING_TIME **************/

/* The highest number of cycles used by SEGGER_RTT_Write. */
volatile int32_t blockingCyclesMax;

/* The number of times SEGGER_RTT_Write has blocked due to a full buffer. */
volatile uint32_t blockingCount;

/* User Event Channel for giving warnings regarding blocking */
char* RTTDiagChn;
#endif

/* User Event Channel for giving warnings regarding NoRoomForSymbol etc. */
char* WarnChn;

/* Keeps track of previous values, to only react on changes. */
uint32_t NoRoomForSymbol_last = 0;
uint32_t NoRoomForObjectData_last = 0;
uint32_t LongestSymbolName_last = 0;
uint32_t MaxBytesTruncated_last = 0;

/* Up-buffer. If index is defined as 0, the internal RTT buffers will be used instead of this. */
#if 0
#if RTT_UP_BUFFER_INDEX != 0
static char _TzTraceData[BUFFER_SIZE_UP];
#else
static char _TzTraceData[4];    /* Not used */
#endif

/* Down-buffer. If index is defined as 0, the internal RTT buffers will be used instead of this. */
#if RTT_DOWN_BUFFER_INDEX != 0
static char _TzCtrlData[BUFFER_SIZE_DOWN];
#else
static char _TzCtrlData[4];     /* Not used */
#endif
#endif

/*******************************************************************************
 * prvTraceGetCurrentTaskHandle
 *
 * Function that returns the handle to the currently executing task.
 *
 ******************************************************************************/
void* prvTraceGetCurrentTaskHandle(void)
{
	return xTaskGetCurrentTaskHandle();
}

/*******************************************************************************
 * prvIsNewTCB
 *
 * Function that returns the handle to the currently executing task.
 *
 ******************************************************************************/
void* pCurrentTCB = NULL;
uint32_t prvIsNewTCB(void* pNewTCB)
{
	if (pCurrentTCB != pNewTCB)
	{
		pCurrentTCB = pNewTCB;
		return 1;
	}
	return 0;
}
/*******************************************************************************
 * CheckRecorderStatus
 *
 * Called by TzCtrl task periodically (every 100 ms - seems reasonable).
 * Checks a number of diagnostic variables and give warnings as user events,
 * in most cases including a suggested solution.
 ******************************************************************************/
void CheckRecorderStatus(void)
{
	if (NoRoomForSymbol > NoRoomForSymbol_last)
	{
		vTracePrintF(WarnChn, "SYMBOL_TABLE_SLOTS too small. Add %%d slots.",
			NoRoomForSymbol);

		NoRoomForSymbol_last = NoRoomForSymbol;
	}

	if (NoRoomForObjectData > NoRoomForObjectData_last)
	{
		vTracePrintF(WarnChn, "OBJECT_DATA_SLOTS too small. Add %%d slots.",
			NoRoomForObjectData);

		NoRoomForObjectData_last = NoRoomForObjectData;
	}

	if (LongestSymbolName > LongestSymbolName_last)
	{
		if (LongestSymbolName > SYMBOL_MAX_LENGTH)
		{
			vTracePrintF(WarnChn, "SYMBOL_MAX_LENGTH too small. Add %%d chars.",
				LongestSymbolName);
		}
		LongestSymbolName_last = LongestSymbolName;
	}

	if (MaxBytesTruncated > MaxBytesTruncated_last)
	{
		/* Some string event generated a too long string that was truncated.
		This may happen for the following functions:
		- vTracePrintF
		- vTracePrintF
		- vTraceStoreKernelObjectName
		- vTraceStoreUserEventChannelName
		- vTraceSetISRProperties

		A PSF event may store maximum 60 bytes payload, including data arguments
		and string characters. For User Events, also the User Event Channel ptr
		must be squeezed in, if a channel is specified. */

		vTracePrintF(WarnChn, "String event too long, up to %%d bytes truncated.",
			MaxBytesTruncated);

		MaxBytesTruncated_last = MaxBytesTruncated;
	}

#if ((RTT_MODE==SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL) && (MEASURE_BLOCKING_TIME))
	if (blockingCount > 0)
	{
		/* At least one case of RTT blocking since the last check and this is
		the longest case. */
		vTracePrintF(RTTDiagChn, "Longest since last: %%d us",
			(uint32_t)blockingCyclesMax/(TRACE_CPU_CLOCK_HZ/1000000));

		blockingCyclesMax = 0;
	}
#endif
}

/*******************************************************************************
 * TzCtrl
 *
 * Task for recieving commands from embOS-Trace and for recorder diagnostics.
 *
 * Stack size and priority is configured in trcKernelPort.h, using:
 * - TZCTRL_TASK_STACK_SIZE (default 512)
 * - TZCTRL_TASK_PRIORITY (default 10)
 ******************************************************************************/
static portTASK_FUNCTION( TzCtrl, pvParameters )
{
	TracealyzerCommandType msg;
	int bytes = 0;

	while (1)
	{
		bytes = SEGGER_RTT_Read(RTT_DOWN_BUFFER_INDEX,
								(char*)&msg, sizeof(TracealyzerCommandType));
	if (bytes != 0)
		{
			if (bytes == sizeof(TracealyzerCommandType))
			{
				if (isValidCommand(&msg))
				{
					processCommand(&msg); /* Start or Stop currently... */
				}
			}
		}
		else
		{
			CheckRecorderStatus();
			vTaskDelay(100);
		}
	}
}

/*******************************************************************************
 * Trace_Init
 *
 * The main initialization routine for the embOS-Trace recorder. Configures RTT,
 * activates the PTRACE instrumentation in embOS and the TzCtrl task.
 * Also sets up the diagnostic User Event channels used by TzCtrl task.
 *
 * Settings used by the trace recorder are found in these header files:
 *  - SEGGER_RTT_Conf.h: settings for SEGGER Real-Time Terminal (RTT) which is
 *    used for the trace streaming.
 *  - trcKernelPort.h: RTT related settings for the trace streaming.
 *  - trcRecorder.h - settings for allocation of internal recorder tables.
 *  - trcHardwarePort.h - hardware-specific configuration (timestamping).
 ******************************************************************************/
void Trace_Init()
{
	/* Only RTT channel 0 works at the moment, so these only sets RTT_MODE! */
	SEGGER_RTT_ConfigUpBuffer(RTT_UP_BUFFER_INDEX,
								"TzData",
								0,//_TzTraceData,
								0,//sizeof(_TzTraceData),
								RTT_MODE );

	SEGGER_RTT_ConfigDownBuffer(RTT_DOWN_BUFFER_INDEX,
								"TzCtrl",
								0,//_TzCtrlData,
								0,//sizeof(_TzCtrlData),
								0);

	WarnChn = vTraceStoreUserEventChannelName("Warnings from Recorder");

#if ((RTT_MODE==SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL) && (MEASURE_BLOCKING_TIME))
	RTTDiagChn = vTraceStoreUserEventChannelName("Blocking on trace buffer");
#endif

  	/* Creates the TzCtrl task - receives trace commands (start, stop, ...) */
	xTaskCreate( TzCtrl, "TzCtrl", configMINIMAL_STACK_SIZE, NULL, TZCTRL_TASK_PRIORITY, &HandleTzCtrl );
}

#else /* (USE_TRACEALYZER_RECORDER == 1) */

#define Trace_Init()


#endif
