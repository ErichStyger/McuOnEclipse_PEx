%- Settings generated by Component Wizard
%;**%>12 Component name %>60: %get(DeviceName,Text)
%;**%>12 CPU %>60: %get(CPUDevice,Text)
%;**%>12 HID Settings %>60: %get(USBCDCenabled,Text)
%if %get(USBCDCenabled, Bool) = 'yes'
%;**%>14 Bus reported device %>60: %get(HidBusReportedDeviceDescriptionString,Text)
%;**%>14 Bus reported vendor %>60: %get(HidBusReportedVendorString,Text)
%else %- USBCDCenabled
%endif %- USBCDCenabled
%;**                                                             %>12 Power Options %>60: %get(PowerOptionsGroup,Text)
%;**%>14 Bus Powered %>60: %get(ConfigBusPowered,Text)
%;**%>14 Self Powered %>60: %get(ConfigSelfPowered,Text)
