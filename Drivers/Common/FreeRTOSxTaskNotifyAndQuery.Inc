%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskNotifyAndQuery)
%;**     Description :
%;**          [If you are using RTOS task notifications to implement
%;**         binary or counting semaphore type behaviour then use the
%;**         simpler xTaskNotifyGive() API function instead of
%;**         xTaskNotify()]
%;**         Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created.
%;**         xTaskNotify() is used to send an event directly to and
%;**         potentially unblock an RTOS task, and optionally update the
%;**         receiving task's notification value in one of the following
%;**         ways:
%;**         - Write a 32-bit number to the notification value
%;**         - Add one (increment) the notification value
%;**         - Set one or more bits in the notification value
%;**         - Leave the notification value unchanged
%;**         This function must not be called from an interrupt service
%;**         routine (ISR). Use xTaskNotifyFromISR() instead. 
%include Common\GeneralParameters.inc(27)
%;**         xTaskToNotify%ParxTaskToNotify %>27 - The handle of the RTOS
%;** %>29 task being notified. This is the subject
%;** %>29 task.
%;** %>29 RTOS task handles are obtained using the
%;** %>29 pvCreatedTask parameter of the xTaskCreate()
%;** %>29 call used to create the task.
%;** %>29 The handle of the currently executing RTOS
%;** %>29 task is returned by the
%;** %>29 xTaskGetCurrentTaskHandle() API function. 
%;**         ulValue%ParulValue %>27 - Used to update the notification
%;** %>29 value of the subject task. See the
%;** %>29 description of the eAction parameter below. 
%;**         eAction%PareAction %>27 - An enumerated type that can take
%;** %>29 one of the values documented in the table
%;** %>29 below in order to perform the associated
%;** %>29 action. 
%;**       * pulPreviousNotifyValue%ParpulPreviousNotifyValue %>27 - Can
%;** %>29 be used to pass out the subject task's
%;** %>29 notification value before any bits are
%;** %>29 modified by the action of
%;** %>29 xTaskNotifyAndQuery().
%;** %>29 pulPreviousNotifyValue is an optional
%;** %>29 parameter, and can be set to NULL if it is
%;** %>29 not required. If pulPreviousNotifyValue is
%;** %>29 not used then consider using xTaskNotify()
%;** %>29 in place of xTaskNotifyAndQuery(). 
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