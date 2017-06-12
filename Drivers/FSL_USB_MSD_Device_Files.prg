%-
%- Freescale USB Stack MSD device source files
%-
%-
%- \Device\source\class -------------------------------------------
%FILE %'DirRel_Code'usb_msc.c
%include FSL_USB_Stack\Device\source\class\usb_msc.c
%FILE %'DirRel_Code'usb_msc.h
%include FSL_USB_Stack\Device\source\class\usb_msc.h
%FILE %'DirRel_Code'usb_msc_scsi.c
%include FSL_USB_Stack\Device\source\class\usb_msc_scsi.c
%FILE %'DirRel_Code'usb_msc_scsi.h
%include FSL_USB_Stack\Device\source\class\usb_msc_scsi.h

%- \Device\app\msd -------------------------------------------
%FILE %'DirRel_Code'usb_user_config.h
%include FSL_USB_Stack\Device\app\msd\user_config.h
%FILE %'DirRel_Code'USB_Config.h
%include FSL_USB_Stack\Device\app\msd\USB_Config.h
%FILE %'DirRel_Code'usb_descriptor.h
%include FSL_USB_Stack\Device\app\msd\usb_descriptor.h
%FILE %'DirRel_Code'usb_descriptor.c
%include FSL_USB_Stack\Device\app\msd\usb_descriptor.c
