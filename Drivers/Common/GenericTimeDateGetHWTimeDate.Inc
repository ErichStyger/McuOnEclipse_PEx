%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetHWTimeDate)
%;**     Description :
%;**         This method returns current time and date from the hardware
%;**         RTC.
%include Common\GeneralParameters.inc(27)
%;**       * Time%ParTime %>27 - Pointer to the structure to return the
%;** %>29 time. Can be NULL.
%;**       * Date%ParDate %>27 - Pointer to structure which returns the
%;** %>29 date information. Can be NULL
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine