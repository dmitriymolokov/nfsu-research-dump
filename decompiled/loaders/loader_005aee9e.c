/* spd-match: far pct=8.77 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005aee9e */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aee9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 param_9)

{
  float fVar1;
  float fVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float afStack_50 [6];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  switch(((param_8 != (undefined4 *)0x0) << 1 | param_7 != (undefined4 *)0x0) << 1 |
         param_6 != (undefined4 *)0x0) {
  case '\0':
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 0x3f800000;
    local_a0 = 0x3f800000;
    goto switchD_005aeede_default;
  case '\x01':
    param_8 = param_6;
    goto LAB_005aef7c;
  case '\x02':
    param_8 = param_7;
    goto LAB_005aef7c;
  case '\x03':
    param_8 = param_7;
    break;
  case '\x04':
    goto LAB_005aef7c;
  case '\x05':
    break;
  case '\x06':
    param_6 = param_7;
    break;
  case '\a':
    FUN_005ac68f(&local_a0,param_8,param_7);
    param_8 = &local_a0;
    break;
  default:
    goto switchD_005aeede_default;
  }
  FUN_005ac68f(&local_a0,param_8,param_6);
  param_8 = &local_a0;
LAB_005aef7c:
  FUN_005acb9b(&local_a0,0,param_8);
switchD_005aeede_default:
  if (param_5 != (int *)0x0) {
    afStack_50[0] = (float)param_5[2];
    if (param_5[2] < 0) {
      afStack_50[0] = afStack_50[0] + _DAT_006cc858;
    }
    afStack_50[0] = _DAT_006ccc00 / afStack_50[0];
    fVar1 = (float)param_5[3];
    if (param_5[3] < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    fStack_28 = _DAT_006cc7bc / ((float)param_5[5] - (float)param_5[4]);
    afStack_50[1] = 0.0;
    afStack_50[2] = 0.0;
    afStack_50[3] = 0.0;
    afStack_50[4] = 0.0;
    afStack_50[5] = -(_DAT_006ccc00 / fVar1);
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    fVar2 = (float)*param_5;
    if (*param_5 < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fStack_20 = -(fVar2 * afStack_50[0]) - _DAT_006cc7bc;
    fVar2 = (float)param_5[1];
    if (param_5[1] < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fStack_1c = fVar2 * (_DAT_006ccc00 / fVar1) - _DAT_006cc7bc;
    fStack_18 = -(fStack_28 * (float)param_5[4]);
    uStack_14 = 0x3f800000;
    FUN_005ac68f(&local_a0,&local_a0,afStack_50);
  }
  FUN_005abf0b(param_1,param_2,param_3,param_4,&local_a0,param_9);
  return;
}

