%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetContrast)
%;**     Description :
%;**         Sets the display contrast level (default:0x7F)
%include Common\GeneralParameters.inc(27)
%;**         contrast%Parcontrast %>27 - Contrast level (default 0x7F).
%;** %>29 Contrast increases as the value increases.
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine