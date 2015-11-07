%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (RecvChar)
%;**     Description :
%;**         Receives a character from channel 0. Returns ERR_RXEMPTY if
%;**         no character available
%include Common\GeneralParameters.inc(27)
%;**       * c%Parc %>27 - Pointer to where to store the received
%;** %>29 character
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine