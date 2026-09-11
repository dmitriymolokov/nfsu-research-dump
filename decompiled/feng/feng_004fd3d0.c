/* Decompiled from Speed.exe @ 004fd3d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fd3d0(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_24;
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b68;
  local_c = ExceptionList;
  uVar6 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x5c) != 0) {
      ExceptionList = &local_c;
      _free(*(void **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    FUN_004fdd40();
  }
  else {
    ExceptionList = &local_c;
    puVar3 = _malloc(param_2 * 0xc);
    uVar4 = *(uint *)(param_1 + 0x5c);
    if (uVar4 != 0) {
      uVar6 = uVar4;
      if (param_2 <= uVar4) {
        uVar6 = param_2;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x74);
      puVar8 = puVar3;
      for (uVar4 = uVar6 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      _free(*(void **)(param_1 + 0x74));
    }
    puVar7 = puVar3 + uVar6 * 3;
    for (uVar4 = (param_2 - uVar6) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar5 = *(int *)(param_1 + 0x60) * param_2;
    local_18 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      local_18 = _malloc(iVar5 * 0x30);
      local_4 = 0;
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        FUN_004010a0(local_18,0x30,iVar5,&LAB_004fa3a0);
      }
      if (*(int *)(param_1 + 0x8c) == 0) {
        FUN_004fdd00();
      }
      else {
        piVar1 = (int *)(param_1 + 0x60);
        param_1 = 0;
        local_24 = local_18;
        if (*piVar1 != 0) {
          do {
            puVar7 = (undefined4 *)
                     (*(int *)(iVar2 + 0x5c) * param_1 * 0x30 + *(int *)(iVar2 + 0x8c));
            puVar8 = local_24;
            for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            FUN_004fdd00();
            param_1 = param_1 + 1;
            local_24 = local_24 + param_2 * 0xc;
          } while (param_1 < *(uint *)(iVar2 + 0x60));
        }
        _free(*(void **)(iVar2 + 0x8c));
      }
    }
    *(uint *)(iVar2 + 0x5c) = param_2;
    *(undefined4 **)(iVar2 + 0x74) = puVar3;
    *(undefined4 **)(iVar2 + 0x8c) = local_18;
  }
  ExceptionList = local_c;
  return;
}

