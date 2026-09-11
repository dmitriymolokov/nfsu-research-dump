/* Decompiled from Speed.exe @ 005cc632 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc632(int *param_1,uint *param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 local_1c;
  uint local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar2 = param_1[5];
  iVar4 = *param_1;
  uVar3 = param_1[6];
  local_1c = 0;
  local_8 = 4;
  if (uVar2 < 5) {
    local_8 = uVar2;
  }
  param_1 = (int *)0x4;
  if (uVar3 < 5) {
    param_1 = (int *)uVar3;
  }
  if (iVar4 == 1) {
    if (param_4 != 0) {
      local_10 = param_4;
      do {
        if ((*param_3 != 0) && (param_4 = 0, param_1 != (int *)0x0)) {
          local_c = param_2;
          do {
            if (local_8 != 0) {
              local_14 = local_8;
              puVar6 = local_c;
              do {
                iVar4 = __ftol();
                *puVar6 = (uint)(iVar4 != 0);
                puVar6 = puVar6 + uVar3;
                local_14 = local_14 - 1;
              } while (local_14 != 0);
            }
            param_4 = param_4 + 1;
            local_c = local_c + 1;
          } while (param_4 < param_1);
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != 0) {
      local_10 = param_4;
      do {
        if ((*param_3 != 0) && (param_4 = 0, param_1 != (int *)0x0)) {
          local_c = param_2;
          do {
            if (local_8 != 0) {
              local_14 = local_8;
              puVar6 = local_c;
              do {
                uVar5 = __ftol();
                *puVar6 = uVar5;
                puVar6 = puVar6 + uVar3;
                local_14 = local_14 - 1;
              } while (local_14 != 0);
            }
            param_4 = param_4 + 1;
            local_c = local_c + 1;
          } while (param_4 < param_1);
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != 0) {
      local_14 = param_4;
      do {
        if ((*param_3 != 0) && (param_4 = 0, param_1 != (int *)0x0)) {
          local_c = param_2;
          do {
            if (local_8 != 0) {
              iVar4 = param_4 << 4;
              local_10 = local_8;
              puVar6 = local_c;
              do {
                puVar1 = (uint *)(iVar4 + *param_3);
                iVar4 = iVar4 + 4;
                *puVar6 = *puVar1;
                puVar6 = puVar6 + uVar3;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            param_4 = param_4 + 1;
            local_c = local_c + 1;
          } while (param_4 < param_1);
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else {
    local_1c = 0x8876086c;
  }
  return local_1c;
}

