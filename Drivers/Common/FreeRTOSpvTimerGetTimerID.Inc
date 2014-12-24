%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (pvTimerGetTimerID)
%;**     Description :
%;**          Returns the ID assigned to the timer.
%;**         IDs are assigned to timers using the pvTimerID parameter of
%;**         the call to xTimerCreate() that was used to create the timer.
%;**         If the same callback function is assigned to multiple timers
%;**         then the timer ID can be used within the callback function
%;**         to identify which timer actually expired. 
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The timer being queried. 
%;**     Returns     :
%;**         ---%RetVal %>27 - The ID assigned to the timer being queried.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine