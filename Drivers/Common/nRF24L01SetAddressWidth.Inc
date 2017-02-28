%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetAddressWidth)
%;**     Description :
%;**         Sets the address width using the SETUP_AW register
%include Common\GeneralParameters.inc(27)
%;**         width%Parwidth %>27 - only 3, 4 or 5 is allowed
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine