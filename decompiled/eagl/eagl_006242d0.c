/* Decompiled from Speed.exe @ 006242d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_006242d0(int param_1,int param_2,undefined8 *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = (uint *)(param_1 * 0x10 + param_4);
  uVar2 = puVar1[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[2];
  uVar10 = CONCAT44(uVar3,uVar3);
  uVar11 = CONCAT44(uVar2,uVar2);
  iVar5 = (uVar3 & 0xff) * 0x40;
  iVar6 = iVar5 + param_2;
  iVar7 = (uVar2 & 0xff) * 0x40;
  iVar8 = iVar7 + param_2;
  puVar9 = (undefined8 *)((uVar4 & 0xff) * 0x40 + param_2);
  uVar13 = CONCAT44(uVar4,uVar4);
  uVar12 = PackedFloatingMUL(*puVar9,uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar7 + param_2),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar5 + param_2),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  *param_3 = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[1],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 8),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 8),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[1] = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[2],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x10),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x10),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[2] = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[3],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x18),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x18),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[3] = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[4],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x20),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x20),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[4] = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[5],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x28),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x28),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[5] = uVar12;
  uVar12 = PackedFloatingMUL(puVar9[6],uVar13);
  uVar14 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x30),uVar11);
  uVar15 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x30),uVar10);
  uVar14 = PackedFloatingADD(uVar15,uVar14);
  uVar12 = PackedFloatingADD(uVar14,uVar12);
  param_3[6] = uVar12;
  uVar13 = PackedFloatingMUL(puVar9[7],uVar13);
  uVar11 = PackedFloatingMUL(*(undefined8 *)(iVar8 + 0x38),uVar11);
  uVar10 = PackedFloatingMUL(*(undefined8 *)(iVar6 + 0x38),uVar10);
  uVar10 = PackedFloatingADD(uVar10,uVar11);
  uVar10 = PackedFloatingADD(uVar10,uVar13);
  param_3[7] = uVar10;
  return;
}

