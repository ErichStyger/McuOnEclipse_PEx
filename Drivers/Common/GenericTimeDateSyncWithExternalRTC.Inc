%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SyncWithExternalRTC)
%;**     Description :
%;**         Synchronizes the software RTC with date and time from the
%;**         hardware RTC. Note that if that RTC interface requires
%;**         interrupts, this function should be called only when
%;**         interrupts are enabled.
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine