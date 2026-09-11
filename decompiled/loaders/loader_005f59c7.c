/* spd-match: far pct=5.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f57dd();
int __cdecl FUN_005f57fd();
extern int _DAT_006cc970;
extern void LAB_005f5a22(void);
extern void LAB_005f5c3b(void);
extern void LAB_005f5d0e(void);
extern void LAB_005f5e93(void);
extern void LAB_005f6043(void);

int FUN_005f59c7(int *param_1,int param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  float *pfVar14;
  uint local_40;
  float local_3c [4];
  ushort *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == (int *)0x0) || (param_4 == 0)) {
    return -0x7789f794;
  }
  iVar6 = FUN_005f57dd(&local_1c);
  if (iVar6 < 0) {
    return iVar6;
  }
  uVar7 = *(uint *)((int)local_1c + 8) & 0xffff0000;
  if (uVar7 == 0xfffe0000) {
    local_8 = 1;
LAB_005f5a22:
    iVar6 = FUN_005f57fd(param_2,&local_c,&local_2c,0);
    if (iVar6 < 0) {
      return iVar6;
    }
    uVar7 = (uint)*local_2c;
    uVar1 = local_2c[4];
    if (uVar7 == 3) {
      uVar2 = local_2c[3];
      uVar3 = local_2c[2];
    }
    else {
      uVar2 = local_2c[2];
      uVar3 = local_2c[3];
    }
    uVar12 = (uint)uVar2;
    fVar8 = (float)(uint)uVar3;
    if (param_3[1] == 0) {
      param_3[1] = (uint)local_2c[1];
      *param_3 = uVar7;
      param_3[2] = uVar12;
      param_3[4] = param_3[3] / ((int)fVar8 * uVar12);
      param_3[3] = (uint)fVar8;
    }
    sVar4 = *(short *)(local_c + 4);
    local_24 = 0.0;
    if (sVar4 == 2) {
      if ((((uVar7 == 1) && (uVar12 == 1)) && ((uint)fVar8 < 5)) &&
         ((*param_3 == 0 && (param_3[1] == 2)))) {
        *param_3 = 1;
        param_3[1] = 3;
        param_3[3] = 4;
        local_24 = 1.4013e-45;
      }
    }
    else if (((sVar4 != 1) || ((*(uint *)((int)local_1c + 8) & 0xffff) < 0x200)) &&
            ((sVar4 != 0 || ((*(uint *)((int)local_1c + 8) & 0xffff) < 0x200)))) goto LAB_005f6043;
    local_40 = (uint)uVar1;
    if (param_3[4] < (uint)uVar1) {
      local_40 = param_3[4];
    }
    if ((param_3[2] < uVar12) || (param_3[3] < (uint)fVar8)) {
      iVar6 = -0x7789f794;
    }
    else {
      sVar4 = *(short *)(local_c + 4);
      local_10 = (uint)((*param_3 == 3) != (uVar7 == 3));
      if (sVar4 == 0) {
        local_28 = 1.4013e-45;
        local_18 = fVar8;
      }
      else {
        local_18 = (float)((int)fVar8 + 3U >> 2);
        local_28 = fVar8;
      }
      uVar10 = (uint)*(ushort *)(local_c + 8);
      uVar7 = (int)local_18 * uVar12 * local_40;
      if (uVar10 <= uVar7 && uVar7 - uVar10 != 0) {
        uVar7 = uVar10;
      }
      param_2 = param_4;
      if (sVar4 == 2) {
        if (local_24 == 0.0) {
          if ((((uVar12 == param_3[2]) && (fVar8 == (float)param_3[3])) &&
              (((uint)local_28 & 3) == 0)) && ((local_10 == 0 && (param_3[1] == 3)))) {
            if (local_8 != 0) {
              iVar6 = (**(code **)(*param_1 + 0x178))();
              return iVar6;
            }
            iVar6 = (**(code **)(*param_1 + 0x1b4))
                              (param_1,*(undefined2 *)(local_c + 6),param_4,uVar7);
            return iVar6;
          }
          param_4 = 0;
          local_28 = 0.0;
          iVar6 = local_c;
          if (local_40 != 0) {
            do {
              local_14 = 0;
              if (uVar12 != 0) {
                do {
                  local_1c = 0.0;
                  local_24 = 0.0;
                  if (local_18 != 0.0) {
                    do {
                      uVar10 = 0;
                      do {
                        if ((uint)fVar8 <= (uint)local_1c) break;
                        if (local_10 == 0) {
                          local_20 = *(float *)(param_2 +
                                               (param_3[3] * local_14 + (int)local_1c) * 4);
                        }
                        else {
                          local_20 = *(float *)(param_2 +
                                               (param_3[2] * (int)local_1c + local_14) * 4);
                        }
                        uVar5 = param_3[1];
                        if (uVar5 == 1) {
                          if (local_20 == 0.0) {
LAB_005f5d0e:
                            fVar9 = 0.0;
                          }
                          else {
                            fVar9 = 1.0;
                          }
                        }
                        else if (uVar5 == 2) {
                          fVar9 = (float)(int)local_20;
                        }
                        else {
                          fVar9 = local_20;
                          if (uVar5 != 3) goto LAB_005f5d0e;
                        }
                        local_3c[uVar10] = fVar9;
                        uVar10 = uVar10 + 1;
                        local_1c = (float)((int)local_1c + 1);
                      } while (uVar10 < 4);
                      if (uVar10 < 4) {
                        pfVar14 = local_3c + uVar10;
                        for (iVar11 = 4 - uVar10; iVar11 != 0; iVar11 = iVar11 + -1) {
                          *pfVar14 = 0.0;
                          pfVar14 = pfVar14 + 1;
                        }
                      }
                      if (local_8 == 0) {
                        iVar6 = (**(code **)(*param_1 + 0x1b4))
                                          (param_1,*(ushort *)(iVar6 + 6) + param_4,local_3c,1);
                      }
                      else {
                        iVar6 = (**(code **)(*param_1 + 0x178))();
                      }
                      if (iVar6 < 0) {
                        return iVar6;
                      }
                      param_4 = param_4 + 1;
                      if (uVar7 <= param_4) goto LAB_005f5c3b;
                      local_24 = (float)((int)local_24 + 1);
                      iVar6 = local_c;
                    } while ((uint)local_24 < (uint)local_18);
                  }
                  local_14 = local_14 + 1;
                } while (local_14 < uVar12);
              }
              local_28 = (float)((int)local_28 + 1);
              param_2 = param_2 + param_3[3] * param_3[2] * 4;
            } while ((uint)local_28 < local_40);
          }
        }
        else {
          uVar12 = 0;
          if (uVar7 != 0) {
            pbVar13 = (byte *)(param_4 + 1);
            do {
              local_3c[0] = (float)pbVar13[1] * _DAT_006cc970;
              local_3c[1] = (float)*pbVar13 * _DAT_006cc970;
              local_3c[2] = (float)(*(uint *)(pbVar13 + -1) & 0xff) * _DAT_006cc970;
              local_3c[3] = (float)pbVar13[2] * _DAT_006cc970;
              if (local_8 == 0) {
                iVar6 = (**(code **)(*param_1 + 0x1b4))
                                  (param_1,*(ushort *)(local_c + 6) + uVar12,local_3c,1);
              }
              else {
                iVar6 = (**(code **)(*param_1 + 0x178))();
              }
              if (iVar6 < 0) {
                return iVar6;
              }
              uVar12 = uVar12 + 1;
              pbVar13 = pbVar13 + 4;
            } while (uVar12 < uVar7);
          }
        }
      }
      else if (sVar4 == 1) {
        if (((uVar12 == param_3[2]) && (fVar8 == (float)param_3[3])) &&
           ((((uint)local_28 & 3) == 0 && ((local_10 == 0 && (param_3[1] == 2)))))) {
          if (local_8 != 0) {
            iVar6 = (**(code **)(*param_1 + 0x180))();
            return iVar6;
          }
          iVar6 = (**(code **)(*param_1 + 0x1bc))
                            (param_1,*(undefined2 *)(local_c + 6),param_4,uVar7);
          return iVar6;
        }
        param_4 = 0;
        local_20 = 0.0;
        iVar6 = local_c;
        if (local_40 != 0) {
          do {
            local_14 = 0;
            if (uVar12 != 0) {
              do {
                local_28 = 0.0;
                local_24 = 0.0;
                if (local_18 != 0.0) {
                  do {
                    uVar10 = 0;
                    do {
                      if ((uint)fVar8 <= (uint)local_28) break;
                      if (local_10 == 0) {
                        iVar11 = param_3[3] * local_14 + (int)local_28;
                      }
                      else {
                        iVar11 = param_3[2] * (int)local_28 + local_14;
                      }
                      fVar9 = *(float *)(param_2 + iVar11 * 4);
                      uVar5 = param_3[1];
                      local_1c = fVar9;
                      if (uVar5 == 1) {
                        local_3c[uVar10] = (float)(uint)(fVar9 != 0.0);
                      }
                      else {
                        if (uVar5 != 2) {
                          if (uVar5 != 3) {
                            local_3c[uVar10] = 0.0;
                            goto LAB_005f5e93;
                          }
                          fVar9 = (float)__ftol();
                        }
                        local_3c[uVar10] = fVar9;
                      }
LAB_005f5e93:
                      uVar10 = uVar10 + 1;
                      local_28 = (float)((int)local_28 + 1);
                    } while (uVar10 < 4);
                    if (uVar10 < 4) {
                      pfVar14 = local_3c + uVar10;
                      for (iVar11 = 4 - uVar10; iVar11 != 0; iVar11 = iVar11 + -1) {
                        *pfVar14 = 0.0;
                        pfVar14 = pfVar14 + 1;
                      }
                    }
                    if (local_8 == 0) {
                      iVar6 = (**(code **)(*param_1 + 0x1bc))
                                        (param_1,*(ushort *)(iVar6 + 6) + param_4,local_3c,1);
                    }
                    else {
                      iVar6 = (**(code **)(*param_1 + 0x180))();
                    }
                    if (iVar6 < 0) {
                      return iVar6;
                    }
                    param_4 = param_4 + 1;
                    if (uVar7 <= param_4) goto LAB_005f5c3b;
                    local_24 = (float)((int)local_24 + 1);
                    iVar6 = local_c;
                  } while ((uint)local_24 < (uint)local_18);
                }
                local_14 = local_14 + 1;
              } while (local_14 < uVar12);
            }
            local_20 = (float)((int)local_20 + 1);
            param_2 = param_2 + param_3[3] * param_3[2] * 4;
          } while ((uint)local_20 < local_40);
        }
      }
      else if (sVar4 == 0) {
        if (((local_10 == 0) && (uVar12 == param_3[2])) && (fVar8 == (float)param_3[3])) {
          if (local_8 != 0) {
            iVar6 = (**(code **)(*param_1 + 0x188))();
            return iVar6;
          }
          iVar6 = (**(code **)(*param_1 + 0x1c4))
                            (param_1,*(undefined2 *)(local_c + 6),param_4,uVar7);
          return iVar6;
        }
        param_4 = 0;
        local_28 = 0.0;
        iVar6 = local_c;
        if (local_40 != 0) {
          do {
            local_14 = 0;
            if (uVar12 != 0) {
              do {
                local_18 = 0.0;
                if (fVar8 != 0.0) {
                  do {
                    if (local_10 == 0) {
                      iVar11 = param_3[3] * local_14 + (int)local_18;
                    }
                    else {
                      iVar11 = param_3[2] * (int)local_18 + local_14;
                    }
                    if (local_8 == 0) {
                      iVar6 = (**(code **)(*param_1 + 0x1c4))
                                        (param_1,*(ushort *)(iVar6 + 6) + param_4,
                                         param_2 + iVar11 * 4,1);
                    }
                    else {
                      iVar6 = (**(code **)(*param_1 + 0x188))();
                    }
                    if (iVar6 < 0) {
                      return iVar6;
                    }
                    param_4 = param_4 + 1;
                    if (uVar7 <= param_4) goto LAB_005f5c3b;
                    local_18 = (float)((int)local_18 + 1);
                    iVar6 = local_c;
                  } while ((uint)local_18 < (uint)fVar8);
                }
                local_14 = local_14 + 1;
              } while (local_14 < uVar12);
            }
            local_28 = (float)((int)local_28 + 1);
            param_2 = param_2 + param_3[3] * param_3[2] * 4;
          } while ((uint)local_28 < local_40);
        }
      }
LAB_005f5c3b:
      iVar6 = 0;
    }
  }
  else {
    if (uVar7 == 0xffff0000) {
      local_8 = 0;
      goto LAB_005f5a22;
    }
LAB_005f6043:
    iVar6 = -0x7789f4a7;
  }
  return iVar6;
}
