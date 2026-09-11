/* Decompiled from Speed.exe @ 00541bf0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00541bf0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_006b6344;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  FUN_005416e0(DAT_006b6344,fVar1,fVar2,fVar3);
  FUN_005416e0(uVar4,-fVar1,-fVar2,-fVar3);
  return;
}

