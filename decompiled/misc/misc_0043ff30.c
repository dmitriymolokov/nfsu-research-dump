/* Decompiled from Speed.exe @ 0043ff30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ff30(void)

{
  float *pfVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 uVar12;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_ESI + 0xb) = *(undefined1 *)(unaff_EDI + 2);
  *(undefined1 *)(unaff_ESI + 10) = *(undefined1 *)(unaff_EDI + 3);
  *(undefined1 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  bVar2 = *(byte *)(unaff_EDI + 1);
  sVar3 = *(short *)(unaff_EDI + 0x10 + (bVar2 >> 2 & 3) * 2);
  sVar4 = *(short *)(unaff_EDI + 8 + (bVar2 >> 4 & 3) * 2);
  sVar5 = *(short *)(unaff_EDI + 0x10 + (uint)(bVar2 >> 6) * 2);
  pfVar1 = (float *)(unaff_ESI + 0x30);
  *(float *)(unaff_ESI + 0x14) =
       (float)((int)*(short *)(unaff_EDI + 8 + (bVar2 & 3) * 2) << 0xd) * _DAT_006cc83c;
  *(float *)(unaff_ESI + 0x18) = (float)((int)sVar3 << 0xd) * _DAT_006cc83c;
  *(float *)(unaff_ESI + 0x1c) = (float)((int)sVar4 << 0xd) * _DAT_006cc83c;
  *(float *)(unaff_ESI + 0x20) = (float)((int)sVar5 << 0xd) * _DAT_006cc83c;
  FUN_0043fd20();
  *(undefined1 *)(unaff_ESI + 9) = 4;
  if ((*(byte *)(unaff_ESI + 10) & 0x10) == 0) {
    *(undefined1 *)(unaff_ESI + 9) = 3;
  }
  if ((*(byte *)(unaff_ESI + 10) & 4) != 0) {
    *(float *)(unaff_ESI + 0x38) = *(float *)(unaff_ESI + 0x38) * _DAT_006cc908;
    *(float *)(unaff_ESI + 0x48) = *(float *)(unaff_ESI + 0x48) * _DAT_006cc908;
    *(float *)(unaff_ESI + 0x58) = *(float *)(unaff_ESI + 0x58) * _DAT_006cc908;
    *(float *)(unaff_ESI + 0x68) = *(float *)(unaff_ESI + 0x68) * _DAT_006cc908;
  }
  fVar6 = *(float *)(unaff_ESI + 0x40) - *pfVar1;
  fVar9 = *(float *)(unaff_ESI + 0x44) - *(float *)(unaff_ESI + 0x34);
  fVar7 = *(float *)(unaff_ESI + 0x48) - *(float *)(unaff_ESI + 0x38);
  fVar10 = *(float *)(unaff_ESI + 0x50) - *pfVar1;
  fVar11 = *(float *)(unaff_ESI + 0x54) - *(float *)(unaff_ESI + 0x34);
  fVar8 = *(float *)(unaff_ESI + 0x58) - *(float *)(unaff_ESI + 0x38);
  FUN_00567370();
  *(float *)(unaff_ESI + 0x74) = fVar7 * fVar10 - fVar8 * fVar6;
  *(float *)(unaff_ESI + 0x70) = fVar8 * fVar9 - fVar11 * fVar7;
  *(float *)(unaff_ESI + 0x78) = fVar11 * fVar6 - fVar9 * fVar10;
  *(float *)(unaff_ESI + 0x7c) =
       *pfVar1 * *(float *)(unaff_ESI + 0x70) +
       *(float *)(unaff_ESI + 0x34) * *(float *)(unaff_ESI + 0x74) +
       *(float *)(unaff_ESI + 0x38) * *(float *)(unaff_ESI + 0x78);
  uVar12 = FUN_00566ed0(unaff_ESI);
  *(undefined2 *)(unaff_EDI + 6) = uVar12;
  *(int *)(unaff_ESI + 0xc) = unaff_EDI;
  return;
}

