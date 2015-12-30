%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Compare)
%;**     Description :
%;**         Compares the elements in the buffer.
%include Common\GeneralParameters.inc(27)
%;**         index%Parindex %>27 - Index of element. 0 peeks the top
%;** %>29 element, 1 the next, and so on.
%;**       * elemP%ParelemP %>27 - Pointer to elements to compare with
%;**         nof%Parnof %>27 - number of elements to compare
%;**     Returns     :
%;**         ---%RetVal %>27 - zero if elements are the same, -1 otherwise
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine