%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (AppendRomCodeToString)
%;**     Description :
%;**         Appends the ROM code to a string.
%include Common\GeneralParameters.inc(27)
%;**       * romCode%ParromCode %>27 - Pointer to 8 bytes of ROM Code
%;**         buf%Parbuf %>27 - 
%;**         bufSize%ParbufSize %>27 - size of buffer
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine