%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetDate)
%;**     Description :
%;**         This method returns current date from the software RTC.
%include Common\GeneralParameters.inc(27)
%;**       * date%Pardate %>27 - Pointer to DATEREC
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine