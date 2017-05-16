%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (strcatRomCode)
%;**     Description :
%;**         Appends the ROM code to a string.
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to zero terminated buffer
%;**         bufSize%ParbufSize %>27 - size of buffer
%;**       * romCode%ParromCode %>27 - Pointer to 8 bytes of ROM Code
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine