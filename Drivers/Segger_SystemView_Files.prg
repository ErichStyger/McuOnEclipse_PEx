%- PEx directory path mapping
%-
%- DirRel_Code            -> Project dir->Generated_Code directory
%- DirRel_Binary          -> Project dir->Source
%- DirRel_Docs            -> Project dir->Documentation
%- DirRel_EventToBinary   -> Project dir
%- DirRel_ProjectSettings -> Project dir->Project_Settings
%- DirRel_Events          -> Project dir->Sources
%- DirRel_BinaryToEvents  -> Project dir
%-
%- Segger SystemView files
%-
%if defined(SystemViewSrcFolderName)
  %define  SystemViewSrcFolder %'SystemViewSrcFolderName'/
%else
  %define  SystemViewSrcFolder 
%endif
%if defined(SystemViewConfigFolderName)
  %define  SystemViewConfigFolder %'SystemViewConfigFolderName'/
%else
  %define  SystemViewConfigFolder 
%endif
%-
%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW.c
%include Segger_SystemView\SEGGER\SEGGER_SYSVIEW.c

%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW.h
%include Segger_SystemView\SEGGER\SEGGER_SYSVIEW.h

%FILE %'DirRel_Code'%'SystemViewConfigFolder'SEGGER_SYSVIEW_Conf.h
%include Segger_SystemView\Config\SEGGER_SYSVIEW_Conf.h

%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW_Int.h
%include Segger_SystemView\SEGGER\SEGGER_SYSVIEW_Int.h

%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW_ConfDefaults.h
%include Segger_SystemView\SEGGER\SEGGER_SYSVIEW_ConfDefaults.h

%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW_Config.c
%include Segger_SystemView\Sample\Config\SEGGER_SYSVIEW_Config.c

%if defined(OperatingSystemId) & %OperatingSystemId='FreeRTOS'
%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW_FreeRTOS.c
%include Segger_SystemView\Sample\OS\SEGGER_SYSVIEW_FreeRTOS.c

%FILE %'DirRel_Code'%'SystemViewSrcFolder'SEGGER_SYSVIEW_FreeRTOS.h
%include Segger_SystemView\Sample\OS\SEGGER_SYSVIEW_FreeRTOS.h
%endif
