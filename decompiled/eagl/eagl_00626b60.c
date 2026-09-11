/* Decompiled from Speed.exe @ 00626b60 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00626b60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[2]) {
    do {
      iVar1 = *(int *)(param_1[4] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00626a80();
        (*(code *)PTR_FUN_006dfaa0)(iVar1,0x14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[2]);
  }
  if (param_1[4] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[4],param_1[2] << 2);
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[3],param_1[2] << 2);
    param_1[3] = 0;
  }
  if (*param_1 != 0) {
    (*(code *)PTR_FUN_006dfaa0)(*param_1,param_1[1] << 2);
    *param_1 = 0;
  }
  if (param_1[5] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[5],param_1[7] << 2);
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[6],param_1[7] << 2);
    param_1[6] = 0;
  }
  return;
}

