/*
    FreeRTOS V8.2.3 - Copyright (C) 2015 Real Time Engineers Ltd.
    All rights reserved

    VISIT http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation >>>> AND MODIFIED BY <<<< the FreeRTOS exception.

	***************************************************************************
    >>!   NOTE: The modification to the GPL is included to allow you to     !<<
    >>!   distribute a combined work that includes FreeRTOS without being   !<<
    >>!   obliged to provide the source code for proprietary components     !<<
    >>!   outside of the FreeRTOS kernel.                                   !<<
	***************************************************************************

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  Full license text is available on the following
    link: http://www.freertos.org/a00114.html

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS provides completely free yet professionally developed,    *
     *    robust, strictly quality controlled, supported, and cross          *
     *    platform software that is more than just the market leader, it     *
     *    is the industry's de facto standard.                               *
     *                                                                       *
     *    Help yourself get started quickly while simultaneously helping     *
     *    to support the FreeRTOS project by purchasing a FreeRTOS           *
     *    tutorial book, reference manual, or both:                          *
     *    http://www.FreeRTOS.org/Documentation                              *
     *                                                                       *
    ***************************************************************************

    http://www.FreeRTOS.org/FAQHelp.html - Having a problem?  Start by reading
	the FAQ page "My application does not run, what could be wrong?".  Have you
	defined configASSERT()?

	http://www.FreeRTOS.org/support - In return for receiving this top quality
	embedded software for free we request you assist our global community by
	participating in the support forum.

	http://www.FreeRTOS.org/training - Investing in training allows your team to
	be as productive as possible as early as possible.  Now you can receive
	FreeRTOS training directly from Richard Barry, CEO of Real Time Engineers
	Ltd, and the world's leading authority on the world's leading RTOS.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, a DOS
    compatible FAT file system, and our tiny thread aware UDP/IP stack.

    http://www.FreeRTOS.org/labs - Where new FreeRTOS products go to incubate.
    Come and try FreeRTOS+TCP, our new open source TCP/IP stack for FreeRTOS.

    http://www.OpenRTOS.com - Real Time Engineers ltd. license FreeRTOS to High
    Integrity Systems ltd. to sell under the OpenRTOS brand.  Low cost OpenRTOS
    licenses offer ticketed support, indemnification and commercial middleware.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.

    1 tab == 4 spaces!
*/

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

%if (CPUfamily = "ColdFireV1") | (CPUfamily = "HCS08") | (CPUfamily = "HC08")
#include <hidef.h>
%endif
/* -------------------------------------------------------------------- */
/* Macros to identify the compiler used: */
#define configCOMPILER_ARM_GCC     %>50 1 /* GNU ARM gcc compiler */
#define configCOMPILER_ARM_IAR     %>50 2 /* IAR ARM compiler */
#define configCOMPILER_ARM_FSL     %>50 3 /* Legacy Freescale ARM compiler */
#define configCOMPILER_ARM_KEIL    %>50 4 /* ARM/Keil compiler */
#define configCOMPILER_S08_FSL     %>50 5 /* Freescale HCS08 compiler */
#define configCOMPILER_S12_FSL     %>50 6 /* Freescale HCS12(X) compiler */
#define configCOMPILER_CF1_FSL     %>50 7 /* Freescale ColdFire V1 compiler */
#define configCOMPILER_CF2_FSL     %>50 8 /* Freescale ColdFire V2 compiler */
#define configCOMPILER_DSC_FSL     %>50 9 /* Freescale DSC compiler */

%if (%configCOMPILER='automatic')
%if (%Compiler = "IARARM")
#define configCOMPILER        %>50 configCOMPILER_ARM_IAR
%elif (%Compiler = "GNUC")
#define configCOMPILER        %>50 configCOMPILER_ARM_GCC
%elif (%Compiler = "CodeWarriorARM")
#define configCOMPILER        %>50 configCOMPILER_ARM_FSL
%elif (%Compiler = "ARM_CC")
#define configCOMPILER        %>50 configCOMPILER_ARM_KEIL
%elif (%Compiler = "MetrowerksHC08CC") | (%Compiler = "MetrowerksHCS08CC")
#define configCOMPILER        %>50 configCOMPILER_S08_FSL
%elif (%Compiler = "MetrowerksHC12CC") | (%Compiler = "MetrowerksHC12XCC")
#define configCOMPILER        %>50 configCOMPILER_S12_FSL
%elif (%Compiler = "CodeWarriorColdFireV1")
#define configCOMPILER        %>50 configCOMPILER_CF1_FSL
%elif (%Compiler = "CodeWarriorMCF")
#define configCOMPILER        %>50 configCOMPILER_CF2_FSL
%elif (%Compiler = "MetrowerksDSP")
#define configCOMPILER        %>50 configCOMPILER_DSC_FSL
%else
#define configCOMPILER        %>50 0
#error "unknown compiler %Compiler?"
%endif
%else %- non-automatic compiler selection
#define configCOMPILER        %>50 %configCompiler
%endif
/* -------------------------------------------------------------------- */
/* CPU family identification */
#define configCPU_FAMILY_S08          %>50 1   /* S08 core */
#define configCPU_FAMILY_S12          %>50 2   /* S12(X) core */
#define configCPU_FAMILY_CF1          %>50 3   /* ColdFire V1 core */
#define configCPU_FAMILY_CF2          %>50 4   /* ColdFire V2 core */
#define configCPU_FAMILY_DSC          %>50 5   /* 56800/DSC */
#define configCPU_FAMILY_ARM_M0P      %>50 6   /* ARM Cortex-M0+ */
#define configCPU_FAMILY_ARM_M4       %>50 7   /* ARM Cortex-M4 */
#define configCPU_FAMILY_ARM_M4F      %>50 8   /* ARM Cortex-M4F (with floating point unit) */
#define configCPU_FAMILY_ARM_M7       %>50 9   /* ARM Cortex-M7 */
#define configCPU_FAMILY_ARM_M7F      %>50 10  /* ARM Cortex-M7F (with floating point unit) */
/* Macros to identify set of core families */
#define configCPU_FAMILY_IS_ARM_M7(fam)   %>50 (((fam)==configCPU_FAMILY_ARM_M7)  || ((fam)==configCPU_FAMILY_ARM_M7F))
#define configCPU_FAMILY_IS_ARM_M4(fam)   %>50 (((fam)==configCPU_FAMILY_ARM_M4)  || ((fam)==configCPU_FAMILY_ARM_M4F))
#define configCPU_FAMILY_IS_ARM(fam)      %>50 (((fam)==configCPU_FAMILY_ARM_M0P) || configCPU_FAMILY_IS_ARM_M4(fam) || configCPU_FAMILY_IS_ARM_M7(fam))

%if (CPUfamily = "HCS08") | (CPUfamily = "HC08")
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_S08
%elif (CPUfamily = "HCS12") | (CPUfamily = "HCS12X")
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_S12
%elif (CPUfamily = "ColdFireV1")
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_CF1
%elif (CPUfamily = "MCF")
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_CF2
%elif (CPUfamily = "56800")
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_DSC
%elif (CPUfamily = "Kinetis")
%if %CPUDB_prph_has_feature(CPU,ARM_CORTEX_M0P) = 'yes' %- Note: for IAR this is defined in portasm.s too!
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_ARM_M0P
%elif %ARMFamilyType="M7"
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_ARM_M7
%elif %ARMFamilyType="M7F"
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_ARM_M7F
%else %-M4, M4F or M7
 %if %CPUDB_prph_has_feature(CPU, FPU) = 'no'
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_ARM_M4
 %else
#define configCPU_FAMILY                   %>50 configCPU_FAMILY_ARM_M4F
 %endif
%endif
%else
#define configCPU_FAMILY                   %>50 0
#error "Unknown CPU family %CPUfamily?"
%endif

/*-----------------------------------------------------------
 * GDB backtrace handler support
 * See http://interactive.freertos.org/entries/23468301-Tasks-backtrace-switcher-viewer-snippet-for-debugger-gcc-gdb-ARM-Cortex-M3-MPU-port-Eclipse-support-
 *----------------------------------------------------------*/
%if defined(EnableGDBDebugHelper) & %EnableGDBDebugHelper='yes'
#define configGDB_HELPER                   %>50 (1 && configCPU_FAMILY_IS_ARM(configCPU_FAMILY) && (configCOMPILER==configCOMPILER_ARM_GCC)) /* 1: enable special GDB stack backtrace debug helper; 0: disabled */
%else
#define configGDB_HELPER                   %>50 (0 && configCPU_FAMILY_IS_ARM(configCPU_FAMILY) && (configCOMPILER==configCOMPILER_ARM_GCC)) /* 1: enable special GDB stack backtrace debug helper; 0: disabled */
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
%if defined(StaticSourcesEnabled) & %StaticSourcesEnabled='yes'
#define configGENERATE_STATIC_SOURCES                            %>50 1 /* 1: it will create 'static' sources to be used without Processor Expert; 0: Processor Expert code generated */
%else
#define configGENERATE_STATIC_SOURCES                            %>50 0 /* 1: it will create 'static' sources to be used without Processor Expert; 0: Processor Expert code generated */
%endif
%if (%CPUDB_prph_has_feature(CPU,SDK_SUPPORT) = 'yes') | (defined(KinetisSDKGroup) & %KinetisSDKGroup='yes') %- TRUE/FALSE not defined for SDK projects
#define configPEX_KINETIS_SDK                                    %>50 1 /* 1: project is a Kinetis SDK Processor Expert project; 0: No Kinetis Processor Expert project */
%else
#define configPEX_KINETIS_SDK                                    %>50 0 /* 1: project is a Kinetis SDK Processor Expert project; 0: No Kinetis Processor Expert project */
%endif
%if defined(RuntimeCounterUseTickCounter) & %RuntimeCounterUseTickCounter='yes'
#define configGENERATE_RUN_TIME_STATS_USE_TICKS                  %>50 1 /* 1: Use the RTOS tick counter as runtime counter. 0: use extra timer */
%else
#define configGENERATE_RUN_TIME_STATS_USE_TICKS                  %>50 0 /* 1: Use the RTOS tick counter as runtime counter. 0: use extra timer */
%endif
%if %CollectRuntimeStatisticsGroup='yes'
#define configGENERATE_RUN_TIME_STATS                            %>50 1 /* 1: generate runtime statistics; 0: no runtime statistics */
%if defined(RuntimeCounterUseTickCounter) & %RuntimeCounterUseTickCounter='yes'
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>50 /* nothing */ /* default: use Tick counter as runtime counter */
#define portGET_RUN_TIME_COUNTER_VALUE()                         %>50 xTaskGetTickCountFromISR() /* default: use Tick counter as runtime counter */
%else
%if defined(RuntimeCntr)
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>50 {%'ModuleName'%.RunTimeCounter = 0; (void)%@RuntimeCntr@'ModuleName'%.Enable();}
#define portGET_RUN_TIME_COUNTER_VALUE()                         %>50 %'ModuleName'%.RunTimeCounter
%elif defined(RuntimeCntrLDD)
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>50 {%'ModuleName'%.RunTimeCounter = 0; %'ModuleName'%.RunTimeCounterHandle = %@RuntimeCntrLDD@'ModuleName'%.Init(NULL); (void)%@RuntimeCntrLDD@'ModuleName'%.Enable(%'ModuleName'%.RunTimeCounterHandle);}
#define portGET_RUN_TIME_COUNTER_VALUE()                         %>50 %'ModuleName'%.RunTimeCounter
%endif
%endif %- useARMSysTickUseCoreClock
%else
#define configGENERATE_RUN_TIME_STATS                            %>50 0 /* 1: generate runtime statistics; 0: no runtime statistics */
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()                 %>50 /* nothing */ /* default: use Tick counter as runtime counter */
#define portGET_RUN_TIME_COUNTER_VALUE()                         %>50 xTaskGetTickCount() /* default: use Tick counter as runtime counter */
%endif
%-
%if UsePreemption = 'yes'
#define configUSE_PREEMPTION                                     %>50 1 /* 1: pre-emptive mode; 0: cooperative mode */
%else
#define configUSE_PREEMPTION                                     %>50 0 /* 1: pre-emptive mode; 0: cooperative mode */
%endif
%if UseTimeSlicing = 'yes'
#define configUSE_TIME_SLICING                                   %>50 1 /* 1: use time slicing; 0: don't time slice at tick interrupt time */
%else
#define configUSE_TIME_SLICING                                   %>50 0 /* 1: use time slicing; 0: don't time slice at tick interrupt time */
%endif
%ifdef vApplicationIdleHook
#define configUSE_IDLE_HOOK                                      %>50 1 /* 1: use Idle hook; 0: no Idle hook */
#define configUSE_IDLE_HOOK_NAME                                 %>50 %vApplicationIdleHook
%else
#define configUSE_IDLE_HOOK                                      %>50 0 /* 1: use Idle hook; 0: no Idle hook */
#define configUSE_IDLE_HOOK_NAME                                 %>50 vApplicationIdleHook
%endif
%ifdef vApplicationTickHook
#define configUSE_TICK_HOOK                                      %>50 1 /* 1: use Tick hook; 0: no Tick hook */
#define configUSE_TICK_HOOK_NAME                                 %>50 %vApplicationTickHook
%else
#define configUSE_TICK_HOOK                                      %>50 0 /* 1: use Tick hook; 0: no Tick hook */
#define configUSE_TICK_HOOK_NAME                                 %>50 vApplicationTickHook
%endif
%ifdef vApplicationMallocFailedHook
#define configUSE_MALLOC_FAILED_HOOK                             %>50 1 /* 1: use MallocFailed hook; 0: no MallocFailed hook */
#define configUSE_MALLOC_FAILED_HOOK_NAME                        %>50 %vApplicationMallocFailedHook
%else
#define configUSE_MALLOC_FAILED_HOOK                             %>50 0 /* 1: use MallocFailed hook; 0: no MallocFailed hook */
#define configUSE_MALLOC_FAILED_HOOK_NAME                        %>50 vApplicationMallocFailedHook
%endif
#define configTICK_RATE_HZ                                       %>50 ((TickType_t)%TickRateHz) /* frequency of tick interrupt */
%if defined(useARMLowPowerTimer) & useARMLowPowerTimer='yes'
#define configSYSTICK_USE_LOW_POWER_TIMER                        %>50 1 /* If using Kinetis Low Power Timer (LPTMR) instead of SysTick timer */
#define configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ                   %>50 1000 /* 1 kHz LPO timer. Set to 1 if not used */
%else
#define configSYSTICK_USE_LOW_POWER_TIMER                        %>50 0 /* If using Kinetis Low Power Timer (LPTMR) instead of SysTick timer */
#define configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ                   %>50 1 /* 1 kHz LPO timer. Set to 1 if not used */
%endif
#if configPEX_KINETIS_SDK
/* The SDK variable SystemCoreClock contains the current clock speed */
  #include <stdint.h>
  extern uint32_t SystemCoreClock;
  #define configCPU_CLOCK_HZ                                       %>50 SystemCoreClock /* CPU clock frequency */
  #define configBUS_CLOCK_HZ                                       %>50 SystemCoreClock /* Bus clock frequency */
#else
%if defined(configCPU_CLOCK_HZ)
  #define configCPU_CLOCK_HZ                                       %>50 %configCPU_CLOCK_HZ /* CPU clock frequency */
%else
  #if configCPU_FAMILY_IS_ARM(configCPU_FAMILY) /* Kinetis defines this one in Cpu.h */
    #define configCPU_CLOCK_HZ                                       %>50 CPU_CORE_CLK_HZ /* CPU core clock defined in %ProcessorModule.h */
  #else
    #define configCPU_CLOCK_HZ                                       %>50 CPU_INSTR_CLK_HZ /* CPU core clock defined in %ProcessorModule.h */
  #endif
%endif
%if defined(configBUS_CLOCK_HZ)
  #define configBUS_CLOCK_HZ                                       %>50 %configBUS_CLOCK_HZ /* Bus clock frequency */
%else
  #define configBUS_CLOCK_HZ                                       %>50 CPU_BUS_CLK_HZ /* CPU bus clock defined in %ProcessorModule.h */
%endif
#endif /* configPEX_KINETIS_SDK */
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
#define configMINIMAL_STACK_SIZE                                 %>50 (%MinimalStackSize) /* stack size in addressable stack units */
/*----------------------------------------------------------*/
/* Heap Memory */
%if MemoryScheme = "Scheme1"
#define configFRTOS_MEMORY_SCHEME                 %>50 1 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks) */
%elif MemoryScheme = "Scheme2"
#define configFRTOS_MEMORY_SCHEME                 %>50 2 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks) */
%elif MemoryScheme = "Scheme3"
#define configFRTOS_MEMORY_SCHEME                 %>50 3 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks) */
%elif MemoryScheme = "Scheme4"
#define configFRTOS_MEMORY_SCHEME                 %>50 4 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks) */
%elif MemoryScheme = "Scheme5"
#define configFRTOS_MEMORY_SCHEME                 %>50 5 /* either 1 (only alloc), 2 (alloc/free), 3 (malloc), 4 (coalesc blocks), 5 (multiple blocks) */
%endif
#define configTOTAL_HEAP_SIZE                                    %>50 ((size_t)(%TotalHeapSize)) /* size of heap in bytes */
%if defined(HeapSectionName)
#define configUSE_HEAP_SECTION_NAME                              %>50 1 /* set to 1 if a custom section name (configHEAP_SECTION_NAME_STRING) shall be used, 0 otherwise */
%else
#define configUSE_HEAP_SECTION_NAME                              %>50 0 /* set to 1 if a custom section name (configHEAP_SECTION_NAME_STRING) shall be used, 0 otherwise */
%endif
#if configUSE_HEAP_SECTION_NAME
%if defined(HeapSectionName)
#define configHEAP_SECTION_NAME_STRING   %>50 "%HeapSectionName" /* heap section name (use e.g. ".m_data_20000000" for gcc and "m_data_20000000" for IAR). Check your linker file for the name used. */
%else
#define configHEAP_SECTION_NAME_STRING  %>50 ".m_data_20000000" /* heap section name (use e.g. ".m_data_20000000" for gcc and "m_data_20000000" for IAR). Check your linker file for the name used. */
%endif
#endif
%if defined(ApplicationAllocatedHeap) & %ApplicationAllocatedHeap='yes'
#define configAPPLICATION_ALLOCATED_HEAP                         %>50 1 /* set to one if application is defining heap ucHeap[] variable, 0 otherwise */
%else
#define configAPPLICATION_ALLOCATED_HEAP                         %>50 0 /* set to one if application is defining heap ucHeap[] variable, 0 otherwise */
%endif
/*----------------------------------------------------------*/
#define configMAX_TASK_NAME_LEN                                  %>50 %TaskNameLength /* task name length in bytes */
%if %UseTraceFacility='yes'
#define configUSE_TRACE_FACILITY                                 %>50 1 /* 1: include additional structure members and functions to assist with execution visualization and tracing, 0: no runtime stats/trace */
%else
#define configUSE_TRACE_FACILITY                                 %>50 0 /* 1: include additional structure members and functions to assist with execution visualization and tracing, 0: no runtime stats/trace */
%endif
%if defined(UseTraceHooksGroup) & %UseTraceHooksGroup='yes' & defined(FRTrace)
#define configUSE_TRACE_HOOKS                                    %>50 1 /* 1: Percepio Trace hooks, 0: not using Percepio Trace hooks */
%else
#define configUSE_TRACE_HOOKS                                    %>50 0 /* 1: Percepio Trace hooks, 0: not using Percepio Trace hooks */
%endif
%if defined(SeggerSystemViewerGroup) & %SeggerSystemViewerGroup='yes' & defined(SeggerSystemViewer)
#define configUSE_SEGGER_SYSTEM_VIEWER_HOOKS                     %>50 1 /* 1: Segger System Viewer hooks, 0: not using Segger System Viewer hooks */
%else
#define configUSE_SEGGER_SYSTEM_VIEWER_HOOKS                     %>50 0 /* 1: Segger System Viewer hooks, 0: not using Segger System Viewer hooks */
%endif
#define configUSE_STATS_FORMATTING_FUNCTIONS                     %>50 (configUSE_TRACE_FACILITY || configGENERATE_RUN_TIME_STATS)
%if %Use16bitTicks='yes'
#define configUSE_16_BIT_TICKS                                   %>50 1 /* 1: use 16bit tick counter type, 0: use 32bit tick counter type */
%else
#define configUSE_16_BIT_TICKS                                   %>50 0 /* 1: use 16bit tick counter type, 0: use 32bit tick counter type */
%endif
%if %IdleShouldYield='yes'
#define configIDLE_SHOULD_YIELD                                  %>50 1
%else
#define configIDLE_SHOULD_YIELD                                  %>50 0
%endif
%if %UseCoroutines='yes'
#define configUSE_CO_ROUTINES                                    %>50 1
%else
#define configUSE_CO_ROUTINES                                    %>50 0
%endif
%if %UseMutexes='yes'
#define configUSE_MUTEXES                                        %>50 1
%else
#define configUSE_MUTEXES                                        %>50 0
%endif
%-
%ifdef vApplicationStackOverflowHook
#define configCHECK_FOR_STACK_OVERFLOW                           %>50 %StackOverflowCheckingMethodNumber /* 0 is disabling stack overflow. Set it to 1 for Method1 or 2 for Method2 */
#define configCHECK_FOR_STACK_OVERFLOW_NAME                      %>50 %vApplicationStackOverflowHook
%else
#define configCHECK_FOR_STACK_OVERFLOW                           %>50 0 /* 0 is disabling stack overflow. Set it to 1 for Method1 or 2 for Method2 */  
#define configCHECK_FOR_STACK_OVERFLOW_NAME                      %>50 vApplicationStackOverflowHook
%endif
%-
%if %UseRecursiveMutexes='yes'
#define configUSE_RECURSIVE_MUTEXES                              %>50 1
%else
#define configUSE_RECURSIVE_MUTEXES                              %>50 0
%endif
%-
#define configQUEUE_REGISTRY_SIZE                                %>50 %QueueRegistrySize
%-
%if %useQueueSets='yes'
#define configUSE_QUEUE_SETS                                     %>50 1
%else
#define configUSE_QUEUE_SETS                                     %>50 0
%endif
%if defined(xSemaphoreCreateCounting)
#define configUSE_COUNTING_SEMAPHORES                            %>50 1
%else
#define configUSE_COUNTING_SEMAPHORES                            %>50 0
%endif
%if %UseApplicationTaskTags='yes'
#define configUSE_APPLICATION_TASK_TAG                           %>50 1
%else
#define configUSE_APPLICATION_TASK_TAG                           %>50 0
%endif
/* Tickless Idle Mode ----------------------------------------------------------*/
%if %TicklessIdleModeEnabled='yes'
#define configUSE_TICKLESS_IDLE                                  %>50 1 /* set to 1 for tickless idle mode, 0 otherwise */
#define configEXPECTED_IDLE_TIME_BEFORE_SLEEP                    %>50 %ExpectedIdleTimeBeforeSleep /* number of ticks must be larger than this to enter tickless idle mode */
%else
#define configUSE_TICKLESS_IDLE                                  %>50 0 /* set to 1 for tickless idle mode, 0 otherwise */
#define configEXPECTED_IDLE_TIME_BEFORE_SLEEP                    %>50 2 /* number of ticks must be larger than this to enter tickless idle mode */
%endif
%if (%TicklessIdleModeEnabled='yes') & (%TicklessIdleDecisionHookEnabled='yes')
#define configUSE_TICKLESS_IDLE_DECISION_HOOK                    %>50 1 /* set to 1 to enable application hook, zero otherwise */
#define configUSE_TICKLESS_IDLE_DECISION_HOOK_NAME               %>50 %xEnterTicklessIdleFctName /* function name of decision hook */
%else
#define configUSE_TICKLESS_IDLE_DECISION_HOOK                    %>50 0 /* set to 1 to enable application hook, zero otherwise */
#define configUSE_TICKLESS_IDLE_DECISION_HOOK_NAME               %>50 xEnterTicklessIdle /* function name of decision hook */
%endif
%if defined(NumThreadLocalStoragePointers)
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS                  %>50 %NumThreadLocalStoragePointers /* number of tread local storage pointers, 0 to disable functionality */
%else
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS                  %>50 0 /* number of tread local storage pointers, 0 to disable functionality */
%endif

#define configMAX_PRIORITIES                                     %>50 ((unsigned portBASE_TYPE)%MaxPriority)
#define configMAX_CO_ROUTINE_PRIORITIES                          %>50 %MaxCoroutinePriorities

%if defined(TaskExitErrorHandler) & %TaskExitErrorHandler='no'
#define configTASK_RETURN_ADDRESS   0  /* return address of task is zero */
%else
/* #define portTASK_RETURN_ADDRESS   0 */ /* ability to overwrite task return address for port.c */
%endif

/* Software timer definitions. */
%if %TimersEnabled='yes'
#define configUSE_TIMERS                                         %>50 1
#define configTIMER_TASK_PRIORITY                                %>50 %TimerTaskPriority
#define configTIMER_QUEUE_LENGTH                                 %>50 %TimerTaskQueueLength
#define configTIMER_TASK_STACK_DEPTH                             %>50 %TimerTaskStackDepth
#define INCLUDE_xEventGroupSetBitFromISR                         %>50 1
#define INCLUDE_xTimerPendFunctionCall                           %>50 1
%else
#define configUSE_TIMERS                                         %>50 0
#define configTIMER_TASK_PRIORITY                                %>50 0
#define configTIMER_QUEUE_LENGTH                                 %>50 0
#define configTIMER_TASK_STACK_DEPTH                             %>50 0
#define INCLUDE_xEventGroupSetBitFromISR                         %>50 0
#define INCLUDE_xTimerPendFunctionCall                           %>50 0
%endif

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
%elif (CPUfamily = "Kinetis")
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

/* Normal assert() semantics without relying on the provision of an assert.h header file. */
%if %configASSERTdefined='yes'
#define configASSERT(x) if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); }
%else
/* #define configASSERT(x) if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); } */
%endif
%-
%endif
%- --------------------------------------------------------------------

#endif /* FREERTOS_CONFIG_H */
