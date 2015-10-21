%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskNotifyStateClear)
%;**     Description :
%;**          [If you are using RTOS task notifications to implement
%;**         binary or counting semaphore type behaviour then use the
%;**         simpler xTaskNotifyGive() API function instead of
%;**         xTaskNotify()]
%;**         If the notification state of the task referenced by the
%;**         handle xTask is eNotified, then set the task's notification
%;**         state to eNotWaitingNotification. The task's notification
%;**         value is not altered.  Set xTask to NULL to clear the
%;**         notification state of the calling task.
%include Common\GeneralParameters.inc(27)
%;**         xTask%ParxTask %>27 - The handle of the RTOS task. Use NULL
%;** %>29 for using the calling task.
%;**     Returns     :
%;**         ---%RetVal %>27 - pdPASS is returned in all cases other than
%;** %>29 when eAction is set to
%;** %>29 eSetValueWithoutOverwrite and the subject
%;** %>29 task's notification value cannot be updated
%;** %>29 because the subject task already had a
%;** %>29 notification pending. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine