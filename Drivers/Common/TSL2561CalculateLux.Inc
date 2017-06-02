%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (CalculateLux)
%;**     Description :
%;**         Calculates the LUX value based on broadband and infrared
%;**         values
%include Common\GeneralParameters.inc(27)
%;**         broadband%Parbroadband %>27 - full/broadband light value
%;**         ir%Parir %>27 - Infrared value
%;**     Returns     :
%;**         ---%RetVal %>27 - LUX value
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine