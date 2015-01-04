%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTraceStoreISREnd)
%;**     Description :
%;**         Registers the end of an Interrupt Service Routine. This must
%;**         not be interrupted by another ISR containing recorder
%;**         library calls, so if allowing nested ISRs this must be
%;**         called with interrupts disabled.  Method is always enabled
%;**         if 'Include ISR tracing' is set to 'yes' in the properties.
%include Common\GeneralParameters.inc(27)
%;**         pendingISR%ParpendingISR %>27 - The parameter pendingISR
%;** %>29 indicates if the interrupt has requested a
%;** %>29 task-switch (= 1) or if the interrupt
%;** %>29 returns to the earlier context (= 0)
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine