/* Decompiled from Speed.exe @ 00601cfe */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_00601cfe(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  void *local_c;
  uint local_8;
  
  local_c = (void *)0x0;
  local_10 = (void *)0x0;
  local_14 = (undefined4 *)0x0;
  if ((*(byte *)(param_1 + 0x34) & 8) == 0) {
    iVar1 = FUN_005f8440();
    if ((-1 < iVar1) && (iVar1 = FUN_005fbbf5(), -1 < iVar1)) {
      if ((*(byte *)(param_1 + 0x93) & 2) != 0) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar1) + 0x28) = 0;
          } while (uVar2 < *(uint *)(param_1 + 0xc));
        }
        pvVar3 = *(void **)(param_1 + 0xc);
        while (pvVar3 != (void *)0x0) {
          local_c = (void *)((int)pvVar3 + -1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + (int)local_c * 4);
          iVar4 = FUN_005f7a96();
          pvVar3 = local_c;
          if (iVar4 == 0) {
            uVar2 = *(uint *)(iVar1 + 0x28);
            iVar4 = FUN_005f7b45();
            if (iVar4 != 0) {
              *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
              uVar2 = uVar2 + 2;
            }
            uVar6 = 0;
            pvVar3 = local_c;
            if (*(int *)(iVar1 + 0x14) != 0) {
              do {
                iVar4 = *(int *)(*(int *)(param_1 + 0x18) +
                                *(int *)(*(int *)(iVar1 + 0x18) + uVar6 * 4) * 4);
                if (*(uint *)(iVar4 + 0x28) < uVar2) {
                  *(uint *)(iVar4 + 0x28) = uVar2;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(uint *)(iVar1 + 0x14));
            }
          }
        }
      }
      uVar2 = 0;
      local_8 = 0;
      local_c = _malloc(*(int *)(param_1 + 0xc) << 2);
      if (((local_c == (void *)0x0) ||
          (local_10 = _malloc(*(int *)(param_1 + 0xc) << 2), local_10 == (void *)0x0)) ||
         (local_14 = _malloc(*(int *)(param_1 + 0xc) << 2), local_14 == (undefined4 *)0x0)) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0x18) + uVar2 * 4);
            *(undefined4 *)(iVar1 + 0x24) = 0;
            *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
            iVar4 = FUN_005f7a96();
            if ((iVar4 == 0) && (*(int *)(iVar1 + 0x1c) == 0)) {
              *(uint *)((int)local_c + local_8 * 4) = uVar2;
              local_8 = local_8 + 1;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + 0xc));
        }
        uVar2 = 0;
        local_18 = 0;
        if (local_8 != 0) {
          do {
            iVar1 = FUN_005fada7(*(undefined4 *)((int)local_c + uVar2 * 4),local_10,&local_18);
            if (iVar1 < 0) goto LAB_00601eaa;
            uVar2 = uVar2 + 1;
          } while (uVar2 < local_8);
        }
        uVar2 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          puVar5 = local_14;
          do {
            *puVar5 = *(undefined4 *)
                       (*(int *)(param_1 + 0x18) +
                       *(int *)(((int)local_10 - (int)local_14) + (int)puVar5) * 4);
            uVar2 = uVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar2 < *(uint *)(param_1 + 0xc));
        }
        puVar5 = local_14;
        puVar7 = *(undefined4 **)(param_1 + 0x18);
        for (uVar2 = *(uint *)(param_1 + 0xc) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar1 = 0;
      }
    }
LAB_00601eaa:
    _free(local_c);
    _free(local_10);
    _free(local_14);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

