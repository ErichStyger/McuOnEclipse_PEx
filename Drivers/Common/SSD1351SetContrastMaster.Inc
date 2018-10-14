%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetContrastMaster)
%;**     Description :
%;**         Sets the contrast Master value (Command 0xC7)
%include Common\GeneralParameters.inc(27)
%;**         contrast%Parcontrast %>27 - contrast master value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine