%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetScaleRangeG)
%;**     Description :
%;**         Returns the selected Full Scale Range from the XYZ_Data_CFG
%;**         Register
%include Common\GeneralParameters.inc(27)
%;**       * gScale%PargScale %>27 - Pointer to where to store the
%;** %>29 desired full scale g value (returns 2, 4 or
%;** %>29 8)
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine