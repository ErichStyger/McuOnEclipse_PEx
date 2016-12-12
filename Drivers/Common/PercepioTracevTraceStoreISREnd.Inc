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
%;**         isTaskSwitchRequired%ParisTaskSwitchRequired %>27 - The
%;** %>29 parameter pendingISR indicates if the
%;** %>29 interrupt has requested a task-switch (= 1)
%;** %>29 or if the interrupt returns to the earlier
%;** %>29 context (= 0)
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine