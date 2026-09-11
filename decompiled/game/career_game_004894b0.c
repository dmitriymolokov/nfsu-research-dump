/* Decompiled from Speed.exe @ 004894b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004894b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = DAT_00735f5c == 0;
  *param_1 = &PTR_FUN_006c7fc8;
  if (bVar4) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  iVar3 = param_1[0xc3];
  if (0 < iVar3) {
    piVar2 = param_1 + 0x23;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] == 0) {
    return;
  }
  param_1[5] = 0;
  param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
  param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
  iVar3 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  FUN_00408370();
  return;
}

