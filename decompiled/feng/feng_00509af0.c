/* Decompiled from Speed.exe @ 00509af0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509af0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar4;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  undefined8 uVar5;
  
  fVar3 = (float10)FUN_005802c0();
  *(float *)(unaff_EDI + 0x60) = (float)fVar3;
  if ((float10)*(float *)(unaff_EDI + 0x58) < fVar3) {
    *(undefined4 *)(unaff_EDI + 0x60) = *(undefined4 *)(unaff_EDI + 0x58);
  }
  if (*(float *)(unaff_EDI + 0x60) < *(float *)(unaff_EDI + 0x5c)) {
    *(undefined4 *)(unaff_EDI + 0x60) = *(undefined4 *)(unaff_EDI + 0x5c);
  }
  uVar5 = CONCAT44(unaff_EBX,unaff_ESI);
  fVar3 = (float10)FUN_005801b0();
  *(float *)(unaff_EDI + 0xbc) = (float)fVar3;
  if ((float10)*(float *)(unaff_EDI + 0xb4) < fVar3) {
    *(undefined4 *)(unaff_EDI + 0xbc) = *(undefined4 *)(unaff_EDI + 0xb4);
  }
  if (*(float *)(unaff_EDI + 0xbc) < *(float *)(unaff_EDI + 0xb8)) {
    *(undefined4 *)(unaff_EDI + 0xbc) = *(undefined4 *)(unaff_EDI + 0xb8);
  }
  fVar3 = (float10)FUN_00580400(uVar5);
  *(float *)(unaff_EDI + 0x118) = (float)fVar3;
  if ((float10)*(float *)(unaff_EDI + 0x110) < fVar3) {
    *(undefined4 *)(unaff_EDI + 0x118) = *(undefined4 *)(unaff_EDI + 0x110);
  }
  if (*(float *)(unaff_EDI + 0x118) < *(float *)(unaff_EDI + 0x114)) {
    *(undefined4 *)(unaff_EDI + 0x118) = *(undefined4 *)(unaff_EDI + 0x114);
  }
  (**(code **)(*(int *)(unaff_EDI + 0x44) + 0x10))();
  (**(code **)(*(int *)(unaff_EDI + 0xa0) + 0x10))();
  (**(code **)(*(int *)(unaff_EDI + 0xfc) + 0x10))();
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_00674898();
  uVar2 = FUN_00674898();
  FUN_004f67f0("%s %d @ %d RPM",iVar1,uVar2);
  iVar1 = FUN_0059fb80();
  fVar3 = extraout_ST0;
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
    fVar3 = extraout_ST0_00;
  }
  FUN_004f67f0("%s %2.1f",iVar1,(double)fVar3);
  if (DAT_007588f0 == 0) {
    iVar1 = FUN_0059fb80();
    fVar3 = extraout_ST0_01;
    fVar4 = extraout_ST1;
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
      fVar3 = extraout_ST0_02;
      fVar4 = extraout_ST1_00;
    }
    fVar3 = fVar3 * (float10)_DAT_006cc9f0;
  }
  else {
    iVar1 = FUN_0059fb80();
    fVar3 = extraout_ST0_03;
    fVar4 = extraout_ST1_01;
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
      fVar3 = extraout_ST0_04;
      fVar4 = extraout_ST1_02;
    }
    fVar3 = fVar3 * (float10)_DAT_006ccadc;
  }
  FUN_004f67f0("%s %2.1f @ 3.1f",iVar1,(double)fVar4,(double)fVar3);
  return;
}

