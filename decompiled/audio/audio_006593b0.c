/* Decompiled from Speed.exe @ 006593b0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006593b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  *param_1 = &LAB_00659310;
  param_1[1] = &LAB_00660c40;
  param_1[0xb] = param_2[1];
  param_1[8] = 0;
  param_1[9] = param_2[4];
  param_1[10] = param_2[5];
  iVar1 = FUN_0065f5f0(0xd68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065f310();
  }
  param_1[7] = uVar2;
  puVar3 = (undefined4 *)FUN_0065f3d0(auStack_c);
  uStack_18 = *puVar3;
  uStack_14 = puVar3[1];
  uStack_10 = 1;
  FUN_0065f400(&uStack_18,0);
  FUN_0065f350(*param_2,param_1[9] * 4,param_1[9]);
  param_2[10] = &LAB_006591c0;
  return;
}

