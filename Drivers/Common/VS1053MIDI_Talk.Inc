%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (MIDI_Talk)
%;**     Description :
%;**         Plays a MIDI note
%include Common\GeneralParameters.inc(27)
%;**         cmd%Parcmd %>27 - command byte
%;**         data1%Pardata1 %>27 - data1 byte
%;**         data2%Pardata2 %>27 - data2 byte
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine