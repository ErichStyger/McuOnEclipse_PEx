%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Control)
%;**     Description :
%;**         Control function. Must be called every T time.
%include Common\GeneralParameters.inc(27)
%;**         error%Parerror %>27 - Error signal. (Reference -
%;** %>29 SystemOutput).
%;**       * u%Paru %>27 - Pointer to the control variable.
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine