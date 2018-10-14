%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetContrastABC)
%;**     Description :
%;**         Sets the contrast ABC value (Command 0xC1)
%include Common\GeneralParameters.inc(27)
%;**         contrastA%ParcontrastA %>27 - contrast A value
%;**         contrastB%ParcontrastB %>27 - contrast B value
%;**         contrastC%ParcontrastC %>27 - contast C value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine