/* spd-match: far pct=5.42 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005ae96b */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005ae96b(float *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                    undefined4 *param_5,undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = &local_50;
  switch(((param_6 != (undefined4 *)0x0) << 1 | param_5 != (undefined4 *)0x0) << 1 |
         param_4 != (undefined4 *)0x0) {
  case '\0':
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    break;
  case '\x01':
    puVar3 = param_4;
    break;
  case '\x02':
    puVar3 = param_5;
    break;
  case '\x03':
    param_6 = param_5;
    goto LAB_005aea3c;
  case '\x04':
    puVar3 = param_6;
    break;
  case '\x05':
    goto LAB_005aea3c;
  case '\x06':
    param_4 = param_5;
    goto LAB_005aea3c;
  case '\a':
    FUN_005ac68f(&local_50,param_6,param_5);
    param_6 = &local_50;
LAB_005aea3c:
    FUN_005ac68f(&local_50,param_6,param_4);
  }
  FUN_005abef8(param_1,param_2,puVar3);
  if (param_3 != (int *)0x0) {
    fVar2 = (float)param_3[2];
    if (param_3[2] < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fVar1 = (float)*param_3;
    if (*param_3 < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    *param_1 = fVar1 + fVar2 * (*param_1 + _DAT_006cc7bc) * _DAT_006cc7dc;
    fVar2 = (float)param_3[3];
    if (param_3[3] < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fVar1 = (float)param_3[1];
    if (param_3[1] < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    param_1[1] = fVar1 + fVar2 * (1.0 - param_1[1]) * _DAT_006cc7dc;
    param_1[2] = ((float)param_3[5] - (float)param_3[4]) * param_1[2] + (float)param_3[4];
  }
  return param_1;
}

