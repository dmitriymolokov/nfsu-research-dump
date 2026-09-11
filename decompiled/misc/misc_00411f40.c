/* Decompiled from Speed.exe @ 00411f40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00411f40(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_3 + 0x78);
  DAT_00736360 = 0;
  DAT_00736361 = 0;
  if (*(int *)(iVar1 + 0x10) == 1) {
    iVar3 = *(int *)(param_3 + 0x194);
    bVar2 = *(int *)(iVar1 + 0x11c) <= *(int *)(param_3 + 0x18c) + iVar3;
  }
  else {
    iVar3 = FUN_00639c00(*(undefined4 *)(param_3 + 400));
    bVar2 = iVar3 < *(int *)(param_3 + 0x194);
  }
  *(int *)(param_3 + 0x18c) = *(int *)(param_3 + 0x18c) + iVar3;
  *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar3;
  iVar3 = FUN_00411d00();
  if (*(int *)(iVar1 + 4) == 4) {
    FUN_00412020(*(undefined4 *)(param_3 + 0x50));
    return;
  }
  if ((!bVar2) && (iVar3 == 0)) {
    FUN_00412160(param_3,*(int *)(param_3 + 0x50) + -1);
    return;
  }
  FUN_0063f190(param_3 + 4);
  if (*(int *)(iVar1 + 4) != 4) {
    *(undefined4 *)(iVar1 + 4) = 3;
  }
  FUN_0063f1a0(param_3 + 4);
  FUN_00412020(*(undefined4 *)(param_3 + 0x50));
  return;
}

