%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetRxAddress)
%;**     Description :
%;**         Set the TX address using the RF_RX_ADDR_Px register.
%include Common\GeneralParameters.inc(27)
%;**         pipe%Parpipe %>27 - pipe number (0-5)
%;**       * address%Paraddress %>27 - Pointer to array where the return
%;** %>29 the address bytes.
%;**         nofAddressBytes%ParnofAddressBytes %>27 - Number of address
%;** %>29 bytes and size of buffer, typically 5.
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine