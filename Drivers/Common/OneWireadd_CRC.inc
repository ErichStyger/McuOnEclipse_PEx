%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (add_CRC)
%;**     Description :
%;**         Adds a bit to CRC accumulator.
%include Common\GeneralParameters.inc(27)
%;**       * bitValue%ParbitValue %>27 - Pointer to bit to add to CRC
%;** %>29 accumulator
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine