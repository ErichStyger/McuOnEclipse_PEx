%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadRegister)
%;**     Description :
%;**         Reads a device register
%include Common\GeneralParameters.inc(27)
%;**         reg%Parreg %>27 - Register to read
%;**       * value%Parvalue %>27 - Pointer to where to write the value
%;** %>29 read
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine