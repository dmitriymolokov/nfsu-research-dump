/* Decompiled from Speed.exe @ 00607bc1 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00607bc1(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  float *pfVar10;
  int *piVar11;
  char *pcVar12;
  float local_170 [32];
  int local_f0 [32];
  int local_70 [8];
  float local_50 [4];
  int local_40 [5];
  undefined4 local_2c;
  uint local_28;
  uint *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  piVar7 = *(int **)(param_1 + 8);
  pfVar10 = local_170;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar10 = 0.0;
    pfVar10 = pfVar10 + 1;
  }
  piVar11 = local_f0;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_70;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_20 = piVar7;
  local_2c = FUN_005f7478(&DAT_0069ecd8,0x189,0x400000008);
  local_18 = (int *)0x0;
  if (piVar7 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x10);
    piVar7 = *(int **)(param_1 + 0x14);
    do {
      uVar8 = *(uint *)(*(int *)(iVar4 + *(int *)*piVar7 * 4) + 4);
      if (((uVar8 & 0x100) != 0) && ((uVar8 & 0xc0) == 0)) {
        uVar8 = ((int *)*piVar7)[2];
        if (*(uint *)(param_1 + 0x78) < uVar8) {
          pcVar12 = "exceeded maximum constant registers";
LAB_00608068:
          FUN_005fbec8(param_1,0,0x119b,pcVar12);
          return 0x80004005;
        }
        local_f0[uVar8 * 4] = 1;
        local_f0[uVar8 * 4 + 1] = 1;
        local_f0[uVar8 * 4 + 2] = 1;
        local_f0[uVar8 * 4 + 3] = 1;
        local_70[uVar8] = 1;
      }
      local_18 = (int *)((int)local_18 + 1);
      piVar7 = piVar7 + 1;
    } while (local_18 < local_20);
  }
  uVar8 = *(uint *)(param_1 + 0x138);
  uVar6 = *(uint *)(param_1 + 0x134);
  local_c = 0;
  if (uVar6 + uVar8 != 0) {
    do {
      if (local_c < uVar6) {
        local_24 = *(uint **)(*(int *)(param_1 + 0x140) + local_c * 4);
      }
      else {
        local_24 = *(uint **)(*(int *)(param_1 + 0x144) + (local_c - uVar6) * 4);
      }
      local_14 = 0;
      if ((((local_24 != (uint *)0x0) && (local_24[3] != 0)) && (*(int *)local_24[4] != -1)) &&
         ((*local_24 & 0xff000000) != 0)) {
        if (((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)local_24[4] * 4) + 0xc) != 3) &&
            (local_24[3] != 4)) && (uVar6 <= local_c)) {
          iVar4 = 1;
          if ((local_c - uVar6) + 1 < uVar8) {
            uVar5 = (local_c - uVar6) + 1;
            uVar8 = (local_c - uVar6) + 1;
            do {
              iVar1 = *(int *)(*(int *)(param_1 + 0x144) + uVar8 * 4);
              if ((iVar1 != 0) && (*(char *)(iVar1 + 3) != '\0')) break;
              iVar4 = iVar4 + 1;
              uVar5 = uVar5 + 1;
              uVar8 = uVar5;
            } while (uVar5 < *(uint *)(param_1 + 0x138));
          }
          uVar8 = (iVar4 - uVar6) + local_c;
          if (uVar8 < *(uint *)(param_1 + 0x138)) {
            local_14 = *(int *)(*(int *)(param_1 + 0x144) + uVar8 * 4);
            if ((*(int *)(local_14 + 0xc) != 1) ||
               (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + **(int **)(local_14 + 0x10) * 4) + 0xc)
                != 3)) {
              local_14 = 0;
            }
          }
        }
        local_1c = *local_24 & 0xffffff;
        local_40[4] = local_24[1] / local_1c;
        local_28 = 0;
        if (local_40[4] != 0) {
          local_18 = (int *)0x0;
          puVar9 = local_24;
          do {
            puVar2 = local_24;
            local_40[0] = 0;
            local_40[1] = 0;
            local_40[2] = 0;
            local_40[3] = 0;
            puVar9 = (uint *)((int)local_18 + puVar9[2]);
            iVar4 = *(int *)(param_1 + 0x14);
            if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                    **(int **)(iVar4 + (int)*puVar9 * 4) * 4) + 4) & 0x80) != 0) &&
               ((int *)*puVar9 < local_20)) {
              local_10 = 0;
              if (local_1c != 0) {
                local_8 = (int *)(*local_24 & 0xff000000);
                do {
                  uVar8 = local_10;
                  if (local_8 != (int *)0x30000000) {
                    uVar8 = *(uint *)(*(int *)(iVar4 + *(int *)(puVar2[4] + local_10 * 4) * 4) + 0xc
                                     );
                  }
                  local_50[uVar8] = (float)*(double *)(*(int *)(iVar4 + *puVar9 * 4) + 0x10);
                  local_40[uVar8] = 1;
                  local_10 = local_10 + 1;
                  puVar9 = puVar9 + 1;
                } while (local_10 < local_1c);
              }
              if ((local_14 != 0) && (local_10 = *(int *)(local_14 + 4), local_10 != 0)) {
                local_8 = *(int **)(local_14 + 8);
                do {
                  piVar7 = *(int **)(iVar4 + *local_8 * 4);
                  if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar7 * 4) + 4) & 0x80) != 0
                      ) && ((int *)*local_8 < local_20)) {
                    local_40[3] = 1;
                    local_50[3] = (float)*(double *)(piVar7 + 4);
                  }
                  local_8 = local_8 + 1;
                  local_10 = local_10 + -1;
                } while (local_10 != 0);
              }
              local_10 = 0;
              uVar8 = 0;
              do {
                uVar6 = 0;
                if (local_70[local_10] == 0) {
                  local_8 = (int *)0x1;
                  do {
                    if (((*(int *)((int)local_40 + uVar6) != 0) &&
                        (*(float *)((int)local_50 + uVar6) !=
                         *(float *)((int)local_170 + uVar8 + uVar6))) &&
                       (*(int *)((int)local_f0 + uVar8 + uVar6) != 0)) {
                      local_8 = (int *)0x0;
                    }
                    uVar6 = uVar6 + 4;
                  } while (uVar6 < 0x10);
                  if (local_8 != (int *)0x0) break;
                }
                uVar8 = uVar8 + 0x10;
                local_10 = local_10 + 1;
              } while (uVar8 < 0x80);
              uVar8 = local_10;
              if (local_10 == 8) {
                pcVar12 = "program too complex: exceeded available constant registers.";
                goto LAB_00608068;
              }
              local_8 = (int *)0x0;
              uVar6 = 0;
              do {
                if (local_40[uVar6] != 0) {
                  pfVar10 = local_50 + uVar6;
                  iVar4 = uVar6 + uVar8 * 4;
                  local_170[iVar4] = *pfVar10;
                  local_f0[iVar4] = 1;
                  if (((float)_DAT_006ccb10 < *pfVar10) || (*pfVar10 < _DAT_006cc8a8)) {
                    local_8 = (int *)0x1;
                  }
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < 4);
              if (local_8 != (int *)0x0) {
                FUN_005fbf37(param_1,puVar2[0xd]);
              }
              uVar8 = 0;
              piVar7 = local_18;
              if (local_1c != 0) {
                do {
                  uVar6 = uVar8;
                  if ((*puVar2 & 0xff000000) != 0x30000000) {
                    uVar6 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                              *(int *)(puVar2[4] + uVar8 * 4) * 4) + 0xc);
                  }
                  local_8 = piVar7;
                  uVar3 = FUN_005f74cf(local_2c,local_10,uVar6,
                                       *(undefined8 *)
                                        (*(int *)(*(int *)(param_1 + 0x14) +
                                                 *(int *)((int)piVar7 + puVar2[2]) * 4) + 0x10));
                  *(undefined4 *)((int)local_8 + puVar2[2]) = uVar3;
                  uVar8 = uVar8 + 1;
                  local_8 = local_8 + 1;
                  piVar7 = local_8;
                } while (uVar8 < local_1c);
              }
              if ((local_14 != 0) && (local_8 = (int *)0x0, *(int *)(local_14 + 4) != 0)) {
                do {
                  piVar7 = *(int **)(*(int *)(local_14 + 8) + (int)local_8 * 4);
                  piVar11 = *(int **)(*(int *)(param_1 + 0x14) + (int)piVar7 * 4);
                  if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar11 * 4) + 4) & 0x80) !=
                       0) && (piVar7 < local_20)) {
                    uVar3 = FUN_005f74cf(local_2c,local_10,3,*(undefined8 *)(piVar11 + 4));
                    *(undefined4 *)(*(int *)(local_14 + 8) + (int)local_8 * 4) = uVar3;
                  }
                  local_8 = (int *)((int)local_8 + 1);
                } while (local_8 < *(int **)(local_14 + 4));
              }
            }
            local_28 = local_28 + 1;
            local_18 = local_18 + local_1c;
            puVar9 = puVar2;
          } while (local_28 < (uint)local_40[4]);
        }
      }
      uVar8 = *(uint *)(param_1 + 0x138);
      uVar6 = *(uint *)(param_1 + 0x134);
      local_c = local_c + 1;
    } while (local_c < uVar6 + uVar8);
  }
  piVar7 = (int *)0x0;
  if (local_20 != (int *)0x0) {
    do {
      piVar11 = *(int **)(*(int *)(param_1 + 0x14) + (int)piVar7 * 4);
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar11 * 4) + 4) & 0x80) != 0) {
        *piVar11 = *(int *)(param_1 + 0x4c);
      }
      piVar7 = (int *)((int)piVar7 + 1);
    } while (piVar7 < local_20);
  }
  return 0;
}

