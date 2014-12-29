%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetVolume)
%;**     Description :
%;**         Sets the volume
%include Common\GeneralParameters.inc(27)
%;**         left%Parleft %>27 - zero is max volume, 0xfe is silence,
%;** %>29 0xff is analog power down
%;**         right%Parright %>27 - zero is max volume, 0xfe is silence,
%;** %>29 0xff is analog power down
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine