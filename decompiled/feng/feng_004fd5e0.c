/* Decompiled from Speed.exe @ 004fd5e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fd5e0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684f18;
  local_c = ExceptionList;
  uVar5 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x60) != 0) {
      ExceptionList = &local_c;
      _free(*(void **)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    FUN_004fdd40();
  }
  else {
    ExceptionList = &local_c;
    puVar1 = _malloc(param_2 * 0xc);
    uVar3 = *(uint *)(param_1 + 0x60);
    if (uVar3 != 0) {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = param_2;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x78);
      puVar6 = puVar1;
      for (uVar3 = uVar5 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      _free(*(void **)(param_1 + 0x78));
    }
    puVar2 = puVar1 + uVar5 * 3;
    for (uVar3 = (param_2 - uVar5) * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    iVar4 = *(int *)(param_1 + 0x5c) * param_2;
    local_14 = (undefined4 *)0x0;
    if (iVar4 != 0) {
      puVar2 = _malloc(iVar4 * 0x30);
      local_4 = 0;
      local_14 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004010a0(puVar2,0x30,iVar4,&LAB_004fa3a0);
        local_14 = puVar2;
      }
      if (*(undefined4 **)(param_1 + 0x8c) == (undefined4 *)0x0) {
        FUN_004fdd00();
      }
      else {
        uVar5 = *(int *)(param_1 + 0x5c) * uVar5;
        puVar2 = *(undefined4 **)(param_1 + 0x8c);
        puVar6 = local_14;
        for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_004fdd00();
        _free(*(void **)(param_1 + 0x8c));
      }
    }
    *(uint *)(param_1 + 0x60) = param_2;
    *(undefined4 **)(param_1 + 0x78) = puVar1;
    *(undefined4 **)(param_1 + 0x8c) = local_14;
  }
  ExceptionList = local_c;
  return;
}

