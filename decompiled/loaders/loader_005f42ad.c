/* Decompiled from Speed.exe @ 005f42ad */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined8 * FUN_005f42ad(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FastExitMediaState();
  uVar1 = (undefined4)*param_2;
  uVar4 = CONCAT44(uVar1,uVar1);
  uVar1 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar7 = CONCAT44(uVar1,uVar1);
  uVar8 = CONCAT44(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 1));
  uVar2 = PackedFloatingMUL(uVar4,*param_3);
  uVar3 = PackedFloatingMUL(uVar7,param_3[2]);
  uVar5 = PackedFloatingMUL(uVar8,param_3[4]);
  uVar2 = PackedFloatingADD(uVar2,param_3[6]);
  uVar6 = PackedFloatingMUL(uVar4,param_3[1]);
  uVar4 = PackedFloatingADD(uVar3,uVar5);
  uVar3 = PackedFloatingMUL(uVar7,param_3[3]);
  uVar8 = PackedFloatingMUL(uVar8,param_3[5]);
  uVar7 = PackedFloatingADD(uVar6,param_3[7]);
  uVar4 = PackedFloatingADD(uVar2,uVar4);
  uVar3 = PackedFloatingADD(uVar3,uVar8);
  uVar2 = PackedFloatingADD(uVar7,uVar3);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar8 = CONCAT44(uVar1,uVar1);
  uVar7 = FloatingReciprocalAprox(uVar3,uVar8);
  uVar3 = PackedFloatingReciprocalIter1(uVar8,uVar7);
  uVar7 = PackedFloatingReciprocalIter2(uVar3,uVar7);
  uVar4 = PackedFloatingMUL(uVar4,uVar7);
  uVar2 = PackedFloatingMUL(uVar2,uVar7);
  *param_1 = uVar4;
  *(int *)(param_1 + 1) = (int)uVar2;
  FastExitMediaState();
  return param_1;
}

