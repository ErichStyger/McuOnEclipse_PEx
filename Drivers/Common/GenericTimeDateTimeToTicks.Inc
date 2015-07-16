%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (TimeToTicks)
%;**     Description :
%;**         Transforms time information into ticks
%include Common\GeneralParameters.inc(27)
%;**       * Time%ParTime %>27 - Pointer where to time information
%;**       * ticks%Particks %>27 - Pointer to where to store the ticks
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine