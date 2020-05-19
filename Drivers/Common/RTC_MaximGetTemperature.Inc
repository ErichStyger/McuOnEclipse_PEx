%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetTemperature)
%;**     Description :
%;**         Returns the temperature from the device internal temperature
%;**         sensor. Only available on DS3231 and DS3232.
%include Common\GeneralParameters.inc(27)
%;**       * temperature%Partemperature %>27 - Pointer to store the
%;** %>29 temperature
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine