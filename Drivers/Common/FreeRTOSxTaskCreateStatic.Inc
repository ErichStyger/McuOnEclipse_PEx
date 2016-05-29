%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskCreateStatic)
%;**     Description :
%;**         Create a new task and add it to the list of tasks that are
%;**         ready to run.
%include Common\GeneralParameters.inc(27)
%;**         pvTaskCode%ParpvTaskCode %>27 - Pointer to the task entry
%;** %>29 function. Tasks must be implemented to
%;** %>29 never return (i.e. continuous loop).
%;**         pcName%ParpcName %>27 - A descriptive name for the task.
%;** %>29 This is mainly used to facilitate debugging.
%;** %>29 Max length defined by
%;** %>29 configMAX_TASK_NAME_LEN.
%;**         usStackDepth%ParusStackDepth %>27 - The size of the task
%;** %>29 stack specified as the number of variables
%;** %>29 the stack can hold - not the number of
%;** %>29 bytes. For example, if the stack is 16 bits
%;** %>29 wide and usStackDepth is defined as 100,
%;** %>29 200 bytes will be allocated for stack
%;** %>29 storage. The stack depth multiplied by the
%;** %>29 stack width must not exceed the maximum
%;** %>29 value that can be contained in a variable
%;** %>29 of type size_t.
%;**         pvParameters%ParpvParameters %>27 - Pointer that will be
%;** %>29 used as the parameter for the task being
%;** %>29 created.
%;**         uxPriority%ParuxPriority %>27 - The priority at which the
%;** %>29 task should run.
%;**         puxStackBuffer%ParpuxStackBuffer %>27 - Must point to a
%;** %>29 StackType_t array that has at least
%;** %>29 ulStackDepth indexes (see the ulStackDepth
%;** %>29 parameter above) - the array will be used
%;** %>29 as the task's stack, so must be persistent
%;** %>29 (not declared on the stack of a function)
%;**         pxTaskBuffer%ParpxTaskBuffer %>27 - Must point to a variable
%;** %>29 of type StaticTask_t. The variable will be
%;** %>29 used to hold the new task's data structures
%;** %>29 (TCB), so it must be persistent (not
%;** %>29 declared on the stack of a function). 
%;**     Returns     :
%;**         ---%RetVal %>27 - Task handle if the task was successfully
%;** %>29 created and added to a ready list,
%;** %>29 otherwise Null.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine