%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (MIDI_SetPan)
%;**     Description :
%;**         Sets the pan (stereo position) for the channel
%include Common\GeneralParameters.inc(27)
%;**         channel%Parchannel %>27 - Channel
%;**         pan%Parpan %>27 - pan (stereo position), where 64 is middle.
%;** %>29 Allowed values: 0..127
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine