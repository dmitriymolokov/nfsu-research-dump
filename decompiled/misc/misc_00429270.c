/* Decompiled from Speed.exe @ 00429270 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429270(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  undefined **ppuVar7;
  int iVar8;
  int unaff_EDI;
  bool bVar9;
  byte bVar10;
  float10 fVar11;
  float fVar12;
  
  iVar8 = *(int *)(unaff_EDI + 0x18);
  if (iVar8 == 0) {
    return;
  }
  if ((*(int *)(unaff_EDI + 0x1c) != 0) && (*(short *)(*(int *)(unaff_EDI + 0x1c) + 0x10) != 0)) {
    return;
  }
  iVar5 = *(int *)(iVar8 + 8);
  bVar9 = *(char *)(iVar8 + 0x21) != '\0';
  if (*(int *)(unaff_EDI + 0x3cc) == 4) {
    if (bVar9) {
      FUN_00574d90(ABS(*(float *)(unaff_EDI + 0x88)) +
                   SQRT(*(float *)(unaff_EDI + 0xe0) * *(float *)(unaff_EDI + 0xe0) +
                        *(float *)(unaff_EDI + 0xe4) * *(float *)(unaff_EDI + 0xe4)));
      fVar11 = (float10)FUN_00464ea0();
      FUN_00574d90((float)(ABS(fVar11) * (float10)*(float *)(unaff_EDI + 0x3d4)));
    }
    if (*(int *)(unaff_EDI + 0x408) != 0) {
      iVar8 = 4;
      pfVar6 = (float *)(unaff_EDI + 0x374);
      fVar12 = DAT_006cc7a4;
      do {
        iVar8 = iVar8 + -1;
        fVar12 = SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]) + fVar12;
        pfVar6 = pfVar6 + 2;
      } while (iVar8 != 0);
      if (bVar9) {
        FUN_00574d90(ABS(fVar12 * _DAT_006cc90c));
      }
    }
  }
  fVar12 = *(float *)(unaff_EDI + 800);
  fVar1 = *(float *)(unaff_EDI + 0x324);
  fVar2 = *(float *)(unaff_EDI + 0x328);
  fVar3 = *(float *)(unaff_EDI + 0x32c);
  fVar11 = (float10)FUN_00583f20(&PTR_DAT_0070632c,*(undefined4 *)(unaff_EDI + 0x3d4));
  fVar12 = (float)(fVar11 * (float10)(fVar12 + fVar1 + fVar2 + fVar3));
  if (bVar9) {
    ppuVar7 = &PTR_DAT_00704548;
    if (iVar5 != 0) {
      ppuVar7 = &PTR_DAT_00704550;
    }
    PTR_PTR_007045c0 = (undefined *)ppuVar7;
    *(float *)(*ppuVar7 + 4) =
         (*(float *)(PTR_DAT_007045c4 + 0x14) - *(float *)(PTR_DAT_007045c4 + 0x10)) *
         ((fVar12 - *(float *)PTR_DAT_007045c4) /
         (*(float *)(PTR_DAT_007045c4 + 4) - *(float *)PTR_DAT_007045c4)) +
         *(float *)(PTR_DAT_007045c4 + 0x10);
    FUN_00574d90(fVar12);
  }
  if (bVar9) {
    FUN_00574d90((*(float *)(unaff_EDI + 0x330) + *(float *)(unaff_EDI + 0x334) +
                  *(float *)(unaff_EDI + 0x338) + *(float *)(unaff_EDI + 0x33c)) * _DAT_006cc90c);
  }
  if ('\0' < *(char *)(unaff_EDI + 0x86d)) {
    iVar8 = 0;
    do {
      if ((*(char *)(unaff_EDI + 0x350 + iVar8) != '\0') &&
         ((1 << ((byte)iVar8 & 0x1f) & (int)*(char *)(unaff_EDI + 0x86c)) != 0)) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
  }
  bVar10 = *(int *)(unaff_EDI + 0x364) == 0x19;
  if (*(int *)(unaff_EDI + 0x368) == 0x19) {
    bVar10 = bVar10 | 2;
  }
  if (*(int *)(unaff_EDI + 0x36c) == 0x19) {
    bVar10 = bVar10 | 4;
  }
  if (*(int *)(unaff_EDI + 0x370) == 0x19) {
    bVar10 = bVar10 | 8;
  }
  bVar4 = *(byte *)(unaff_EDI + 0x8c0);
  if ((bVar4 | bVar10) != bVar4) {
    if (*(float *)(unaff_EDI + 0x3d4) <= _DAT_006b7be0) {
      if (_DAT_006b7bdc < *(float *)(unaff_EDI + 0x3d4)) goto joined_r0x004294f1;
    }
    else if ((((bVar4 | bVar10) ^ bVar4) & 3) != 0) {
joined_r0x004294f1:
      if (bVar9) {
        FUN_00574d90(0x3f800000);
      }
    }
  }
  *(byte *)(unaff_EDI + 0x8c0) = bVar10;
  fVar12 = DAT_006cc7a4;
  if (*(int *)(unaff_EDI + 0x28) == 1) {
    if (*(float *)(*(int *)(*(int *)(unaff_EDI + 0x34) + 0x4c) + 0x5c) <= DAT_006cc7a4) {
      fVar12 = *(float *)(*(int *)(*(int *)(unaff_EDI + 0x34) + 0x48) + 0x8c);
      goto LAB_00429569;
    }
    if (!bVar9) goto LAB_004295c1;
    fVar12 = 1.0;
  }
  else {
LAB_00429569:
    if (fVar12 <= _DAT_006ffff0) goto LAB_004295c1;
    fVar12 = DAT_006cc7a4;
    if (*(int *)(unaff_EDI + 0x28) == 1) {
      fVar12 = *(float *)(*(int *)(*(int *)(unaff_EDI + 0x34) + 0x48) + 0x8c);
    }
    fVar12 = (fVar12 - _DAT_006ffff0) / (_DAT_006cc7bc - _DAT_006ffff0);
    if (!bVar9) goto LAB_004295c1;
  }
  FUN_00574d90(fVar12);
LAB_004295c1:
  if ((*DAT_0073619c == 3) && (bVar9)) {
    fVar12 = DAT_007000e4;
    if (DAT_007000e4 == _DAT_006cc9f8) {
      fVar12 = *(float *)(unaff_EDI + 0x3e0);
    }
    FUN_00574d90(fVar12 / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x1f8));
  }
  return;
}

