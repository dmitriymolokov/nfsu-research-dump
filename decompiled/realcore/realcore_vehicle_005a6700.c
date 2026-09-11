/* Decompiled from Speed.exe @ 005a6700 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 __thiscall
FUN_005a6700(int param_1,undefined4 *param_2,float *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  int local_4;
  
  uVar1 = param_4;
  param_4 = 0;
  local_4 = param_1;
  uVar2 = FUN_005a65b0(param_1 + 0x60,&param_4,&local_4,uVar1);
  fVar3 = (float10)FUN_005a7390(param_1 + 0x60,uVar1);
  *param_2 = param_4;
  *param_3 = (float)fVar3;
  return uVar2;
}

