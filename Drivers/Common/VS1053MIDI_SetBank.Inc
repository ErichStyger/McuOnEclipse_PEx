%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (MIDI_SetBank)
%;**     Description :
%;**         Sets the bank for the channel
%include Common\GeneralParameters.inc(27)
%;**         channel%Parchannel %>27 - Channel
%;**         bank%Parbank %>27 - bank (0 is default, 0x78 and 0x7f is
%;** %>29 drums, 0x79 melodic)
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine