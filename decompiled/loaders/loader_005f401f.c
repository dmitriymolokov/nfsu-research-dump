/* Decompiled from Speed.exe @ 005f401f */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f401f(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_MM4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  FastExitMediaState();
  uVar1 = *param_2;
  uVar3 = (ulonglong)(uint)param_2[1];
  uVar2 = PackedFloatingMUL(uVar1,uVar1);
  uVar4 = PackedFloatingMUL(uVar3,uVar3);
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar5 = PackedFloatingReciprocalSQRAprox(in_MM4,uVar2);
  uVar6 = PackedFloatingCompareGT(uVar2,_DAT_006a07f8);
  uVar4 = PackedFloatingMUL(uVar5,uVar5);
  uVar2 = PackedFloatingReciprocalSQRIter1(uVar2,uVar4);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar5);
  uVar4 = PackedFloatingMUL(uVar1 & uVar6,uVar2);
  uVar2 = PackedFloatingMUL(uVar3 & uVar6,uVar2);
  *param_1 = uVar4;
  *(int *)(param_1 + 1) = (int)uVar2;
  FastExitMediaState();
  return;
}

