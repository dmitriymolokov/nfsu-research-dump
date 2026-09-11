/* Decompiled from Speed.exe @ 00683460 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00683460(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00639c00(*(undefined4 *)(param_3 + 0x1c));
  *(int *)(param_3 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_00683260();
    return;
  }
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar2 = FUN_0063a690(iVar1,99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00642450("ASYNCFILE_load[at] - unable to initiate file close\n");
      return;
    }
    FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832b0);
    return;
  }
  if (*(int *)(param_3 + 0x14) != 0) {
    uVar2 = FUN_0063a800(iVar1,99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00642450("ASYNCFILE_load - unable to initiate file size get\n");
      return;
    }
    FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006833a0);
    return;
  }
  iVar3 = *(int *)(param_3 + 0x28);
  if (0x2000 < iVar3) {
    iVar3 = 0x2000;
  }
  uVar2 = FUN_0063a700(iVar1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x2c),iVar3,
                       99,param_3);
  *(undefined4 *)(param_3 + 0x1c) = uVar2;
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00642450("ASYNCFILE_loadat - unable to initiate file read\n");
    return;
  }
  FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832d0);
  return;
}

