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
%- FreeRTOS source files
%-
%if defined(RTOSSrcFolderName) & %RTOSSrcFolderName <> ""
  %define  RTOSSrcDirFolder %'RTOSSrcFolderName'/
%else
  %define  RTOSSrcDirFolder 
%endif
%if defined(RTOSMemMangFolderName) & %RTOSMemMangFolderName <> ""
  %define  RTOSMemMangDirFolder %'RTOSMemMangFolderName'/
%else
  %define  RTOSMemMangDirFolder
%endif
%if defined(RTOSHeaderFolderName) & %RTOSHeaderFolderName <> ""
  %define  RTOSHeaderDirFolder %'RTOSHeaderFolderName'/
%else
  %define  RTOSHeaderDirFolder 
%endif
%if defined(RTOSPortFolderName) & %RTOSPortFolderName <> ""
  %define  RTOSPortDirFolder %'RTOSPortFolderName'/
%else
  %define  RTOSPortDirFolder 
%endif
%if defined(RTOSConfigFolderName) & %RTOSConfigFolderName <> ""
  %define  RTOSConfigDirFolder %'RTOSConfigFolderName'/
%else
  %define  RTOSConfigDirFolder 
%endif
%if defined(RTOSCommonFolderName) & %RTOSCommonFolderName <> ""
  %define  RTOSCommonDirFolder %'RTOSCommonFolderName'/
%else
  %define  RTOSCommonDirFolder 
%endif
%-
%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'croutine.h
%include freeRTOS\Source\include\croutine.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'croutine.c
%include freeRTOS\Source\croutine.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'FreeRTOS.h
%include freeRTOS\Source\include\FreeRTOS.h

%FILE %'DirRel_Code'%'RTOSConfigDirFolder'FreeRTOSConfig.h
%include freeRTOS\Source\include\FreeRTOSConfig.h

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_1.c
%include freeRTOS\Source\portable\MemMang\heap_1.c

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_2.c
%include freeRTOS\Source\portable\MemMang\heap_2.c

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_3.c
%include freeRTOS\Source\portable\MemMang\heap_3.c

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_4.c
%include freeRTOS\Source\portable\MemMang\heap_4.c

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_5.c
%include freeRTOS\Source\portable\MemMang\heap_5.c

%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_useNewlib.c
%include freeRTOS\Source\portable\MemMang\heap_useNewlib.c
%FILE %'DirRel_Code'%'RTOSMemMangDirFolder'heap_useNewlib.txt
%include freeRTOS\Source\portable\MemMang\heap_useNewlib.txt

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'FreeRTOS_license.txt
%include freeRTOS\License\license.txt

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'atomic.h
%include freeRTOS\Source\include\atomic.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'list.h
%include freeRTOS\Source\include\list.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'list.c
%include freeRTOS\Source\list.c

%FILE %'DirRel_Code'%'RTOSPortDirFolder'port.c
%include freeRTOS\Source\portable\GCC\ARM_CM4F\port.c

%FILE %'DirRel_Code'%'RTOSPortDirFolder'portTicks.h
%include freeRTOS\Source\portable\GCC\ARM_CM4F\portTicks.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'portable.h
%include freeRTOS\Source\include\portable.h

%FILE %'DirRel_Code'%'RTOSPortDirFolder'portasm.s
%include freeRTOS\Source\portable\GCC\ARM_CM4F\portasm.s

%FILE %'DirRel_Code'%'RTOSPortDirFolder'portmacro.h
%include freeRTOS\Source\portable\GCC\ARM_CM4F\portmacro.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'deprecated_definitions.h
%include freeRTOS\Source\include\deprecated_definitions.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'projdefs.h
%include freeRTOS\Source\include\projdefs.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'queue.c
%include freeRTOS\Source\queue.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'queue.h
%include freeRTOS\Source\include\queue.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'semphr.h
%include freeRTOS\Source\include\semphr.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'stack_macros.h
%include freeRTOS\Source\include\stack_macros.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'task.h
%include freeRTOS\Source\include\task.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'tasks.c
%include freeRTOS\Source\tasks.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'timers.h
%include freeRTOS\Source\include\timers.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'timers.c
%include freeRTOS\Source\timers.c

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'event_groups.c
%include freeRTOS\Source\event_groups.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'event_groups.h
%include freeRTOS\Source\include\event_groups.h

%FILE %'DirRel_Code'%'RTOSSrcDirFolder'stream_buffer.c
%include freeRTOS\Source\stream_buffer.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'stream_buffer.h
%include freeRTOS\Source\include\stream_buffer.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'message_buffer.h
%include freeRTOS\Source\include\message_buffer.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'newlib-freertos.h
%include freeRTOS\Source\include\newlib-freertos.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'picolibc-freertos.h
%include freeRTOS\Source\include\picolibc-freertos.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'freertos_tasks_c_additions.h
%include freeRTOS\Source\include\freertos_tasks_c_additions.h
%- -----------------------------------------
%- MPU support files
%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'mpu_wrappers.h
%include freeRTOS\Source\include\mpu_wrappers.h

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'mpu_prototypes.h
%include freeRTOS\Source\include\mpu_prototypes.h

%FILE %'DirRel_Code'%'RTOSCommonDirFolder'mpu_wrappers.c
%include freeRTOS\Source\portable\Common\mpu_wrappers.c

%FILE %'DirRel_Code'%'RTOSHeaderDirFolder'mpu_syscall_numbers.h
%include freeRTOS\Source\include\mpu_syscall_numbers.h
%- -----------------------------------------
%- GDB thread debug helpers
%FILE %'DirRel_Code'%'RTOSPortDirFolder'readme_gdbBacktraceDebug.txt
%include freeRTOS\gdbBacktraceDebug\readme_gdbBacktraceDebug.txt

%FILE %'DirRel_Code'%'RTOSPortDirFolder'.gdbinit-FreeRTOS-helpers
%include freeRTOS\gdbBacktraceDebug\.gdbinit-FreeRTOS-helpers
%- -----------------------------------------

%undef RTOSSrcDirFolder
%undef RTOSMemMangDirFolder
%undef RTOSHeaderDirFolder
%undef RTOSPortDirFolder
%undef RTOSConfigDirFolder
%undef RTOSCommonDirFolder
