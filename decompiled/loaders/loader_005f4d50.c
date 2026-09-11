/* Decompiled from Speed.exe @ 005f4d50 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined8 * FUN_005f4d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  FastExitMediaState();
  uVar1 = (undefined4)*param_2;
  uVar4 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar2 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),*param_3);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),param_3[2]);
  uVar2 = PackedFloatingADD(uVar2,uVar3);
  *param_1 = uVar2;
  FastExitMediaState();
  return param_1;
}

