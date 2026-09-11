/* Decompiled from Speed.exe @ 005cbd17 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cbd17(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  local_20 = 0;
  iVar4 = *param_1;
  local_8 = 4;
  if (uVar1 < 5) {
    local_8 = uVar1;
  }
  param_1 = (int *)0x4;
  if (uVar2 < 5) {
    param_1 = (int *)uVar2;
  }
  if (iVar4 == 1) {
    if (param_4 != (uint *)0x0) {
      local_10 = (uint)param_4;
      do {
        if (local_8 != 0) {
          param_4 = param_2;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              local_18 = (uint)param_1;
              puVar5 = param_4;
              do {
                iVar4 = __ftol();
                *puVar5 = (uint)(iVar4 != 0);
                puVar5 = puVar5 + 1;
                local_18 = local_18 - 1;
              } while (local_18 != 0);
            }
            param_4 = param_4 + uVar2;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != (uint *)0x0) {
      local_c = param_4;
      do {
        if (local_8 != 0) {
          local_10 = local_8;
          puVar5 = param_2;
          do {
            if (param_1 != (int *)0x0) {
              local_18 = (uint)param_1;
              puVar6 = puVar5;
              do {
                uVar3 = __ftol();
                *puVar6 = uVar3;
                puVar6 = puVar6 + 1;
                local_18 = local_18 - 1;
              } while (local_18 != 0);
            }
            puVar5 = puVar5 + uVar2;
            local_10 = local_10 - 1;
          } while (local_10 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        local_c = (uint *)((int)local_c + -1);
      } while (local_c != (uint *)0x0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != (uint *)0x0) {
      local_18 = (uint)param_4;
      do {
        if (local_8 != 0) {
          local_c = param_3;
          param_4 = param_2;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              local_10 = (uint)param_1;
              puVar5 = local_c;
              puVar6 = param_4;
              do {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            param_4 = param_4 + uVar2;
            local_c = local_c + 4;
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
    local_20 = 0x8876086c;
  }
  return local_20;
}

