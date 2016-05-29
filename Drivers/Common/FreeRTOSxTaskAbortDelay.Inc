%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskAbortDelay)
%;**     Description :
%;**         Forces a task to leave the Blocked state, and enter the
%;**         Ready state, even if the event the task was in the Blocked
%;**         state to wait for has not occurred, and any specified
%;**         timeout has not expired. 
%include Common\GeneralParameters.inc(27)
%;**         xTask%ParxTask %>27 - The handle of the task that will be
%;** %>29 forced out of the Blocked state. 
%;**     Returns     :
%;**         ---%RetVal %>27 - If the task referenced by xTask was not in
%;** %>29 the Blocked state then pdFAIL is returned.
%;** %>29 Otherwise pdPASS is returned. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine