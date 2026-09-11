/* Decompiled from Speed.exe @ 005c8b31 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005c8b31(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar5 = param_4;
  piVar4 = param_3;
  piVar1 = (int *)*param_1;
  iVar6 = piVar1[1];
  local_c = piVar1[4];
  local_18 = 0;
  if (local_c == 0) {
    local_c = 1;
  }
  if (-1 < iVar6) {
    if (iVar6 < 4) {
      uVar2 = piVar1[5];
      uVar3 = piVar1[6];
      iVar6 = *piVar1;
      uVar8 = (uint)((uVar2 & 3) != 0) + (uVar2 >> 2);
      local_10 = uVar8;
      local_8 = uVar2;
      if (iVar6 == 1) {
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar6 = (int)param_3 << 2;
                  do {
                    uVar7 = __ftol();
                    *(undefined4 *)(iVar6 + *param_2) = uVar7;
                    uVar9 = uVar9 + 1;
                    iVar6 = iVar6 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar4 = *piVar4 + local_10 * 0x20;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
        }
      }
      else if (iVar6 == 2) {
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar6 = (int)param_3 << 2;
                  do {
                    uVar7 = __ftol();
                    *(undefined4 *)(iVar6 + *param_2) = uVar7;
                    iVar6 = iVar6 + uVar3 * 4;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < local_8);
                }
                *piVar4 = *piVar4 + local_10 * 0x20;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
        }
      }
      else {
        if (iVar6 != 3) {
          return -0x7fffbffb;
        }
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*puVar5 == 0) break;
            param_4 = (uint *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *puVar5;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar6 = (int)param_4 << 2;
                  do {
                    *(float *)(iVar6 + *param_2) = (float)*(double *)(*param_3 + uVar9 * 8);
                    uVar9 = uVar9 + 1;
                    iVar6 = iVar6 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *param_3 = *param_3 + local_10 * 0x20;
                *puVar5 = *puVar5 - local_10;
                param_4 = (uint *)((int)param_4 + 1);
              } while (param_4 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
        }
      }
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar6 == 5) {
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      local_14 = 0;
      if (local_c == 0) {
        return 0;
      }
      do {
        if (*puVar5 == 0) {
          return local_18;
        }
        param_4 = (uint *)0x0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            if (*puVar5 == 0) break;
            local_18 = FUN_005c8b31(param_1,param_2,param_3,puVar5);
            if (local_18 < 0) {
              return local_18;
            }
            param_4 = (uint *)((int)param_4 + 1);
          } while (param_4 < uVar2);
        }
        local_14 = local_14 + 1;
        if (local_c <= local_14) {
          return local_18;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}

