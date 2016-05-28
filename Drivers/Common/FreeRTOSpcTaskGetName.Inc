%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (pcTaskGetName)
%;**     Description :
%;**         Looks up the name of a task from the task's handle. 
%include Common\GeneralParameters.inc(27)
%;**         xTaskToQuery%ParxTaskToQuery %>27 - The handle of the task
%;** %>29 being queried. xTaskToQuery can be set to
%;** %>29 NULL to query the name of the calling task.
%;**     Returns     :
%;**         ---%RetVal %>27 - A pointer to the subject task's name,
%;** %>29 which is a standard NULL terminated C
%;** %>29 string.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine