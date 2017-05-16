%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendRomCode)
%;**     Description :
%;**         Sends ROM code
%include Common\GeneralParameters.inc(27)
%;**       * romCodeBuffer%ParromCodeBuffer %>27 - Pointer to a buffer
%;** %>29 with 8 bytes where the ROM code gets stored
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine