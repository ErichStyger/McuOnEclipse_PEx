%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendBytes)
%;**     Description :
%;**         Sends multiple bytes
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to the array of bytes
%;**         count%Parcount %>27 - Number of bytes to be sent
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine