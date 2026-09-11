/* spd-match: far pct=6.52 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005ad4a3 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 *
FUN_005ad4a3(undefined4 *param_1,undefined4 param_2,float *param_3,int param_4,float *param_5)

{
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[5] = param_2;
  param_1[10] = param_2;
  param_1[0xf] = 0x3f800000;
  if (param_4 != 0) {
    FUN_005ad348(local_50,param_4);
    if (param_3 == (float *)0x0) {
      FUN_005ac68f(param_1,param_1,auStack_58);
    }
    else {
      param_1[0xc] = (float)param_1[0xc] - *param_3;
      param_1[0xd] = (float)param_1[0xd] - param_3[1];
      param_1[0xe] = (float)param_1[0xe] - param_3[2];
      FUN_005ac68f(param_1,param_1,auStack_58);
      param_1[0xc] = *param_3 + (float)param_1[0xc];
      param_1[0xd] = (float)param_1[0xd] + param_3[1];
      param_1[0xe] = param_3[2] + (float)param_1[0xe];
    }
  }
  if (param_5 != (float *)0x0) {
    param_1[0xc] = *param_5 + (float)param_1[0xc];
    param_1[0xd] = param_5[1] + (float)param_1[0xd];
    param_1[0xe] = param_5[2] + (float)param_1[0xe];
  }
  return param_1;
}

