%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetLuminosity)
%;**     Description :
%;**         Gets the broadband (mixed lighting) and IR only values from
%;**         the TSL2561, adjusting gain if auto-gain is enabled
%include Common\GeneralParameters.inc(27)
%;**       * broadband%Parbroadband %>27 - Pointer to where to store the
%;** %>29 broadband value
%;**       * ir%Parir %>27 - Pointer to store the infrared value
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine