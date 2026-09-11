/* spd-match: far pct=5.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f57dd();
int __cdecl FUN_005f57fd();
extern void LAB_005f6258(void);
extern void LAB_005f639b(void);

int FUN_005f604f(int *param_1,uint param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float local_48 [4];
  short *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if ((param_1 == (int *)0x0) || (param_4 == (int *)0x0)) {
    return -0x7789f794;
  }
  iVar4 = FUN_005f57dd(&local_34);
  if (iVar4 < 0) {
    return iVar4;
  }
  uVar5 = *(uint *)(local_34 + 8) & 0xffff0000;
  if (uVar5 == 0xfffe0000) {
    local_24 = 1;
  }
  else {
    if (uVar5 != 0xffff0000) {
      return -0x7789f4a7;
    }
    local_24 = 0;
  }
  iVar4 = FUN_005f57fd(param_2,&local_8,&local_38,0);
  if (iVar4 < 0) {
    return iVar4;
  }
  if (*local_38 == 3) {
    uVar1 = local_38[3];
    uVar2 = local_38[2];
  }
  else {
    uVar1 = local_38[2];
    uVar2 = local_38[3];
  }
  uVar8 = (uint)uVar1;
  uVar5 = (uint)uVar2;
  sVar3 = *(short *)(local_8 + 4);
  if (((sVar3 != 2) && ((sVar3 != 1 || ((*(uint *)(local_34 + 8) & 0xffff) < 0x200)))) &&
     ((sVar3 != 0 || ((*(uint *)(local_34 + 8) & 0xffff) < 0x200)))) {
    return -0x7789f4a7;
  }
  uVar10 = (uint)(ushort)local_38[4];
  if ((uint)param_3[4] < (uint)(ushort)local_38[4]) {
    uVar10 = param_3[4];
  }
  if (((uint)param_3[2] < uVar8) || ((uint)param_3[3] < uVar5)) {
    return -0x7789f794;
  }
  local_34 = (uint)((*param_3 == 3) != (*local_38 == 3));
  local_14 = uVar5;
  if (sVar3 != 0) {
    local_14 = uVar5 + 3 >> 2;
  }
  local_20 = local_14 * uVar8;
  local_c = local_20 * uVar10;
  if ((uint)*(ushort *)(local_8 + 8) < local_20 * uVar10) {
    local_c = (uint)*(ushort *)(local_8 + 8);
  }
  if (sVar3 == 2) {
    param_2 = 0;
    local_30 = 0;
    if (uVar10 != 0) {
      do {
        local_1c = *param_4;
        if (local_1c == 0) {
          param_2 = param_2 + local_20;
          if (local_c <= param_2) {
            return 0;
          }
        }
        else {
          local_10 = 0;
          if (uVar8 != 0) {
            do {
              local_18 = 0.0;
              local_2c = 0;
              if (local_14 != 0) {
                do {
                  uVar9 = 0;
                  do {
                    if (uVar5 <= (uint)local_18) break;
                    if (local_34 == 0) {
                      local_28 = *(float *)(local_1c + (param_3[3] * local_10 + (int)local_18) * 4);
                    }
                    else {
                      local_28 = *(float *)(local_1c + (param_3[2] * (int)local_18 + local_10) * 4);
                    }
                    iVar4 = param_3[1];
                    if (iVar4 == 1) {
                      if (local_28 == 0.0) {
LAB_005f6258:
                        fVar6 = 0.0;
                      }
                      else {
                        fVar6 = 1.0;
                      }
                    }
                    else if (iVar4 == 2) {
                      fVar6 = (float)(int)local_28;
                    }
                    else {
                      fVar6 = local_28;
                      if (iVar4 != 3) goto LAB_005f6258;
                    }
                    local_48[uVar9] = fVar6;
                    uVar9 = uVar9 + 1;
                    local_18 = (float)((int)local_18 + 1);
                  } while (uVar9 < 4);
                  if (uVar9 < 4) {
                    pfVar11 = local_48 + uVar9;
                    for (iVar4 = 4 - uVar9; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *pfVar11 = 0.0;
                      pfVar11 = pfVar11 + 1;
                    }
                  }
                  if (local_24 == 0) {
                    iVar4 = (**(code **)(*param_1 + 0x1b4))
                                      (param_1,*(ushort *)(local_8 + 6) + param_2,local_48,1);
                  }
                  else {
                    iVar4 = (**(code **)(*param_1 + 0x178))();
                  }
                  if (iVar4 < 0) {
                    return iVar4;
                  }
                  param_2 = param_2 + 1;
                  if (local_c <= param_2) {
                    return 0;
                  }
                  local_2c = local_2c + 1;
                } while (local_2c < local_14);
              }
              local_10 = local_10 + 1;
            } while (local_10 < uVar8);
          }
        }
        local_30 = local_30 + 1;
        param_4 = param_4 + 1;
      } while (local_30 < uVar10);
    }
  }
  else if (sVar3 == 1) {
    param_2 = 0;
    local_28 = 0.0;
    if (uVar10 != 0) {
      do {
        local_1c = *param_4;
        if (local_1c == 0) {
          param_2 = param_2 + local_20;
          if (local_c <= param_2) {
            return 0;
          }
        }
        else {
          local_10 = 0;
          if (uVar8 != 0) {
            do {
              local_30 = 0;
              local_2c = 0;
              if (local_14 != 0) {
                do {
                  uVar9 = 0;
                  do {
                    if (uVar5 <= local_30) break;
                    if (local_34 == 0) {
                      iVar4 = param_3[3] * local_10 + local_30;
                    }
                    else {
                      iVar4 = param_3[2] * local_30 + local_10;
                    }
                    fVar6 = *(float *)(local_1c + iVar4 * 4);
                    iVar4 = param_3[1];
                    local_18 = fVar6;
                    if (iVar4 == 1) {
                      local_48[uVar9] = (float)(uint)(fVar6 != 0.0);
                    }
                    else {
                      if (iVar4 != 2) {
                        if (iVar4 != 3) {
                          local_48[uVar9] = 0.0;
                          goto LAB_005f639b;
                        }
                        fVar6 = (float)__ftol();
                      }
                      local_48[uVar9] = fVar6;
                    }
LAB_005f639b:
                    uVar9 = uVar9 + 1;
                    local_30 = local_30 + 1;
                  } while (uVar9 < 4);
                  if (uVar9 < 4) {
                    pfVar11 = local_48 + uVar9;
                    for (iVar4 = 4 - uVar9; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *pfVar11 = 0.0;
                      pfVar11 = pfVar11 + 1;
                    }
                  }
                  if (local_24 == 0) {
                    iVar4 = (**(code **)(*param_1 + 0x1bc))
                                      (param_1,*(ushort *)(local_8 + 6) + param_2,local_48,1);
                  }
                  else {
                    iVar4 = (**(code **)(*param_1 + 0x180))();
                  }
                  if (iVar4 < 0) {
                    return iVar4;
                  }
                  param_2 = param_2 + 1;
                  if (local_c <= param_2) {
                    return 0;
                  }
                  local_2c = local_2c + 1;
                } while (local_2c < local_14);
              }
              local_10 = local_10 + 1;
            } while (local_10 < uVar8);
          }
        }
        local_28 = (float)((int)local_28 + 1);
        param_4 = param_4 + 1;
      } while ((uint)local_28 < uVar10);
    }
  }
  else if (sVar3 == 0) {
    param_2 = 0;
    local_30 = 0;
    if (uVar10 != 0) {
      do {
        iVar4 = *param_4;
        if (iVar4 == 0) {
          param_2 = param_2 + local_20;
          if (local_c <= param_2) {
            return 0;
          }
        }
        else {
          uVar9 = 0;
          if (uVar8 != 0) {
            do {
              uVar12 = 0;
              if (uVar5 != 0) {
                do {
                  if (local_34 == 0) {
                    iVar7 = param_3[3] * uVar9 + uVar12;
                  }
                  else {
                    iVar7 = param_3[2] * uVar12 + uVar9;
                  }
                  if (local_24 == 0) {
                    iVar7 = (**(code **)(*param_1 + 0x1c4))
                                      (param_1,*(ushort *)(local_8 + 6) + param_2,iVar4 + iVar7 * 4,
                                       1);
                  }
                  else {
                    iVar7 = (**(code **)(*param_1 + 0x188))();
                  }
                  if (iVar7 < 0) {
                    return iVar7;
                  }
                  param_2 = param_2 + 1;
                  if (local_c <= param_2) {
                    return 0;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar5);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
          }
        }
        local_30 = local_30 + 1;
        param_4 = param_4 + 1;
      } while (local_30 < uVar10);
    }
  }
  return 0;
}
