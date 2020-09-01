/** Copyright (C) SEGGER Microcontroller GmbH                        */
/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*            (c) 1995 - 2018 SEGGER Microcontroller GmbH             *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       SEGGER RTT * Real Time Transfer for embedded targets         *
*                                                                    *
**********************************************************************
*                                                                    *
* All rights reserved.                                               *
*                                                                    *
* SEGGER strongly recommends to not make any changes                 *
* to or modify the source code of this software in order to stay     *
* compatible with the RTT protocol and J-Link.                       *
*                                                                    *
* Redistribution and use in source and binary forms, with or         *
* without modification, are permitted provided that the following    *
* conditions are met:                                                *
*                                                                    *
* o Redistributions of source code must retain the above copyright   *
*   notice, this list of conditions and the following disclaimer.    *
*                                                                    *
* o Redistributions in binary form must reproduce the above          *
*   copyright notice, this list of conditions and the following      *
*   disclaimer in the documentation and/or other materials provided  *
*   with the distribution.                                           *
*                                                                    *
* o Neither the name of SEGGER Microcontroller GmbH         *
*   nor the names of its contributors may be used to endorse or      *
*   promote products derived from this software without specific     *
*   prior written permission.                                        *
*                                                                    *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND             *
* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,        *
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF           *
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE           *
* DISCLAIMED. IN NO EVENT SHALL SEGGER Microcontroller BE LIABLE FOR *
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR           *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  *
* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;    *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF      *
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT          *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE  *
* USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
* DAMAGE.                                                            *
*                                                                    *
**********************************************************************
*                                                                    *
*       RTT version: 6.32b                                           *
*                                                                    *
**********************************************************************
---------------------------END-OF-HEADER------------------------------
File    : SEGGER_RTT_Conf.h
Purpose : Implementation of SEGGER real-time transfer (RTT) which
          allows real-time communication on targets which support
          debugger memory accesses while the CPU is running.
Revision: $Rev: 9599 $

*/

#ifndef SEGGER_RTT_CONF_H
#define SEGGER_RTT_CONF_H

#ifdef __IAR_SYSTEMS_ICC__
  #include <intrinsics.h>
#endif

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/
/* << EST: Additional setting to check for FreeRTOS: need to use FreeRTOS with proper BASEPRI mask to create critical sections */
#include "%@sdk@ModuleName.h" /* SDK and API used */
#include "%'ModuleName'config.h" /* configuration */

#if %@sdk@'ModuleName'%.CONFIG_SDK_USE_FREERTOS
  #include "portmacro.h" /* include FreeRTOS port header file for critical section handling */
#endif

/* Channel 0 settings from properties */ /* << EST */
%if defined(RTTChannel0Enabled) & %RTTChannel0Enabled='yes'
#define SEGGER_RTT_CHANNEL_0_ENABLED              (1) /* 1: initialize channel; 0: do not initialize channel */
#define SEGGER_RTT_CHANNEL_0_NAME                 %NameChannel0
#define SEGGER_RTT_CHANNEL_0_BUFFER_SIZE_UP       (%'ModuleName'%.CONFIG_RTT_BUFFER_SIZE_UP)
#define SEGGER_RTT_CHANNEL_0_BUFFER_SIZE_DOWN     (%'ModuleName'%.CONFIG_RTT_BUFFER_SIZE_DOWN)
#define SEGGER_RTT_CHANNEL_0_MODE_UP              %UpBufferMode
#define SEGGER_RTT_CHANNEL_0_MODE_DOWN            %DownBufferMode

#define SEGGER_RTT_MAX_NUM_UP_BUFFERS             (%RTTBufferNofUp)     // Max. number of up-buffers (T->H) available on this target    (Default: 2)
#define SEGGER_RTT_MAX_NUM_DOWN_BUFFERS           (%RTTBufferNofDown)     // Max. number of down-buffers (H->T) available on this target  (Default: 2)

#define BUFFER_SIZE_UP                            (%'ModuleName'%.CONFIG_RTT_BUFFER_SIZE_UP)  // Size of the buffer for terminal output of target, up to host (Default: 1k)
#define BUFFER_SIZE_DOWN                          (%'ModuleName'%.CONFIG_RTT_BUFFER_SIZE_DOWN)    // Size of the buffer for terminal input to target from host (Usually keyboard input) (Default: 16)

#define SEGGER_RTT_PRINTF_BUFFER_SIZE             (%'ModuleName'%.CONFIG_RTT_BUFFER_SIZE_PRINTF)    // Size of buffer for RTT printf to bulk-send chars via RTT     (Default: 64)
%else
#define SEGGER_RTT_CHANNEL_0_ENABLED              (0) /* 1: initialize channel; 0: do not initialize channel */
#define SEGGER_RTT_CHANNEL_0_NAME                 "Terminal"
#define SEGGER_RTT_CHANNEL_0_BUFFER_SIZE_UP       (512)
#define SEGGER_RTT_CHANNEL_0_BUFFER_SIZE_DOWN     (64)
#define SEGGER_RTT_CHANNEL_0_MODE_UP              SEGGER_RTT_MODE_NO_BLOCK_SKIP
#define SEGGER_RTT_CHANNEL_0_MODE_DOWN            SEGGER_RTT_MODE_NO_BLOCK_SKIP

#define SEGGER_RTT_MAX_NUM_UP_BUFFERS             (2)     // Max. number of up-buffers (T->H) available on this target    (Default: 2)
#define SEGGER_RTT_MAX_NUM_DOWN_BUFFERS           (2)     // Max. number of down-buffers (H->T) available on this target  (Default: 2)

#define BUFFER_SIZE_UP                            (1024)  // Size of the buffer for terminal output of target, up to host (Default: 1k)
#define BUFFER_SIZE_DOWN                          (16)    // Size of the buffer for terminal input to target from host (Usually keyboard input) (Default: 16)

#define SEGGER_RTT_PRINTF_BUFFER_SIZE             (64u)    // Size of buffer for RTT printf to bulk-send chars via RTT     (Default: 64)
%endif
#define SEGGER_RTT_MODE_DEFAULT                   SEGGER_RTT_MODE_NO_BLOCK_SKIP // Mode for pre-initialized terminal channel (buffer 0)

/*********************************************************************
*
*       RTT memcpy configuration
*
*       memcpy() is good for large amounts of data, 
*       but the overhead is big for small amounts, which are usually stored via RTT.
*       With SEGGER_RTT_MEMCPY_USE_BYTELOOP a simple byte loop can be used instead.
*
*       SEGGER_RTT_MEMCPY() can be used to replace standard memcpy() in RTT functions.
*       This is may be required with memory access restrictions, 
*       such as on Cortex-A devices with MMU.
*/
#define SEGGER_RTT_MEMCPY_USE_BYTELOOP              0 // 0: Use memcpy/SEGGER_RTT_MEMCPY, 1: Use a simple byte-loop
//
// Example definition of SEGGER_RTT_MEMCPY to external memcpy with GCC toolchains and Cortex-A targets
//
//#if ((defined __SES_ARM) || (defined __CROSSWORKS_ARM) || (defined __GNUC__)) && (defined (__ARM_ARCH_7A__))  
//  #define SEGGER_RTT_MEMCPY(pDest, pSrc, NumBytes)      SEGGER_memcpy((pDest), (pSrc), (NumBytes))
//#endif

//
// Target is not allowed to perform other RTT operations while string still has not been stored completely.
// Otherwise we would probably end up with a mixed string in the buffer.
// If using  RTT from within interrupts, multiple tasks or multi processors, define the SEGGER_RTT_LOCK() and SEGGER_RTT_UNLOCK() function here.
//
// SEGGER_RTT_MAX_INTERRUPT_PRIORITY can be used in the sample lock routines on Cortex-M3/4.
// Make sure to mask all interrupts which can send RTT data, i.e. generate SystemView events, or cause task switches.
// When high-priority interrupts must not be masked while sending RTT data, SEGGER_RTT_MAX_INTERRUPT_PRIORITY needs to be adjusted accordingly.
// (Higher priority = lower priority number)
// Default value for embOS: 128u
// Default configuration in FreeRTOS: configMAX_SYSCALL_INTERRUPT_PRIORITY: ( configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS) )
// In case of doubt mask all interrupts: 1 << (8 - BASEPRI_PRIO_BITS) i.e. 1 << 5 when 3 bits are implemented in NVIC
// or define SEGGER_RTT_LOCK() to completely disable interrupts.
//

#define SEGGER_RTT_MAX_INTERRUPT_PRIORITY         (0x20)   // Interrupt priority to lock on SEGGER_RTT_LOCK on Cortex-M3/4 (Default: 0x20)

/*********************************************************************
*
*       RTT lock configuration for SEGGER Embedded Studio,
*       Rowley CrossStudio and GCC
*/
#if (defined __SES_ARM) || (defined __CROSSWORKS_ARM) || (defined __GNUC__)
  #ifdef __ARM_ARCH_6M__
    #define SEGGER_RTT_LOCK() {                                                 \
                                    /*lint -save -e529 Symbol 'LockState' not subsequently referenced  */ \
                                    unsigned int LockState;                     \
                                  __asm volatile ("mrs   %%0, primask  \n\t"     \
                                                  "mov   r1, $1     \n\t"       \
                                                  "msr   primask, r1  \n\t"     \
                                                  : "=r" (LockState)            \
                                                  :                             \
                                                  : "r1"                        \
                                                  );                            
    
    #define SEGGER_RTT_UNLOCK()   __asm volatile ("msr   primask, %%0  \n\t"     \
                                                  :                             \
                                                  : "r" (LockState)             \
                                                  :                             \
                                                  );                            \
                                     /*lint -restore */                          \
                                 }                                             
                                  
  #elif (defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__))
    /* >> EST */
    #if SEGGER_RTT_FREERTOS_PRESENT
       #define SEGGER_RTT_BLOCKED_INTERRUPT_PRIORITY  configMAX_SYSCALL_INTERRUPT_PRIORITY /* Interrupts at this level and below will be blocked (valid values 1-15) */
    #else
      #define SEGGER_RTT_LOCK_INTERRUPT_LEVEL         %SeggerRTTMaxBlockedInterruptLevel /* Interrupts at this level and below will be blocked (valid values 1-15 for Kinetis) */
      #define SEGGER_RTT_PRIO_BITS                    4 /* NXP Kinetis M4(F) has 4 interrupt priority bits */
      #define SEGGER_RTT_BLOCKED_INTERRUPT_PRIORITY   (SEGGER_RTT_LOCK_INTERRUPT_LEVEL<<(8-SEGGER_RTT_PRIO_BITS))
    #endif
    /* >> EST */
    #define SEGGER_RTT_LOCK() {                                                 \
                                     /*lint -save -e529 Symbol 'LockState' not subsequently referenced  */ \
                                   unsigned int LockState;                     \
                                  __asm volatile ("mrs   %%0, basepri  \n\t"     \
                                                  "mov   r1, %%1     \n\t"     \
                                                  "msr   basepri, r1  \n\t"     \
                                                  : "=r" (LockState)            \
                                                  : "i"(SEGGER_RTT_BLOCKED_INTERRUPT_PRIORITY) /* input */\
                                                  : "r1"                        \
                                                  );                            
    
    #define SEGGER_RTT_UNLOCK()   __asm volatile ("msr   basepri, %%0  \n\t"     \
                                                  :                             \
                                                  : "r" (LockState)             \
                                                  :                             \
                                                  );                            \
                                     /*lint -restore */                          \
                                 }

  #elif defined(__ARM_ARCH_7A__)
    #define SEGGER_RTT_LOCK() {                                                \
                                 unsigned int LockState;                       \
                                 __asm volatile ("mrs r1, CPSR \n\t"           \
                                                 "mov %%0, r1 \n\t"             \
                                                 "orr r1, r1, #0xC0 \n\t"      \
                                                 "msr CPSR_c, r1 \n\t"         \
                                                 : "=r" (LockState)            \
                                                 :                             \
                                                 : "r1"                        \
                                                 );

    #define SEGGER_RTT_UNLOCK() __asm volatile ("mov r0, %%0 \n\t"              \
                                                "mrs r1, CPSR \n\t"            \
                                                "bic r1, r1, #0xC0 \n\t"       \
                                                "and r0, r0, #0xC0 \n\t"       \
                                                "orr r1, r1, r0 \n\t"          \
                                                "msr CPSR_c, r1 \n\t"          \
                                                :                              \
                                                : "r" (LockState)              \
                                                : "r0", "r1"                   \
                                                );                             \
                            }
  #else
    #define SEGGER_RTT_LOCK()
    #define SEGGER_RTT_UNLOCK()
  #endif
#endif

/*********************************************************************
*
*       RTT lock configuration for IAR EWARM
*/
#ifdef __ICCARM__
  #if (defined (__ARM6M__) && (__CORE__ == __ARM6M__))
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  LockState = __get_PRIMASK();                                      \
                                  __set_PRIMASK(1);

    #define SEGGER_RTT_UNLOCK()   __set_PRIMASK(LockState);                                         \
                                }
  #elif ((defined (__ARM7EM__) && (__CORE__ == __ARM7EM__)) || (defined (__ARM7M__) && (__CORE__ == __ARM7M__)))
    #ifndef   SEGGER_RTT_MAX_INTERRUPT_PRIORITY
      #define SEGGER_RTT_MAX_INTERRUPT_PRIORITY   (0x20)
    #endif
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  LockState = __get_BASEPRI();                                      \
                                  __set_BASEPRI(SEGGER_RTT_MAX_INTERRUPT_PRIORITY);

    #define SEGGER_RTT_UNLOCK()   __set_BASEPRI(LockState);                                         \
                                }
  #endif
#endif

/*********************************************************************
*
*       RTT lock configuration for IAR RX
*/
#ifdef __ICCRX__
  #define SEGGER_RTT_LOCK()   {                                                                     \
                                unsigned long LockState;                                            \
                                LockState = __get_interrupt_state();                                \
                                __disable_interrupt();

  #define SEGGER_RTT_UNLOCK()   __set_interrupt_state(LockState);                                   \
                              }
#endif

/*********************************************************************
*
*       RTT lock configuration for IAR RL78
*/
#ifdef __ICCRL78__
  #define SEGGER_RTT_LOCK()   {                                                                     \
                                __istate_t LockState;                                               \
                                LockState = __get_interrupt_state();                                \
                                __disable_interrupt();

  #define SEGGER_RTT_UNLOCK()   __set_interrupt_state(LockState);                                   \
                              }
#endif

/*********************************************************************
*
*       RTT lock configuration for KEIL ARM
*/
#ifdef __CC_ARM
  #if (defined __TARGET_ARCH_6S_M)
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  register unsigned char PRIMASK __asm( "primask");                 \
                                  LockState = PRIMASK;                                              \
                                  PRIMASK = 1u;                                                     \
                                  __schedule_barrier();

    #define SEGGER_RTT_UNLOCK()   PRIMASK = LockState;                                              \
                                  __schedule_barrier();                                             \
                                }
  #elif (defined(__TARGET_ARCH_7_M) || defined(__TARGET_ARCH_7E_M))
    #ifndef   SEGGER_RTT_MAX_INTERRUPT_PRIORITY
      #define SEGGER_RTT_MAX_INTERRUPT_PRIORITY   (0x20)
    #endif
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  register unsigned char BASEPRI __asm( "basepri");                 \
                                  LockState = BASEPRI;                                              \
                                  BASEPRI = SEGGER_RTT_MAX_INTERRUPT_PRIORITY;                      \
                                  __schedule_barrier();

    #define SEGGER_RTT_UNLOCK()   BASEPRI = LockState;                                              \
                                  __schedule_barrier();                                             \
                                }
  #endif
#endif

/*********************************************************************
*
*       RTT lock configuration for TI ARM
*/
#ifdef __TI_ARM__
  #if defined (__TI_ARM_V6M0__)
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  LockState = __get_PRIMASK();                                      \
                                  __set_PRIMASK(1);

    #define SEGGER_RTT_UNLOCK()   __set_PRIMASK(LockState);                                         \
                                }
  #elif (defined (__TI_ARM_V7M3__) || defined (__TI_ARM_V7M4__))
    #ifndef   SEGGER_RTT_MAX_INTERRUPT_PRIORITY
      #define SEGGER_RTT_MAX_INTERRUPT_PRIORITY   (0x20)
    #endif
    #define SEGGER_RTT_LOCK()   {                                                                   \
                                  unsigned int LockState;                                           \
                                  LockState = OS_GetBASEPRI();                                      \
                                  OS_SetBASEPRI(SEGGER_RTT_MAX_INTERRUPT_PRIORITY);

    #define SEGGER_RTT_UNLOCK()   OS_SetBASEPRI(LockState);                                         \
                                }
  #endif
#endif

/*********************************************************************
*
*       RTT lock configuration fallback
*/
#ifndef   SEGGER_RTT_LOCK
  #define SEGGER_RTT_LOCK()                // Lock RTT (nestable)   (i.e. disable interrupts)
#endif

#ifndef   SEGGER_RTT_UNLOCK
  #define SEGGER_RTT_UNLOCK()              // Unlock RTT (nestable) (i.e. enable previous interrupt lock state)
#endif

#endif
/*************************** End of file ****************************/
