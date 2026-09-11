/* Decompiled from Speed.exe @ 005feb84 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005feb84(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    bVar5 = false;
    FUN_005fbe17();
    FUN_005fb8ae();
    local_18 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + local_18 * 4);
        iVar6 = FUN_005f7aa3();
        if (iVar6 != 0) {
          local_c = 0;
          if (puVar2[3] != 0) {
            do {
              iVar6 = *(int *)(local_c * 4 + puVar2[4]);
              if (iVar6 != -1) {
                piVar3 = *(int **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
                if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar3 * 4) + 4) & 0x10) != 0)
                   && (piVar4 = *(int **)(*(int *)(param_1 + 0x14) +
                                         *(int *)(local_c * 4 + puVar2[2]) * 4),
                      (*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4) + 4) & 2) != 0)) {
                  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + piVar4[0xb] * 4);
                  local_1c = 0;
                  local_8 = 0;
                  if (*(int *)(iVar6 + 0xc) != 0) {
                    do {
                      iVar7 = *(int *)(*(int *)(param_1 + 0x14) +
                                      *(int *)(*(int *)(iVar6 + 0x10) + local_8 * 4) * 4);
                      if ((*(int *)(iVar7 + 4) == -1) && (*(uint *)(iVar7 + 0x40) < 2)) {
                        for (local_10 = local_c; local_10 < puVar2[3]; local_10 = local_10 + 1) {
                          if ((((*(int *)(*(int *)(iVar6 + 0x10) + local_8 * 4) ==
                                 *(int *)(puVar2[2] + local_10 * 4)) &&
                               (piVar4 = *(int **)(*(int *)(param_1 + 0x14) +
                                                  *(int *)(puVar2[4] + local_10 * 4) * 4),
                               *piVar4 == *piVar3)) && (piVar4[2] == piVar3[2])) &&
                             (((local_8 == piVar4[3] || (*(uint *)(iVar6 + 0xc) < 2)) ||
                              (iVar7 = FUN_005f7b57(), iVar7 == 0)))) {
                            local_1c = local_1c + 1;
                            break;
                          }
                        }
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < *(uint *)(iVar6 + 0xc));
                  }
                  if ((*(uint *)(iVar6 + 0xc) <= local_1c) &&
                     (local_8 = 0, *(uint *)(iVar6 + 0xc) != 0)) {
                    do {
                      for (local_10 = local_c; local_10 < puVar2[3]; local_10 = local_10 + 1) {
                        iVar7 = local_10 * 4;
                        if (*(int *)(*(int *)(iVar6 + 0x10) + local_8 * 4) ==
                            *(int *)(iVar7 + puVar2[2])) {
                          *(undefined4 *)
                           (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar7 + puVar2[2]) * 4) +
                           0x1c) = *(undefined4 *)(iVar7 + puVar2[4]);
                          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                                    *(int *)(iVar7 + puVar2[4]) * 4) + 0x18);
                          *puVar1 = *puVar1 | *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                                                *(int *)(iVar7 + puVar2[2]) * 4) +
                                                       0x18);
                          *(undefined4 *)(iVar7 + puVar2[4]) = 0xffffffff;
                          *(undefined4 *)(iVar7 + puVar2[2]) = 0xffffffff;
                        }
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < *(uint *)(iVar6 + 0xc));
                  }
                }
              }
              local_c = local_c + 1;
            } while (local_c < puVar2[3]);
          }
          uVar9 = 0;
          uVar8 = 0;
          if (puVar2[3] != 0) {
            do {
              iVar6 = *(int *)(puVar2[4] + uVar9 * 4);
              if (iVar6 != -1) {
                *(int *)(puVar2[4] + uVar8 * 4) = iVar6;
                *(undefined4 *)(puVar2[2] + uVar8 * 4) = *(undefined4 *)(puVar2[2] + uVar9 * 4);
                uVar8 = uVar8 + 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < puVar2[3]);
          }
          if (uVar8 != puVar2[3]) {
            *puVar2 = -(uint)(uVar8 != 0) & (uVar8 & 0xffffff | 0x10000000);
            puVar2[3] = uVar8;
            puVar2[1] = uVar8;
            bVar5 = true;
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(uint *)(param_1 + 0xc));
      if (bVar5) {
        FUN_005fbe30();
        return 0;
      }
    }
  }
  return 1;
}

