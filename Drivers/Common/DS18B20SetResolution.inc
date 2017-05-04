%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetResolution)
%;**     Description :
%;**         Sets the resolution
%include Common\GeneralParameters.inc(27)
%;**         config_bits%Parconfig_bits %>27 - Two bits resolution config
%;** %>29 value: 
%;** %>29 [0b00] - 9 bits.
%;** %>29 [0b01] - 10 bits.
%;** %>29 [0b10] - 11 bits.
%;** %>29 [0b11] - 12 bits.
%;**       * sensor_index%Parsensor_index %>27 - Index of the sensor to
%;** %>29 set the resolution.
%;**     Returns     :
%;**         ---%RetVal %>27 - 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine