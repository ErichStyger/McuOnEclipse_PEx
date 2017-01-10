%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetTimeDate)
%;**     Description :
%;**         This method returns current time and date from the RTC.
%include Common\GeneralParameters.inc(27)
%;**       * time%Partime %>27 - Pointer to the structure to return the
%;** %>29 time. Can be NULL.
%;**       * date%Pardate %>27 - Pointer to structure which returns the
%;** %>29 date information. Can be NULL
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine