%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadRom)
%;**     Description :
%;**         Starts to read the rom code and saves it in memory.
%include Common\GeneralParameters.inc(27)
%;**       * sensor_index%Parsensor_index %>27 - 
%;**     Returns     :
%;**         ---%RetVal %>27 - Returns FALSE if the device is busy in
%;** %>29 another operation.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine