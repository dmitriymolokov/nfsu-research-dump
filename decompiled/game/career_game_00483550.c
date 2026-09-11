/* Decompiled from Speed.exe @ 00483550 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_00483550(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
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

