/* spd-match: far pct=6.08 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004b0fd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0fd0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  int local_a4 [10];
  int aiStack_7c [10];
  int aiStack_54 [5];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    return;
  }
  local_c = 0.0;
  fVar1 = *(float *)(param_1 + 0x120) + _DAT_006ccdc4;
  local_1c = 0;
  *(float *)(param_1 + 0x120) = fVar1;
  if (DAT_00745e40 == 0) {
    local_1c = 0xffb7bf00;
    local_c = *(float *)(param_1 + 0x78);
    goto LAB_004b1083_local;
  }
  if (_DAT_006cc7bc < fVar1) {
    uVar5 = *(int *)(param_1 + 0x11c) + 1U & 0x80000001;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(param_1 + 0x11c) = uVar5;
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    local_c = *(float *)(param_1 + 0x78);
    local_1c = 0xffb7bf00;
  }
  else if (*(int *)(param_1 + 0x11c) == 1) {
    local_c = *(float *)(param_1 + 0x7c);
    local_1c = 0xfffaa21b;
  }
LAB_004b1070_local:
  ;
  if (*(float *)(param_1 + 0x7c) == *(float *)(param_1 + 0x78)) {
    local_1c = 0xffb7bf00;
  }
LAB_004b1083_local:
  local_18 = 0x3fc13fbe;
  iVar3 = 0x58b092ef;
  local_14 = 0x775adf8e;
  local_8 = 5;
  do {
    if (((((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
         (iVar2 = FUN_004ffb70(), iVar2 == 0)) &&
        ((DAT_0073578c == 0 || (iVar2 = FUN_004ef050(iVar3), iVar2 == 0)))) ||
       (*(int *)(iVar2 + 0x18) != 1)) {
      iVar2 = 0;
    }
    *(int *)((int)aiStack_54 + iVar6) = iVar2;
    iVar3 = iVar3 + 1;
    if (((((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
         (iVar2 = FUN_004ffb70(), iVar2 == 0)) &&
        ((DAT_0073578c == 0 || (iVar2 = FUN_004ef050(local_14), iVar2 == 0)))) ||
       (*(int *)(iVar2 + 0x18) != 2)) {
      iVar2 = 0;
    }
    *(int *)((int)aiStack_7c + iVar6) = iVar2;
    local_14 = local_14 + 1;
    iVar6 = iVar6 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar4 = local_a4;
  local_8 = 10;
  do {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b11cb_local:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(local_18), iVar6 == 0)) goto LAB_004b11ec_local;
LAB_004b11e6_local:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004b11ec_local;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004b11b9_local:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar6 == 0)) goto LAB_004b11cb_local;
        goto LAB_004b11e6_local;
      }
      if (DAT_0073578c != 0) {
        iVar3 = *(int *)(DAT_0073578c + 8);
        if ((iVar3 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar3 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar3 + 0xec), iVar6 == 0)))) goto LAB_004b11cb_local;
        goto LAB_004b11b9_local;
      }
LAB_004b11ec_local:
      iVar6 = 0;
    }
    *piVar4 = iVar6;
    local_18 = local_18 + 1;
    piVar4 = piVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  local_30 = 0.0;
  param_1 = 0;
  do {
    if (local_c < _DAT_006cc7bc) {
      fVar1 = DAT_006cc7a4;
      if (DAT_006cc7a4 < local_c) {
        local_30 = local_c;
      }
LAB_004b1263_local:
      uVar5 = 0xff0080c0;
      local_14 = 0x3f400000;
    }
    else {
      fVar1 = _DAT_006cc974;
      if (_DAT_006ccc00 <= local_c) goto LAB_004b1263_local;
      local_14 = 0x3f666666;
      uVar5 = local_1c;
    }
    local_18 = uVar5;
    local_8 = local_1c;
    if (fVar1 == DAT_006cc7a4) {
      local_8 = 0xff0080c0;
    }
    local_10 = *(int *)((int)aiStack_54 + param_1);
    if (local_10 != 0) {
      local_38 = local_8 >> 0x10 & 0xff;
      local_3c = local_8 >> 8 & 0xff;
      local_40 = local_8 & 0xff;
      local_34 = local_8 >> 0x18;
      if (*(int *)(local_10 + 0x18) < 0x100) {
        piVar4 = *(int **)(local_10 + 0x2c);
        local_8 = piVar4[2];
        if (((((int)(local_38 + 1) < (int)local_8) || ((int)local_8 < (int)(local_38 - 1))) ||
            ((int)(local_3c + 1) < piVar4[1])) ||
           (((piVar4[1] < (int)(local_3c - 1) || ((int)(local_40 + 1) < *piVar4)) ||
            ((*piVar4 < (int)(local_40 - 1) ||
             (((int)(local_34 + 1) < piVar4[3] || (piVar4[3] < (int)(local_34 - 1))))))))) {
          *(uint *)(local_10 + 0x1c) = *(uint *)(local_10 + 0x1c) | 0x400000;
        }
        FUN_004ff2f0(local_10,0,0);
      }
    }
    iVar6 = *(int *)((int)aiStack_7c + param_1);
    if (iVar6 != 0) {
      local_24 = local_18 >> 0x10 & 0xff;
      local_28 = uVar5 >> 8 & 0xff;
      local_20 = uVar5 >> 0x18;
      local_2c = uVar5 & 0xff;
      if (*(int *)(iVar6 + 0x18) < 0x100) {
        piVar4 = *(int **)(iVar6 + 0x2c);
        local_10 = piVar4[2];
        if (((((int)(local_24 + 1) < local_10) || (local_10 < (int)(local_24 - 1))) ||
            ((int)(local_28 + 1) < piVar4[1])) ||
           (((piVar4[1] < (int)(local_28 - 1) || ((int)(local_2c + 1) < *piVar4)) ||
            ((*piVar4 < (int)(local_2c - 1) ||
             (((int)(local_20 + 1) < piVar4[3] || (piVar4[3] < (int)(local_20 - 1))))))))) {
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
        }
        FUN_004ff2f0(iVar6,0,0);
      }
    }
    iVar6 = local_14;
    local_c = local_c - _DAT_006cc7bc;
    FUN_004f7430(local_14);
    FUN_004f74f0(iVar6);
    FUN_004f7430(iVar6);
    FUN_004f74f0(iVar6);
    param_1 = param_1 + 4;
    if (0x13 < param_1) {
      fVar7 = (float10)local_30;
      local_10 = 0;
      do {
        param_1 = param_1 & 0xff00ffff;
        local_20 = 0xff0080c0;
        if ((float10)_DAT_006cca10 <= fVar7) {
          param_1 = (param_1 & 0xff00ffff) | ((local_1c >> 0x10 & 0xff) << 16);
          local_20 = local_1c;
        }
        iVar6 = local_a4[local_10];
        if (iVar6 != 0) {
          local_24 = (uint)((param_1 >> 16) & 0xff);
          local_28 = local_20 >> 8 & 0xff;
          local_2c = local_20 & 0xff;
          local_20 = local_20 >> 0x18;
          if (*(int *)(iVar6 + 0x18) < 0x100) {
            piVar4 = *(int **)(iVar6 + 0x2c);
            if ((((((int)(local_24 + 1) < piVar4[2]) || (piVar4[2] < (int)(local_24 - 1))) ||
                 ((int)(local_28 + 1) < piVar4[1])) ||
                ((piVar4[1] < (int)(local_28 - 1) || ((int)(local_2c + 1) < *piVar4)))) ||
               ((*piVar4 < (int)(local_2c - 1) ||
                (((int)(local_20 + 1) < piVar4[3] || (piVar4[3] < (int)(local_20 - 1))))))) {
              *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
            }
            fVar7 = (float10)FUN_004ff2f0(iVar6,0,0);
          }
        }
        fVar7 = fVar7 - (float10)_DAT_006cc7b8;
        local_10 = local_10 + 1;
      } while (local_10 < 10);
      return;
    }
  } while( true );
}

