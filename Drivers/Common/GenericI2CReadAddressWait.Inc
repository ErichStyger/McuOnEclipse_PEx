%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadAddressWait)
%;**     Description :
%;**         Same as ReadAddress, but with an optional wait between the
%;**         address and read. Read from the device. This writes
%;**         (S+i2cAddr+0), (memAddr), (Sr+i2cAddr+1), (data)...(data+P)
%include Common\GeneralParameters.inc(27)
%;**         i2cAddr%Pari2cAddr %>27 - I2C Address of device
%;**       * memAddr%ParmemAddr %>27 - Pointer to device memory address
%;**         memAddrSize%ParmemAddrSize %>27 - number of address bytes
%;**         waitMs%ParwaitMs %>27 - Wait time between the address part
%;** %>29 and reading the data part. Wait time can be
%;** %>29 zero.
%;**       * data%Pardata %>27 - Pointer to read buffer
%;**         dataSize%PardataSize %>27 - Size of read buffer
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine