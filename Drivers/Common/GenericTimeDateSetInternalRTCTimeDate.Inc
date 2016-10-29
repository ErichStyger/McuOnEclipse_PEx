%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetInternalRTCTimeDate)
%;**     Description :
%;**         This method sets a new actual time and date of the internal
%;**         hardware RTC.
%include Common\GeneralParameters.inc(27)
%;**       * Time%ParTime %>27 - Pointer to struct which contains the
%;** %>29 time to be set. Can be NULL if time shall
%;** %>29 not be set.
%;**       * Date%ParDate %>27 - Pointer to struct which contains the
%;** %>29 date information to be set. Can be NULL if
%;** %>29 date shall not be set.
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine