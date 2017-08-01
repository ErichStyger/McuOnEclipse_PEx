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
%- Segger RTT files
%-
%if defined(SeggerRTTSrcFolderName) & %SeggerRTTSrcFolderName <> ""
  %define  SeggerRTTSrcFolder %'SeggerRTTSrcFolderName'/
%else
  %define  SeggerRTTSrcFolder 
%endif
%if defined(SeggerRTTConfigFolderName) & %SeggerRTTConfigFolderName <> ""
  %define  SeggerRTTConfigFolder %'SeggerRTTConfigFolderName'/
%else
  %define  SeggerRTTConfigFolder 
%endif
%-
%- Segger RTT source files
%-
%FILE %'DirRel_Code'%'SeggerRTTSrcFolder'RTT_Syscalls_GCC.c
%include Segger_RTT\RTT_Syscalls_GCC.c

%FILE %'DirRel_Code'%'SeggerRTTSrcFolder'SEGGER_RTT.c
%include Segger_RTT\SEGGER_RTT.c

%FILE %'DirRel_Code'%'SeggerRTTSrcFolder'SEGGER_RTT.h
%include Segger_RTT\SEGGER_RTT.h

%FILE %'DirRel_Code'%'SeggerRTTConfigFolder'SEGGER_RTT_Conf.h
%include Segger_RTT\SEGGER_RTT_Conf.h

%FILE %'DirRel_Code'%'SeggerRTTSrcFolder'SEGGER_RTT_printf.c
%include Segger_RTT\SEGGER_RTT_printf.c

%undef SeggerRTTSrcFolder
%undef SeggerRTTConfigFolder