/* Decompiled from Speed.exe @ 005f351d */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f351d(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_MM4;
  undefined8 uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 in_MM5;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_MM6;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_MM7;
  undefined8 uVar17;
  undefined4 uStack_2c;
  
  uVar2 = param_3[2];
  uVar3 = param_3[4];
  uVar11 = PackedSwapDWords(in_MM5,uVar2);
  uVar8 = PackedSwapDWords(in_MM4,uVar3);
  uVar1 = *param_3;
  uVar14 = PackedSwapDWords(in_MM6,param_3[6]);
  uVar17 = PackedSwapDWords(in_MM7,uVar3);
  uVar11 = PackedFloatingMUL(uVar11,uVar1);
  uVar8 = PackedFloatingMUL(uVar8,uVar1);
  uVar14 = PackedFloatingMUL(uVar14,uVar1);
  uVar1 = PackedSwapDWords(uVar1,param_3[6]);
  uVar17 = PackedFloatingMUL(uVar17,uVar2);
  uVar12 = PackedFloatingNegAccumulate(uVar11,uVar8);
  uVar2 = PackedFloatingMUL(uVar2,uVar1);
  uVar3 = PackedFloatingMUL(uVar3,uVar1);
  uVar17 = PackedFloatingNegAccumulate(uVar14,uVar17);
  uVar1 = PackedFloatingNegAccumulate(uVar2,uVar3);
  uVar2 = param_3[7];
  uVar3 = param_3[5];
  uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar8 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),uVar2);
  uVar6 = (undefined4)uVar1;
  uVar1 = PackedFloatingMUL(CONCAT44(uVar10,uVar10),param_3[3]);
  uVar11 = PackedFloatingMUL(CONCAT44(uVar6,uVar6),uVar3);
  uVar1 = PackedFloatingADD(uVar8,uVar1);
  uVar14 = PackedFloatingSUB(uVar1,uVar11);
  uVar7 = (undefined4)uVar17;
  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar8 = PackedFloatingMUL(CONCAT44(uVar10,uVar10),param_3[1]);
  uVar1 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),uVar2);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar7,uVar7),uVar3);
  uVar1 = PackedFloatingSUB(uVar1,uVar9);
  uVar17 = PackedFloatingADD(uVar1,uVar8);
  uVar8 = CONCAT44((int)uVar12,(int)uVar12);
  uVar1 = PackedFloatingMUL(CONCAT44(uVar6,uVar6),param_3[1]);
  uVar2 = PackedFloatingMUL(uVar2,uVar8);
  uVar11 = PackedFloatingMUL(CONCAT44(uVar7,uVar7),param_3[3]);
  uVar2 = PackedFloatingADD(uVar2,uVar1);
  uVar11 = PackedFloatingSUB(uVar2,uVar11);
  uVar1 = PackedFloatingMUL(uVar8,uVar3);
  uVar13 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),param_3[3]);
  uVar2 = param_3[1];
  uVar15 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),param_3[1]);
  uVar1 = PackedFloatingSUB(uVar1,uVar13);
  uVar12 = PackedFloatingADD(uVar1,uVar15);
  uVar1 = param_3[3];
  uVar8 = param_3[5];
  uVar13 = PackedSwapDWords(uVar13,uVar1);
  uVar9 = PackedSwapDWords(uVar9,uVar8);
  uVar13 = PackedFloatingMUL(uVar13,uVar2);
  uVar15 = PackedSwapDWords(uVar15,param_3[7]);
  uVar9 = PackedFloatingMUL(uVar9,uVar2);
  uVar3 = PackedSwapDWords(uVar3,uVar8);
  uVar16 = PackedFloatingMUL(uVar15,uVar2);
  uVar2 = PackedSwapDWords(uVar2,param_3[7]);
  uVar15 = PackedFloatingNegAccumulate(uVar13,uVar9);
  uVar9 = PackedFloatingMUL(uVar3,uVar1);
  uVar3 = PackedFloatingMUL(uVar1,uVar2);
  uVar2 = PackedFloatingMUL(uVar8,uVar2);
  uVar13 = PackedFloatingNegAccumulate(uVar16,uVar9);
  uVar1 = PackedFloatingNegAccumulate(uVar3,uVar2);
  uVar2 = param_3[6];
  uVar3 = param_3[4];
  uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar6 = (undefined4)uVar1;
  uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar9 = PackedFloatingMUL(CONCAT44(uVar10,uVar10),param_3[2]);
  uVar1 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),uVar2);
  uVar8 = PackedFloatingMUL(CONCAT44(uVar6,uVar6),uVar3);
  uVar1 = PackedFloatingADD(uVar1,uVar9);
  uVar9 = PackedFloatingSUB(uVar1,uVar8);
  uVar7 = (undefined4)uVar13;
  uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar8 = PackedFloatingMUL(CONCAT44(uVar10,uVar10),*param_3);
  uVar1 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),uVar2);
  uVar13 = PackedFloatingMUL(CONCAT44(uVar7,uVar7),uVar3);
  uVar1 = PackedFloatingSUB(uVar1,uVar13);
  uVar13 = PackedFloatingADD(uVar1,uVar8);
  uVar15 = CONCAT44((int)uVar15,(int)uVar15);
  uVar8 = PackedFloatingMUL(CONCAT44(uVar6,uVar6),*param_3);
  uVar1 = PackedFloatingMUL(uVar2,uVar15);
  uVar16 = PackedFloatingMUL(CONCAT44(uVar7,uVar7),param_3[2]);
  uVar1 = PackedFloatingADD(uVar1,uVar8);
  uVar1 = PackedFloatingSUB(uVar1,uVar16);
  uVar8 = PackedFloatingMUL(uVar15,uVar3);
  uVar15 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),param_3[2]);
  uVar16 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),*param_3);
  uVar8 = PackedFloatingSUB(uVar8,uVar15);
  uVar15 = PackedFloatingADD(uVar8,uVar16);
  uStack_2c = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar8 = CONCAT44(uStack_2c,(int)((ulonglong)uVar9 >> 0x20));
  uVar2 = PackedFloatingMUL(CONCAT44((int)((ulonglong)uVar15 >> 0x20),
                                     (int)((ulonglong)uVar1 >> 0x20)),
                            CONCAT44((int)uVar2,(int)uVar3));
  uVar3 = PackedFloatingMUL(CONCAT44(*(undefined4 *)(param_3 + 2),(int)*param_3),uVar8);
  uVar2 = PackedFloatingNegAccumulate(uVar2,uVar3);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar4 = (undefined4)uVar2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar4;
  }
  uVar3 = FloatingReciprocalAprox(uVar8,uVar2);
  uVar8 = PackedFloatingCompareEQ(0,uVar2);
  uVar2 = PackedFloatingReciprocalIter1(CONCAT44(uVar4,uVar4),uVar3);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar3);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_006a0778);
  uVar3 = PackedSwapDWords(uVar3,uVar2);
  if ((int)uVar8 == 0) {
    uVar8 = PackedFloatingMUL(uVar9,uVar3);
    uVar9 = PackedFloatingMUL(uVar13,uVar2);
    uVar14 = PackedFloatingMUL(uVar14,uVar3);
    uVar17 = PackedFloatingMUL(uVar17,uVar2);
    *param_1 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),(int)((ulonglong)uVar8 >> 0x20));
    param_1[2] = CONCAT44((int)uVar9,(int)uVar8);
    param_1[4] = CONCAT44((int)((ulonglong)uVar17 >> 0x20),(int)((ulonglong)uVar14 >> 0x20));
    param_1[6] = CONCAT44((int)uVar17,(int)uVar14);
    uVar1 = PackedFloatingMUL(uVar1,uVar3);
    uVar8 = PackedFloatingMUL(uVar15,uVar2);
    uVar3 = PackedFloatingMUL(uVar11,uVar3);
    uVar2 = PackedFloatingMUL(uVar12,uVar2);
    param_1[1] = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)((ulonglong)uVar1 >> 0x20));
    param_1[3] = CONCAT44((int)uVar8,(int)uVar1);
    param_1[5] = CONCAT44((int)((ulonglong)uVar2 >> 0x20),(int)((ulonglong)uVar3 >> 0x20));
    param_1[7] = CONCAT44((int)uVar2,(int)uVar3);
  }
  FastExitMediaState();
  return;
}

