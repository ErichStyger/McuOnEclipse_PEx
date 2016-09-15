%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetValue24LE)
%;**     Description :
%;**         Returns a 24bit Little Endian value from memory
%include Common\GeneralParameters.inc(27)
%;**       * dataP%PardataP %>27 - Pointer to memory
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine