%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xSemaphoreCreateBinary)
%;**     Description :
%;**         The old vSemaphoreCreateBinary() macro is now deprecated in
%;**         favour of this xSemaphoreCreateBinary() function.  Note that
%;**         binary semaphores created using the vSemaphoreCreateBinary()
%;**         macro are created in a state such that the first call to
%;**         'take' the semaphore would pass, whereas binary semaphores
%;**         created using xSemaphoreCreateBinary() are created in a
%;**         state such that the the semaphore must first be 'given'
%;**         before it can be 'taken'.
%;**         Function that creates a semaphore by using the existing
%;**         queue mechanism. The queue length is 1 as this is a binary
%;**         semaphore.  The data size is 0 as nothing is actually stored
%;**         - all that is important is whether the queue is empty or
%;**         full (the binary semaphore is available or not).
%;**         This type of semaphore can be used for pure synchronisation
%;**         between tasks or between an interrupt and a task.  The
%;**         semaphore need not be given back once obtained, so one
%;**         task/interrupt can continuously 'give' the semaphore while
%;**         another continuously 'takes' the semaphore.  For this reason
%;**         this type of semaphore does not use a priority inheritance
%;**         mechanism.  For an alternative that does use priority
%;**         inheritance see xSemaphoreCreateMutex().
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Handle to the created semaphore.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine