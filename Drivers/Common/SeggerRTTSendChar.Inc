%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendChar)
%;**     Description :
%;**         Sends a character to channel 0.
%include Common\GeneralParameters.inc(27)
%;**         ch%Parch %>27 - Character to send
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code. ERR_OK if character has been
%;** %>29 sent, ERR_TXFULL otherwise.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine