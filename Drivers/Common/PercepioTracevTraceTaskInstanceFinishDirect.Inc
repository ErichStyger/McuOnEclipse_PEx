%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTraceTaskInstanceFinishDirect)
%;**     Description :
%;**         Marks the current task instance as finished at this very
%;**         instant.
%;**         This makes the viewer to splits the current fragment at this
%;**         point and begin
%;**         a new actor instance.
%;**         See also USE_IMPLICIT_IFE_RULES in trcConfig.h
%;**         Example:
%;**         This example will generate two instances for each loop
%;**         iteration.
%;**         The first instance ends at vTraceInstanceFinishDirect(),
%;**         while the second
%;**         instance ends at the next xQueueReceive call.
%;**         while (1)
%;**         {
%;**         xQueueReceive(CommandQueue, &command, timeoutDuration);
%;**         ProcessCommand(command);
%;**         vTraceInstanceFinishDirect();
%;**         DoSometingElse();
%;**         vTraceInstanceFinish();
%;**         }
%include Common\GeneralParametersNone.inc
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine