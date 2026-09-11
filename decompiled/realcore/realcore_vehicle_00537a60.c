/* Decompiled from Speed.exe @ 00537a60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00537a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068521f;
  local_c = ExceptionList;
  if (5 < *(int *)(unaff_ESI + 0x8c)) {
    return;
  }
  local_14 = 0;
  if (param_1 == 0) {
    if (*(int *)(unaff_ESI + 0x14) != 0) {
      return;
    }
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x620);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      iVar4 = 0;
      uVar2 = 0x6400;
    }
    else {
      uVar2 = FUN_00537590(pvVar1);
      *(undefined4 *)(unaff_ESI + 0x14) = uVar2;
      iVar4 = 0;
      uVar2 = 0x6400;
    }
  }
  else {
    if (param_1 == 1) {
      if (*(int *)(unaff_ESI + 0x18) != 0) {
        return;
      }
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x610);
      local_4 = 1;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005374a0(pvVar1);
      }
      *(undefined4 *)(unaff_ESI + 0x18) = uVar2;
      iVar4 = 1;
      uVar2 = 0x6400;
      uVar3 = 4;
      local_14 = 1;
      goto LAB_00537c14;
    }
    iVar4 = 2;
    if (param_1 == 2) {
      if (*(int *)(unaff_ESI + 0x1c) != 0) {
        return;
      }
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x600);
      local_4 = 2;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00537670(pvVar1);
      }
      *(undefined4 *)(unaff_ESI + 0x1c) = uVar2;
      uVar2 = 0x3200;
      uVar3 = 2;
      local_14 = 1;
      goto LAB_00537c14;
    }
    if (param_1 == 3) {
      if (*(int *)(unaff_ESI + 0x20) != 0) {
        return;
      }
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x600);
      iVar4 = 3;
      local_4 = 3;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00537750(pvVar1);
      }
      *(undefined4 *)(unaff_ESI + 0x20) = uVar2;
      uVar2 = 0x3200;
      uVar3 = 2;
      local_14 = 1;
      goto LAB_00537c14;
    }
    iVar4 = 4;
    if (param_1 < 4) {
      return;
    }
    if (9 < param_1) {
      return;
    }
    if (*(int *)(unaff_ESI + 0x24) != 0) {
      return;
    }
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x600);
    local_4 = 4;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00537830(pvVar1);
    }
    *(undefined4 *)(unaff_ESI + 0x24) = uVar2;
    uVar2 = 0x3200;
  }
  uVar3 = 3;
LAB_00537c14:
  *(int *)(unaff_ESI + 0x28 + iVar4 * 4) = param_1;
  local_4 = 0xffffffff;
  (**(code **)(**(int **)(unaff_ESI + 0x14 + iVar4 * 4) + 0x1c))
            (param_1,uVar3,local_14,param_2,uVar2,param_3,param_4);
  *(int *)(unaff_ESI + 0x8c) = *(int *)(unaff_ESI + 0x8c) + 1;
  (**(code **)(**(int **)(unaff_ESI + 0x14 + iVar4 * 4) + 0xc))(0);
  (**(code **)(**(int **)(unaff_ESI + 0x14 + iVar4 * 4) + 8))(0);
  (**(code **)(**(int **)(unaff_ESI + 0x14 + iVar4 * 4) + 0x14))(unaff_ESI + 0x1b0);
  if (param_1 == 0) {
    (**(code **)(**(int **)(unaff_ESI + 0x14) + 0x8c))();
    *(undefined4 *)(unaff_ESI + 0x2a8) = 0;
  }
  ExceptionList = local_c;
  return;
}

