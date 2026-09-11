/* Decompiled from Speed.exe @ 004312a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004312a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  float10 fVar7;
  
  fVar1 = *(float *)(*(int *)(unaff_EDI + 4) + 0x3d4) * _DAT_006cc9f0;
  fVar2 = (float)(DAT_0073ad34 - *(int *)(*(int *)(*(int *)(unaff_EDI + 4) + 0x3c) + 0x144)) *
          _DAT_006cca38;
  if (((_DAT_006b7b28 < fVar1) && (fVar2 < _DAT_006b7b2c)) &&
     (fVar7 = (float10)FUN_00464ed0(), (float10)_DAT_006b7b18 < ABS(fVar7 * (float10)_DAT_006cc9f4))
     ) {
    *(int *)(unaff_EDI + 0xb4) = DAT_0073ad34;
  }
  fVar3 = (float)(DAT_0073ad34 - *(int *)(unaff_EDI + 0xc0)) * _DAT_006cca38;
  if (_DAT_006cc7dc < fVar3) {
    if (((_DAT_006b7b28 < *(float *)(unaff_EDI + 0xbc)) && (fVar2 < _DAT_006b7b2c)) &&
       ((fVar1 - *(float *)(unaff_EDI + 0xbc)) / fVar3 < _DAT_006b7b1c)) {
      *(int *)(unaff_EDI + 0xb4) = DAT_0073ad34;
    }
    *(float *)(unaff_EDI + 0xbc) = fVar1;
    *(int *)(unaff_EDI + 0xc0) = DAT_0073ad34;
  }
  if ((fVar1 < _DAT_006cca94) && (*(float *)(*(int *)(unaff_EDI + 4) + 0xb8) < DAT_006cc7a4)) {
    *(int *)(unaff_EDI + 0xb4) = DAT_0073ad34;
  }
  iVar6 = DAT_0073ad34;
  iVar5 = FUN_00674898();
  if (iVar5 < iVar6 - *(int *)(unaff_EDI + 0xb4)) {
    *(undefined4 *)(unaff_EDI + 0xb4) = 0;
    iVar6 = DAT_0073ad34;
  }
  if (((*(int *)(unaff_EDI + 0xb4) == 0) || (*(int *)(unaff_EDI + 0xb4) == 0x7fffffff)) ||
     (cVar4 = FUN_00431230(), cVar4 == '\0')) {
    if (((*(int *)(unaff_EDI + 0xb8) != 0) && (*(int *)(unaff_EDI + 0xb8) != 0x7fffffff)) &&
       (iVar5 = FUN_00674898(), iVar5 < iVar6 - *(int *)(unaff_EDI + 0xb8))) {
      *(undefined4 *)(unaff_EDI + 0xb8) = 0;
    }
  }
  else if ((*(int *)(unaff_EDI + 0xb8) == 0) || (*(int *)(unaff_EDI + 0xb8) == 0x7fffffff)) {
    *(undefined4 *)(unaff_EDI + 0xb4) = 0;
    return;
  }
  return;
}

