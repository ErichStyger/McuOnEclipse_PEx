%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SyncSWtimeToInternalRTCsec)
%;**     Description :
%;**         This method synchronizes the software RTC with the internal
%;**         HW RTC. Because the internal RTC only counts seconds, we
%;**         sync on a second change.
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine