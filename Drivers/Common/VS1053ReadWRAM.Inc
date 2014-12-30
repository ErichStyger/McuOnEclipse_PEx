%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadWRAM)
%;**     Description :
%;**         Read from device WRAM
%include Common\GeneralParameters.inc(27)
%;**         addr%Paraddr %>27 - WRAM address
%;**       * value%Parvalue %>27 - Pointer to value to return
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine