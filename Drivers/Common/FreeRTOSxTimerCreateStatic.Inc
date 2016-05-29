%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerCreateStatic)
%;**     Description :
%;**          Creates a new software timer instance. This allocates the
%;**         storage required by the new timer, initialises the new
%;**         timers internal state, and returns a handle by which the new
%;**         timer can be referenced.
%include Common\GeneralParameters.inc(27)
%;**         pcTimerName%ParpcTimerName %>27 -
%;** %>29 Atextnamethatisassignedtothetimer_Thisisdone
%;** %>29 purelytoassistdebugging_TheRTOSkernelitselfo
%;** %>29 nlyeverreferencesatimerbyitshandle_andneverb
%;** %>29 yitsname_
%;**         xTimerPeriod%ParxTimerPeriod %>27 - The timer period. The
%;** %>29 time is defined in tick periods so the
%;** %>29 constant portTICK_PERIOD_MS can be used to
%;** %>29 convert a time that has been specified in
%;** %>29 milliseconds. For example, if the timer
%;** %>29 must expire after 100 ticks, then
%;** %>29 xTimerPeriod should be set to 100.
%;** %>29 Alternatively, if the timer must expire
%;** %>29 after 500ms, then xPeriod can be set to (
%;** %>29 500 / portTICK_PERIOD_MS ) provided
%;** %>29 configTICK_RATE_HZ is less than or equal to
%;** %>29 1000. 
%;**         uxAutoReload%ParuxAutoReload %>27 - If uxAutoReload is set
%;** %>29 to pdTRUE, then the timer will expire
%;** %>29 repeatedly with a frequency set by the
%;** %>29 xTimerPeriod parameter. If uxAutoReload is
%;** %>29 set to pdFALSE, then the timer will be a
%;** %>29 one-shot and enter the dormant state after
%;** %>29 it expires. 
%;**         pvTimerID%ParpvTimerID %>27 - An identifier that is assigned
%;** %>29 to the timer being created. Typically this
%;** %>29 would be used in the timer callback
%;** %>29 function to identify which timer expired
%;** %>29 when the same callback function is assigned
%;** %>29 to more than one timer. 
%;**         pxCallbackFunction%ParpxCallbackFunction %>27 - The function
%;** %>29 to call when the timer expires. Callback
%;** %>29 functions must have the prototype defined
%;** %>29 by TimerCallbackFunction_t, which is "void
%;** %>29 vCallbackFunction( TimerHandle_t xTimer );".
%;**         pxTimerBuffer%ParpxTimerBuffer %>27 - Must point to a
%;** %>29 variable of type StaticTimer_t, which is
%;** %>29 then used to hold the timer's state. 
%;**     Returns     :
%;**         ---%RetVal %>27 - Timer handle. If the timer is successfully
%;** %>29 created then a handle to the newly created
%;** %>29 timer is returned. If the timer cannot be
%;** %>29 created (because either there is
%;** %>29 insufficient FreeRTOS heap remaining to
%;** %>29 allocate the timer structures, or the timer
%;** %>29 period was set to 0) then NULL is returned. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine