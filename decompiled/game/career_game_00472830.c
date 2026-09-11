/* Decompiled from Speed.exe @ 00472830 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472830(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  float *unaff_EDI;
  
  if (((ABS(*unaff_EDI - *(float *)(unaff_ESI + 0x40)) <= _DAT_006cc8bc) &&
      (ABS(unaff_EDI[1] - *(float *)(unaff_ESI + 0x44)) <= _DAT_006cc8bc)) &&
     (ABS(unaff_EDI[2] - *(float *)(unaff_ESI + 0x48)) <= _DAT_006cc8bc)) {
    iVar5 = FUN_00471d60();
    if (iVar5 != 0) goto LAB_0047288d;
  }
  *(undefined1 *)(unaff_ESI + 0x240) = 1;
LAB_0047288d:
  if (*(char *)(unaff_ESI + 0x240) != '\0') {
    FUN_00401cd0();
    FUN_00565230();
    fVar1 = unaff_EDI[1];
    fVar2 = unaff_EDI[2];
    *(float *)(unaff_ESI + 0x170) = *unaff_EDI;
    *(float *)(unaff_ESI + 0x174) = fVar1;
    *(float *)(unaff_ESI + 0x178) = fVar2;
    *(undefined4 *)(unaff_ESI + 0x17c) = 0x3f800000;
    FUN_00401cd0();
    FUN_00565230();
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *(undefined4 *)(unaff_ESI + 0x1f0) = *param_3;
    *(undefined4 *)(unaff_ESI + 500) = uVar3;
    *(undefined4 *)(unaff_ESI + 0x1f8) = uVar4;
    *(undefined4 *)(unaff_ESI + 0x1fc) = 0x3f800000;
    fVar1 = unaff_EDI[1];
    fVar2 = unaff_EDI[2];
    *(float *)(unaff_ESI + 0x40) = *unaff_EDI;
    *(float *)(unaff_ESI + 0x44) = fVar1;
    *(float *)(unaff_ESI + 0x48) = fVar2;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *(undefined4 *)(unaff_ESI + 0x50) = *param_3;
    *(undefined4 *)(unaff_ESI + 0x54) = uVar3;
    *(undefined4 *)(unaff_ESI + 0x58) = uVar4;
  }
  return;
}

