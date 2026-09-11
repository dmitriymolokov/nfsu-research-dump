/* Decompiled from Speed.exe @ 005ef75e */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ef75e(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
                 ulonglong *param_5,ulonglong *param_6,ulonglong *param_7)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_20;
  
  local_a8 = *param_4;
  local_a0 = param_4[1];
  uVar8 = *param_5;
  uVar14 = param_5[1];
  uVar2 = PackedFloatingADD(local_a8,uVar8);
  uVar4 = PackedFloatingADD(local_a0,uVar14);
  uVar6 = PackedFloatingSUB(local_a8,uVar8);
  uVar2 = PackedFloatingMUL(uVar2,uVar2);
  uVar9 = PackedFloatingSUB(local_a0,uVar14);
  uVar4 = PackedFloatingMUL(uVar4,uVar4);
  uVar6 = PackedFloatingMUL(uVar6,uVar6);
  uVar9 = PackedFloatingMUL(uVar9,uVar9);
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar6 = PackedFloatingADD(uVar6,uVar9);
  local_88 = *param_6;
  local_80 = param_6[1];
  uVar11 = PackedFloatingADD(uVar8,local_88);
  uVar12 = PackedFloatingADD(uVar14,local_80);
  uVar4 = PackedFloatingSUB(uVar8,local_88);
  uVar9 = PackedFloatingSUB(uVar14,local_80);
  uVar11 = PackedFloatingMUL(uVar11,uVar11);
  uVar12 = PackedFloatingMUL(uVar12,uVar12);
  uVar4 = PackedFloatingMUL(uVar4,uVar4);
  uVar9 = PackedFloatingMUL(uVar9,uVar9);
  uVar11 = PackedFloatingADD(uVar11,uVar12);
  uVar4 = PackedFloatingADD(uVar4,uVar9);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar11);
  uVar4 = PackedFloatingAccumulate(uVar6,uVar4);
  uVar2 = PackedFloatingCompareGT(uVar4,uVar2);
  uVar7 = packsswb(uVar2,uVar2);
  if ((uVar7 & 1) != 0) {
    local_a8 = DAT_006a07b0 ^ *param_4;
    local_a0 = DAT_006a07b0 ^ param_4[1];
  }
  if ((uVar7 & 0x10000) != 0) {
    local_88 = DAT_006a07b0 ^ *param_6;
    local_80 = DAT_006a07b0 ^ param_6[1];
  }
  local_78 = *param_7;
  uVar7 = param_7[1];
  uVar6 = PackedFloatingADD(local_88,local_78);
  uVar9 = PackedFloatingADD(local_80,uVar7);
  uVar2 = PackedFloatingSUB(local_88,local_78);
  uVar4 = PackedFloatingSUB(local_80,uVar7);
  uVar6 = PackedFloatingMUL(uVar6,uVar6);
  uVar9 = PackedFloatingMUL(uVar9,uVar9);
  uVar2 = PackedFloatingMUL(uVar2,uVar2);
  uVar4 = PackedFloatingMUL(uVar4,uVar4);
  uVar6 = PackedFloatingADD(uVar6,uVar9);
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar4 = PackedFloatingAccumulate(uVar6,uVar6);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar10 = PackedFloatingCompareGT(uVar2,uVar4);
  local_70 = uVar7;
  if ((uVar10 & 1) != 0) {
    local_78 = DAT_006a07b0 ^ *param_7;
    local_70 = DAT_006a07b0 ^ param_7[1];
  }
  uVar2 = PackedFloatingMUL(uVar8,uVar8);
  uVar4 = PackedFloatingMUL(uVar14,uVar14);
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar4 = FloatingReciprocalAprox(uVar7,uVar2);
  uVar7 = PackedFloatingCompareGT(uVar2,_DAT_006a07f8);
  uVar2 = PackedFloatingReciprocalIter1(uVar2,uVar4);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar4);
  uVar4 = PackedFloatingMUL((uVar8 ^ _DAT_006a0858) & uVar7,uVar2);
  uVar11 = PackedFloatingMUL((uVar14 ^ _DAT_006a07a0) & uVar7,uVar2);
  uVar10 = CONCAT44((int)local_a8,(int)(local_a8 >> 0x20));
  uVar3 = CONCAT44((int)local_a0,(int)(local_a0 >> 0x20));
  uVar7 = PackedFloatingMUL(local_a8,uVar11);
  uVar2 = PackedFloatingMUL(local_a0,uVar4);
  uVar9 = PackedFloatingMUL(uVar3 ^ _DAT_006a07a0,uVar4);
  uVar6 = PackedFloatingMUL(uVar10,uVar11);
  uVar2 = PackedFloatingADD(uVar7 ^ _DAT_006a07a0,uVar2);
  uVar6 = PackedFloatingSUB(uVar6,uVar9);
  uVar15 = PackedFloatingMUL(uVar3,uVar11);
  uVar6 = PackedFloatingAccumulate(uVar6,uVar2);
  uVar12 = PackedFloatingMUL(uVar10 ^ _DAT_006a07a0,uVar4);
  uVar2 = PackedFloatingMUL(local_a8,uVar4);
  uVar9 = PackedFloatingMUL(local_a0 ^ _DAT_006a07a0,uVar11);
  uVar12 = PackedFloatingADD(uVar12,uVar15);
  uVar2 = PackedFloatingSUB(uVar9,uVar2);
  uVar10 = PackedFloatingAccumulate(uVar12,uVar2);
  uVar3 = CONCAT44((int)local_88,(int)(local_88 >> 0x20));
  uVar13 = CONCAT44((int)local_80,(int)(local_80 >> 0x20));
  uVar7 = PackedFloatingMUL(local_88,uVar11);
  uVar2 = PackedFloatingMUL(local_80,uVar4);
  uVar12 = PackedFloatingMUL(uVar13 ^ _DAT_006a07a0,uVar4);
  uVar9 = PackedFloatingMUL(uVar3,uVar11);
  uVar2 = PackedFloatingADD(uVar7 ^ _DAT_006a07a0,uVar2);
  uVar9 = PackedFloatingSUB(uVar9,uVar12);
  uVar15 = PackedFloatingMUL(uVar13,uVar11);
  uVar9 = PackedFloatingAccumulate(uVar9,uVar2);
  uVar12 = PackedFloatingMUL(uVar3 ^ _DAT_006a07a0,uVar4);
  uVar2 = PackedFloatingMUL(local_88,uVar4);
  uVar4 = PackedFloatingMUL(local_80 ^ _DAT_006a07a0,uVar11);
  uVar11 = PackedFloatingADD(uVar12,uVar15);
  uVar2 = PackedFloatingSUB(uVar4,uVar2);
  uVar7 = PackedFloatingAccumulate(uVar11,uVar2);
  uVar1 = (undefined4)(uVar10 >> 0x20);
  uVar4 = PackedFloatingCompareGE(CONCAT44(uVar1,uVar1),_DAT_006a0810);
  uVar2 = uVar9;
  if ((int)uVar4 == 0) {
    uVar1 = FUN_0061b900();
    uVar3 = FUN_0061bfe0();
    uVar4 = PackedFloatingCompareGE(uVar3 & _DAT_006a07c8,DAT_006a07d0);
    if ((int)uVar4 != 0) {
      uVar2 = FloatingReciprocalAprox(uVar2,uVar3);
      uVar4 = PackedFloatingReciprocalIter1(uVar3,uVar2);
      uVar4 = PackedFloatingReciprocalIter2(uVar4,uVar2);
      uVar4 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar4);
      uVar6 = PackedFloatingMUL(uVar6,uVar4);
      uVar10 = PackedFloatingMUL(uVar10,uVar4);
    }
  }
  uVar10 = uVar10 & _DAT_006a07d8;
  uVar1 = (undefined4)(uVar7 >> 0x20);
  uVar4 = PackedFloatingCompareGE(CONCAT44(uVar1,uVar1),_DAT_006a0810);
  if ((int)uVar4 == 0) {
    uVar1 = FUN_0061b900();
    uVar3 = FUN_0061bfe0(uVar1,unaff_ESI,unaff_EBX);
    uVar4 = PackedFloatingCompareGE(uVar3 & _DAT_006a07c8,DAT_006a07d0);
    if ((int)uVar4 != 0) {
      uVar4 = FloatingReciprocalAprox(uVar2,uVar3);
      uVar2 = PackedFloatingReciprocalIter1(uVar3,uVar4);
      uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar4);
      uVar2 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar2);
      uVar9 = PackedFloatingMUL(uVar9,uVar2);
      uVar7 = PackedFloatingMUL(uVar7,uVar2);
    }
  }
  uVar2 = PackedFloatingADD(uVar6,uVar9);
  uVar4 = PackedFloatingADD(uVar10,uVar7 & _DAT_006a07d8);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_006a3da0);
  uVar3 = PackedFloatingMUL(uVar4,_DAT_006a3da0);
  uVar4 = PackedFloatingMUL(uVar2,uVar2);
  uVar6 = PackedFloatingMUL(uVar3 & 0xffffffff,uVar3 & 0xffffffff);
  uVar4 = PackedFloatingADD(uVar4,uVar6);
  uVar4 = PackedFloatingAccumulate(uVar4,uVar4);
  uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar4);
  uVar9 = PackedFloatingMUL(uVar6,uVar6);
  uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar4);
  uVar6 = PackedFloatingReciprocalIter2(uVar9,uVar6);
  uVar1 = (undefined4)uVar6;
  PackedFloatingMUL(uVar4,uVar6);
  uVar7 = FUN_0061bee0(uVar1,unaff_ESI,unaff_EBX);
  uVar10 = PackedFloatingCompareGE(uVar7 & _DAT_006a07c0,DAT_006a07d0);
  uVar5 = (undefined4)(uVar7 >> 0x20);
  uVar4 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),CONCAT44(unaff_ESI,uVar1));
  local_20 = (undefined4)uVar3;
  if ((uVar10 & 0x100000000) != 0) {
    uVar4 = CONCAT44((int)uVar4,(int)uVar4);
    uVar6 = PackedFloatingMUL(uVar3 & 0xffffffff,uVar4);
    local_20 = (undefined4)uVar6;
    uVar2 = PackedFloatingMUL(uVar2,uVar4);
  }
  uVar10 = CONCAT44((int)uVar7,local_20);
  uVar3 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar13 = CONCAT44(local_20,(int)uVar7);
  uVar7 = PackedFloatingMUL(uVar2,uVar14);
  uVar4 = PackedFloatingMUL(uVar10,uVar8);
  uVar9 = PackedFloatingMUL(uVar13 ^ _DAT_006a07a0,uVar8);
  uVar6 = PackedFloatingMUL(uVar3,uVar14);
  uVar4 = PackedFloatingADD(uVar7 ^ _DAT_006a07a0,uVar4);
  uVar6 = PackedFloatingSUB(uVar6,uVar9);
  uVar11 = PackedFloatingMUL(uVar13,uVar14);
  uVar6 = PackedFloatingAccumulate(uVar6,uVar4);
  uVar9 = PackedFloatingMUL(uVar3 ^ _DAT_006a07a0,uVar8);
  uVar10 = uVar10 ^ _DAT_006a07a0;
  uVar2 = PackedFloatingMUL(uVar2,uVar8);
  *param_1 = uVar6;
  uVar4 = PackedFloatingMUL(uVar10,uVar14);
  uVar9 = PackedFloatingADD(uVar9,uVar11);
  uVar2 = PackedFloatingSUB(uVar4,uVar2);
  uVar2 = PackedFloatingAccumulate(uVar9,uVar2);
  param_1[1] = uVar2;
  uVar2 = PackedFloatingMUL(local_88,local_88);
  uVar4 = PackedFloatingMUL(local_80,local_80);
  uVar2 = PackedFloatingADD(uVar2,uVar4);
  uVar2 = PackedFloatingAccumulate(uVar2,uVar2);
  uVar4 = FloatingReciprocalAprox(uVar6,uVar2);
  uVar7 = PackedFloatingCompareGT(uVar2,_DAT_006a07f8);
  uVar2 = PackedFloatingReciprocalIter1(uVar2,uVar4);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar4);
  uVar4 = PackedFloatingMUL((local_88 ^ _DAT_006a0858) & uVar7,uVar2);
  uVar11 = PackedFloatingMUL((local_80 ^ _DAT_006a07a0) & uVar7,uVar2);
  uVar10 = CONCAT44((int)uVar8,(int)(uVar8 >> 0x20));
  uVar3 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  uVar7 = PackedFloatingMUL(uVar8,uVar11);
  uVar2 = PackedFloatingMUL(uVar14,uVar4);
  uVar9 = PackedFloatingMUL(uVar3 ^ _DAT_006a07a0,uVar4);
  uVar6 = PackedFloatingMUL(uVar10,uVar11);
  uVar2 = PackedFloatingADD(uVar7 ^ _DAT_006a07a0,uVar2);
  uVar6 = PackedFloatingSUB(uVar6,uVar9);
  uVar15 = PackedFloatingMUL(uVar3,uVar11);
  uVar6 = PackedFloatingAccumulate(uVar6,uVar2);
  uVar12 = PackedFloatingMUL(uVar10 ^ _DAT_006a07a0,uVar4);
  uVar2 = PackedFloatingMUL(uVar8,uVar4);
  uVar9 = PackedFloatingMUL(uVar14 ^ _DAT_006a07a0,uVar11);
  uVar12 = PackedFloatingADD(uVar12,uVar15);
  uVar2 = PackedFloatingSUB(uVar9,uVar2);
  uVar14 = PackedFloatingAccumulate(uVar12,uVar2);
  uVar7 = CONCAT44((int)local_78,(int)(local_78 >> 0x20));
  uVar10 = CONCAT44((int)local_70,(int)(local_70 >> 0x20));
  uVar8 = PackedFloatingMUL(local_78,uVar11);
  uVar2 = PackedFloatingMUL(local_70,uVar4);
  uVar12 = PackedFloatingMUL(uVar10 ^ _DAT_006a07a0,uVar4);
  uVar9 = PackedFloatingMUL(uVar7,uVar11);
  uVar2 = PackedFloatingADD(uVar8 ^ _DAT_006a07a0,uVar2);
  uVar9 = PackedFloatingSUB(uVar9,uVar12);
  uVar15 = PackedFloatingMUL(uVar10,uVar11);
  uVar9 = PackedFloatingAccumulate(uVar9,uVar2);
  uVar12 = PackedFloatingMUL(uVar7 ^ _DAT_006a07a0,uVar4);
  uVar2 = PackedFloatingMUL(local_78,uVar4);
  uVar4 = PackedFloatingMUL(local_70 ^ _DAT_006a07a0,uVar11);
  uVar11 = PackedFloatingADD(uVar12,uVar15);
  uVar2 = PackedFloatingSUB(uVar4,uVar2);
  uVar8 = PackedFloatingAccumulate(uVar11,uVar2);
  uVar1 = (undefined4)(uVar14 >> 0x20);
  uVar4 = PackedFloatingCompareGE(CONCAT44(uVar1,uVar1),_DAT_006a0810);
  uVar2 = uVar9;
  if ((int)uVar4 == 0) {
    uVar1 = FUN_0061b900();
    uVar7 = FUN_0061bfe0(uVar1,unaff_ESI,unaff_EBX);
    uVar4 = PackedFloatingCompareGE(uVar7 & _DAT_006a07c8,DAT_006a07d0);
    if ((int)uVar4 != 0) {
      uVar2 = FloatingReciprocalAprox(uVar2,uVar7);
      uVar4 = PackedFloatingReciprocalIter1(uVar7,uVar2);
      uVar4 = PackedFloatingReciprocalIter2(uVar4,uVar2);
      uVar4 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar4);
      uVar6 = PackedFloatingMUL(uVar6,uVar4);
      uVar14 = PackedFloatingMUL(uVar14,uVar4);
    }
  }
  uVar14 = uVar14 & _DAT_006a07d8;
  uVar1 = (undefined4)(uVar8 >> 0x20);
  uVar4 = PackedFloatingCompareGE(CONCAT44(uVar1,uVar1),_DAT_006a0810);
  if ((int)uVar4 == 0) {
    uVar1 = FUN_0061b900();
    uVar7 = FUN_0061bfe0(uVar1,unaff_ESI,unaff_EBX);
    uVar4 = PackedFloatingCompareGE(uVar7 & _DAT_006a07c8,DAT_006a07d0);
    if ((int)uVar4 != 0) {
      uVar4 = FloatingReciprocalAprox(uVar2,uVar7);
      uVar2 = PackedFloatingReciprocalIter1(uVar7,uVar4);
      uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar4);
      uVar2 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar2);
      uVar9 = PackedFloatingMUL(uVar9,uVar2);
      uVar8 = PackedFloatingMUL(uVar8,uVar2);
    }
  }
  uVar2 = PackedFloatingADD(uVar6,uVar9);
  uVar4 = PackedFloatingADD(uVar14,uVar8 & _DAT_006a07d8);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_006a3da0);
  uVar7 = PackedFloatingMUL(uVar4,_DAT_006a3da0);
  uVar4 = PackedFloatingMUL(uVar2,uVar2);
  uVar6 = PackedFloatingMUL(uVar7 & 0xffffffff,uVar7 & 0xffffffff);
  uVar4 = PackedFloatingADD(uVar4,uVar6);
  uVar4 = PackedFloatingAccumulate(uVar4,uVar4);
  uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar4);
  uVar9 = PackedFloatingMUL(uVar6,uVar6);
  uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar4);
  uVar6 = PackedFloatingReciprocalIter2(uVar9,uVar6);
  uVar1 = (undefined4)uVar6;
  PackedFloatingMUL(uVar4,uVar6);
  uVar8 = FUN_0061bee0(uVar1,unaff_ESI,unaff_EBX);
  uVar14 = PackedFloatingCompareGE(uVar8 & _DAT_006a07c0,DAT_006a07d0);
  uVar5 = (undefined4)(uVar8 >> 0x20);
  uVar4 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),CONCAT44(unaff_ESI,uVar1));
  local_20 = (undefined4)uVar7;
  if ((uVar14 & 0x100000000) != 0) {
    uVar4 = CONCAT44((int)uVar4,(int)uVar4);
    uVar6 = PackedFloatingMUL(uVar7 & 0xffffffff,uVar4);
    local_20 = (undefined4)uVar6;
    uVar2 = PackedFloatingMUL(uVar2,uVar4);
  }
  uVar14 = CONCAT44((int)uVar8,local_20);
  uVar7 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar10 = CONCAT44(local_20,(int)uVar8);
  uVar8 = PackedFloatingMUL(uVar2,local_80);
  uVar4 = PackedFloatingMUL(uVar14,local_88);
  uVar9 = PackedFloatingMUL(uVar10 ^ _DAT_006a07a0,local_88);
  uVar6 = PackedFloatingMUL(uVar7,local_80);
  uVar4 = PackedFloatingADD(uVar8 ^ _DAT_006a07a0,uVar4);
  uVar6 = PackedFloatingSUB(uVar6,uVar9);
  uVar9 = PackedFloatingMUL(uVar10,local_80);
  uVar4 = PackedFloatingAccumulate(uVar6,uVar4);
  uVar6 = PackedFloatingMUL(uVar7 ^ _DAT_006a07a0,local_88);
  uVar14 = uVar14 ^ _DAT_006a07a0;
  uVar2 = PackedFloatingMUL(uVar2,local_88);
  *param_2 = uVar4;
  uVar4 = PackedFloatingMUL(uVar14,local_80);
  uVar6 = PackedFloatingADD(uVar6,uVar9);
  uVar2 = PackedFloatingSUB(uVar4,uVar2);
  uVar2 = PackedFloatingAccumulate(uVar6,uVar2);
  param_2[1] = uVar2;
  *param_3 = local_88;
  param_3[1] = local_80;
  FastExitMediaState();
  return;
}

