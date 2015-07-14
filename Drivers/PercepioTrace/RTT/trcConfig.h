/*******************************************************************************
 * Trace Recorder Library for Tracealyzer v2.8.5
 * Percepio AB, www.percepio.com
 *
 * trcConfig.h
 *
 * Configuration parameters for the streaming version trace recorder library.
 * Before using the trace recorder library, please check that the default
 * settings are appropriate for your system, and if necessary adjust these.
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

#ifndef TRC_STREAMING_RECORDER_CONFIG_H
#define TRC_STREAMING_RECORDER_CONFIG_H

#define TRC_CONFIG_USE_RTT_STREAMING   1  /* Set to 1 if using RTT streaming, 0 otherwise */

// Set the hardware port setting here!
#define TRC_RECORDER_HARDWARE_PORT TRC_PORT_ARM_Cortex_M

/******************************************************************************
 * TRC_FREERTOS_VERSION
 * 
 * Specify what version of FreeRTOS that is used. This is necessary compensate 
 * for renamed symbols in the FreeRTOS kernel (does not build if incorrect).
 * 
 * TRC_FREERTOS_VERSION_7_3_OR_7_4 (= 1)		If using FreeRTOS v7.3.0 - v7.4.2
 * TRC_FREERTOS_VERSION_7_5_OR_7_6 (= 2)		If using FreeRTOS v7.5.0 - v7.6.0
 * TRC_FREERTOS_VERSION_8_0_OR_LATER (= 3)		If using FreeRTOS v8.0.0 or later
 *****************************************************************************/
#define TRC_FREERTOS_VERSION_NOT_SET			  0
#define TRC_FREERTOS_VERSION_7_3_OR_7_4			1
#define TRC_FREERTOS_VERSION_7_5_OR_7_6			2
#define TRC_FREERTOS_VERSION_8_0_OR_LATER		3

#define TRC_FREERTOS_VERSION	TRC_FREERTOS_VERSION_8_0_OR_LATER

/*******************************************************************************
 * Configuration Macro: TRC_SYMBOL_TABLE_SLOTS
 *
 * The maximum number of symbols names that can be stored. This includes:
 * - Task names
 * - Named ISRs (vTraceSetISRProperties)
 * - Named kernel objects (vTraceStoreKernelObjectName)
 * - User event channels (vTraceStoreUserEventChannelName)
 *
 * If this value is too small, not all symbol names will be stored and the
 * trace display will be affected. In that case, there will be warnings
 * (as User Events) from TzCtrl task, that monitors this.
 ******************************************************************************/
#define TRC_SYMBOL_TABLE_SLOTS   %SymbolTableSlots

/*******************************************************************************
 * Configuration Macro: TRC_SYMBOL_MAX_LENGTH
 *
 * The maximum length of symbol names, including:
 * - Task names
 * - Named ISRs (vTraceSetISRProperties)
 * - Named kernel objects (vTraceStoreKernelObjectName)
 * - User event channel names (vTraceStoreUserEventChannelName)
 *
 * If longer symbol names are used, they will be truncated by the recorder,
 * which will affect the trace display. In that case, there will be warnings
 * (as User Events) from TzCtrl task, that monitors this.
 ******************************************************************************/
#define TRC_SYMBOL_MAX_LENGTH   %SymbolMaxLength

/*******************************************************************************
 * Configuration Macro: TRC_OBJECT_DATA_SLOTS
 *
 * The maximum number of object data entries (used for task priorities) that can
 * be stored at the same time. Must be sufficient for all tasks, otherwise there
 * will be warnings (as User Events) from TzCtrl task, that monitors this.
 ******************************************************************************/
#define TRC_OBJECT_DATA_SLOTS   %ObjectDataSlots

/*******************************************************************************
 * Configuration Macro: TRC_RTT_UP_BUFFER_INDEX
 *
 * Defines the RTT buffer to use for writing the trace data. Make sure that
 * the PC application has the same setting (File->Settings).
 *
 ******************************************************************************/
#define TRC_RTT_UP_BUFFER_INDEX   %RTTUpBufferIndex

/*******************************************************************************
 * Configuration Macro: TRC_RTT_DOWN_BUFFER_INDEX
 *
 * Defines the RTT buffer to use for reading the trace data. Make sure that
 * the PC application has the same setting (File->Settings).
 *
 ******************************************************************************/
#define TRC_RTT_DOWN_BUFFER_INDEX   %RTTDownBufferIndex

/*******************************************************************************
 * Configuration Macro: TRC_RTT_MODE
 *
 * Defines how the RTT up-buffer (target->host) should behave when full.
 *
 * - SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL - Blocks (system stalls)
 * - SEGGER_RTT_MODE_NO_BLOCK_SKIP - Skips data (events lost)
 *
 * If events are lost when using SEGGER_RTT_MODE_NO_BLOCK_SKIP, this is detected
 * by the PC application (using a 16-bit sequence number) and the intervals with lost
 * events are then highlighted with a light red background color. In that case,
 * the results from the PC application is not guaranteed to be accurate.
 *
 * In case blocking mode is used (SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL) you can
 * see any cases of blocking as User Events in the PC application. To do that, you need
 * to enable TRC_MEASURE_BLOCKING_TIME. When you have recorded a trace, check the
 * View Filter, under User Events, and enable "Blocking on trace buffer" if
 * this is present (otherwise there is no blocking). This shows the high
 * watermark for any RTT blocking time, measured between each run of TzCtrl.
 * See also MEASURE_BLOCKING_TIME.
 ******************************************************************************/
#define TRC_RTT_MODE SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL

/*******************************************************************************
 * Configuration Macro: TRC_TZCTRL_TASK_STACK_SIZE
 *
 * The stack size of the TzCtrl task, that receive commands.
 * We are aiming to remove this extra task in future versions.
 ******************************************************************************/
#define TRC_TZCTRL_TASK_STACK_SIZE   %TzCtrlTaskStackSize

/*******************************************************************************
 * Configuration Macro: TRC_CTRL_TASK_PRIORITY
 *
 * The priority of the TzCtrl task, that receive commands from.
 * We are aiming to remove this extra task in future versions.
 ******************************************************************************/
#define TRC_CTRL_TASK_PRIORITY %TzCtrlTaskPrioStr

/*******************************************************************************
 * Configuration Macro: TRC_MEASURE_BLOCKING_TIME
 *
 * If using SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL, this activates detection and
 * warnings in case of blocking in SEGGER_RTT_Write (if too small buffer).
 *
 * If enabling this option (set to 1) warnings are given as User Events if
 * blocking occurs, including the longest blocking time. These warnings are
 * given on the channel "Blocking on trace buffer".
 *
 * Note: If you get such warnings, you can study the blocking time in the User
 * Event Signal Plot to get an overview of the magnitude of the blocking and
 * decide if acceptable.
 *
 * To eliminate or at least reduce occurrences of blocking:
 *
 * - Verify the J-Link Speed in the Settings dialog of the PC application.
 *   Default is 4 MHz, but can be increased a lot depending on your J-Link.
 *
 *   Note: If you set the speed higher than your J-Link can manage, the J-Link
 *   driver will instead use the fastest supported speed. The actual speed used
 *   is shown in the title of the trace receiver window.
 *
 * - Increase the buffer size (BUFFER_SIZE_UP in SEGGER_RTT_Conf.h).
 *
 * - Reduce the amount of data produced, e.g., by removing frequent User Events.
 ******************************************************************************/
#define TRC_MEASURE_BLOCKING_TIME 0

/*******************************************************************************
 * Configuration Macro: TRC_BLOCKING_MIN_CYCLES
 *
 * Threshold value for deciding if SEGGER_RTT_Write has blocked. Most events
 * take 200-300 cycles on ARM Cortex-M MCUs, so anything above 500 cycles should
 * be due to blocking on a full buffer (i.e., waiting for the debugger to read
 * the RTT buffer data and make room for more...).
 ******************************************************************************/
#define TRC_BLOCKING_MIN_CYCLES 500


#define TRC_JLINK_RTT     1
#define TRC_PERIODIC_TASK 2

#define TRC_RECORDER_TRANSFER_METHOD TRC_JLINK_RTT

#endif

