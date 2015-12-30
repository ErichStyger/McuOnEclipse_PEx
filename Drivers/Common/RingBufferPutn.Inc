%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Putn)
%;**     Description :
%;**         Put a number new element into the buffer.
%include Common\GeneralParameters.inc(27)
%;**       * elem%Parelem %>27 - Pointer to new elements to be put into
%;** %>29 the buffer
%;**         nof%Parnof %>27 - number of elements
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine