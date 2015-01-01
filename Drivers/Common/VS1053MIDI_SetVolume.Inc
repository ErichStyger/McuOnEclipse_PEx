%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (MIDI_SetVolume)
%;**     Description :
%;**         Sets the volume for the channel
%include Common\GeneralParameters.inc(27)
%;**         channel%Parchannel %>27 - Channel (0..15)
%;**         volume%Parvolume %>27 - volume, 0 (silence) to 127 (max
%;** %>29 volume)
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine