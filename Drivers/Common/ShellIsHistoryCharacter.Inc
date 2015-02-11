%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (IsHistoryCharacter)
%;**     Description :
%;**         Returns TRUE if character is a history character
%include Common\GeneralParameters.inc(27)
%;**         ch%Parch %>27 - current command character
%;**       * cmdBuf%ParcmdBuf %>27 - Pointer to command line buffer read
%;** %>29 so far
%;**         cmdBufIdx%ParcmdBufIdx %>27 - Index of character into cmdBuf
%;**       * isPrev%ParisPrev %>27 - Pointer to return value, if it is
%;** %>29 'previous' history or not
%;**     Returns     :
%;**         ---%RetVal %>27 - TRUE if it is an accepted history character
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine