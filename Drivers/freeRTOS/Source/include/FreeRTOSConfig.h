/*
 * FreeRTOS Kernel V10.4.1
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * https://www.FreeRTOS.org
 * https://github.com/FreeRTOS
 *
 */

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#include "%@KinetisSDK@ModuleName.h" /* SDK and API used */
#include "%'RtosComponentConfigHeaderFileName'" /* extra configuration settings not part of the original FreeRTOS ports */

%if defined(TaskCAdditions) & %TaskCAdditions='yes'
#define configINCLUDE_FREERTOS_TASK_C_ADDITIONS_H            %>60 1 /* 1: include additional header file at the end of task.c to help with debugging in GDB in combination with configUSE_TRACE_FACILITY; 0: no extra file included. */
%else
#define configINCLUDE_FREERTOS_TASK_C_ADDITIONS_H            %>60 0 /* 1: include additional header file at the end of task.c to help with debugging in GDB in combination with configUSE_TRACE_FACILITY; 0: no extra file included. */
%endif
%if defined(enabledBackwardCompatibility) & %enabledBackwardCompatibility='yes'
#define configENABLE_BACKWARD_COMPATIBILITY                   %>60 1 /* 1: enable backward compatibility mode, using old names in kernel. 0: use new kernel structure names (recommended) */
%else
#define configENABLE_BACKWARD_COMPATIBILITY                   %>60 0 /* 1: enable backward compatibility mode, using old names in kernel. 0: use new kernel structure names (recommended) */
%endif
/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html.
 *----------------------------------------------------------*/
#ifndef configGENERATE_RUN_TIME_STATS_USE_TICKS
%if defined(RuntimeCounterUseTickCounter) & %RuntimeCounterUseTickCounter='yes'
  #define configGENERATE_RUN_TIME_STATS_USE_TICKS                  %>50 1 /* 1: Use the RTOS tick counter as runtime counter. 0: use extra timer */
%else
  #define configGENERATE_RUN_TIME_STATS_USE_TICKS                  %>50 0 /* 1: Use the RTOS tick counter as runtime counter. 0: use extra timer */
%endif
#endif
#ifndef configGENERATE_RUN_TIME_STATS
%if %CollectRuntimeStatisticsGroup='yes'
  #define configGENERATE_RUN_TIME_STATS                            %>50 1 /* 1: generate runtime statistics; 0: no runtime statistics */
%else
  #define configGENERATE_RUN_TIME_STATS                            %>50 0 /* 1: generate runtime statistics; 0: no runtime statistics */
%endif
#endif
#if configGENERATE_RUN_TIME_STATS
  #if configGENERATE_RUN_TIME_STATS_USE_TICKS
    #define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>55 /* nothing */ /* default: use Tick counter as runtime counter */
    #define portGET_RUN_TIME_COUNTER_VALUE()                         %>55 xTaskGetTickCountFromISR() /* default: use Tick counter as runtime counter */
  #else /* use dedicated timer */
    extern uint32_t %'ModuleName'%.AppGetRuntimeCounterValueFromISR(void);
    #define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>55 %'ModuleName'%.AppConfigureTimerForRuntimeStats()
    #define portGET_RUN_TIME_COUNTER_VALUE()                         %>55 %'ModuleName'%.AppGetRuntimeCounterValueFromISR()
  #endif
#else /* no runtime stats, use empty macros */
  #define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                   %>55 /* nothing */
  #define portGET_RUN_TIME_COUNTER_VALUE()                           %>55 /* nothing */
#endif
%-
%if UsePreemption = 'yes'
#ifndef configUSE_PREEMPTION
  #define configUSE_PREEMPTION                                     %>50 1 /* 1: pre-emptive mode; 0: cooperative mode */
#endif
%else
#ifndef configUSE_PREEMPTION
  #define configUSE_PREEMPTION                                     %>50 0 /* 1: pre-emptive mode; 0: cooperative mode */
#endif
%endif
%if UseTimeSlicing = 'yes'
#ifndef configUSE_TIME_SLICING
  #define configUSE_TIME_SLICING                                   %>50 1 /* 1: use time slicing; 0: don't time slice at tick interrupt time */
#endif
%else
#ifndef configUSE_TIME_SLICING
  #define configUSE_TIME_SLICING                                   %>50 0 /* 1: use time slicing; 0: don't time slice at tick interrupt time */
#endif
%endif
%ifdef vApplicationIdleHook
#ifndef configUSE_IDLE_HOOK
  #define configUSE_IDLE_HOOK                                      %>50 1 /* 1: use Idle hook; 0: no Idle hook */
#endif
#ifndef configUSE_IDLE_HOOK_NAME
  #define configUSE_IDLE_HOOK_NAME                                 %>50 %vApplicationIdleHook
#endif
%else
#ifndef configUSE_IDLE_HOOK
  #define configUSE_IDLE_HOOK                                      %>50 0 /* 1: use Idle hook; 0: no Idle hook */
#endif
#ifndef configUSE_IDLE_HOOK_NAME
  #define configUSE_IDLE_HOOK_NAME                                 %>50 vApplicationIdleHook
#endif
%endif
%ifdef vApplicationTickHook
#ifndef configUSE_TICK_HOOK
  #define configUSE_TICK_HOOK                                      %>50 1 /* 1: use Tick hook; 0: no Tick hook */
#endif
#ifndef configUSE_TICK_HOOK_NAME
  #define configUSE_TICK_HOOK_NAME                                 %>50 %vApplicationTickHook
#endif
%else
#ifndef configUSE_TICK_HOOK
  #define configUSE_TICK_HOOK                                      %>50 0 /* 1: use Tick hook; 0: no Tick hook */
#endif
#ifndef configUSE_TICK_HOOK_NAME
  #define configUSE_TICK_HOOK_NAME                                 %>50 vApplicationTickHook
#endif
%endif
%ifdef vApplicationMallocFailedHook
#ifndef configUSE_MALLOC_FAILED_HOOK
  #define configUSE_MALLOC_FAILED_HOOK                             %>50 1 /* 1: use MallocFailed hook; 0: no MallocFailed hook */
#endif
#ifndef configUSE_MALLOC_FAILED_HOOK_NAME
  #define configUSE_MALLOC_FAILED_HOOK_NAME                        %>50 %vApplicationMallocFailedHook
#endif
%else
#ifndef configUSE_MALLOC_FAILED_HOOK
  #define configUSE_MALLOC_FAILED_HOOK                             %>50 0 /* 1: use MallocFailed hook; 0: no MallocFailed hook */
#endif
#ifndef configUSE_MALLOC_FAILED_HOOK_NAME
  #define configUSE_MALLOC_FAILED_HOOK_NAME                        %>50 vApplicationMallocFailedHook
#endif
%endif
#ifndef configTICK_RATE_HZ
  #define configTICK_RATE_HZ                                       %>50 (%TickRateHz) /* frequency of tick interrupt */
#endif
%if defined(useARMLowPowerTimer) & useARMLowPowerTimer='yes'
#ifndef configSYSTICK_USE_LOW_POWER_TIMER
  #define configSYSTICK_USE_LOW_POWER_TIMER                        %>50 1 /* If using Kinetis Low Power Timer (LPTMR) instead of SysTick timer */
#endif
#ifndef configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ
  #define configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ                   %>50 1000 /* Frequency of low power timer. Set to 1 if not used */
#endif
%else
#ifndef configSYSTICK_USE_LOW_POWER_TIMER
  #define configSYSTICK_USE_LOW_POWER_TIMER                        %>50 0 /* If using Kinetis Low Power Timer (LPTMR) instead of SysTick timer */
#endif
#ifndef configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ
  #define configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ                   %>50 1 /* Frequency of low power timer. Set to 1 if not used */
#endif
%endif
#if %@KinetisSDK@'ModuleName'%.CONFIG_NXP_SDK_USED || %@KinetisSDK@'ModuleName'%.CONFIG_SDK_VERSION_USED==%@KinetisSDK@'ModuleName'%.CONFIG_SDK_GENERIC || %@KinetisSDK@'ModuleName'%.CONFIG_SDK_VERSION_USED==%@KinetisSDK@'ModuleName'%.CONFIG_SDK_NORDIC_NRF5
/* The CMSIS variable SystemCoreClock contains the current clock speed */
  extern uint32_t SystemCoreClock;
  #define configCPU_CLOCK_HZ                                       %>50 SystemCoreClock /* CPU clock frequency */
  #define configBUS_CLOCK_HZ                                       %>50 SystemCoreClock /* Bus clock frequency */
#else
%if defined(configCPU_CLOCK_HZ)
  #define configCPU_CLOCK_HZ                                       %>50 %configCPU_CLOCK_HZ /* CPU clock frequency */
%else
  #if configCPU_FAMILY_IS_ARM(configCPU_FAMILY) /* Kinetis defines this one in Cpu.h */
    #define configCPU_CLOCK_HZ                                     %>50 CPU_CORE_CLK_HZ /* CPU core clock defined in %ProcessorModule.h */
  #else
    #define configCPU_CLOCK_HZ                                     %>50 CPU_INSTR_CLK_HZ /* CPU core clock defined in %ProcessorModule.h */
  #endif
%endif
%if defined(configBUS_CLOCK_HZ)
  #define configBUS_CLOCK_HZ                                       %>50 %configBUS_CLOCK_HZ /* Bus clock frequency */
%else
  #define configBUS_CLOCK_HZ                                       %>50 CPU_BUS_CLK_HZ /* CPU bus clock defined in %ProcessorModule.h */
%endif
#endif /* #if %@KinetisSDK@'ModuleName'%.CONFIG_NXP_SDK_USED */
%if defined(useARMSysTickUseCoreClock) & useARMSysTickUseCoreClock='no'
#define configSYSTICK_USE_CORE_CLOCK                             %>50 0 /* System Tick is using external reference clock clock  */
%else
#define configSYSTICK_USE_CORE_CLOCK                             %>50 1 /* System Tick is using core clock  */
%endif
%if defined(useARMSysTickUseCoreClock) & useARMSysTickUseCoreClock='no'
#define configSYSTICK_CLOCK_DIVIDER                              %>50 16 /* Kinetis L is using fixed divider by 16 */
%else
#define configSYSTICK_CLOCK_DIVIDER                              %>50 1 /* no divider */
%endif
%if defined(TickTimerLDD)
#define configSYSTICK_CLOCK_HZ                                   %>50 %@TickTimerLDD@'ModuleName'%.CNT_INP_FREQ_U_0 /* frequency of system tick counter */
%elif defined(useARMSysTickTimer) & useARMSysTickTimer='yes'
#define configSYSTICK_CLOCK_HZ                                   %>50 ((configCPU_CLOCK_HZ)/configSYSTICK_CLOCK_DIVIDER) /* frequency of system tick counter */
%elif defined(TickCntr)
#define configSYSTICK_CLOCK_HZ                                   %>50 %@TickCntr@'ModuleName'%.COUNTER_INPUT_CLOCK_HZ /* frequency of system tick counter */
%else
#define configSYSTICK_CLOCK_HZ                                   %>50 configBUS_CLOCK_HZ /* frequency of system tick counter */
%endif
#ifndef configMINIMAL_STACK_SIZE
  #define configMINIMAL_STACK_SIZE                                 %>50 (%MinimalStackSize) /* stack size in addressable stack units */
#endif
/*----------------------------------------------------------*/
/* Heap Memory */
#ifndef configUSE_HEAP_SCHEME
%if defined(MemoryScheme)
%if MemoryScheme = "Scheme1"
  #define configUSE_HEAP_SCHEME                 %>50 1 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%elif MemoryScheme = "Scheme2"
  #define configUSE_HEAP_SCHEME                 %>50 2 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%elif MemoryScheme = "Scheme3"
  #define configUSE_HEAP_SCHEME                 %>50 3 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%elif MemoryScheme = "Scheme4"
  #define configUSE_HEAP_SCHEME                 %>50 4 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%elif MemoryScheme = "Scheme5"
  #define configUSE_HEAP_SCHEME                 %>50 5 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%elif MemoryScheme = "Scheme6"
  #define configUSE_HEAP_SCHEME                 %>50 6 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%endif
%else
  #define configUSE_HEAP_SCHEME                 %>50 1 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks), 6 (newlib) */
%endif
#endif /* configUSE_HEAP_SCHEME */
#define configFRTOS_MEMORY_SCHEME                                %>50 configUSE_HEAP_SCHEME /* for backwards compatible only with legacy name */
#ifndef configTOTAL_HEAP_SIZE
%if defined(TotalHeapSize)
  #define configTOTAL_HEAP_SIZE                                    %>50 (%TotalHeapSize) /* size of heap in bytes */
%else
  #define configTOTAL_HEAP_SIZE                                    %>50 (4096) /* size of heap in bytes */
%endif
#endif /* configTOTAL_HEAP_SIZE */
#ifndef configUSE_HEAP_SECTION_NAME
%if defined(HeapSectionName)
  #define configUSE_HEAP_SECTION_NAME                              %>50 1 /* set to 1 if a custom section name (configHEAP_SECTION_NAME_STRING) shall be used, 0 otherwise */
%else
  #define configUSE_HEAP_SECTION_NAME                              %>50 0 /* set to 1 if a custom section name (configHEAP_SECTION_NAME_STRING) shall be used, 0 otherwise */
%endif
#endif
#ifndef configHEAP_SECTION_NAME_STRING
%if defined(HeapSectionName)
  #define configHEAP_SECTION_NAME_STRING   %>50 "%HeapSectionName" /* heap section name (use e.g. ".m_data_20000000" for gcc and "m_data_20000000" for IAR). Check your linker file for the name used. */
%else
  #define configHEAP_SECTION_NAME_STRING  %>50 ".m_data_20000000" /* heap section name (use e.g. ".m_data_20000000" for KDS/gcc, ".bss.$SRAM_LOWER.FreeRTOS" for MCUXpresso or "m_data_20000000" for IAR). Check your linker file for the name used. */
%endif
#endif
%if defined(ApplicationAllocatedHeap) & %ApplicationAllocatedHeap='yes'
#define configAPPLICATION_ALLOCATED_HEAP                         %>50 1 /* set to one if application is defining heap ucHeap[] variable, 0 otherwise */
%else
#define configAPPLICATION_ALLOCATED_HEAP                         %>50 0 /* set to one if application is defining heap ucHeap[] variable, 0 otherwise */
%endif
#ifndef configSUPPORT_DYNAMIC_ALLOCATION
%if defined(DynamicAllocation) & %DynamicAllocation='yes'
  #define configSUPPORT_DYNAMIC_ALLOCATION                         %>50 1 /* 1: make dynamic allocation functions for RTOS available. 0: only static functions are allowed */
%else
  #define configSUPPORT_DYNAMIC_ALLOCATION                         %>50 0 /* 1: make dynamic allocation functions for RTOS available. 0: only static functions are allowed */
%endif
#endif
#ifndef configSUPPORT_STATIC_ALLOCATION
%if defined(StaticAllocation) & %StaticAllocation='yes'
  #define configSUPPORT_STATIC_ALLOCATION                          %>50 1 /* 1: make static allocation functions for RTOS available. 0: only dynamic functions are allowed */
%else
  #define configSUPPORT_STATIC_ALLOCATION                          %>50 0 /* 1: make static allocation functions for RTOS available. 0: only dynamic functions are allowed */
%endif
#endif
#define configUSE_NEWLIB_REENTRANT                               %>50 (configUSE_HEAP_SCHEME==6) /* 1: a newlib reent structure will be allocated for each task; 0: no such reentr structure used */
/*----------------------------------------------------------*/
#ifndef configMAX_TASK_NAME_LEN
  #define configMAX_TASK_NAME_LEN                                  %>50 %TaskNameLength /* task name length in bytes */
#endif
#ifndef configUSE_TRACE_FACILITY
%if %UseTraceFacility='yes'
  #define configUSE_TRACE_FACILITY                                 %>50 1 /* 1: include additional structure members and functions to assist with execution visualization and tracing, 0: no runtime stats/trace */
%else
  #define configUSE_TRACE_FACILITY                                 %>50 0 /* 1: include additional structure members and functions to assist with execution visualization and tracing, 0: no runtime stats/trace */
%endif
#endif
#ifndef configUSE_STATS_FORMATTING_FUNCTIONS
  #define configUSE_STATS_FORMATTING_FUNCTIONS                     %>50 (configUSE_TRACE_FACILITY || configGENERATE_RUN_TIME_STATS)
#endif
%if %Use16bitTicks='yes'
#define configUSE_16_BIT_TICKS                                   %>50 1 /* 1: use 16bit tick counter type, 0: use 32bit tick counter type */
%else
#define configUSE_16_BIT_TICKS                                   %>50 0 /* 1: use 16bit tick counter type, 0: use 32bit tick counter type */
%endif
#ifndef configIDLE_SHOULD_YIELD
%if %IdleShouldYield='yes'
  #define configIDLE_SHOULD_YIELD                                  %>50 1 /* 1: the IDEL task will yield as soon as possible. 0: The IDLE task waits until preemption. */
%else
  #define configIDLE_SHOULD_YIELD                                  %>50 0
%endif
#endif
#ifndef configUSE_PORT_OPTIMISED_TASK_SELECTION
%if defined(configUseOptimizedTaskSelection) & %configUseOptimizedTaskSelection='yes'
  #define configUSE_PORT_OPTIMISED_TASK_SELECTION                  %>50 (1 && configCPU_FAMILY_IS_ARM_M4_M7(configCPU_FAMILY)) /* 1: the scheduler uses an optimized task selection as defined by the port (if available). 0: normal task selection is used */
%else
  #define configUSE_PORT_OPTIMISED_TASK_SELECTION                  %>50 (0 && configCPU_FAMILY_IS_ARM_M4_M7(configCPU_FAMILY)) /* 1: the scheduler uses an optimized task selection as defined by the port (if available). 0: normal task selection is used */
%endif
#endif
#ifndef configUSE_CO_ROUTINES
%if %UseCoroutines='yes'
  #define configUSE_CO_ROUTINES                                    %>50 1
%else
  #define configUSE_CO_ROUTINES                                    %>50 0
%endif
#endif
#ifndef configUSE_MUTEXES
%if %UseMutexes='yes'
  #define configUSE_MUTEXES                                        %>50 1
%else
  #define configUSE_MUTEXES                                        %>50 0
%endif
#endif
%-
#ifndef configCHECK_FOR_STACK_OVERFLOW
%ifdef vApplicationStackOverflowHook
  #define configCHECK_FOR_STACK_OVERFLOW                           %>50 %StackOverflowCheckingMethodNumber /* 0 is disabling stack overflow. Set it to 1 for Method1 or 2 for Method2 */
%else
  #define configCHECK_FOR_STACK_OVERFLOW                           %>50 0 /* 0 is disabling stack overflow. Set it to 1 for Method1 or 2 for Method2 */
%endif
#endif
#ifndef configCHECK_FOR_STACK_OVERFLOW_NAME
%ifdef vApplicationStackOverflowHook
  #define configCHECK_FOR_STACK_OVERFLOW_NAME                      %>50 %vApplicationStackOverflowHook
%else
  #define configCHECK_FOR_STACK_OVERFLOW_NAME                      %>50 vApplicationStackOverflowHook
%endif
#endif
%-
#ifndef configUSE_RECURSIVE_MUTEXES
%if %UseRecursiveMutexes='yes'
  #define configUSE_RECURSIVE_MUTEXES                              %>50 1
%else
  #define configUSE_RECURSIVE_MUTEXES                              %>50 0
%endif
#endif
%-
#ifndef configQUEUE_REGISTRY_SIZE
  #define configQUEUE_REGISTRY_SIZE                                %>50 %QueueRegistrySize
#endif
%-
#ifndef configUSE_QUEUE_SETS
%if %useQueueSets='yes'
  #define configUSE_QUEUE_SETS                                     %>50 1
%else
  #define configUSE_QUEUE_SETS                                     %>50 0
%endif
#endif
#ifndef configUSE_COUNTING_SEMAPHORES
%if defined(xSemaphoreCreateCounting)
  #define configUSE_COUNTING_SEMAPHORES                            %>50 1
%else
  #define configUSE_COUNTING_SEMAPHORES                            %>50 0
%endif
#endif
#ifndef configUSE_APPLICATION_TASK_TAG
%if %UseApplicationTaskTags='yes'
  #define configUSE_APPLICATION_TASK_TAG                           %>50 1
%else
  #define configUSE_APPLICATION_TASK_TAG                           %>50 0
%endif
#endif
#ifndef configUSE_TASK_NOTIFICATIONS
  #define configUSE_TASK_NOTIFICATIONS                             %>50 1
#endif
/* Tickless Idle Mode ----------------------------------------------------------*/
#ifndef configUSE_TICKLESS_IDLE
%if %TicklessIdleModeEnabled='yes'
  #define configUSE_TICKLESS_IDLE                                  %>50 1 /* set to 1 for tickless idle mode, 0 otherwise */
%else
  #define configUSE_TICKLESS_IDLE                                  %>50 0 /* set to 1 for tickless idle mode, 0 otherwise */
%endif
#endif
#ifndef configEXPECTED_IDLE_TIME_BEFORE_SLEEP
%if %TicklessIdleModeEnabled='yes'
  #define configEXPECTED_IDLE_TIME_BEFORE_SLEEP                    %>50 %ExpectedIdleTimeBeforeSleep /* number of ticks must be larger than this to enter tickless idle mode */
%else
  #define configEXPECTED_IDLE_TIME_BEFORE_SLEEP                    %>50 2 /* number of ticks must be larger than this to enter tickless idle mode */
%endif
#endif
#ifndef configUSE_TICKLESS_IDLE_DECISION_HOOK
%if (%TicklessIdleModeEnabled='yes') & (%TicklessIdleDecisionHookEnabled='yes')
  #define configUSE_TICKLESS_IDLE_DECISION_HOOK                    %>50 1 /* set to 1 to enable application hook, zero otherwise */
%else
  #define configUSE_TICKLESS_IDLE_DECISION_HOOK                    %>50 0 /* set to 1 to enable application hook, zero otherwise */
%endif
#endif
#ifndef configUSE_TICKLESS_IDLE_DECISION_HOOK_NAME
%if (%TicklessIdleModeEnabled='yes') & (%TicklessIdleDecisionHookEnabled='yes')
  #define configUSE_TICKLESS_IDLE_DECISION_HOOK_NAME               %>50 %xEnterTicklessIdleFctName /* function name of decision hook */
%else
  #define configUSE_TICKLESS_IDLE_DECISION_HOOK_NAME               %>50 xEnterTicklessIdle /* function name of decision hook */
%endif
#endif
#ifndef configNUM_THREAD_LOCAL_STORAGE_POINTERS
%if defined(NumThreadLocalStoragePointers)
  #define configNUM_THREAD_LOCAL_STORAGE_POINTERS                  %>50 %NumThreadLocalStoragePointers /* number of tread local storage pointers, 0 to disable functionality */
%else
  #define configNUM_THREAD_LOCAL_STORAGE_POINTERS                  %>50 0 /* number of tread local storage pointers, 0 to disable functionality */
%endif
#endif

#ifndef configMAX_PRIORITIES
  #define configMAX_PRIORITIES                                     %>50 %MaxPriority /* task priorities can be from 0 up to this value-1 */
#endif
#define configMAX_CO_ROUTINE_PRIORITIES                          %>50 %MaxCoroutinePriorities /* co-routine priorities can be from 0 up to this value-1 */

/* the following needs to be defined (present) or not (not present)! */
%if defined(TaskExitErrorHandler) & %TaskExitErrorHandler='no'
#define configTASK_RETURN_ADDRESS                                %>50 0 /* return address of task is zero */
%else
/* #define portTASK_RETURN_ADDRESS   0                           %>50 0 */ /* ability to overwrite task return address for port.c */
%endif

#ifndef configRECORD_STACK_HIGH_ADDRESS
%if defined(RecordStackHighAddress) & %RecordStackHighAddress='yes'
  #define configRECORD_STACK_HIGH_ADDRESS                         %>50 1  /* 1: record stack high address for the debugger, 0: do not record stack high address */
%else
  #define configRECORD_STACK_HIGH_ADDRESS                         %>50 0  /* 1: record stack high address for the debugger, 0: do not record stack high address */
%endif
#endif

/* Software timer definitions. */
#ifndef configUSE_TIMERS
%if %TimersEnabled='yes'
  #define configUSE_TIMERS                                         %>50 1 /* 1: enable software timers; 0: software timers disabled */
%else
  #define configUSE_TIMERS                                         %>50 0 /* set to 1 to enable software timers */
%endif
#endif
#ifndef configTIMER_TASK_PRIORITY
%if %TimersEnabled='yes'
  #define configTIMER_TASK_PRIORITY                                %>50 %TimerTaskPriority /* e.g. (configMAX_PRIORITIES-1U) */
%else
  #define configUSE_TIMERS                                         %>50 0 /* set to 1 to enable software timers */
%endif
#endif
#ifndef configTIMER_QUEUE_LENGTH
%if %TimersEnabled='yes'
  #define configTIMER_QUEUE_LENGTH                                 %>50 %TimerTaskQueueLength /* size of queue for the timer task */
%else
  #define configTIMER_QUEUE_LENGTH                                 %>50 10U /* size of queue for the timer task */
%endif
#endif
#ifndef configTIMER_TASK_STACK_DEPTH
%if %TimersEnabled='yes'
  #define configTIMER_TASK_STACK_DEPTH                             %>50 %TimerTaskStackDepth /* e.g. (configMINIMAL_STACK_SIZE) */
%else
  #define configTIMER_TASK_STACK_DEPTH                             %>50 (configMINIMAL_STACK_SIZE)
%endif
#endif
#ifndef INCLUDE_xEventGroupSetBitFromISR
%if %TimersEnabled='yes'
  #define INCLUDE_xEventGroupSetBitFromISR                         %>50 1 /* 1: function is included; 0: do not include function */
%else
  #define INCLUDE_xEventGroupSetBitFromISR                         %>50 0 /* 1: function is included; 0: do not include function */
%endif
#endif
#ifndef INCLUDE_xTimerPendFunctionCall
%if %TimersEnabled='yes'
  #define INCLUDE_xTimerPendFunctionCall                           %>50 1 /* 1: function is included; 0: do not include function */
%else
  #define INCLUDE_xTimerPendFunctionCall                           %>50 0 /* 1: function is included; 0: do not include function */
%endif
#endif
#ifndef configUSE_DAEMON_TASK_STARTUP_HOOK
%if defined(UseDaemonTaskStartupHook) & %UseDaemonTaskStartupHook='yes'
  #define configUSE_DAEMON_TASK_STARTUP_HOOK                       %>50 1 /* 1: use application specific vApplicationDaemonTaskStartupHook(), 0: do not use hook */
%else
  #define configUSE_DAEMON_TASK_STARTUP_HOOK                       %>50 0 /* 1: use application specific vApplicationDaemonTaskStartupHook(), 0: do not use hook */
%endif
#endif

/* Set configUSE_TASK_FPU_SUPPORT to 0 to omit floating point support even
if floating point hardware is otherwise supported by the FreeRTOS port in use.
This constant is not supported by all FreeRTOS ports that include floating
point support. */
#define configUSE_TASK_FPU_SUPPORT                               %>50 1

/* Set the following definitions to 1 to include the API function, or zero
   to exclude the API function. */
%- --------------------------------------------------------------------
%ifdef vTaskEndScheduler
#define INCLUDE_vTaskEndScheduler                                %>50 1
%else
#define INCLUDE_vTaskEndScheduler                                %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef vTaskPrioritySet
#define INCLUDE_vTaskPrioritySet                                 %>50 1
%else
#define INCLUDE_vTaskPrioritySet                                 %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef uxTaskPriorityGet
#define INCLUDE_uxTaskPriorityGet                                %>50 1
%else
#define INCLUDE_uxTaskPriorityGet                                %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef vTaskDelete
#define INCLUDE_vTaskDelete                                      %>50 1
%else
#define INCLUDE_vTaskDelete                                      %>50 0
%endif
%- --------------------------------------------------------------------
%if CleanupResources='yes'
#define INCLUDE_vTaskCleanUpResources                            %>50 1
%else
#define INCLUDE_vTaskCleanUpResources                            %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef vTaskSuspend
#define INCLUDE_vTaskSuspend                                     %>50 1
%else
#define INCLUDE_vTaskSuspend                                     %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef vTaskDelayUntil
#define INCLUDE_vTaskDelayUntil                                  %>50 1
%else
#define INCLUDE_vTaskDelayUntil                                  %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef vTaskDelay
#define INCLUDE_vTaskDelay                                       %>50 1
%else
#define INCLUDE_vTaskDelay                                       %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef uxTaskGetStackHighWaterMark
#define INCLUDE_uxTaskGetStackHighWaterMark                      %>50 1
%else
#define INCLUDE_uxTaskGetStackHighWaterMark                      %>50 0
%endif
%- --------------------------------------------------------------------
%ifdef xTaskGetSchedulerState
#define INCLUDE_xTaskGetSchedulerState                           %>50 1
%else
#define INCLUDE_xTaskGetSchedulerState                           %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xSemaphoreGetMutexHolder)
#define INCLUDE_xQueueGetMutexHolder                             %>50 1
%else
#define INCLUDE_xQueueGetMutexHolder                             %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xTaskGetHandle)
#define INCLUDE_xTaskGetHandle                                   %>50 1
%else
#define INCLUDE_xTaskGetHandle                                   %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xTaskAbortDelay)
#define INCLUDE_xTaskAbortDelay                                  %>50 1
%else
#define INCLUDE_xTaskAbortDelay                                  %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xTaskGetCurrentTaskHandle)
#define INCLUDE_xTaskGetCurrentTaskHandle                        %>50 1
%else
#define INCLUDE_xTaskGetCurrentTaskHandle                        %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xTaskGetIdleTaskHandle)
#define INCLUDE_xTaskGetIdleTaskHandle                           %>50 1
%else
#define INCLUDE_xTaskGetIdleTaskHandle                           %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(xTaskResumeFromISR)
#define INCLUDE_xTaskResumeFromISR                               %>50 1
%else
#define INCLUDE_xTaskResumeFromISR                               %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(eTaskGetState)
#define INCLUDE_eTaskGetState                                    %>50 1
%else
#define INCLUDE_eTaskGetState                                    %>50 0
%endif
%- --------------------------------------------------------------------
%if defined(pcTaskGetTaskName)
#define INCLUDE_pcTaskGetTaskName                                %>50 1
%else
#define INCLUDE_pcTaskGetTaskName                                %>50 0
%endif
/* -------------------------------------------------------------------- */
#define INCLUDE_pxTaskGetStackStart                              %>50 (1 && configUSE_SEGGER_SYSTEM_VIEWER_HOOKS)
/* -------------------------------------------------------------------- */
%if (CPUfamily = "ColdFireV1")
/* It is not advisable to change these values on a ColdFire V1 core. */
%endif
%if (CPUfamily = "MCF")
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    %>50 %ColdFireV2LibraryLowestInterruptPriority /* RTOS disables interrupts with this level and below. Interrupts above this level (higher numbers) shall *not* call RTOS routines */
%elif (CPUfamily = "ColdFireV1") | (CPUfamily = "HCS08") | (CPUfamily = "HC08")
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    %>50 7
%elif (CPUfamily = "Kinetis") | (CPUfamily = "S32K")
#if configCPU_FAMILY_IS_ARM(configCPU_FAMILY)
  /* Cortex-M specific definitions. */
  #if configCPU_FAMILY_IS_ARM_M4(configCPU_FAMILY)
    #define configPRIO_BITS                         %>50 4 /* 4 bits/16 priority levels on ARM Cortex M4 (Kinetis K Family) */
  #else
    #define configPRIO_BITS                         %>50 2 /* 2 bits/4 priority levels on ARM Cortex M0+ (Kinetis L Family) */
  #endif

  /* The lowest interrupt priority that can be used in a call to a "set priority" function. */
  #define configLIBRARY_LOWEST_INTERRUPT_PRIORITY   %>50 %KinetisLibraryLowestInterruptPriority

  /* The highest interrupt priority that can be used by any interrupt service
     routine that makes calls to interrupt safe FreeRTOS API functions.  DO NOT CALL
     INTERRUPT SAFE FREERTOS API FUNCTIONS FROM ANY INTERRUPT THAT HAS A HIGHER
     PRIORITY THAN THIS! (higher priorities are lower numeric values on an ARM Cortex-M). */
  #define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY  %>50 %KinetisLibraryMaxInterruptPriority

  /* Interrupt priorities used by the kernel port layer itself.  These are generic
     to all Cortex-M ports, and do not rely on any particular library functions. */
  #define configKERNEL_INTERRUPT_PRIORITY              %>50 (configLIBRARY_LOWEST_INTERRUPT_PRIORITY<<(8-configPRIO_BITS))

  /* !!!! configMAX_SYSCALL_INTERRUPT_PRIORITY must not be set to zero !!!!
  See http://www.FreeRTOS.org/RTOS-Cortex-M3-M4.html. */
  #define configMAX_SYSCALL_INTERRUPT_PRIORITY         %>50 (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY<<(8-configPRIO_BITS))
#elif %@KinetisSDK@'ModuleName'%.CONFIG_CPU_IS_RISC_V
  #define configKERNEL_INTERRUPT_PRIORITY              %>50 (7)
#endif

/* Normal assert() semantics without relying on the provision of an assert.h header file. */
#ifndef configASSERT
%if %configASSERTdefined='yes'
  #define configASSERT(x) if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); }
%else
  /* #define configASSERT(x) if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); } */
%endif
  #if 0 /* version for RISC-V with a debug break: */
    #define configASSERT( x ) if( ( x ) == 0 ) { taskDISABLE_INTERRUPTS(); __asm volatile( "ebreak" ); for( ;; ); }
  #endif
#endif
%-
%endif

/* RISC-V only: If the target chip includes a Core Local Interrupter (CLINT) then set configCLINT_BASE_ADDRESS to the CLINT base address.
  Otherwise set configCLINT_BASE_ADDRESS to 0.
 */
#define configCLINT_BASE_ADDRESS   0x0

/*---------------------------------------------------------------------------------------*/
/* MPU and TrustZone settings */
#ifndef configENABLE_FPU
  #define configENABLE_FPU        (0)
#endif /* configENABLE_FPU */

#ifndef configENABLE_MPU
  #define configENABLE_MPU        (0)
#endif /* configENABLE_MPU */

#ifndef configENABLE_TRUSTZONE
  #define configENABLE_TRUSTZONE  (0)
#endif /* configENABLE_TRUSTZONE */
/*---------------------------------------------------------------------------------------*/

/* custom include file: */
%CustomFreeRTOSConfig

%- --------------------------------------------------------------------

#endif /* FREERTOS_CONFIG_H */
