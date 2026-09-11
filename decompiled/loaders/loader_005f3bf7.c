/* Decompiled from Speed.exe @ 005f3bf7 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_005f3bf7(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar11;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined4 uStack_34;
  
  uVar11 = (undefined4)((ulonglong)*param_3 >> 0x20);
  uVar2 = (undefined4)param_3[4];
  uVar16 = (undefined4)param_3[2];
  uVar12 = (undefined4)*param_3;
  uVar21 = (undefined4)((ulonglong)param_3[2] >> 0x20);
  uVar4 = (undefined4)((ulonglong)param_3[4] >> 0x20);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),CONCAT44(uVar2,uVar16));
  uVar13 = PackedFloatingMUL(CONCAT44(uVar12,uVar12),CONCAT44(uVar4,uVar21));
  uVar14 = PackedFloatingSUB(uVar13,uVar9);
  uVar5 = (undefined4)((ulonglong)param_3[6] >> 0x20);
  uVar8 = (undefined4)param_3[6];
  uVar17 = PackedFloatingMUL(CONCAT44(uVar4,uVar5),CONCAT44(uVar16,uVar12));
  uVar20 = PackedFloatingMUL(CONCAT44(uVar21,uVar11),CONCAT44(uVar2,uVar8));
  uVar9 = PackedFloatingMUL(CONCAT44(uVar2,uVar16),CONCAT44(uVar5,uVar5));
  uVar13 = PackedFloatingMUL(CONCAT44(uVar4,uVar21),CONCAT44(uVar8,uVar8));
  uVar18 = PackedFloatingSUB(uVar17,uVar20);
  uVar17 = PackedFloatingSUBR(uVar13,uVar9);
  uVar9 = param_3[7];
  uVar13 = param_3[5];
  uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar20 = PackedFloatingMUL(CONCAT44(uVar2,uVar2),uVar9);
  uVar5 = (undefined4)uVar17;
  uVar17 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),param_3[3]);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),uVar13);
  uVar17 = PackedFloatingADD(uVar20,uVar17);
  uVar3 = PackedFloatingSUB(uVar17,uVar6);
  uVar8 = (undefined4)uVar18;
  uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar20 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),param_3[1]);
  uVar17 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),uVar9);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar8,uVar8),uVar13);
  uVar17 = PackedFloatingSUB(uVar17,uVar6);
  uVar18 = PackedFloatingADD(uVar17,uVar20);
  uVar20 = CONCAT44((int)uVar14,(int)uVar14);
  uVar17 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),param_3[1]);
  uVar9 = PackedFloatingMUL(uVar9,uVar20);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar8,uVar8),param_3[3]);
  uVar9 = PackedFloatingADD(uVar9,uVar17);
  uVar17 = PackedFloatingSUB(uVar9,uVar6);
  uVar9 = PackedFloatingMUL(uVar20,uVar13);
  uVar13 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),param_3[3]);
  uVar20 = PackedFloatingMUL(CONCAT44(uVar2,uVar2),param_3[1]);
  uVar9 = PackedFloatingSUB(uVar9,uVar13);
  uVar14 = PackedFloatingADD(uVar9,uVar20);
  uVar11 = (undefined4)((ulonglong)param_3[1] >> 0x20);
  uVar2 = (undefined4)param_3[5];
  uVar16 = (undefined4)param_3[3];
  uVar12 = (undefined4)param_3[1];
  uVar21 = (undefined4)((ulonglong)param_3[3] >> 0x20);
  uVar4 = (undefined4)((ulonglong)param_3[5] >> 0x20);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),CONCAT44(uVar2,uVar16));
  uVar13 = PackedFloatingMUL(CONCAT44(uVar12,uVar12),CONCAT44(uVar4,uVar21));
  uVar15 = PackedFloatingSUB(uVar13,uVar9);
  uVar5 = (undefined4)((ulonglong)param_3[7] >> 0x20);
  uVar8 = (undefined4)param_3[7];
  uVar20 = PackedFloatingMUL(CONCAT44(uVar4,uVar5),CONCAT44(uVar16,uVar12));
  uVar6 = PackedFloatingMUL(CONCAT44(uVar21,uVar11),CONCAT44(uVar2,uVar8));
  uVar9 = PackedFloatingMUL(CONCAT44(uVar2,uVar16),CONCAT44(uVar5,uVar5));
  uVar13 = PackedFloatingMUL(CONCAT44(uVar4,uVar21),CONCAT44(uVar8,uVar8));
  uVar19 = PackedFloatingSUB(uVar20,uVar6);
  uVar20 = PackedFloatingSUBR(uVar13,uVar9);
  uVar9 = param_3[6];
  uVar13 = param_3[4];
  uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar5 = (undefined4)uVar20;
  uVar2 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar10 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),param_3[2]);
  uVar20 = PackedFloatingMUL(CONCAT44(uVar2,uVar2),uVar9);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),uVar13);
  uVar20 = PackedFloatingADD(uVar20,uVar10);
  uVar10 = PackedFloatingSUB(uVar20,uVar6);
  uVar8 = (undefined4)uVar19;
  uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar11,uVar11),*param_3);
  uVar20 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),uVar9);
  uVar19 = PackedFloatingMUL(CONCAT44(uVar8,uVar8),uVar13);
  uVar20 = PackedFloatingSUB(uVar20,uVar19);
  uVar19 = PackedFloatingADD(uVar20,uVar6);
  uVar15 = CONCAT44((int)uVar15,(int)uVar15);
  uVar6 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),*param_3);
  uVar20 = PackedFloatingMUL(uVar9,uVar15);
  uVar7 = PackedFloatingMUL(CONCAT44(uVar8,uVar8),param_3[2]);
  uVar20 = PackedFloatingADD(uVar20,uVar6);
  uVar20 = PackedFloatingSUB(uVar20,uVar7);
  uVar6 = PackedFloatingMUL(uVar15,uVar13);
  uVar15 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),param_3[2]);
  uVar7 = PackedFloatingMUL(CONCAT44(uVar2,uVar2),*param_3);
  uVar6 = PackedFloatingSUB(uVar6,uVar15);
  uVar6 = PackedFloatingADD(uVar6,uVar7);
  uVar9 = PackedFloatingMUL(CONCAT44((int)uVar9,(int)uVar13),_DAT_006a0778);
  uStack_34 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar13 = CONCAT44(uStack_34,(int)((ulonglong)uVar10 >> 0x20));
  uVar15 = PackedFloatingMUL(CONCAT44(*(undefined4 *)(param_3 + 2),(int)*param_3),_DAT_006a0778);
  uVar9 = PackedFloatingMUL(CONCAT44((int)((ulonglong)uVar6 >> 0x20),
                                     (int)((ulonglong)uVar20 >> 0x20)),uVar9);
  uVar15 = PackedFloatingMUL(uVar15,uVar13);
  uVar9 = PackedFloatingADD(uVar9,uVar15);
  uVar9 = PackedFloatingAccumulate(uVar9,uVar9);
  uVar2 = (undefined4)uVar9;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  uVar13 = FloatingReciprocalAprox(uVar13,uVar9);
  uVar15 = PackedFloatingCompareEQ(0,uVar9);
  uVar9 = PackedFloatingReciprocalIter1(CONCAT44(uVar2,uVar2),uVar13);
  uVar9 = PackedFloatingReciprocalIter2(uVar9,uVar13);
  uVar13 = PackedFloatingMUL(uVar9,_DAT_006a0778);
  uVar9 = CONCAT44((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  puVar1 = (undefined8 *)uVar15;
  if ((undefined8 *)uVar15 == (undefined8 *)0x0) {
    uVar10 = PackedFloatingMUL(uVar10,uVar9);
    uVar19 = PackedFloatingMUL(uVar19,uVar13);
    uVar3 = PackedFloatingMUL(uVar3,uVar9);
    uVar18 = PackedFloatingMUL(uVar18,uVar13);
    *param_1 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),(int)((ulonglong)uVar10 >> 0x20));
    param_1[2] = CONCAT44((int)uVar19,(int)uVar10);
    param_1[4] = CONCAT44((int)((ulonglong)uVar18 >> 0x20),(int)((ulonglong)uVar3 >> 0x20));
    param_1[6] = CONCAT44((int)uVar18,(int)uVar3);
    uVar20 = PackedFloatingMUL(uVar20,uVar9);
    uVar6 = PackedFloatingMUL(uVar6,uVar13);
    uVar9 = PackedFloatingMUL(uVar17,uVar9);
    uVar13 = PackedFloatingMUL(uVar14,uVar13);
    param_1[1] = CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)((ulonglong)uVar20 >> 0x20));
    param_1[3] = CONCAT44((int)uVar6,(int)uVar20);
    param_1[5] = CONCAT44((int)((ulonglong)uVar13 >> 0x20),(int)((ulonglong)uVar9 >> 0x20));
    param_1[7] = CONCAT44((int)uVar13,(int)uVar9);
    puVar1 = param_1;
  }
  return puVar1;
}

