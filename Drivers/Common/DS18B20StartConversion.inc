%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (StartConversion)
%;**     Description :
%;**         Starts the conversion of temperature in the sensor.
%include Common\GeneralParameters.inc(27)
%;**       * sensor_index%Parsensor_index %>27 - 
%;**       * sensor_index%Parsensor_index %>27 - Index of the sensor to
%;** %>29 start to convert the temperature.
%;**     Returns     :
%;**         ---%RetVal %>27 - Returns FALSE if the device is busy.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine