/* Decompiled from Speed.exe @ 00477100 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477100(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int unaff_EDI;
  
  puVar3 = *(undefined4 **)(unaff_EDI + 0x54);
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = *(int *)(unaff_EDI + 0x20);
    uVar1 = puVar3[2];
    uVar5 = *puVar3;
    *(undefined4 *)(iVar4 + 0x1d4) = puVar3[1];
    *(undefined4 *)(iVar4 + 0x1d0) = uVar5;
    *(undefined4 *)(iVar4 + 0x1d8) = uVar1;
  }
  FUN_00584b10();
  pfVar6 = *(float **)(unaff_EDI + 0x54);
  fVar8 = *pfVar6;
  if (DAT_006ffde4 == 0) {
    fVar8 = DAT_006cc7a4;
  }
  fVar8 = ((pfVar6[4] - fVar8) / ((pfVar6[4] - fVar8) - (pfVar6[0x28] - fVar8))) * _DAT_006cc7dc;
  fVar7 = _DAT_006ccce0;
  if (*(int *)(*(int *)(unaff_EDI + 0x5c) + 0x38) == 1) {
    fVar7 = DAT_006ffde8;
  }
  fVar2 = *(float *)(*(int *)(unaff_EDI + 0x5c) + 0x3d0);
  fVar9 = DAT_006cc7a4;
  if ((char)(*(int **)(unaff_EDI + 0x50))[0xc] != '\0') {
    if (fVar2 < DAT_006cc7a4) {
      fVar2 = DAT_006cc7a4;
    }
    iVar4 = **(int **)(unaff_EDI + 0x50);
    fVar9 = (*(float *)(iVar4 + 8) + *(float *)(iVar4 + 4)) * fVar2;
  }
  fVar7 = fVar9 * pfVar6[0x9b] + fVar7 * *(float *)(*(int *)(unaff_EDI + 0x20) + 0x144);
  fVar2 = fVar7 * (_DAT_006cc7dc - fVar8);
  FUN_00588520(fVar2);
  FUN_00588520(fVar2);
  fVar7 = fVar7 * fVar8;
  FUN_00588520(fVar7);
  FUN_00588520(fVar7);
  uVar1 = DAT_006f076c;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x38) + 0x2c) = DAT_006f076c;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x3c) + 0x2c) = uVar1;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x40) + 0x2c) = uVar1;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x44) + 0x2c) = uVar1;
  return;
}

