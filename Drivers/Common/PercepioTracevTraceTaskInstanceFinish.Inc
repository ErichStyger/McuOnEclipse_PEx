%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTraceTaskInstanceFinish)
%;**     Description :
%;**         Marks the current task instance as finished on the next
%;**         kernel call.
%;**         If that kernel call is blocking, the instance ends after the
%;**         blocking event
%;**         and the corresponding return event is then the start of the
%;**         next instance.
%;**         If the kernel call is not blocking, the viewer instead
%;**         splits the current
%;**         fragment right before the kernel call, which makes this call
%;**         the first event
%;**         of the next instance.
%;**         See also USE_IMPLICIT_IFE_RULES in trcConfig.h
%;**         Example:
%;**         while(1)
%;**         {
%;**         xQueueReceive(CommandQueue, &command, timeoutDuration);
%;**         processCommand(command);
%;**         vTraceInstanceFinish();
%;**         }
%include Common\GeneralParametersNone.inc
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine