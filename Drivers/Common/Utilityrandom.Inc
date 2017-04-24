%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (random)
%;**     Description :
%;**         Provides a random value. You have to call intialize the
%;**         random number generator with randomSetSeed() first!
%include Common\GeneralParameters.inc(27)
%;**         min%Parmin %>27 - range minimum value
%;**         max%Parmax %>27 - range maximum value
%;**     Returns     :
%;**         ---%RetVal %>27 - random value between min and max
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine