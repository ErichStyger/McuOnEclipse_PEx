%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xsnprintf)
%;**     Description :
%;**         snprintf() like function, returns the number of characters
%;**         written, negative in case of error.
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to buffer to be written
%;**         max_len%Parmax_len %>27 - size of output buffer (in size)
%;**       * fmt%Parfmt %>27 - Pointer to formatting string
%;**         argList%ParargList %>27 - Open Argument List
%;**     Returns     :
%;**         ---%RetVal %>27 - number of characters written, negative for
%;** %>29 error case
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine