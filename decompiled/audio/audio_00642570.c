/* Decompiled from Speed.exe @ 00642570 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00642570(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_0070fe38;
  do {
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x70ff38);
  iVar2 = 0;
  do {
    if ((&DAT_0070fe38)[iVar2] == 0) {
      (&DAT_0070fe38)[iVar2] = param_1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return;
}

