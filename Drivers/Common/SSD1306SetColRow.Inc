%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetColRow)
%;**     Description :
%;**         Sets the column and row position, useful for start writing
%;**         text with PrintString()
%include Common\GeneralParameters.inc(27)
%;**         col%Parcol %>27 - column number, starts with 0
%;**         row%Parrow %>27 - row number, first row is 0
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine