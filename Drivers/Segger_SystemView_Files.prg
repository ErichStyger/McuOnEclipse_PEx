%-
%- Segger RTT source files
%-
%FILE %'DirRel_Code'SEGGER_SYSVIEW.c
%include Segger_SystemView\SEGGER_SYSVIEW.c

%FILE %'DirRel_Code'SEGGER_SYSVIEW.h
%include Segger_SystemView\SEGGER_SYSVIEW.h

%FILE %'DirRel_Code'SEGGER_SYSVIEW_Conf.h
%include Segger_SystemView\SEGGER_SYSVIEW_Conf.h

%FILE %'DirRel_Code'SEGGER_SYSVIEW_Int.h
%include Segger_SystemView\SEGGER_SYSVIEW_Int.h

%FILE %'DirRel_Code'SEGGER_SYSVIEW_ConfDefaults.h
%include Segger_SystemView\SEGGER_SYSVIEW_ConfDefaults.h

%FILE %'DirRel_Code'SEGGER_SYSVIEW_Config.c
%include Segger_SystemView\SEGGER_SYSVIEW_Config.c

%if defined(OperatingSystemId) & %OperatingSystemId='FreeRTOS'
%FILE %'DirRel_Code'SEGGER_SYSVIEW_FreeRTOS.c
%include Segger_SystemView\SEGGER_SYSVIEW_FreeRTOS.c

%FILE %'DirRel_Code'SEGGER_SYSVIEW_FreeRTOS.h
%include Segger_SystemView\SEGGER_SYSVIEW_FreeRTOS.h
%endif