%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskGetHandle)
%;**     Description :
%;**         Looks up the handle of a task from the task's name. 
%include Common\GeneralParameters.inc(27)
%;**       * pcNameToQuery%ParpcNameToQuery %>27 - The text name (as a
%;** %>29 standard C NULL terminated string) of the
%;** %>29 task for which the handle will be returned.
%;**     Returns     :
%;**         ---%RetVal %>27 - If a task that has the name passed in
%;** %>29 pcNameToQuery can be located then the
%;** %>29 handle of the task is returned, otherwise
%;** %>29 NULL is returned. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine