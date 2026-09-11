/* Decompiled from Speed.exe @ 004841e0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_004841e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_006c8018;
  FUN_00484340();
  if (DAT_00735f5c == 0) {
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
    param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
    iVar1 = param_1[1];
    piVar2 = (int *)param_1[2];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00408370();
    return;
  }
  return;
}

