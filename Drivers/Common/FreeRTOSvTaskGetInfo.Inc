%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTaskGetInfo)
%;**     Description :
%;**         Whereas uxTaskGetSystemState() populates a TaskStatus_t
%;**         structure for each task in the system, vTaskGetInfo()
%;**         populates a TaskStatus_t structures for just a single task.
%;**         The TaskStatus_t structure contains, among other things,
%;**         members for the task handle, task name, task priority, task
%;**         state, and total amount of run time consumed by the task. 
%include Common\GeneralParameters.inc(27)
%;**         xTask%ParxTask %>27 - The handle of the task being queried.
%;** %>29 Setting xTask to NULL will return
%;** %>29 information on the calling task. 
%;**         pxTaskStatus%ParpxTaskStatus %>27 - The TaskStatus_t
%;** %>29 structure pointed to by pxTaskStatus will
%;** %>29 be filled with information about the task
%;** %>29 referenced by the handle passed in the
%;** %>29 xTask parameter. 
%;**         xGetFreeStackSpace%ParxGetFreeStackSpace %>27 - The
%;** %>29 TaskStatus_t structure contains a member to
%;** %>29 report the stack high water mark of the
%;** %>29 task being queried. The stack high water
%;** %>29 mark is the minimum amount of stack space
%;** %>29 that has ever existed, so the closer the
%;** %>29 number is to zero the closer the task has
%;** %>29 come to overflowing its stack.Calculating
%;** %>29 the stack high water mark takes a
%;** %>29 relatively long time, and can make the
%;** %>29 system temporarily unresponsive - so the
%;** %>29 xGetFreeStackSpace parameter is provided to
%;** %>29 allow the high water mark checking to be
%;** %>29 skipped. The high watermark value will only
%;** %>29 be written to the TaskStatus_t structure if
%;** %>29 xGetFreeStackSpace is not set to pdFALSE. 
%;**         eState%PareState %>27 - The TaskStatus_t structure contains
%;** %>29 a member to report the state of the task
%;** %>29 being queried. Obtaining the task state is
%;** %>29 not as fast as a simple assignment - so the
%;** %>29 eState parameter is provided to allow the
%;** %>29 state information to be omitted from the
%;** %>29 TaskStatus_t structure. To obtain state
%;** %>29 information then set eState to eInvalid -
%;** %>29 otherwise the value passed in eState will
%;** %>29 be reported as the task state in the
%;** %>29 TaskStatus_t structure. 
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine