%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetAddressWidth)
%;**     Description :
%;**         Returns the address width stored in the SETUP_AW register
%include Common\GeneralParameters.inc(27)
%;**       * pAddrWidth%ParpAddrWidth %>27 - Pointer to where to store
%;** %>29 the value.
%;**     Returns     :
%;**         ---%RetVal %>27 - number of address bytes (3, 4 or 5)
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine