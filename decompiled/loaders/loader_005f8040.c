/* Decompiled from Speed.exe @ 005f8040 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool __fastcall FUN_005f8040(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_c;
  uint local_8;
  
  bVar2 = false;
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      uVar6 = uVar6 + 1;
      piVar4[0xe] = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4) + 4) >> 4 & 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  iVar5 = *(int *)(param_1 + 0xc);
  do {
    do {
      if (iVar5 == 0) {
        uVar6 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
            if ((((piVar4[0xe] == 0) && (*(int *)(param_1 + 0x4c) != *piVar4)) &&
                ((piVar4[1] != -1 ||
                 ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4) + 5) & 2) == 0)))) &&
               ((piVar4[0xb] == -1 || (iVar5 = FUN_005f7b57(), iVar5 == 0)))) {
              *piVar4 = *(int *)(param_1 + 0x4c);
              bVar2 = true;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + 8));
        }
        return !bVar2;
      }
      iVar5 = iVar5 + -1;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar5 * 4);
      iVar3 = FUN_005f7a96();
    } while (iVar3 != 0);
    iVar3 = FUN_005f7ad9();
    if (iVar3 == 0) {
      iVar3 = FUN_005f7b0f();
      if (iVar3 == 0) {
        iVar3 = FUN_005f7b21();
        if (iVar3 == 0) {
          iVar3 = FUN_005f7b33();
          if (iVar3 == 0) {
            iVar3 = FUN_005f7aeb();
            if ((iVar3 == 0) && (iVar3 = FUN_005f7afd(), iVar3 == 0)) {
              local_8 = 0;
              if (puVar1[3] != 0) {
                piVar4 = (int *)puVar1[4];
                uVar6 = puVar1[3];
                do {
                  if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar4 * 4) + 0x38) != 0) {
                    local_8 = local_8 + 1;
                  }
                  piVar4 = piVar4 + 1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
                if (local_8 != 0) goto LAB_005f835c;
              }
              uVar6 = 0;
              puVar1[1] = 0;
              puVar1[3] = 0;
              goto LAB_005f8353;
            }
          }
          else {
            uVar6 = 0;
            bVar9 = puVar1[3] == 0;
            local_8 = 0;
            if (puVar1[3] != 0) {
              do {
                if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                     *(int *)(puVar1[4] + local_8 * 4) * 4) + 0x38) != 0) {
                  *(undefined4 *)(puVar1[2] + uVar6 * 4) = *(undefined4 *)(puVar1[2] + local_8 * 4);
                  *(undefined4 *)(puVar1[2] + (puVar1[3] + uVar6) * 4) =
                       *(undefined4 *)(puVar1[2] + (local_8 + puVar1[3]) * 4);
                  *(undefined4 *)(puVar1[2] + (puVar1[3] * 2 + uVar6) * 4) =
                       *(undefined4 *)(puVar1[2] + (local_8 + puVar1[3] * 2) * 4);
                  *(undefined4 *)(puVar1[4] + uVar6 * 4) = *(undefined4 *)(puVar1[4] + local_8 * 4);
                  uVar6 = uVar6 + 1;
                }
                local_8 = local_8 + 1;
              } while (local_8 < puVar1[3]);
              bVar9 = uVar6 == puVar1[3];
            }
            if (!bVar9) {
              if (uVar6 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (*puVar1 ^ uVar6) & 0xffffff ^ *puVar1;
              }
              local_8 = 0;
              *puVar1 = uVar7;
              if (uVar6 != 0) {
                iVar3 = uVar6 << 2;
                do {
                  iVar8 = puVar1[3] + local_8;
                  local_8 = local_8 + 1;
                  *(undefined4 *)(puVar1[2] + iVar3) = *(undefined4 *)(puVar1[2] + iVar8 * 4);
                  iVar3 = iVar3 + 4;
                } while (local_8 < uVar6);
              }
              local_8 = 0;
              if (uVar6 != 0) {
                local_c = uVar6 << 3;
                do {
                  uVar7 = local_8 + 1;
                  *(undefined4 *)(puVar1[2] + local_c) =
                       *(undefined4 *)(puVar1[2] + (local_8 + puVar1[3] * 2) * 4);
                  local_c = local_c + 4;
                  local_8 = uVar7;
                } while (uVar7 < uVar6);
              }
              uVar7 = uVar6 * 3;
              goto LAB_005f8303;
            }
          }
        }
        else {
          uVar6 = 0;
          bVar9 = puVar1[3] == 0;
          local_8 = 0;
          if (puVar1[3] != 0) {
            do {
              if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(puVar1[4] + local_8 * 4) * 4
                                   ) + 0x38) != 0) {
                *(undefined4 *)(puVar1[2] + uVar6 * 4) = *(undefined4 *)(puVar1[2] + local_8 * 4);
                *(undefined4 *)(puVar1[2] + (puVar1[3] + uVar6) * 4) =
                     *(undefined4 *)(puVar1[2] + (local_8 + puVar1[3]) * 4);
                *(undefined4 *)(puVar1[4] + uVar6 * 4) = *(undefined4 *)(puVar1[4] + local_8 * 4);
                uVar6 = uVar6 + 1;
              }
              local_8 = local_8 + 1;
            } while (local_8 < puVar1[3]);
            bVar9 = uVar6 == puVar1[3];
          }
          if (!bVar9) {
            if (uVar6 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (*puVar1 ^ uVar6) & 0xffffff ^ *puVar1;
            }
            local_8 = 0;
            *puVar1 = uVar7;
            if (uVar6 != 0) {
              iVar3 = uVar6 << 2;
              do {
                iVar8 = puVar1[3] + local_8;
                local_8 = local_8 + 1;
                *(undefined4 *)(puVar1[2] + iVar3) = *(undefined4 *)(puVar1[2] + iVar8 * 4);
                iVar3 = iVar3 + 4;
              } while (local_8 < uVar6);
            }
            uVar7 = uVar6 * 2;
LAB_005f8303:
            puVar1[1] = uVar7;
            puVar1[3] = uVar6;
            goto LAB_005f8355;
          }
        }
      }
      else {
        uVar7 = 0;
        bVar9 = puVar1[3] == 0;
        local_8 = 0;
        if (puVar1[3] != 0) {
          do {
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(puVar1[4] + local_8 * 4) * 4)
                        + 0x38) != 0) {
              *(undefined4 *)(puVar1[2] + uVar7 * 4) = *(undefined4 *)(puVar1[2] + local_8 * 4);
              *(undefined4 *)(puVar1[4] + uVar7 * 4) = *(undefined4 *)(puVar1[4] + local_8 * 4);
              uVar7 = uVar7 + 1;
            }
            local_8 = local_8 + 1;
          } while (local_8 < puVar1[3]);
          bVar9 = uVar7 == puVar1[3];
        }
        if (!bVar9) {
          if (uVar7 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (*puVar1 ^ uVar7) & 0xffffff ^ *puVar1;
          }
          puVar1[3] = uVar7;
          puVar1[1] = uVar7;
          goto LAB_005f8353;
        }
      }
    }
    else {
      uVar7 = 0;
      bVar9 = puVar1[3] == 0;
      local_8 = 0;
      if (puVar1[3] != 0) {
        do {
          iVar3 = *(int *)(puVar1[4] + local_8 * 4);
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x38) != 0) {
            *(int *)(puVar1[4] + uVar7 * 4) = iVar3;
            uVar7 = uVar7 + 1;
          }
          local_8 = local_8 + 1;
        } while (local_8 < puVar1[3]);
        bVar9 = uVar7 == puVar1[3];
      }
      if (!bVar9) {
        if (uVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (*puVar1 ^ uVar7) & 0xffffff ^ *puVar1;
        }
        puVar1[3] = uVar7;
LAB_005f8353:
        *puVar1 = uVar6;
LAB_005f8355:
        bVar2 = true;
      }
    }
LAB_005f835c:
    uVar6 = 0;
    if (puVar1[3] != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      do {
        iVar8 = *(int *)(puVar1[4] + uVar6 * 4);
        while( true ) {
          piVar4 = (int *)(*(int *)(iVar3 + iVar8 * 4) + 4);
          iVar8 = *piVar4;
          if (iVar8 == -1) break;
          *(undefined4 *)(*(int *)(iVar3 + iVar8 * 4) + 0x38) = 1;
          iVar3 = *(int *)(param_1 + 0x14);
          iVar8 = *piVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < puVar1[3]);
    }
    uVar6 = 0;
    if (puVar1[1] != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      do {
        *(undefined4 *)(*(int *)(iVar3 + *(int *)(puVar1[2] + uVar6 * 4) * 4) + 0x38) = 1;
        iVar8 = *(int *)(puVar1[2] + uVar6 * 4);
        while( true ) {
          iVar3 = *(int *)(param_1 + 0x14);
          piVar4 = (int *)(*(int *)(iVar3 + iVar8 * 4) + 4);
          iVar8 = *piVar4;
          if (iVar8 == -1) break;
          *(undefined4 *)(*(int *)(iVar3 + iVar8 * 4) + 0x38) = 1;
          iVar8 = *piVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < puVar1[1]);
    }
  } while( true );
}

