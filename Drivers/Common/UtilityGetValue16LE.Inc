%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetValue16LE)
%;**     Description :
%;**         Returns a 16bit Little Endian value from memory
%include Common\GeneralParameters.inc(27)
%;**       * dataP%PardataP %>27 - Pointer to memory
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine