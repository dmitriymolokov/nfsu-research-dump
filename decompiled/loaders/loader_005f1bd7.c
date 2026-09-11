/* Decompiled from Speed.exe @ 005f1bd7 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005f1bd7(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  PackedFloatingMUL(DAT_006a0818,param_3);
  PackedFloatingMUL(DAT_006a0818,param_2);
  uVar2 = FUN_0061bee0();
  uVar3 = FUN_0061bee0();
  uVar4 = FUN_0061bee0();
  uVar1 = (undefined4)uVar4;
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar4 = CONCAT44((int)uVar3,(int)uVar3);
  uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar10 = CONCAT44(uVar12,uVar12);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar1,uVar1) ^ DAT_006a07a8,uVar10);
  uVar5 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),uVar4);
  uVar7 = PackedFloatingMUL(CONCAT44(uVar9,uVar9),uVar4);
  uVar10 = PackedFloatingMUL(CONCAT44(uVar9,uVar9) ^ DAT_006a07a8 >> 0x20,uVar10);
  uVar11 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar3 = PackedFloatingMUL(uVar3,uVar2);
  uVar4 = PackedFloatingMUL(uVar5,uVar11);
  uVar5 = PackedFloatingMUL(uVar7,uVar11);
  uVar7 = PackedFloatingMUL(uVar10,uVar2);
  uVar2 = PackedFloatingADD(uVar3,uVar5);
  uVar5 = PackedFloatingADD(uVar4,uVar7);
  uVar3 = PackedFloatingADD(uVar2,uVar2);
  uVar4 = PackedFloatingADD(uVar5,uVar5);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar10 = CONCAT44(uVar9,uVar9);
  uVar7 = PackedFloatingMUL(uVar2,uVar3);
  uVar2 = CONCAT44((int)uVar3,(int)uVar4);
  uVar11 = PackedFloatingMUL(uVar3,uVar10);
  uVar5 = PackedFloatingMUL(CONCAT44((int)uVar5,(int)uVar5),uVar2);
  uVar3 = PackedFloatingMUL(uVar2,CONCAT44(uVar1,uVar1));
  uVar2 = PackedFloatingMUL(uVar2,uVar10);
  uVar4 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),(int)((ulonglong)uVar3 >> 0x20));
  param_1[6] = 0;
  uVar10 = PackedFloatingADD(CONCAT44((int)uVar5,(int)uVar5),uVar7);
  uVar5 = PackedFloatingAccumulate(uVar7,uVar7);
  uVar2 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),(int)uVar2);
  uVar6 = PackedFloatingSUBR(uVar5,CONCAT44(DAT_006a078c,DAT_006a0788));
  uVar7 = PackedFloatingSUBR(uVar10,CONCAT44(DAT_006a078c,DAT_006a0788));
  uVar5 = PackedFloatingADD(uVar4,uVar2);
  param_1[5] = uVar6 & 0xffffffff;
  uVar8 = PackedFloatingSUB(uVar4,uVar2);
  uVar6 = PackedFloatingADD(uVar3,uVar11);
  uVar2 = PackedFloatingSUB(uVar3,uVar11);
  param_1[3] = uVar6 & 0xffffffff;
  uVar6 = (ulonglong)DAT_006a0788;
  param_1[1] = uVar8 >> 0x20;
  param_1[2] = CONCAT44((int)uVar7,(int)uVar8);
  *param_1 = CONCAT44((int)uVar5,(int)((ulonglong)uVar7 >> 0x20));
  param_1[4] = CONCAT44((int)uVar2,(int)((ulonglong)uVar5 >> 0x20));
  param_1[7] = uVar6 << 0x20;
  FastExitMediaState();
  return;
}

