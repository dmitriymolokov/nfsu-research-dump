/* Decompiled from Speed.exe @ 0065b380 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0065b380(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *param_1 = FUN_0065b2d0;
  param_1[1] = 0;
  if (param_3 < 0) {
    param_1[8] = 0xffffffff;
  }
  else {
    uVar1 = FUN_00659960(param_3);
    uVar1 = FUN_00660820(uVar1);
    param_1[8] = uVar1;
  }
  param_1[7] = param_2 + 6;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = (uint)*(byte *)(param_2 + 1) << 1;
  uVar1 = FUN_0065fce0(param_2 + 2,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = uVar1;
  return 0;
}

