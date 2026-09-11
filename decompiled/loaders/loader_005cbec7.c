/* Decompiled from Speed.exe @ 005cbec7 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cbec7(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  local_24 = 0;
  iVar4 = *param_1;
  param_1 = (int *)0x4;
  if (uVar1 < 5) {
    param_1 = (int *)uVar1;
  }
  local_8 = 4;
  if (uVar2 < 5) {
    local_8 = uVar2;
  }
  if (iVar4 == 1) {
    if (param_4 != (uint *)0x0) {
      local_14 = (uint)param_4;
      do {
        if (local_8 != 0) {
          local_c = param_2;
          local_18 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              param_4 = local_c;
              local_1c = (uint)param_1;
              do {
                iVar4 = __ftol();
                local_1c = local_1c - 1;
                *param_4 = (uint)(iVar4 != 0);
                param_4 = param_4 + uVar2;
              } while (local_1c != 0);
            }
            local_c = local_c + 1;
            local_18 = local_18 - 1;
          } while (local_18 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != (uint *)0x0) {
      local_1c = (uint)param_4;
      do {
        if (local_8 != 0) {
          local_10 = param_2;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              param_4 = local_10;
              local_18 = (uint)param_1;
              do {
                uVar3 = __ftol();
                local_18 = local_18 - 1;
                *param_4 = uVar3;
                param_4 = param_4 + uVar2;
              } while (local_18 != 0);
            }
            local_10 = local_10 + 1;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != (uint *)0x0) {
      local_18 = (uint)param_4;
      do {
        if (local_8 != 0) {
          local_c = param_2;
          param_4 = param_3;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              local_10 = (uint *)param_1;
              puVar5 = param_4;
              puVar6 = local_c;
              do {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + uVar2;
                local_10 = (uint *)((int)local_10 - 1);
              } while (local_10 != (uint *)0x0);
            }
            param_4 = param_4 + 4;
            local_c = local_c + 1;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  else {
    local_24 = 0x8876086c;
  }
  return local_24;
}

