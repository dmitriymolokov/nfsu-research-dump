/* Decompiled from Speed.exe @ 00659740 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00659740(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &LAB_00659550;
  param_1[1] = &LAB_00660c40;
  param_1[0xb] = param_2[1];
  param_1[8] = 0;
  param_1[0xc] = param_2[9];
  param_1[9] = param_2[4];
  param_1[10] = param_2[5];
  iVar1 = FUN_0065f5f0(0xa8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065fbd0();
  }
  param_1[7] = uVar2;
  param_2[10] = &LAB_006591c0;
  if ((int)param_1[0xc] < 2) {
    param_1[0xd] = *param_2;
    param_1[0xe] = param_2[3];
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = param_2[4];
    param_1[0x12] = param_2[5];
    return;
  }
  FUN_0065f610(*param_2,param_1[9] * 4,param_1[9]);
  return;
}

