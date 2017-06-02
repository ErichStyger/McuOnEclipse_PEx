%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (LuxToAmbientPercentage)
%;**     Description :
%;**         Transformes the Lux value into an ambient percentage value
%;**         (0-100%%)
%include Common\GeneralParameters.inc(27)
%;**         luxVal%ParluxVal %>27 - Lux input value
%;**       * ambient%Parambient %>27 - Pointer to where to store the
%;** %>29 ambient percentage value
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine