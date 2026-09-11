/* Decompiled from Speed.exe @ 00444e90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00444e90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar2 = *param_1 + iVar3;
      if (*(int *)(*param_1 + 0xc + iVar3) == 1) {
        FUN_00565ce0();
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar1 < param_1[1]);
  }
  return;
}

