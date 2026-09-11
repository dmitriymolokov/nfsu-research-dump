/* spd-match: far pct=5.01 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt2_tc_c */
#include "ghidra_compat.h"

int __cdecl FUN_005f7a96();
int __cdecl FUN_005f7aa3();
int __cdecl FUN_005f7b45();
int __cdecl FUN_005f7b57();
int __cdecl FUN_005fb8ae();
int __cdecl FUN_005fbec8();
extern void LAB_006027bb(void);
extern void LAB_0060293a(void);
extern void LAB_00602a5c(void);
extern void LAB_00602b01(void);

undefined4  FUN_0060254c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int local_68 [4];
  int local_58 [4];
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  local_18 = *(uint *)(iVar5 + 0xc);
  iVar3 = *(int *)(param_1 + 8);
  local_14 = (uint *)0x0;
  local_c = (int *)0x0;
  local_34 = (int *)0x0;
  if (iVar3 != 0) {
    puVar12 = *(undefined4 **)(param_1 + 0x14);
    do {
      if ((param_2 == *(int *)*puVar12) && (uVar4 = ((int *)*puVar12)[2], local_34 <= uVar4)) {
        local_34 = (int *)(uVar4 + 1);
      }
      puVar12 = puVar12 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar10 = local_34;
  if (param_4 != 0) {
    *(uint *)(iVar5 + 8) = param_3;
  }
  local_1c = param_1;
  local_48 = _malloc((int)local_34 << 2);
  if (local_48 != (undefined4 *)0x0) {
    puVar12 = local_48;
    for (uVar4 = (uint)piVar10 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    uVar4 = 0;
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar10 = *(int **)(*(int *)(param_1 + 0x14) + uVar4 * 4);
        if (param_2 == *piVar10) {
          if ((uint)local_48[piVar10[2]] <= (uint)piVar10[3]) {
            local_48[piVar10[2]] = piVar10[3] + 1;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
    local_14 = _malloc(param_3 << 4);
    if ((local_14 != (uint *)0x0) && (local_c = _malloc(param_3 << 2), local_c != (int *)0x0)) {
      puVar9 = local_14;
      for (iVar5 = (param_3 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (uint *)((int)puVar9 + 1);
      }
      uVar4 = 0;
      if (param_3 != 0) {
        uVar13 = 0;
        do {
          uVar6 = uVar13 % param_3;
          uVar13 = uVar13 + 7;
          local_c[uVar4] = uVar6;
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_3);
      }
      FUN_005fb8ae();
      uVar4 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + uVar4 * 4) + 0x1c) = 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 8));
      }
      local_8 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x18) + local_8 * 4);
          if (param_4 == 0) {
            local_34 = (int *)0x0;
            if ((local_8 != 0) && (param_3 != 0)) {
              local_3c = param_3;
              puVar9 = local_14;
              do {
                uVar4 = 0;
                puVar2 = puVar9;
                do {
                  if (local_8 <= *puVar2) {
                    local_34 = (int *)((int)local_34 + 1);
                    break;
                  }
                  uVar4 = uVar4 + 1;
                  puVar2 = puVar2 + 1;
                } while (uVar4 < 4);
                puVar9 = puVar9 + 4;
                local_3c = local_3c - 1;
              } while (local_3c != 0);
            }
            *(int **)(iVar5 + 0x24) = local_34;
            *(int **)(iVar5 + 0x2c) = local_34;
          }
          local_20 = iVar5;
          iVar3 = FUN_005f7a96();
          if (iVar3 == 0) {
            FUN_005f7b45();
            local_2c = 0;
            iVar3 = FUN_005f7aa3();
            if (iVar3 != 0) {
              if ((*(byte *)(param_1 + 0x90) & 6) != 0) {
                local_30 = (int *)0x0;
                local_2c = 0;
                if (*(int *)(iVar5 + 0xc) != 0) {
                  local_34 = *(int **)(iVar5 + 8);
                  iVar3 = *(int *)(param_1 + 0x14);
                  local_44 = *(uint *)(*(int *)(iVar3 + *local_34 * 4) + 0xc);
                  iVar7 = *(int *)(iVar5 + 0x10) - (int)local_34;
                  local_3c = *(uint *)(iVar5 + 0xc);
                  do {
                    uVar4 = *(uint *)(*(int *)(iVar3 + *local_34 * 4) + 0xc);
                    if (*(uint *)(*(int *)(iVar3 + *(int *)(iVar7 + (int)local_34) * 4) + 0xc) ==
                        uVar4) {
                      local_30 = (int *)((int)local_30 + 1);
                    }
                    if (local_44 == uVar4) {
                      local_2c = local_2c + 1;
                    }
                    local_34 = local_34 + 1;
                    local_3c = local_3c - 1;
                  } while (local_3c != 0);
                }
                if ((local_30 < (int *)(*(int *)(iVar5 + 0xc) - 1U)) &&
                   (local_2c != *(int *)(iVar5 + 0xc))) {
                  local_2c = 0;
                  goto LAB_006027bb;
                }
              }
              local_2c = 1;
            }
LAB_006027bb:
            local_34 = (int *)0x0;
            if (*(int *)(iVar5 + 0xc) != 0) {
              do {
                local_30 = *(int **)(*(int *)(param_1 + 0x14) +
                                    *(int *)((int)local_34 * 4 + *(int *)(iVar5 + 0x10)) * 4);
                if (param_2 == *local_30) {
                  if (local_30[7] == -1) {
                    if (((local_2c != 0) &&
                        (piVar10 = *(int **)(*(int *)(param_1 + 0x14) +
                                            *(int *)((int)local_34 * 4 + *(int *)(local_20 + 8)) * 4
                                            ), param_2 == *piVar10)) && (piVar10[7] != -1)) {
                      uVar4 = 0;
                      if (param_3 != 0) {
                        do {
                          if (local_c[uVar4] == piVar10[7]) break;
                          uVar4 = uVar4 + 1;
                        } while (uVar4 < param_3);
                      }
                      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                        local_c[uVar4] = local_c[uVar4 - 1];
                      }
                      *local_c = piVar10[7];
                    }
                    local_40 = local_48[local_30[2]];
                    uVar4 = ~-(uint)(1 < local_40) & local_18 - 1;
                    local_44 = local_30[0xf];
                    local_38 = 0xffffffff;
                    iVar5 = (-(uint)(1 < local_40) & 2) - 1;
                    local_3c = 0;
                    if (local_44 <= (uint)local_30[0xb]) {
                      local_44 = local_30[0xb] + 1;
                    }
                    local_28 = 0;
                    if (param_3 != 0) {
                      do {
                        iVar3 = local_c[local_28];
                        uVar13 = 0;
                        local_10 = 0;
                        local_24 = 0;
                        if (local_18 != 0) {
                          do {
                            uVar6 = local_24;
                            if (local_40 <= local_24) goto LAB_0060293a;
                            if (local_18 <= uVar13) break;
                            puVar9 = local_14 + uVar4 + uVar13 * iVar5 + iVar3 * 4;
                            do {
                              if (*puVar9 <= local_8) break;
                              uVar13 = uVar13 + 1;
                              puVar9 = puVar9 + iVar5;
                            } while (uVar13 < local_18);
                            if (local_18 <= uVar13) break;
                            local_58[local_24] = uVar13 * iVar5 + uVar4;
                            local_10 = local_10 + (uVar13 - uVar6) * 0x1000000;
                            uVar13 = uVar13 + 1;
                            local_24 = local_24 + 1;
                          } while (uVar13 < local_18);
                        }
                        if (local_40 <= local_24) {
LAB_0060293a:
                          if (local_18 != 0) {
                            puVar9 = local_14 + iVar3 * 4;
                            uVar13 = local_18;
                            do {
                              if (local_8 < *puVar9) {
                                uVar6 = *puVar9 - local_44;
                                uVar8 = (int)uVar6 >> 0x1f;
                                local_10 = local_10 + ((uVar6 ^ uVar8) - uVar8);
                              }
                              else {
                                local_10 = local_10 + 0x10000;
                              }
                              puVar9 = puVar9 + 1;
                              uVar13 = uVar13 - 1;
                            } while (uVar13 != 0);
                          }
                          if (local_10 < local_38) {
                            local_68[0] = local_58[0];
                            local_68[1] = local_58[1];
                            local_68[2] = local_58[2];
                            local_3c = local_28;
                            local_38 = local_10;
                            local_68[3] = local_58[3];
                            if (local_10 == 0) break;
                          }
                        }
                        local_28 = local_28 + 1;
                      } while (local_28 < param_3);
                      if (local_38 != 0xffffffff) {
                        piVar10 = local_c + local_3c;
                        iVar5 = *piVar10;
                        if (local_3c < param_3 - 1) {
                          piVar14 = piVar10;
                          for (iVar3 = (param_3 - 1) - local_3c; piVar10 = piVar10 + 1, iVar3 != 0;
                              iVar3 = iVar3 + -1) {
                            *piVar14 = *piVar10;
                            piVar14 = piVar14 + 1;
                          }
                        }
                        local_c[param_3 - 1] = iVar5;
                        uVar4 = 0;
                        if (*(int *)(local_1c + 8) != 0) {
                          do {
                            iVar3 = uVar4 * 4;
                            piVar10 = *(int **)(iVar3 + *(int *)(local_1c + 0x14));
                            if (((param_2 == *piVar10) && (piVar10[2] == local_30[2])) &&
                               ((iVar7 = FUN_005f7b57(), iVar7 != 0 ||
                                (local_8 <=
                                 *(uint *)(*(int *)(iVar3 + *(int *)(local_1c + 0x14)) + 0x3c))))) {
                              iVar7 = *(int *)(iVar3 + *(int *)(local_1c + 0x14));
                              iVar1 = local_68[*(int *)(iVar7 + 0xc)];
                              *(int *)(iVar7 + 0x1c) = iVar5;
                              if (param_4 != 0) {
                                *(int *)(*(int *)(iVar3 + *(int *)(local_1c + 0x14)) + 0xc) = iVar1;
                              }
                              iVar3 = *(int *)(iVar3 + *(int *)(local_1c + 0x14));
                              uVar13 = *(uint *)(iVar3 + 0x3c);
                              uVar6 = *(int *)(iVar3 + 0x2c) + 1;
                              if (uVar6 < uVar13) {
                                uVar6 = uVar13;
                              }
                              local_14[iVar1 + iVar5 * 4] = uVar6;
                            }
                            uVar4 = uVar4 + 1;
                          } while (uVar4 < *(uint *)(local_1c + 8));
                        }
                        goto LAB_00602a5c;
                      }
                    }
                    FUN_005fbec8(local_1c,*(undefined4 *)(local_20 + 0x34),0xfa4,
                                 "expression too complex");
                    uVar11 = 0x80004005;
                    goto LAB_00602b01;
                  }
                  uVar4 = 0;
                  if (param_3 != 0) {
                    do {
                      if (local_c[uVar4] == local_30[7]) break;
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < param_3);
                  }
                  if (uVar4 < param_3 - 1) {
                    piVar10 = local_c + uVar4;
                    piVar14 = piVar10;
                    for (iVar5 = (param_3 - 1) - uVar4; piVar10 = piVar10 + 1, iVar5 != 0;
                        iVar5 = iVar5 + -1) {
                      *piVar14 = *piVar10;
                      piVar14 = piVar14 + 1;
                    }
                  }
                  local_c[param_3 - 1] = local_30[7];
                }
LAB_00602a5c:
                local_34 = (int *)((int)local_34 + 1);
                param_1 = local_1c;
                iVar5 = local_20;
              } while (local_34 < *(uint *)(local_20 + 0xc));
            }
            if (param_4 == 0) {
              local_3c = 0;
              if (param_3 != 0) {
                local_44 = param_3;
                puVar9 = local_14;
                do {
                  uVar4 = 0;
                  puVar2 = puVar9;
                  do {
                    if (local_8 < *puVar2) {
                      local_3c = local_3c + 1;
                      break;
                    }
                    uVar4 = uVar4 + 1;
                    puVar2 = puVar2 + 1;
                  } while (uVar4 < 4);
                  puVar9 = puVar9 + 4;
                  local_44 = local_44 - 1;
                } while (local_44 != 0);
              }
              *(uint *)(iVar5 + 0x2c) = local_3c;
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(param_1 + 0xc));
      }
      if ((param_4 != 0) && (uVar4 = 0, *(int *)(param_1 + 8) != 0)) {
        do {
          piVar10 = *(int **)(*(int *)(param_1 + 0x14) + uVar4 * 4);
          if (param_2 == *piVar10) {
            if (piVar10[7] == -1) {
              *piVar10 = *(int *)(param_1 + 0x4c);
            }
            else {
              piVar10[2] = piVar10[7];
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 8));
      }
      uVar11 = 0;
      goto LAB_00602b01;
    }
  }
  uVar11 = 0x8007000e;
LAB_00602b01:
  _free(local_48);
  _free(local_14);
  _free(local_c);
  return uVar11;
}
