%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetRomCode)
%;**     Description :
%;**         Gets the rom code from the memory.
%include Common\GeneralParameters.inc(27)
%;**         sensor_index%Parsensor_index %>27 - Sensor index, use zero
%;** %>29 if only using one sensor
%;**       * romCodePtr%ParromCodePtr %>27 - Pointer to a pointer for the
%;** %>29 return value
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine