%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetBytes)
%;**     Description :
%;**         Gets multiple bytes from the bus
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to where to store the data
%;**         count%Parcount %>27 - Number of bytes
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine