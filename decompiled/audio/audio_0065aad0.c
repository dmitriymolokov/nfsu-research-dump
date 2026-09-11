/* Decompiled from Speed.exe @ 0065aad0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065aad0(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = CONCAT44(param_2,param_2);
  do {
    if ((param_1 & 7) == 0) goto LAB_0065ab13;
    uVar4 = PackedFloatingMUL((ulonglong)*(uint *)(param_3 + -4 + param_1 * 4),uVar3);
    uVar4 = PackedFloatingADD(uVar4,(ulonglong)*(uint *)(param_4 + -4 + param_1 * 4));
    *(int *)(param_4 + -4 + param_1 * 4) = (int)uVar4;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
LAB_0065ab68:
  FastExitMediaState();
  return;
LAB_0065ab13:
  do {
    uVar4 = PackedFloatingMUL(*(undefined8 *)(param_3 + -0x20 + param_1 * 4),uVar3);
    uVar5 = PackedFloatingMUL(*(undefined8 *)(param_3 + -0x18 + param_1 * 4),uVar3);
    uVar6 = PackedFloatingMUL(*(undefined8 *)(param_3 + -0x10 + param_1 * 4),uVar3);
    uVar7 = PackedFloatingMUL(*(undefined8 *)(param_3 + -8 + param_1 * 4),uVar3);
    uVar4 = PackedFloatingADD(uVar4,*(undefined8 *)(param_4 + -0x20 + param_1 * 4));
    *(undefined8 *)(param_4 + -0x20 + param_1 * 4) = uVar4;
    uVar4 = PackedFloatingADD(uVar5,*(undefined8 *)(param_4 + -0x18 + param_1 * 4));
    *(undefined8 *)(param_4 + -0x18 + param_1 * 4) = uVar4;
    uVar4 = PackedFloatingADD(uVar6,*(undefined8 *)(param_4 + -0x10 + param_1 * 4));
    *(undefined8 *)(param_4 + -0x10 + param_1 * 4) = uVar4;
    uVar4 = PackedFloatingADD(uVar7,*(undefined8 *)(param_4 + -8 + param_1 * 4));
    *(undefined8 *)(param_4 + -8 + param_1 * 4) = uVar4;
    uVar2 = param_1 - 8;
    bVar1 = 7 < (int)param_1;
    param_1 = uVar2;
  } while (uVar2 != 0 && bVar1);
  goto LAB_0065ab68;
}

