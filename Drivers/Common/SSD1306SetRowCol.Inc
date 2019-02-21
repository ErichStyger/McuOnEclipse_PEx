%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetRowCol)
%;**     Description :
%;**         Sets the column and row position, useful for start writing
%;**         text with PrintString()
%include Common\GeneralParameters.inc(27)
%;**         row%Parrow %>27 - row (or line) number, starting with 0
%;**         col%Parcol %>27 - column number, starting with 0
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine