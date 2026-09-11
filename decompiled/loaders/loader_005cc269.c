/* Decompiled from Speed.exe @ 005cc269 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005cc269(int *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float *local_c;
  uint local_8;
  
  uVar1 = param_1[5];
  iVar4 = *param_1;
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
  if (iVar4 == 1) {
    pfVar5 = param_3;
    for (iVar4 = ((uint)param_4 & 0x3ffffff) << 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)pfVar5 = 0;
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_14 = (uint)param_4;
      do {
        if (param_1 != (int *)0x0) {
          local_c = param_2;
          param_4 = param_3;
          local_18 = (uint)param_1;
          pfVar5 = param_3;
          pfVar6 = param_2;
          uVar3 = local_8;
          do {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pfVar5 = (float)(*pfVar6 != 0.0);
              pfVar5 = pfVar5 + 1;
              pfVar6 = pfVar6 + uVar2;
            }
            pfVar5 = param_4 + 4;
            pfVar6 = local_c + 1;
            local_18 = local_18 - 1;
            uVar3 = local_8;
            local_c = pfVar6;
            param_4 = pfVar5;
          } while (local_18 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  else if (iVar4 == 2) {
    pfVar5 = param_3;
    for (iVar4 = ((uint)param_4 & 0x3ffffff) << 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)pfVar5 = 0;
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_14 = (uint)param_4;
      do {
        if (param_1 != (int *)0x0) {
          local_c = param_2;
          param_4 = param_3;
          local_18 = (uint)param_1;
          pfVar5 = param_3;
          pfVar6 = param_2;
          uVar3 = local_8;
          do {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pfVar5 = (float)(int)*pfVar6;
              pfVar5 = pfVar5 + 1;
              pfVar6 = pfVar6 + uVar2;
            }
            pfVar5 = param_4 + 4;
            pfVar6 = local_c + 1;
            local_18 = local_18 - 1;
            uVar3 = local_8;
            local_c = pfVar6;
            param_4 = pfVar5;
          } while (local_18 != 0);
        }
        param_2 = param_2 + uVar2 * uVar1;
        param_3 = param_3 + 0x10;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  else if (iVar4 == 3) {
    pfVar5 = param_3;
    for (iVar4 = ((uint)param_4 & 0x3ffffff) << 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)pfVar5 = 0;
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    if (param_4 != (float *)0x0) {
      local_18 = (uint)param_4;
      do {
        if (param_1 != (int *)0x0) {
          local_c = param_2;
          param_4 = param_3;
          local_14 = (uint)param_1;
          do {
            if (local_8 != 0) {
              local_10 = local_8;
              pfVar5 = param_4;
              pfVar6 = local_c;
              do {
                *pfVar5 = *pfVar6;
                pfVar5 = pfVar5 + 1;
                pfVar6 = pfVar6 + uVar2;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            param_4 = param_4 + 4;
            local_c = local_c + 1;
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

