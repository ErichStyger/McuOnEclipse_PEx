%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetScaleRangeG)
%;**     Description :
%;**         Sets the desired full scale range G value (2, 4 or 6) using
%;**         the XYZ_DATA_CFG register
%include Common\GeneralParameters.inc(27)
%;**         gScale%PargScale %>27 - desired g value, has to be 2, 4 or 8
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine