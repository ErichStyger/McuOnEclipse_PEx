%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendAck)
%;**     Description :
%;**         The method sends ACK to the bus.
%include Common\GeneralParameters.inc(27)
%;**         Ack%ParAck %>27 - If acknowledge is high or low
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine