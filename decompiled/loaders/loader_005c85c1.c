/* Decompiled from Speed.exe @ 005c85c1 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c85c1(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar6 = param_4;
  piVar5 = param_3;
  piVar1 = (int *)*param_1;
  iVar8 = piVar1[1];
  local_c = piVar1[4];
  local_14 = 0;
  if (local_c == 0) {
    local_c = 1;
  }
  if (-1 < iVar8) {
    if (iVar8 < 4) {
      uVar2 = piVar1[5];
      uVar3 = piVar1[6];
      iVar8 = *piVar1;
      uVar7 = (uint)((uVar2 & 3) != 0) + (uVar2 >> 2);
      local_10 = uVar7;
      local_8 = uVar2;
      if (iVar8 == 1) {
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar7) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar8 = (int)param_3 << 2;
                  do {
                    *(float *)(*piVar5 + uVar9 * 4) = (float)*(int *)(iVar8 + *param_2);
                    uVar9 = uVar9 + 1;
                    iVar8 = iVar8 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x10;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      else if (iVar8 == 2) {
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar7) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar8 = (int)param_3 << 2;
                  do {
                    fVar4 = (float)*(int *)(iVar8 + *param_2);
                    if (*(int *)(iVar8 + *param_2) < 0) {
                      fVar4 = fVar4 + _DAT_006cc858;
                    }
                    *(float *)(*piVar5 + uVar9 * 4) = fVar4;
                    uVar9 = uVar9 + 1;
                    iVar8 = iVar8 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x10;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      else {
        if (iVar8 != 3) {
          return -0x7fffbffb;
        }
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar7) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar8 = (int)param_3 << 2;
                  do {
                    *(undefined4 *)(*piVar5 + uVar9 * 4) = *(undefined4 *)(iVar8 + *param_2);
                    uVar9 = uVar9 + 1;
                    iVar8 = iVar8 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x10;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar8 == 5) {
      local_10 = 0;
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      if (local_c == 0) {
        return 0;
      }
      do {
        if (*puVar6 == 0) {
          return local_14;
        }
        param_4 = (uint *)0x0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            if (*puVar6 == 0) break;
            local_14 = FUN_005c85c1(param_1,param_2,param_3,puVar6);
            if (local_14 < 0) {
              return local_14;
            }
            param_4 = (uint *)((int)param_4 + 1);
          } while (param_4 < uVar2);
        }
        local_10 = local_10 + 1;
        if (local_c <= local_10) {
          return local_14;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}

