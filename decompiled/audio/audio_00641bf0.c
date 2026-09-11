/* Decompiled from Speed.exe @ 00641bf0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00641bf0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  FUN_0063f150(param_1 + 6);
  *param_1 = 0;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[5] = param_3;
    param_1[4] = param_2;
    return;
  }
  param_1[5] = param_3;
  param_1[4] = &LAB_00641b20;
  return;
}

