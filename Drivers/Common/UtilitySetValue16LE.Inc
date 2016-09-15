%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetValue16LE)
%;**     Description :
%;**         Stores a 16bit value in memory as Little Endian
%include Common\GeneralParameters.inc(27)
%;**         data%Pardata %>27 - Value to store
%;**       * dataP%PardataP %>27 - Pointer to memory
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine