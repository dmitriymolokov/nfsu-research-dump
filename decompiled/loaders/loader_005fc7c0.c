/* Decompiled from Speed.exe @ 005fc7c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fc7c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int extraout_ECX;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  bVar7 = false;
  FUN_005fbe17();
  local_24 = 0;
  iVar8 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0xc) != 0) {
    do {
      puVar1 = *(uint **)(*(int *)(iVar8 + 0x18) + local_24 * 4);
      iVar8 = FUN_005f7b0f();
      if ((iVar8 != 0) || (iVar8 = FUN_005f7b21(), iVar8 != 0)) {
        uVar10 = *puVar1 & 0xffffff;
        iVar8 = FUN_005f7b21();
        uVar9 = -(uint)(iVar8 != 0) & uVar10;
        iVar8 = FUN_005f7b67();
        local_8 = 1;
        if (1 < uVar10) {
          local_1c = uVar9 * 4;
          iVar11 = 4;
          local_10 = uVar10;
          do {
            local_1c = local_1c + 4;
            iVar2 = *(int *)(param_1 + 0x14);
            piVar3 = *(int **)(iVar2 + *(int *)(iVar11 + puVar1[4]) * 4);
            if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar3 * 4) + 4) & 0x10) == 0) &&
               (local_c = 0, iVar11 != 0)) {
              local_14 = uVar9 << 2;
              do {
                iVar4 = *(int *)(local_c * 4 + puVar1[4]);
                if ((iVar4 != -1) &&
                   ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar2 + iVar4 * 4) * 4
                                       ) + 4) & 0x10) == 0)) {
                  uVar5 = puVar1[2];
                  iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(iVar11 + uVar5) * 4) + 0x1c);
                  iVar6 = *(int *)(*(int *)(iVar2 + *(int *)(uVar5 + local_c * 4) * 4) + 0x1c);
                  if (((iVar4 == iVar6) &&
                      (*(int *)(*(int *)(iVar2 + *(int *)(local_1c + uVar5) * 4) + 0x1c) ==
                       *(int *)(*(int *)(iVar2 + *(int *)(local_14 + uVar5) * 4) + 0x1c))) ||
                     (((iVar8 != 0 &&
                       (iVar4 == *(int *)(*(int *)(iVar2 + *(int *)(local_14 + uVar5) * 4) + 0x1c)))
                      && (*(int *)(*(int *)(iVar2 + *(int *)(local_1c + uVar5) * 4) + 0x1c) == iVar6
                         )))) {
                    piVar3[7] = *(int *)(*(int *)(iVar2 + *(int *)(puVar1[4] + local_c * 4) * 4) +
                                        0x1c);
                    *(undefined4 *)(iVar11 + puVar1[4]) = 0xffffffff;
                    local_10 = local_10 - 1;
                    break;
                  }
                }
                local_c = local_c + 1;
                local_14 = local_14 + 4;
              } while (local_c < local_8);
            }
            local_8 = local_8 + 1;
            iVar11 = iVar11 + 4;
          } while (local_8 < uVar10);
          if (local_10 < uVar10) {
            iVar8 = 0;
            local_8 = 0;
            if (uVar10 != 0) {
              local_1c = uVar9 << 2;
              local_18 = local_1c;
              do {
                iVar11 = *(int *)(puVar1[4] + local_8 * 4);
                if (iVar11 != -1) {
                  *(int *)(iVar8 + puVar1[4]) = iVar11;
                  *(undefined4 *)(iVar8 + puVar1[2]) = *(undefined4 *)(puVar1[2] + local_8 * 4);
                  if (uVar9 != 0) {
                    *(undefined4 *)(local_1c + puVar1[2]) = *(undefined4 *)(local_18 + puVar1[2]);
                  }
                  iVar8 = iVar8 + 4;
                  local_1c = local_1c + 4;
                }
                local_8 = local_8 + 1;
                local_18 = local_18 + 4;
              } while (local_8 < uVar10);
            }
            if ((uVar9 != 0) && (local_10 != 0)) {
              iVar8 = local_10 << 2;
              iVar11 = uVar9 << 2;
              local_20 = local_10;
              do {
                *(undefined4 *)(iVar8 + puVar1[2]) = *(undefined4 *)(iVar11 + puVar1[2]);
                iVar11 = iVar11 + 4;
                iVar8 = iVar8 + 4;
                local_20 = local_20 - 1;
              } while (local_20 != 0);
            }
            *puVar1 = *puVar1 ^ (*puVar1 ^ local_10) & 0xffffff;
            uVar10 = local_10 * 2;
            if (uVar9 == 0) {
              uVar10 = local_10;
            }
            puVar1[1] = uVar10;
            puVar1[3] = local_10;
            bVar7 = true;
          }
        }
      }
      local_24 = local_24 + 1;
      iVar8 = param_1;
    } while (local_24 < *(uint *)(param_1 + 0xc));
    if (bVar7) {
      FUN_005fbe30();
      return 0;
    }
  }
  return 1;
}

