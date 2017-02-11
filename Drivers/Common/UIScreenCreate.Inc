%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Create)
%;**     Description :
%;**         Creates a new screen
%include Common\GeneralParameters.inc(27)
%;**       * screen%Parscreen %>27 - Pointer to screen variable to be
%;** %>29 created
%;**         x%Parx %>27 - x position
%;**         y%Pary %>27 - y display position
%;**         width%Parwidth %>27 - screen width
%;**         height%Parheight %>27 - screen height
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine