%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (constrain)
%;**     Description :
%;**         Makes sure that a given input value is inside a given range.
%include Common\GeneralParameters.inc(27)
%;**         val%Parval %>27 - input value
%;**         min%Parmin %>27 - range minimum value
%;**         max%Parmax %>27 - range maximum value
%;**     Returns     :
%;**         ---%RetVal %>27 - the constrained value
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine