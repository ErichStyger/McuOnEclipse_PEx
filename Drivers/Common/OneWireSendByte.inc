%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendByte)
%;**     Description :
%;**         Sends a single byte
%include Common\GeneralParameters.inc(27)
%;**         data%Pardata %>27 - the data byte to be sent
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine