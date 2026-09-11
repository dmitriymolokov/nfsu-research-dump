/* Decompiled from Speed.exe @ 006594e0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006594e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &LAB_00659460;
  param_1[1] = &LAB_00660c40;
  param_1[8] = *param_2;
  param_1[9] = param_2[3];
  param_1[10] = 0;
  iVar1 = FUN_0065f5f0(0xa8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065fbd0();
  }
  param_1[7] = uVar2;
  param_2[10] = &LAB_006594d0;
  FUN_0065f610(param_1[8],param_1[9] * 4,param_1[9]);
  return;
}

