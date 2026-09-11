/* Decompiled from Speed.exe @ 0065aa20 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065aa20(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  do {
    if ((param_1 & 7) == 0) goto LAB_0065aa57;
    uVar3 = (ulonglong)(uint)(int)(short)*(undefined4 *)(param_2 + -2 + param_1 * 2);
    uVar4 = PackedIntToFloatingDwordConv(uVar3,uVar3);
    *(int *)(param_3 + -4 + param_1 * 4) = (int)uVar4;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
LAB_0065aabc:
  FastExitMediaState();
  return;
LAB_0065aa57:
  do {
    uVar4 = *(undefined8 *)(param_2 + -0x10 + param_1 * 2);
    uVar5 = *(undefined8 *)(param_2 + -8 + param_1 * 2);
    uVar7 = CONCAT44((int)(short)((ulonglong)uVar4 >> 0x10),(int)(short)uVar4);
    uVar9 = CONCAT44((int)(short)((ulonglong)uVar4 >> 0x30),(int)(short)((ulonglong)uVar4 >> 0x20));
    uVar6 = CONCAT44((int)(short)((ulonglong)uVar5 >> 0x10),(int)(short)uVar5);
    uVar8 = CONCAT44((int)(short)((ulonglong)uVar5 >> 0x30),(int)(short)((ulonglong)uVar5 >> 0x20));
    uVar4 = PackedIntToFloatingDwordConv(uVar7,uVar7);
    uVar5 = PackedIntToFloatingDwordConv(uVar9,uVar9);
    uVar7 = PackedIntToFloatingDwordConv(uVar6,uVar6);
    uVar9 = PackedIntToFloatingDwordConv(uVar8,uVar8);
    *(undefined8 *)(param_3 + -0x20 + param_1 * 4) = uVar4;
    *(undefined8 *)(param_3 + -0x18 + param_1 * 4) = uVar5;
    *(undefined8 *)(param_3 + -0x10 + param_1 * 4) = uVar7;
    *(undefined8 *)(param_3 + -8 + param_1 * 4) = uVar9;
    uVar2 = param_1 - 8;
    bVar1 = 7 < (int)param_1;
    param_1 = uVar2;
  } while (uVar2 != 0 && bVar1);
  goto LAB_0065aabc;
}

