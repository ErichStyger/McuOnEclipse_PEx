%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerIsTimerActive)
%;**     Description :
%;**         Queries a timer to see if it is active or dormant.
%;**         A timer will be dormant if:
%;**         It has been created but not started, or
%;**         It is an expired one-shot timer that has not been restarted.
%;**         Timers are created in the dormant state. The xTimerStart(),
%;**         xTimerReset(), xTimerStartFromISR(), xTimerResetFromISR(),
%;**         xTimerChangePeriod() and xTimerChangePeriodFromISR() API
%;**         functions can all be used to transition a timer into the
%;**         active state. 
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The timer being queried. 
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine