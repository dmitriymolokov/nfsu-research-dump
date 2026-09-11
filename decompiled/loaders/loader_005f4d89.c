/* Decompiled from Speed.exe @ 005f4d89 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined8 * FUN_005f4d89(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FastExitMediaState();
  uVar1 = (undefined4)*param_2;
  uVar3 = CONCAT44(uVar1,uVar1);
  uVar1 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar6 = CONCAT44(uVar1,uVar1);
  uVar2 = PackedFloatingMUL(uVar3,*param_3);
  uVar4 = PackedFloatingMUL(uVar6,param_3[2]);
  uVar2 = PackedFloatingADD(uVar2,param_3[6]);
  uVar5 = PackedFloatingMUL(uVar3,param_3[1]);
  uVar6 = PackedFloatingMUL(uVar6,param_3[3]);
  uVar3 = PackedFloatingADD(uVar2,uVar4);
  uVar2 = PackedFloatingADD(uVar5,param_3[7]);
  uVar2 = PackedFloatingADD(uVar2,uVar6);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar2 = CONCAT44(uVar1,uVar1);
  uVar6 = FloatingReciprocalAprox(uVar6,uVar2);
  uVar2 = PackedFloatingReciprocalIter1(uVar2,uVar6);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar6);
  uVar3 = PackedFloatingMUL(uVar3,uVar2);
  *param_1 = uVar3;
  FastExitMediaState();
  return param_1;
}

