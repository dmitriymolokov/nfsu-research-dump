/* spd-match: far pct=4.97 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005aecf8 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005aecf8(float *param_1,float *param_2,int *param_3,undefined4 *param_4,
                    undefined4 *param_5,undefined4 *param_6)

{
  float fVar1;
  float fVar2;
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
    goto switchD_005aed35_default;
  case '\x01':
    param_6 = param_4;
    goto LAB_005aedd3;
  case '\x02':
    param_6 = param_5;
    goto LAB_005aedd3;
  case '\x03':
    param_6 = param_5;
    break;
  case '\x04':
    goto LAB_005aedd3;
  case '\x05':
    break;
  case '\x06':
    param_4 = param_5;
    break;
  case '\a':
    FUN_005ac68f(&local_50,param_6,param_5);
    param_6 = &local_50;
    break;
  default:
    goto switchD_005aed35_default;
  }
  FUN_005ac68f(&local_50,param_6,param_4);
  param_6 = &local_50;
LAB_005aedd3:
  FUN_005acb9b(&local_50,0,param_6);
switchD_005aed35_default:
  if (param_3 != (int *)0x0) {
    fVar1 = (float)*param_3;
    if (*param_3 < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    fVar2 = (float)param_3[2];
    if (param_3[2] < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fVar2 = (*param_2 - fVar1) / fVar2;
    *param_1 = (fVar2 + fVar2) - _DAT_006cc7bc;
    fVar1 = (float)param_3[1];
    if (param_3[1] < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    fVar2 = (float)param_3[3];
    if (param_3[3] < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fVar2 = (param_2[1] - fVar1) / fVar2;
    param_1[1] = -((fVar2 + fVar2) - _DAT_006cc7bc);
    param_1[2] = (param_2[2] - (float)param_3[4]) / ((float)param_3[5] - (float)param_3[4]);
    param_2 = param_1;
  }
  FUN_005abef8(param_1,param_2,&local_50);
  return param_1;
}

