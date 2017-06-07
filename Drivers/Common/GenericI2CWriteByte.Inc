%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteByte)
%;**     Description :
%;**         Write a byte to the device: (S+i2cAddr+0).(data+P)
%include Common\GeneralParameters.inc(27)
%;**         i2cAddr%Pari2cAddr %>27 - I2C address of device
%;**         data%Pardata %>27 - Data value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine