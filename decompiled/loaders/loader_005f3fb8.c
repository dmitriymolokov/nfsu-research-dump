/* Decompiled from Speed.exe @ 005f3fb8 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined8 * FUN_005f3fb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  uVar8 = CONCAT44(uVar1,uVar1);
  uVar5 = CONCAT44(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 1));
  uVar2 = PackedFloatingMUL(uVar4,*param_3);
  uVar3 = PackedFloatingMUL(uVar8,param_3[2]);
  uVar6 = PackedFloatingMUL(uVar5,param_3[4]);
  uVar7 = PackedFloatingMUL(uVar4,param_3[1]);
  uVar4 = PackedFloatingADD(uVar3,uVar6);
  uVar8 = PackedFloatingMUL(uVar8,param_3[3]);
  uVar3 = PackedFloatingMUL(uVar5,param_3[5]);
  uVar4 = PackedFloatingADD(uVar2,uVar4);
  uVar2 = PackedFloatingADD(uVar8,uVar3);
  uVar2 = PackedFloatingADD(uVar7,uVar2);
  *param_1 = uVar4;
  *(int *)(param_1 + 1) = (int)uVar2;
  FastExitMediaState();
  return param_1;
}

