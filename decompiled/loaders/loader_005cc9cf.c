/* Decompiled from Speed.exe @ 005cc9cf */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc9cf(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  uVar2 = param_1[5];
  iVar4 = *param_1;
  local_18 = 0;
  uVar3 = param_1[6];
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
      local_14 = param_4;
      do {
        if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar6 = (undefined4 *)*param_3;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          if (param_1 != (int *)0x0) {
            local_c = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                piVar5 = local_c;
                uVar7 = local_8;
                do {
                  iVar1 = *piVar5;
                  piVar5 = piVar5 + uVar3;
                  *(float *)(iVar4 + *param_3) = (float)(iVar1 != 0);
                  iVar4 = iVar4 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              param_4 = param_4 + 1;
              local_c = local_c + 1;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != 0) {
      local_14 = param_4;
      do {
        if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar6 = (undefined4 *)*param_3;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          if (param_1 != (int *)0x0) {
            local_c = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                piVar5 = local_c;
                uVar7 = local_8;
                do {
                  iVar1 = *piVar5;
                  piVar5 = piVar5 + uVar3;
                  *(float *)(iVar4 + *param_3) = (float)iVar1;
                  iVar4 = iVar4 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              param_4 = param_4 + 1;
              local_c = local_c + 1;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != 0) {
      local_14 = param_4;
      do {
        if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar6 = (undefined4 *)*param_3;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          if (param_1 != (int *)0x0) {
            local_c = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                local_10 = local_8;
                piVar5 = local_c;
                do {
                  *(int *)(iVar4 + *param_3) = *piVar5;
                  iVar4 = iVar4 + 4;
                  piVar5 = piVar5 + uVar3;
                  local_10 = local_10 - 1;
                } while (local_10 != 0);
              }
              param_4 = param_4 + 1;
              local_c = local_c + 1;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else {
    local_18 = 0x8876086c;
  }
  return local_18;
}

