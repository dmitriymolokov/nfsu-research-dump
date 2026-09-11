/* Decompiled from Speed.exe @ 005f22b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005f22b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_20;
  uint local_18;
  
  local_20 = *param_2;
  local_18 = *(uint *)(param_2 + 1);
  FUN_005f401f(&local_20,&local_20);
  uVar1 = FUN_0061bee0();
  uVar2 = PackedFloatingSUBR(uVar1,CONCAT44(DAT_006a078c,DAT_006a0788));
  uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar4 = (ulonglong)local_18;
  uVar5 = PackedFloatingMUL(CONCAT44(local_18,local_18),local_20);
  uVar2 = CONCAT44((int)uVar2,(int)uVar2);
  uVar3 = PackedFloatingMUL(CONCAT44(local_18,(int)((ulonglong)local_20 >> 0x20)),local_20);
  uVar1 = CONCAT44((int)uVar1,(int)uVar1);
  uVar3 = PackedFloatingMUL(uVar3,uVar2);
  uVar5 = PackedFloatingMUL(uVar5,uVar2);
  uVar6 = PackedFloatingMUL(local_20,local_20);
  uVar7 = PackedFloatingMUL(uVar4,uVar4);
  uVar6 = PackedFloatingMUL(uVar6,uVar2);
  uVar7 = PackedFloatingMUL(uVar7,uVar2);
  uVar2 = PackedFloatingADD(uVar6,uVar1);
  uVar8 = PackedFloatingADD(uVar7,uVar1);
  uVar1 = CONCAT44(uVar9,uVar9);
  uVar6 = PackedFloatingMUL(local_20,uVar1);
  uVar1 = PackedFloatingMUL(uVar4,uVar1);
  param_1[6] = 0;
  uVar7 = CONCAT44((int)uVar6,(int)uVar1);
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar6 = CONCAT44(uVar9,uVar9);
  param_1[5] = uVar8 & 0xffffffff;
  uVar1 = PackedFloatingSUB(uVar3,uVar7);
  uVar8 = PackedFloatingADD(uVar3,uVar7);
  uVar4 = PackedFloatingSUB(uVar5,uVar6);
  *param_1 = CONCAT44((int)uVar8,(int)uVar2);
  param_1[1] = uVar4 & 0xffffffff;
  uVar4 = (ulonglong)DAT_006a078c;
  uVar3 = PackedFloatingADD(CONCAT44((int)uVar5,(int)uVar5),uVar6);
  param_1[3] = uVar8 >> 0x20;
  param_1[7] = uVar4 << 0x20;
  param_1[4] = CONCAT44((int)((ulonglong)uVar1 >> 0x20),(int)((ulonglong)uVar3 >> 0x20));
  param_1[2] = CONCAT44((int)((ulonglong)uVar2 >> 0x20),(int)uVar1);
  FastExitMediaState();
  return;
}

