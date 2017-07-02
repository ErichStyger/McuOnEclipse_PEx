This folder contains a port of FreeRTOS which is used with NXP Processor Expert.
For Processor Expert '%' in the sources are replaced by '%%'.
Additional changes from the original FreeRTOs distribution are marked with "<< EST".

The port supports the following:
- CodeWarrior for S12 V5.x (S12, S12X)
- CodeWarrior for MCU 10.x (S08, ColdFire, DSC, ARM)
- GNU ARM Embedded (GCC) (ARM Cortex-M)
- Kinetis Design Studio V3.x (ARM Cortex-M)
- MCUXpresso IDE V10.x (ARM Cortex-M)
- IAR and Keil for ARM (although not intensively used)

Altough the port supports many architures and compilers, all the port files are in 
Source\portable\GCC\ARM_CM4F

If looking for a non-PEx version of the source file, see https://github.com/ErichStyger/McuOnEclipseLibrary

Enjoy!
Erich