/* Decompiled from Speed.exe @ 004654f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004654f0(void)

{
  char cVar1;
  int extraout_EDX;
  
  cVar1 = FUN_00465490();
  if (cVar1 != '\0') {
    *(undefined4 *)(extraout_EDX + 0x3bc) = DAT_0073ad34;
    if (DAT_007000e8 != 0) {
      *(undefined4 *)(extraout_EDX + 0x3b4) = *(undefined4 *)(extraout_EDX + 0x3b8);
      return;
    }
    *(int *)(extraout_EDX + 0x3b8) = *(int *)(extraout_EDX + 0x3b8) - *(int *)(extraout_EDX + 0x3b4)
    ;
  }
  return;
}

