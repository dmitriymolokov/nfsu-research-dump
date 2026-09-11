/* Decompiled from Speed.exe @ 00603b2e */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_00603b2e(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_20;
  int *local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  if (((*(byte *)(param_1 + 0x34) & 8) == 0) && ((*(byte *)(param_1 + 0x93) & 2) != 0)) {
    iVar4 = FUN_005f8440();
    if (iVar4 < 0) {
      return iVar4;
    }
    local_20 = 0;
    do {
      bVar3 = false;
      iVar4 = FUN_0060254c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x70),0);
      if (iVar4 < 0) {
        return iVar4;
      }
      local_8 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          iVar4 = *(int *)(*(int *)(param_1 + 0x18) + local_8 * 4);
          local_18 = *(int **)(iVar4 + 0x2c);
          local_14 = *(uint *)(iVar4 + 0x24);
          uVar11 = -(uint)(local_14 < local_18) & (int)local_18 - local_14;
          iVar5 = FUN_005f7b45();
          iVar5 = (-(uint)(iVar5 != 0) & 0xfffffffe) + 2;
          local_c = local_8;
          if (local_8 != 0) {
            local_10 = (int *)(*(int *)(param_1 + 0x18) + -4 + local_8 * 4);
            do {
              iVar1 = *local_10;
              if (*(uint *)(iVar4 + 0x28) <= *(uint *)(iVar1 + 0x28)) break;
              uVar8 = *(uint *)(iVar1 + 0x24);
              uVar12 = *(uint *)(iVar1 + 0x2c);
              uVar6 = -(uint)(uVar12 < uVar8) & uVar8 - uVar12;
              uVar7 = *(int *)(param_1 + 0x70) - iVar5;
              if ((uVar7 < uVar8 + uVar11) || (uVar7 < uVar12 + uVar11)) {
                local_c = local_8;
                break;
              }
              local_14 = local_14 + uVar6;
              local_18 = (int *)((int)local_18 + uVar6);
              local_c = local_c - 1;
              local_10 = local_10 + -1;
            } while (local_c != 0);
            if (((local_8 != local_c) &&
                (uVar8 = *(int *)(param_1 + 0x70) - iVar5, local_14 <= uVar8)) &&
               (uVar12 = local_8, local_18 <= uVar8)) {
              for (; local_c < uVar12; uVar12 = uVar12 - 1) {
                iVar5 = *(int *)(uVar12 * 4 + -4 + *(int *)(param_1 + 0x18));
                *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + uVar11;
                *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + uVar11;
                *(int *)(uVar12 * 4 + *(int *)(param_1 + 0x18)) = iVar5;
              }
              *(uint *)(iVar4 + 0x24) = local_14;
              *(int **)(iVar4 + 0x2c) = local_18;
              *(int *)(*(int *)(param_1 + 0x18) + local_c * 4) = iVar4;
              bVar3 = true;
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(param_1 + 0xc));
      }
      iVar4 = FUN_0060254c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x70),0);
      if (iVar4 < 0) {
        return iVar4;
      }
      uVar11 = *(uint *)(param_1 + 0xc);
      while (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + uVar11 * 4);
        local_10 = *(int **)(iVar4 + 0x2c);
        local_14 = *(uint *)(iVar4 + 0x24);
        uVar12 = -(uint)(local_10 < local_14) & local_14 - (int)local_10;
        iVar5 = FUN_005f7b45();
        iVar5 = (-(uint)(iVar5 != 0) & 0xfffffffe) + 2;
        uVar8 = *(int *)(param_1 + 0xc) - 1;
        if (uVar11 < uVar8) {
          local_18 = (int *)(*(int *)(param_1 + 0x18) + 4 + uVar11 * 4);
          local_c = uVar11;
          while (iVar1 = *local_18, uVar6 = local_c,
                *(uint *)(iVar4 + 0x28) < *(uint *)(iVar1 + 0x28)) {
            uVar7 = *(uint *)(iVar1 + 0x24);
            uVar2 = *(uint *)(iVar1 + 0x2c);
            uVar9 = -(uint)(uVar7 < uVar2) & uVar2 - uVar7;
            uVar10 = *(int *)(param_1 + 0x70) - iVar5;
            uVar6 = uVar11;
            if ((uVar10 < uVar7 + uVar12) || (uVar10 < uVar2 + uVar12)) break;
            local_14 = local_14 + uVar9;
            local_10 = (int *)((int)local_10 + uVar9);
            local_c = local_c + 1;
            local_18 = local_18 + 1;
            uVar6 = local_c;
            if (uVar8 <= local_c) break;
          }
          local_c = uVar6;
          if (((uVar11 != local_c) && (uVar8 = *(int *)(param_1 + 0x70) - iVar5, local_14 <= uVar8))
             && (uVar6 = uVar11, local_10 <= uVar8)) {
            for (; uVar6 < local_c; uVar6 = uVar6 + 1) {
              iVar5 = *(int *)(uVar6 * 4 + 4 + *(int *)(param_1 + 0x18));
              *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + uVar12;
              *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + uVar12;
              *(int *)(uVar6 * 4 + *(int *)(param_1 + 0x18)) = iVar5;
            }
            *(uint *)(iVar4 + 0x24) = local_14;
            *(int **)(iVar4 + 0x2c) = local_10;
            *(int *)(*(int *)(param_1 + 0x18) + local_c * 4) = iVar4;
            bVar3 = true;
          }
        }
      }
    } while ((bVar3) && (local_20 = local_20 + 1, local_20 < 0x20));
  }
  return 0;
}

