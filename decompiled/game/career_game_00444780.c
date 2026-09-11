/* Decompiled from Speed.exe @ 00444780 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_00444780(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar3 = *param_1;
    iVar4 = param_1[1];
    do {
      if (((*(int *)(iVar3 + 0xc) == 3) && (*(char *)(iVar3 + 0xb) == '\0')) &&
         ((iVar5 == 0 || (*(int *)(iVar3 + 0x24) < *(int *)(iVar5 + 0x24))))) {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar5 != 0) {
      piVar1 = *(int **)(iVar5 + 0x28);
      iVar3 = piVar1[0x24];
      while (iVar3 == 0) {
        FUN_004483c0();
        iVar3 = piVar1[0x24];
      }
      iVar3 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      FUN_004481d0();
      iVar4 = DAT_007360f8;
      iVar3 = *(int *)(DAT_007360f8 + 0x18);
      *piVar1 = *(int *)(DAT_007360f8 + 0x10);
      *(int **)(iVar4 + 0x10) = piVar1;
      *(int *)(iVar4 + 0x18) = iVar3 + -1;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      param_1[3] = param_1[3] + -1;
      return *(undefined4 *)(iVar5 + 0x18);
    }
  }
  return 0;
}

