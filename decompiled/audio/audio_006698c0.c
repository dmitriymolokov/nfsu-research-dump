/* Decompiled from Speed.exe @ 006698c0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_006698c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (1 < DAT_00717930) {
      DAT_00717930 = DAT_00717930 + -1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    DAT_00717934 = 0;
    DAT_00717930 = 0;
    while (iVar1 != 0) {
      FUN_006695f0(param_1,*(int *)(param_1 + 0x24) + 8,*(int *)(param_1 + 0x24) + 0x28);
      FUN_00669060(*(undefined4 *)(param_1 + 0x38),0,param_1);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    FUN_00668d60(param_1);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00662ce0(uVar2);
    FUN_00668df0(param_1);
    FUN_00668cf0(param_1);
    FUN_00447030(*(undefined4 *)(param_1 + 0x28));
    FUN_00447030(param_1);
  }
  return;
}

