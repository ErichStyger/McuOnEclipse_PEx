/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co. KG                 *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 2014 - 2015  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File    : SEGGER_RTT_Conf.h
Date    : 07 Sep 2015
Purpose : Implementation of SEGGER real-time terminal which allows
          real-time terminal communication on targets which support
          debugger memory accesses while the CPU is running.
---------------------------END-OF-HEADER------------------------------
*/

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/

#define SEGGER_RTT_MAX_NUM_UP_BUFFERS             (%RTTBufferNofUp)     // Max. number of up-buffers (T->H) available on this target    (Default: 2)
#define SEGGER_RTT_MAX_NUM_DOWN_BUFFERS           (%RTTBufferNofDown)     // Max. number of down-buffers (H->T) available on this target  (Default: 2)

#define BUFFER_SIZE_UP                            (%RTTBufferSizeUp)  // Size of the buffer for terminal output of target, up to host (Default: 1k)
#define BUFFER_SIZE_DOWN                          (%RTTBufferSizeDown)    // Size of the buffer for terminal input to target from host (Usually keyboard input) (Default: 16)

#define SEGGER_RTT_PRINTF_BUFFER_SIZE             (%RTTBufferSizePrintf)    // Size of buffer for RTT printf to bulk-send chars via RTT     (Default: 64)

/* macros to identify the core used */
%if %CPUDB_prph_has_feature(CPU,ARM_CORTEX_M0P) = 'yes'
#define SEGGER_RTT_CORE_M0   1
#define SEGGER_RTT_CORE_M4   0
%elif %CPUDB_prph_has_feature(CPU,ARM_CORTEX_M4) = 'yes'
#define SEGGER_RTT_CORE_M0   0
#define SEGGER_RTT_CORE_M4   1
%else
#define SEGGER_RTT_CORE_M0   0
#define SEGGER_RTT_CORE_M4   0
#error "unknown ARM core. Only ARM is supported"
%endif

#if SEGGER_RTT_CORE_M0
  #define SEGGER_RTT_LOCK(SavedState)   {                                               \
                                        __asm volatile ("mrs   %%0, primask  \n\t"         \
                                                      "mov   r1, $1     \n\t"           \
                                                      "msr   primask, r1  \n\t"         \
                                                      : "=r" (SavedState)               \
                                                      :                                 \
                                                      : "r1"                            \
                                                      );                                \
                                        }

  #define SEGGER_RTT_UNLOCK(SavedState) {                                               \
                                        __asm volatile ("msr   primask, %%0  \n\t"         \
                                                      :                                 \
                                                      : "r" (SavedState)                \
                                                      :                                 \
                                                      );                                \
                                        }

#elif SEGGER_RTT_CORE_M4
  #define SEGGER_RTT_LOCK(SavedState)   {                                               \
                                        __asm volatile ("mrs   %%0, basepri  \n\t"         \
                                                    "mov   r1, $128     \n\t"           \
                                                    "msr   basepri, r1  \n\t"           \
                                                    : "=r" (SavedState)                 \
                                                    :                                   \
                                                    : "r1"                              \
                                                    );                                  \
                                        }
  #define SEGGER_RTT_UNLOCK(SavedState) {                                               \
                                        __asm volatile ("msr   basepri, %%0  \n\t"         \
                                                      :                                 \
                                                      : "r" (SavedState)                \
                                                      :                                 \
                                                      );                                \
                                        }
#else
  #define SEGGER_RTT_LOCK(SavedState)   (void)(SavedState)
  #define SEGGER_RTT_UNLOCK(SavedState) (void)(SavedState)
#endif

//
// Target is not allowed to perform other RTT operations while string still has not been stored completely.
// Otherwise we would probably end up with a mixed string in the buffer.
// If using  RTT from within interrupts, multiple tasks or multi processors, define the SEGGER_RTT_LOCK() and SEGGER_RTT_UNLOCK() function here.
//
%if defined(LockUnlockEnabled) & %LockUnlockEnabled='yes' & defined(CriticalSection)
%- #include "%@CriticalSection@'ModuleName'.h"
%- #define SEGGER_RTT_LOCK(SavedState)     %@CriticalSection@'ModuleName'%.CriticalVariable(); %@CriticalSection@'ModuleName'%.EnterCritical()
%- #define SEGGER_RTT_UNLOCK(SavedState)   %@CriticalSection@'ModuleName'%.ExitCritical()
%else
%- #define SEGGER_RTT_LOCK(SavedState)
%- #define SEGGER_RTT_UNLOCK(SavedState)
%endif

//
// Define SEGGER_RTT_IN_RAM as 1
// when using RTT in RAM targets (init and data section both in RAM).
// This prevents the host to falsly identify the RTT Callback Structure
// in the init segment as the used Callback Structure.
//
// When defined as 1,
// the first call to an RTT function will modify the ID of the RTT Callback Structure.
// To speed up identifying on the host,
// especially when RTT functions are not called at the beginning of execution,
// SEGGER_RTT_Init() should be called at the start of the application.
//
#define SEGGER_RTT_IN_RAM                         (0)

/*************************** End of file ****************************/
