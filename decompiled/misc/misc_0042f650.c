/* spd-match: far pct=9.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_00564db0();
extern int DAT_006cc7a4;
extern int DAT_0073457c;
extern int DAT_00734964;
extern int DAT_00736174;
extern int DAT_0073ad34;
extern int _DAT_006b72dc;
extern int _DAT_006b7a04;
extern int _DAT_006b7a08;
extern int _DAT_006b7a0c;
extern int _DAT_006b7a10;
extern int _DAT_006b7a14;
extern int _DAT_006b7a18;
extern int _DAT_006b7a1c;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
extern int _DAT_006cc9f0;
extern int _DAT_006cc9f4;
extern int _DAT_006cc9f8;
extern int _DAT_006cca38;
extern int _DAT_006cca50;
extern void LAB_0042f6ac(void);
int unaff_ESI;

void FUN_0042f650(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    return;
  }
  uVar13 = *(ushort *)(unaff_ESI + 0xc4);
  iVar19 = 0;
  uVar17 = ((byte)~(byte)uVar13 & 1) << 1 | 1;
  uVar16 = *(uint *)(iVar2 + 0x354);
  if ((int)uVar16 < 4) {
    uVar13 = uVar13 & 0xffdf;
  }
  else {
    if ((uVar13 & 0x20) != 0) goto LAB_0042f6ac;
    iVar19 = 1;
    uVar13 = uVar13 | 0x20;
  }
  *(ushort *)(unaff_ESI + 0xc4) = uVar13;
LAB_0042f6ac:
  uVar3 = *(uint *)(iVar2 + 0x358);
  if ((int)uVar3 < 4) {
    *(byte *)(unaff_ESI + 0xc4) = *(byte *)(unaff_ESI + 0xc4) & 0xbf;
  }
  else if ((*(ushort *)(unaff_ESI + 0xc4) & 0x40) == 0) {
    iVar19 = iVar19 + 1;
    *(ushort *)(unaff_ESI + 0xc4) = *(ushort *)(unaff_ESI + 0xc4) | 0x40;
  }
  uVar4 = *(uint *)(iVar2 + 0x35c);
  if ((int)uVar4 < 4) {
    *(byte *)(unaff_ESI + 0xc4) = *(byte *)(unaff_ESI + 0xc4) & 0x7f;
  }
  else if (-1 < (char)*(ushort *)(unaff_ESI + 0xc4)) {
    iVar19 = iVar19 + 1;
    *(ushort *)(unaff_ESI + 0xc4) = *(ushort *)(unaff_ESI + 0xc4) | 0x80;
  }
  uVar5 = *(uint *)(iVar2 + 0x360);
  if ((int)uVar5 < 4) {
    *(byte *)(unaff_ESI + 0xc5) = *(byte *)(unaff_ESI + 0xc5) & 0xfe;
  }
  else if ((*(ushort *)(unaff_ESI + 0xc4) & 0x100) == 0) {
    iVar19 = iVar19 + 1;
    *(ushort *)(unaff_ESI + 0xc4) = *(ushort *)(unaff_ESI + 0xc4) | 0x100;
  }
  if (iVar19 != 0) {
    iVar15 = (uint)*(byte *)(unaff_ESI + 199) - iVar19;
    if (iVar15 < 1) {
      iVar15 = 1;
    }
    *(char *)(unaff_ESI + 199) = (char)iVar15;
  }
  if ((*(int *)(unaff_ESI + 0x58) == 0) &&
     ((bool)(*(byte *)(unaff_ESI + 0xc4) & 1) !=
      (((uVar17 == uVar16 && uVar17 == uVar3) && uVar17 == uVar4) && uVar17 == uVar5))) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  *(byte *)(unaff_ESI + 0xc4) = *(byte *)(unaff_ESI + 0xc4) & 0xe7;
  fVar6 = (float)*(byte *)(unaff_ESI + 199) *
          (_DAT_006b7a0c * *(float *)(unaff_ESI + 0xcc) +
          (float)*(byte *)(unaff_ESI + 0xc6) * _DAT_006b7a08);
  *(float *)(unaff_ESI + 0xd8) = fVar6;
  uVar13 = *(ushort *)(unaff_ESI + 0xc4);
  if (((uVar13 & 1) == 0) || (bVar18 != 0)) {
    if (((uVar13 & 1) == 0) && (bVar18 != 0)) {
      *(undefined4 *)(unaff_ESI + 0xd4) = 0;
      *(undefined4 *)(unaff_ESI + 0xd8) = 0;
      *(undefined4 *)(unaff_ESI + 0xcc) = 0;
      *(undefined1 *)(unaff_ESI + 0xc6) = 0;
    }
  }
  else if ((uVar13 & 2) == 0) {
    if ((DAT_006cc7a4 < *(float *)(unaff_ESI + 0xd4)) && (fVar6 == DAT_006cc7a4)) {
      uVar16 = *(byte *)(unaff_ESI + 199) + 1;
      if (5 < uVar16) {
        uVar16 = 5;
      }
      *(char *)(unaff_ESI + 199) = (char)uVar16;
    }
    fVar6 = (*(float *)(unaff_ESI + 0xd4) + *(float *)(unaff_ESI + 0xd0)) -
            *(float *)(unaff_ESI + 0xd8);
    if (fVar6 < DAT_006cc7a4) {
      fVar6 = DAT_006cc7a4;
    }
    *(float *)(unaff_ESI + 0xd0) = fVar6;
    *(ushort *)(unaff_ESI + 0xc4) = uVar13 | 0x10;
  }
  else {
    *(ushort *)(unaff_ESI + 0xc4) = uVar13 & 0xfffd | 8;
  }
  *(ushort *)(unaff_ESI + 0xc4) = (ushort)bVar18 | *(ushort *)(unaff_ESI + 0xc4) & 0xfffe;
  fVar6 = DAT_006cc7a4;
  if (_DAT_006b72dc <= *(float *)(iVar2 + 0x3d0)) {
    sVar14 = FUN_00564db0(*(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x74));
    fVar6 = (float)(ushort)(*(short *)(iVar2 + 0x3b4) - sVar14) * _DAT_006cc980;
    if (_DAT_006cc97c < fVar6) {
      fVar6 = fVar6 - _DAT_006cc978;
    }
  }
  fVar6 = ABS(fVar6);
  bVar7 = _DAT_006b7a10 * _DAT_006cca50 <= fVar6;
  fVar8 = DAT_006cc7a4;
  if (bVar7) {
    *(int *)(unaff_ESI + 0xdc) = DAT_0073ad34;
    fVar8 = fVar6;
  }
  iVar2 = *(int *)(unaff_ESI + 0xdc);
  if (((iVar2 != 0) && (iVar2 != 0x7fffffff)) &&
     (_DAT_006b7a14 < (float)(DAT_0073ad34 - iVar2) * _DAT_006cca38)) {
    *(undefined1 *)(unaff_ESI + 199) = 1;
    *(undefined4 *)(unaff_ESI + 0xdc) = 0;
  }
  fVar6 = *(float *)(*(int *)(unaff_ESI + 4) + 0x3d4);
  if ((*(char *)(unaff_ESI + 0x4ac) == '\0') && (_DAT_006b7a18 <= fVar6)) {
    *(int *)(unaff_ESI + 0xe0) = DAT_0073ad34;
  }
  uVar13 = *(ushort *)(unaff_ESI + 0xc4);
  if ((((uVar13 & 1) != 0) && ((uVar13 & 2) == 0)) &&
     (_DAT_006b7a1c < (float)(DAT_0073ad34 - *(int *)(unaff_ESI + 0xe0)) * _DAT_006cca38)) {
    *(ushort *)(unaff_ESI + 0xc4) = uVar13 | 2;
    *(undefined1 *)(unaff_ESI + 0xc6) = 0;
    *(undefined4 *)(unaff_ESI + 0xcc) = 0;
    *(undefined4 *)(unaff_ESI + 0xd4) = 0;
    *(undefined1 *)(unaff_ESI + 199) = 1;
  }
  if (bVar7) {
    if (DAT_00734964 != 0) {
      if (*(char *)(unaff_ESI + 0xfc) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xf0) = 0;
        *(undefined4 *)(unaff_ESI + 0xf4) = 0;
        *(undefined4 *)(unaff_ESI + 0xe4) = 0;
        *(undefined1 *)(unaff_ESI + 0xfc) = 0;
      }
      iVar2 = *(int *)(unaff_ESI + 0xf8);
      fVar9 = _DAT_006cc9f4 * fVar8;
      iVar15 = iVar2 + 1;
      *(int *)(unaff_ESI + 0xf8) = iVar15;
      *(float *)(unaff_ESI + 0xe8) = fVar9;
      fVar11 = fVar6 * _DAT_006cc9f0;
      *(float *)(unaff_ESI + 0xec) = fVar11;
      fVar12 = (float)iVar2;
      fVar10 = (float)iVar15;
      *(float *)(unaff_ESI + 0xf0) = (fVar12 * *(float *)(unaff_ESI + 0xf0) + fVar9) / fVar10;
      *(float *)(unaff_ESI + 0xf4) = (fVar12 * *(float *)(unaff_ESI + 0xf4) + fVar11) / fVar10;
      *(float *)(unaff_ESI + 0xe4) = ((int)(DAT_0073457c)) + *(float *)(unaff_ESI + 0xe4);
    }
  }
  else if (DAT_00734964 != 0) {
    *(undefined1 *)(unaff_ESI + 0xfc) = 1;
    *(undefined4 *)(unaff_ESI + 0xf8) = 0;
  }
  uVar13 = *(ushort *)(unaff_ESI + 0xc4);
  if (((uVar13 & 1) != 0) && ((uVar13 & 2) == 0)) {
    fVar9 = (float)*(byte *)(unaff_ESI + 199) * _DAT_006b7a04 * DAT_0073457c;
    *(char *)(unaff_ESI + 0xc6) = *(char *)(unaff_ESI + 0xc6) + (char)iVar19;
    *(float *)(unaff_ESI + 0xd4) = fVar9 * fVar6 * fVar8 + *(float *)(unaff_ESI + 0xd4);
  }
  if ((*(int *)(unaff_ESI + 0x58) != 0) && ((uVar13 & 4) == 0)) {
    *(ushort *)(unaff_ESI + 0xc4) = uVar13 | 4;
    sVar14 = *(short *)(((int)(DAT_00736174)) + 0xba);
    sVar1 = *(short *)(((int)(DAT_00736174)) + 0xbc);
    *(undefined4 *)(unaff_ESI + 0xd4) = 0;
    fVar6 = (float)*(int *)(*(int *)(*(int *)(unaff_ESI + 4) + 0x1c) + 0x110) * _DAT_006cca38;
    if (fVar6 < (float)(int)sVar14 == (fVar6 == (float)(int)sVar14)) {
      if (fVar6 < (float)(int)sVar1 != (fVar6 == (float)(int)sVar1)) {
        *(undefined4 *)(unaff_ESI + 0xd4) = 0x42c80000;
      }
    }
    else {
      *(undefined4 *)(unaff_ESI + 0xd4) = 0x43fa0000;
    }
    fVar6 = DAT_006cc7a4;
    if (*(char *)(unaff_ESI + 0x8d4) != '\0') {
      fVar6 = _DAT_006cc9f8;
    }
    *(float *)(unaff_ESI + 0xcc) = fVar6;
    *(float *)(unaff_ESI + 0xd0) =
         *(float *)(unaff_ESI + 0xd4) + *(float *)(unaff_ESI + 0xd0) + fVar6;
  }
  return;
}
