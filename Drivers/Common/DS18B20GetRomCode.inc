%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetRomCode)
%;**     Description :
%;**         Gets the rom code from the memory.
%include Common\GeneralParameters.inc(27)
%;**       * sensor_index%Parsensor_index %>27 - 
%;**     Returns     :
%;**         ---%RetVal %>27 - Returns a pointer to the rom code array.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine