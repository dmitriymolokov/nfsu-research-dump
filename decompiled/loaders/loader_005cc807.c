/* Decompiled from Speed.exe @ 005cc807 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc807(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_14;
  int local_10;
  uint local_8;
  
  uVar2 = param_1[5];
  iVar4 = *param_1;
  local_14 = 0;
  uVar3 = param_1[6];
  param_1 = (int *)0x4;
  if (uVar2 < 5) {
    param_1 = (int *)uVar2;
  }
  local_8 = 4;
  if (uVar3 < 5) {
    local_8 = uVar3;
  }
  if (iVar4 == 1) {
    if (param_4 != 0) {
      local_10 = param_4;
      piVar6 = param_3;
      do {
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar7 = (undefined4 *)*piVar6;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          if (param_1 != (int *)0x0) {
            param_3 = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                piVar5 = param_3;
                uVar8 = local_8;
                do {
                  iVar1 = *piVar5;
                  piVar5 = piVar5 + 1;
                  *(float *)(iVar4 + *piVar6) = (float)(iVar1 != 0);
                  iVar4 = iVar4 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_4 = param_4 + 1;
              param_3 = param_3 + uVar3;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        piVar6 = piVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != 0) {
      local_10 = param_4;
      piVar6 = param_3;
      do {
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar7 = (undefined4 *)*piVar6;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          if (param_1 != (int *)0x0) {
            param_3 = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                piVar5 = param_3;
                uVar8 = local_8;
                do {
                  iVar1 = *piVar5;
                  piVar5 = piVar5 + 1;
                  *(float *)(iVar4 + *piVar6) = (float)iVar1;
                  iVar4 = iVar4 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_4 = param_4 + 1;
              param_3 = param_3 + uVar3;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        piVar6 = piVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != 0) {
      local_10 = param_4;
      piVar6 = param_3;
      do {
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          param_4 = 0;
          puVar7 = (undefined4 *)*piVar6;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          if (param_1 != (int *)0x0) {
            param_3 = param_2;
            do {
              if (local_8 != 0) {
                iVar4 = param_4 << 4;
                piVar5 = param_3;
                uVar8 = local_8;
                do {
                  *(int *)(iVar4 + *piVar6) = *piVar5;
                  piVar5 = piVar5 + 1;
                  iVar4 = iVar4 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_4 = param_4 + 1;
              param_3 = param_3 + uVar3;
            } while (param_4 < param_1);
          }
        }
        param_2 = param_2 + uVar3 * uVar2;
        piVar6 = piVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else {
    local_14 = 0x8876086c;
  }
  return local_14;
}

