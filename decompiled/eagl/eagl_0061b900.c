/* Decompiled from Speed.exe @ 0061b900 */
/* Module: EAGL */
/* Ghidra DecompileAll */


ulonglong FUN_0061b900(void)

{
  uint uVar1;
  ulonglong in_MM0;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar2 = in_MM0 & DAT_006df9dc;
  uVar6 = -(uint)(DAT_006df9e8 < (int)uVar2);
  uVar3 = PackedFloatingMUL(uVar2,(ulonglong)DAT_006df9ec);
  uVar3 = PackedFloatingSUBR(uVar3,(ulonglong)DAT_006df9ec);
  uVar7 = PackedFloatingReciprocalSQRAprox((ulonglong)DAT_006df9dc,uVar3);
  uVar8 = PackedFloatingMUL(uVar7,uVar7);
  uVar1 = (uint)((int)uVar2 < DAT_006dfa20);
  uVar4 = -uVar1;
  uVar5 = (ulonglong)uVar4;
  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
  uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
  uVar9 = PackedFloatingMUL(uVar7,uVar3);
  uVar2 = ~uVar5 & uVar9 | uVar2 & uVar4;
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar8 = PackedFloatingMUL((ulonglong)DAT_006dfa28,uVar3);
  uVar7 = PackedFloatingADD((ulonglong)DAT_006dfa30,uVar3);
  uVar8 = PackedFloatingADD(uVar8,(ulonglong)DAT_006dfa24);
  uVar8 = PackedFloatingMUL(uVar8,uVar3);
  uVar3 = PackedFloatingMUL(uVar3,uVar7);
  uVar3 = PackedFloatingADD(uVar3,(ulonglong)DAT_006dfa2c);
  uVar8 = PackedFloatingMUL(uVar8,uVar2);
  uVar7 = FloatingReciprocalAprox(uVar7,uVar3);
  uVar3 = PackedFloatingReciprocalIter1(uVar3,uVar7);
  uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar7);
  uVar3 = PackedFloatingMUL(uVar3,uVar8);
  uVar2 = PackedFloatingADD(uVar2,uVar3);
  uVar3 = PackedFloatingADD(~uVar5 & (ulonglong)DAT_006dfa38 ^ DAT_006df9d8 & in_MM0,
                            (ulonglong)DAT_006dfa34);
  uVar2 = PackedFloatingADD(uVar2,~uVar5 & uVar2);
  uVar2 = PackedFloatingADD(uVar3,uVar2 | (ulonglong)(uVar1 * -0x80000000) ^ DAT_006df9d8 & in_MM0);
  return (ulonglong)(DAT_006df9f4 & uVar6) | ~(ulonglong)uVar6 & uVar2;
}

