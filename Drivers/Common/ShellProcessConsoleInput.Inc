%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ProcessConsoleInput)
%;**     Description :
%;**         Processes a string received from a console which can include
%;**         backspace characters.
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to character buffer
%;**         bufSize%ParbufSize %>27 - Size of buffer
%;**     Returns     :
%;**         ---%RetVal %>27 - Number of characters in the buffer
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine