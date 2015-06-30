%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (strcatPad)
%;**     Description :
%;**         Same as normal strcat, but safe as it does not write beyond
%;**         the buffer. The buffer will be filled with a pad character
%;**         for a given length.
%include Common\GeneralParameters.inc(27)
%;**       * dst%Pardst %>27 - Pointer to destination string
%;**         dstSize%PardstSize %>27 - Size of the destination buffer (in
%;** %>29 bytes).
%;**       * src%Parsrc %>27 - Pointer to source string.
%;**         padChar%ParpadChar %>27 - Character to be used for padding
%;**         srcPadSize%ParsrcPadSize %>27 - To which size the src string
%;** %>29 has to be padded.
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine