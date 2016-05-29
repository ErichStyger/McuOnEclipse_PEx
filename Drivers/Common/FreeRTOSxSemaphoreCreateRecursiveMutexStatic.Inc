%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xSemaphoreCreateRecursiveMutexStatic)
%;**     Description :
%;**         Macro that implements a recursive mutex by using the
%;**         existing queue mechanism.
%;**         Mutexes created using this macro can be accessed using the
%;**         xSemaphoreTakeRecursive() and xSemaphoreGiveRecursive()
%;**         macros.  The  xSemaphoreTake() and xSemaphoreGive() macros
%;**         should not be used.
%;**         A mutex used recursively can be 'taken' repeatedly by the
%;**         owner. The mutex doesn't become available again until the
%;**         owner has called xSemaphoreGiveRecursive() for each
%;**         successful 'take' request.  For example, if a task
%;**         successfully 'takes' the same mutex 5 times then the mutex
%;**         will not be available to any other task until it has also
%;**         'given' the mutex back exactly five times.
%;**         This type of semaphore uses a priority inheritance mechanism
%;**         so a task 'taking' a semaphore MUST ALWAYS 'give' the
%;**         semaphore back once the semaphore it is no longer required.
%;**         Mutex type semaphores cannot be used from within interrupt
%;**         service routines.
%;**         See vSemaphoreCreateBinary() for an alternative
%;**         implementation that can be used for pure synchronisation
%;**         (where one task or interrupt always 'gives' the semaphore
%;**         and another always 'takes' the semaphore) and from within
%;**         interrupt service routines.
%include Common\GeneralParameters.inc(27)
%;**         Variable_1%ParVariable_1 %>27 - Must point to a variable of
%;** %>29 type StaticSemaphore_t, which will be used
%;** %>29 to hold the mutex type semaphore's state. 
%;**     Returns     :
%;**         ---%RetVal %>27 - Handle to the created mutex semaphore.
%;** %>29 Should be of type  xSemaphoreHandle.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine