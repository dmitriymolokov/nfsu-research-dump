/* Decompiled from Speed.exe @ 006832d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_006832d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00639c00(*(undefined4 *)(param_3 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x2c) + iVar1;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + iVar1;
  *(int *)(param_3 + 0x2c) = iVar3;
  if ((iVar1 < 0x2000) || (*(int *)(param_3 + 0x10) != 0)) {
    uVar2 = FUN_0063a690(*(undefined4 *)(param_3 + 0x20),99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00642450("ASYNCFILE_load[at] - unable to initiate file close\n");
      return;
    }
    FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832b0);
    return;
  }
  iVar4 = *(int *)(param_3 + 0x28) - iVar1;
  iVar1 = *(int *)(param_3 + 0x24) + iVar1;
  *(int *)(param_3 + 0x28) = iVar4;
  *(int *)(param_3 + 0x24) = iVar1;
  if (0x2000 < iVar4) {
    iVar4 = 0x2000;
  }
  uVar2 = FUN_0063a700(*(undefined4 *)(param_3 + 0x20),iVar1,iVar3,iVar4,99,param_3);
  *(undefined4 *)(param_3 + 0x1c) = uVar2;
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00642450("ASYNCFILE_load[at] - unable to initiate file read\n");
    return;
  }
  FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832d0);
  return;
}

