#ifndef __DERIVATIVE_USB
#define __DERIVATIVE_USB

/* Include the derivative-specific header file */
#if 0 /* << EST */
  #include <MCF51MM256.h>
#else
  #include "%ProcessorModule.h"
#endif

#define _Stop asm ( mov3q #4,d0; bclr.b d0,SOPT1; stop #0x2000; )
  /*!< Macro to enter stop modes, STOPE bit in SOPT1 register must be set prior to executing this macro */

#define _Wait asm ( mov3q #4,d0; bset.b d0,SOPT1; nop; stop #0x2000; )
  /*!< Macro to enter wait mode */

#endif
