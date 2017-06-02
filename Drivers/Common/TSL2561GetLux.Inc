%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetLux)
%;**     Description :
%;**         Returns the sensor value in LUX
%include Common\GeneralParameters.inc(27)
%;**       * lux%Parlux %>27 - Pointer to where to store the Lux value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine