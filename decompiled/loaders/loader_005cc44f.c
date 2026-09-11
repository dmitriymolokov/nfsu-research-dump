/* Decompiled from Speed.exe @ 005cc44f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc44f(int *param_1,uint *param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint *local_c;
  uint local_8;
  
  uVar2 = param_1[5];
  iVar4 = *param_1;
  uVar3 = param_1[6];
  local_20 = 0;
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
      local_18 = param_4;
      do {
        if ((*param_3 != 0) && (param_4 = 0, local_8 != 0)) {
          local_c = param_2;
          do {
            if (param_1 != (int *)0x0) {
              local_1c = (uint)param_1;
              puVar5 = local_c;
              do {
                iVar4 = __ftol();
                *puVar5 = (uint)(iVar4 != 0);
                puVar5 = puVar5 + 1;
                local_1c = local_1c - 1;
              } while (local_1c != 0);
            }
            param_4 = param_4 + 1;
            local_c = local_c + uVar3;
          } while (param_4 < local_8);
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  else if (iVar4 == 2) {
    if (param_4 != 0) {
      local_1c = param_4;
      do {
        if ((*param_3 != 0) && (param_4 = 0, puVar5 = param_2, local_8 != 0)) {
          do {
            if (param_1 != (int *)0x0) {
              local_14 = (uint)param_1;
              puVar6 = puVar5;
              do {
                uVar7 = __ftol();
                *puVar6 = uVar7;
                puVar6 = puVar6 + 1;
                local_14 = local_14 - 1;
              } while (local_14 != 0);
            }
            param_4 = param_4 + 1;
            puVar5 = puVar5 + uVar3;
          } while (param_4 < local_8);
        }
        param_2 = param_2 + uVar3 * uVar2;
        param_3 = param_3 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else if (iVar4 == 3) {
    if (param_4 != 0) {
      local_14 = param_4;
      piVar8 = param_3;
      do {
        if ((*piVar8 != 0) && (param_3 = (int *)0x0, puVar5 = param_2, local_8 != 0)) {
          do {
            if (param_1 != (int *)0x0) {
              iVar4 = (int)param_3 << 4;
              puVar6 = puVar5;
              uVar7 = (uint)param_1;
              do {
                puVar1 = (uint *)(iVar4 + *piVar8);
                iVar4 = iVar4 + 4;
                *puVar6 = *puVar1;
                puVar6 = puVar6 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            param_3 = (int *)((int)param_3 + 1);
            puVar5 = puVar5 + uVar3;
          } while (param_3 < local_8);
        }
        param_2 = param_2 + uVar3 * uVar2;
        piVar8 = piVar8 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else {
    local_20 = 0x8876086c;
  }
  return local_20;
}

