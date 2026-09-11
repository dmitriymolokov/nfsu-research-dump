/* Decompiled from Speed.exe @ 005cc081 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc081(int *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float *local_c;
  uint local_8;
  
  uVar1 = param_1[5];
  iVar5 = *param_1;
  local_1c = 0;
  uVar2 = param_1[6];
  local_8 = 4;
  if (uVar1 < 5) {
    local_8 = uVar1;
  }
  param_1 = (int *)0x4;
  if (uVar2 < 5) {
    param_1 = (int *)uVar2;
  }
  if (iVar5 == 1) {
    pfVar6 = param_3;
    for (iVar5 = ((uint)param_4 & 0x3ffffff) << 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)pfVar6 = 0;
      pfVar6 = (float *)((int)pfVar6 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_10 = (uint)param_4;
      do {
        if (local_8 != 0) {
          param_4 = param_3;
          local_c = param_2;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              local_18 = (uint)param_1;
              pfVar6 = local_c;
              pfVar7 = param_4;
              do {
                fVar3 = *pfVar6;
                pfVar6 = pfVar6 + 1;
                *pfVar7 = (float)(fVar3 != 0.0);
                pfVar7 = pfVar7 + 1;
                local_18 = local_18 - 1;
              } while (local_18 != 0);
            }
            param_4 = param_4 + 4;
            local_c = local_c + uVar2;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else if (iVar5 == 2) {
    pfVar6 = param_3;
    for (iVar5 = ((uint)param_4 & 0x3ffffff) << 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)pfVar6 = 0;
      pfVar6 = (float *)((int)pfVar6 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_14 = (uint)param_4;
      do {
        if (local_8 != 0) {
          param_4 = param_2;
          local_18 = local_8;
          pfVar7 = param_3;
          uVar4 = (uint)param_1;
          pfVar6 = param_2;
          pfVar8 = param_3;
          do {
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pfVar7 = (float)(int)*pfVar6;
              pfVar7 = pfVar7 + 1;
              pfVar6 = pfVar6 + 1;
            }
            pfVar6 = param_4 + uVar2;
            pfVar7 = pfVar8 + 4;
            local_18 = local_18 - 1;
            uVar4 = (uint)param_1;
            param_4 = pfVar6;
            pfVar8 = pfVar7;
          } while (local_18 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  else if (iVar5 == 3) {
    pfVar6 = param_3;
    for (iVar5 = ((uint)param_4 & 0x3ffffff) << 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)pfVar6 = 0;
      pfVar6 = (float *)((int)pfVar6 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_18 = (uint)param_4;
      do {
        if (local_8 != 0) {
          param_4 = param_3;
          local_c = param_2;
          local_14 = local_8;
          do {
            if (param_1 != (int *)0x0) {
              local_10 = (uint)param_1;
              pfVar6 = local_c;
              pfVar7 = param_4;
              do {
                *pfVar7 = *pfVar6;
                pfVar6 = pfVar6 + 1;
                pfVar7 = pfVar7 + 1;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            param_4 = param_4 + 4;
            local_c = local_c + uVar2;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
  }
  else {
    local_1c = 0x8876086c;
  }
  return local_1c;
}

