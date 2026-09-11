/* Decompiled from Speed.exe @ 005cad01 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005cad01(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar5 = param_4;
  piVar4 = param_3;
  piVar1 = (int *)*param_1;
  iVar7 = piVar1[1];
  local_8 = piVar1[4];
  local_14 = 0;
  if (local_8 == 0) {
    local_8 = 1;
  }
  if (-1 < iVar7) {
    if (iVar7 < 4) {
      uVar2 = piVar1[5];
      uVar3 = piVar1[6];
      iVar7 = *piVar1;
      if (iVar7 == 1) {
        local_18 = 0;
        uVar10 = uVar2;
        if (local_8 != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar8 = *param_4;
                if (uVar8 == 0) break;
                if (uVar8 < uVar10) {
                  uVar10 = uVar8;
                }
                uVar8 = 0;
                if (uVar10 != 0) {
                  iVar7 = (int)param_3 << 2;
                  do {
                    *(undefined4 *)(*piVar4 + uVar8 * 4) = *(undefined4 *)(iVar7 + *param_2);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar7 + uVar3 * 4;
                  } while (uVar8 < uVar10);
                }
                *piVar4 = *piVar4 + uVar10 * 4;
                *param_4 = *param_4 - uVar10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_8);
        }
      }
      else if (iVar7 == 2) {
        local_18 = 0;
        uVar10 = uVar2;
        if (local_8 != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar8 = *param_4;
                if (uVar8 == 0) break;
                if (uVar8 < uVar10) {
                  uVar10 = uVar8;
                }
                uVar8 = 0;
                if (uVar10 != 0) {
                  iVar7 = (int)param_3 << 2;
                  do {
                    *(undefined4 *)(*piVar4 + uVar8 * 4) = *(undefined4 *)(iVar7 + *param_2);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar7 + uVar3 * 4;
                  } while (uVar8 < uVar10);
                }
                *piVar4 = *piVar4 + uVar10 * 4;
                *param_4 = *param_4 - uVar10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_8);
        }
      }
      else {
        if (iVar7 != 3) {
          return -0x7fffbffb;
        }
        local_18 = 0;
        uVar10 = uVar2;
        if (local_8 != 0) {
          do {
            if (*param_4 == 0) break;
            local_c = 0;
            if (uVar3 != 0) {
              do {
                uVar9 = 0;
                uVar8 = *param_4;
                if (uVar8 == 0) break;
                if (uVar8 < uVar10) {
                  uVar10 = uVar8;
                }
                if (uVar10 != 0) {
                  do {
                    uVar6 = __ftol();
                    *(undefined4 *)(*param_3 + uVar9 * 4) = uVar6;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar10);
                }
                *param_3 = *param_3 + uVar10 * 4;
                *param_4 = *param_4 - uVar10;
                local_c = local_c + 1;
              } while (local_c < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_8);
        }
      }
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar7 == 5) {
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      local_10 = 0;
      if (local_8 == 0) {
        return 0;
      }
      do {
        if (*puVar5 == 0) {
          return local_14;
        }
        param_4 = (uint *)0x0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            if (*puVar5 == 0) break;
            local_14 = FUN_005c8303(param_1,param_2,param_3,puVar5);
            if (local_14 < 0) {
              return local_14;
            }
            param_4 = (uint *)((int)param_4 + 1);
          } while (param_4 < uVar2);
        }
        local_10 = local_10 + 1;
        if (local_8 <= local_10) {
          return local_14;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}

