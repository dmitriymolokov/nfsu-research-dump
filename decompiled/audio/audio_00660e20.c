/* Decompiled from Speed.exe @ 00660e20 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00660e20(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  while (0 < param_2) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = (*(int *)(param_1 + 0x28) - iVar1) + 1;
    if (param_2 < iVar3) {
      iVar3 = param_2;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_0065fc00(iVar3,*(int *)(param_1 + 0x1c) + iVar1,param_4);
    }
    else {
      (*DAT_00716674)(iVar3,*(int *)(param_1 + 0x1c) + iVar1 * 2);
    }
    uVar2 = *(int *)(param_1 + 0x20) + iVar3;
    param_2 = param_2 - iVar3;
    *(uint *)(param_1 + 0x20) = uVar2;
    param_4 = param_4 + iVar3 * 4;
    if (*(uint *)(param_1 + 0x28) < uVar2) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return 1;
}

