%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Peek)
%;**     Description :
%;**         Returns an element of the buffer without removiing it.
%include Common\GeneralParameters.inc(27)
%;**         index%Parindex %>27 - Index of element. 0 peeks the top
%;** %>29 element, 1 the next, and so on.
%;**       * elemP%ParelemP %>27 - Pointer to where to store the received
%;** %>29 element
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine