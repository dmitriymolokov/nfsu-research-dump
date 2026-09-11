/* Decompiled from Speed.exe @ 006241b0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_006241b0(int param_1,int param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(uint *)(param_4 + param_1 * 0x10);
  uVar2 = *(uint *)(param_4 + param_1 * 0x10 + 4);
  uVar6 = CONCAT44(uVar1,uVar1);
  uVar8 = CONCAT44(uVar2,uVar2);
  iVar3 = (uVar1 & 0xff) * 0x40;
  iVar4 = iVar3 + param_2;
  iVar5 = (uVar2 & 0xff) * 0x40;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + param_2),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar3 + param_2),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  *param_3 = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 8 + param_2),uVar8);
  iVar5 = iVar5 + param_2;
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 8),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[1] = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x10),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x10),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[2] = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x18),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x18),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[3] = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x20),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x20),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[4] = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x28),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x28),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[5] = uVar7;
  uVar7 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x30),uVar8);
  uVar9 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x30),uVar6);
  uVar7 = PackedFloatingADD(uVar9,uVar7);
  param_3[6] = uVar7;
  uVar8 = PackedFloatingMUL(*(undefined8 *)(iVar5 + 0x38),uVar8);
  uVar6 = PackedFloatingMUL(*(undefined8 *)(iVar4 + 0x38),uVar6);
  uVar6 = PackedFloatingADD(uVar6,uVar8);
  param_3[7] = uVar6;
  return;
}

