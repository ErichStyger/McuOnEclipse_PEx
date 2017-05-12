%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Receive)
%;**     Description :
%;**         Programs a read operation after the master send all in
%;**         output buffer. Don't use a SendReset while the data is
%;**         coming.
%include Common\GeneralParameters.inc(27)
%;**         counter%Parcounter %>27 - Number of bytes to receive from
%;** %>29 slave
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine