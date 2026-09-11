/* Decompiled from Speed.exe @ 0048d9a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0048d9a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_006c7ce0;
  _free((void *)param_1[0x20]);
  _free((void *)param_1[0x21]);
  _free((void *)param_1[0x22]);
  _free((void *)param_1[0x23]);
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

