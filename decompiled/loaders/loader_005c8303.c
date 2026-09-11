/* Decompiled from Speed.exe @ 005c8303 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005c8303(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar6 = param_4;
  piVar5 = param_3;
  piVar4 = param_2;
  piVar1 = (int *)*param_1;
  iVar8 = piVar1[1];
  local_c = piVar1[4];
  local_18 = 0;
  if (local_c == 0) {
    local_c = 1;
  }
  if (-1 < iVar8) {
    if (iVar8 < 4) {
      uVar2 = piVar1[5];
      uVar3 = piVar1[6];
      iVar8 = *piVar1;
      uVar9 = (uint)((uVar2 & 3) != 0) + (uVar2 >> 2);
      local_10 = uVar9;
      local_8 = uVar2;
      if (iVar8 == 1) {
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_2 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar10 = *param_4;
                if (uVar10 == 0) break;
                if (uVar10 < uVar9) {
                  local_8 = uVar10 << 2;
                  local_10 = uVar10;
                }
                uVar10 = 0;
                if (local_8 != 0) {
                  iVar8 = (int)param_2 << 2;
                  do {
                    *(undefined4 *)(*param_3 + uVar10 * 4) = *(undefined4 *)(iVar8 + *piVar4);
                    uVar10 = uVar10 + 1;
                    iVar8 = iVar8 + uVar3 * 4;
                  } while (uVar10 < local_8);
                }
                *param_3 = *param_3 + local_10 * 0x10;
                *param_4 = *param_4 - local_10;
                param_2 = (int *)((int)param_2 + 1);
              } while (param_2 < uVar3);
            }
            *piVar4 = *piVar4 + uVar3 * uVar2 * 4;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
        }
      }
      else if (iVar8 == 2) {
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar10 = *param_4;
                if (uVar10 == 0) break;
                if (uVar10 < uVar9) {
                  local_8 = uVar10 << 2;
                  local_10 = uVar10;
                }
                uVar10 = 0;
                if (local_8 != 0) {
                  iVar8 = (int)param_3 << 2;
                  do {
                    *(undefined4 *)(*piVar5 + uVar10 * 4) = *(undefined4 *)(iVar8 + *param_2);
                    uVar10 = uVar10 + 1;
                    iVar8 = iVar8 + uVar3 * 4;
                  } while (uVar10 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x10;
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
        if (iVar8 != 3) {
          return -0x7fffbffb;
        }
        local_1c = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            local_14 = 0;
            if (uVar3 != 0) {
              do {
                uVar10 = *param_4;
                uVar11 = 0;
                if (uVar10 == 0) break;
                if (uVar10 < uVar9) {
                  local_8 = uVar10 << 2;
                  local_10 = uVar10;
                }
                if (local_8 != 0) {
                  do {
                    uVar7 = __ftol();
                    *(undefined4 *)(*param_3 + uVar11 * 4) = uVar7;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < local_8);
                }
                *param_3 = *param_3 + local_10 * 0x10;
                *param_4 = *param_4 - local_10;
                local_14 = local_14 + 1;
              } while (local_14 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
        }
      }
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar8 == 5) {
      local_14 = 0;
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      if (local_c == 0) {
        return 0;
      }
      do {
        if (*puVar6 == 0) {
          return local_18;
        }
        param_4 = (uint *)0x0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            if (*puVar6 == 0) break;
            local_18 = FUN_005c8303(param_1,param_2,param_3,puVar6);
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

