/* spd-match: far pct=5.06 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005af1be */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 *
FUN_005af1be(undefined4 *param_1,float *param_2,int param_3,undefined4 *param_4,float *param_5,
            int param_6,float *param_7)

{
  undefined4 uVar1;
  undefined4 *puStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [84];
  
  if (param_4 == (undefined4 *)0x0) {
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
    param_1[0xf] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
  }
  else if (param_3 == 0) {
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
    *param_1 = *param_4;
    param_1[5] = param_4[1];
    uVar1 = param_4[2];
    param_1[0xf] = 0x3f800000;
    param_1[10] = uVar1;
  }
  else {
    local_98 = 0;
    iStack_e4 = param_3;
    local_9c = 0;
    local_a0 = 0;
    local_a8 = param_4[2];
    puStack_e8 = local_90;
    local_a4 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_94 = 0x3f800000;
    puStack_ec = (undefined4 *)0x5af250;
    FUN_005ad348();
    puStack_ec = &local_98;
    if (param_2 == (float *)0x0) {
      FUN_005ac8d8(param_1);
      FUN_005ac68f(param_1,param_1,&stack0xffffff20);
      FUN_005ac68f(param_1,param_1,&local_ac);
    }
    else {
      FUN_005ac8d8(auStack_58);
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
      param_1[0xf] = 0x3f800000;
      param_1[10] = 0x3f800000;
      param_1[5] = 0x3f800000;
      *param_1 = 0x3f800000;
      param_1[0xc] = -*param_2;
      param_1[0xd] = -param_2[1];
      param_1[0xe] = -param_2[2];
      FUN_005ac68f(param_1,param_1,auStack_60);
      FUN_005ac68f(param_1,param_1,&puStack_ec);
      FUN_005ac68f(param_1,param_1,&local_b8);
      param_1[0xc] = (float)param_1[0xc] + *param_2;
      param_1[0xd] = param_2[1] + (float)param_1[0xd];
      param_1[0xe] = (float)param_1[0xe] + param_2[2];
    }
  }
  if (param_6 != 0) {
    iStack_e4 = param_6;
    puStack_e8 = local_90;
    puStack_ec = (undefined4 *)0x5af3f9;
    FUN_005ad348();
    puStack_ec = &local_98;
    if (param_5 == (float *)0x0) {
      FUN_005ac68f(param_1,param_1);
    }
    else {
      param_1[0xc] = (float)param_1[0xc] - *param_5;
      param_1[0xd] = (float)param_1[0xd] - param_5[1];
      param_1[0xe] = (float)param_1[0xe] - param_5[2];
      FUN_005ac68f(param_1,param_1);
      param_1[0xc] = (float)param_1[0xc] + *param_5;
      param_1[0xd] = (float)param_1[0xd] + param_5[1];
      param_1[0xe] = (float)param_1[0xe] + param_5[2];
    }
  }
  if (param_7 != (float *)0x0) {
    param_1[0xc] = (float)param_1[0xc] + *param_7;
    param_1[0xd] = param_7[1] + (float)param_1[0xd];
    param_1[0xe] = param_7[2] + (float)param_1[0xe];
  }
  return param_1;
}

