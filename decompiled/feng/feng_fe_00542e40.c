/* spd-match: far pct=7.97 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-tail3/va_00542E40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005413e0();
int __cdecl FUN_00541bf0();
int __cdecl FUN_00541fc0();
int __cdecl FUN_00542360();
int __cdecl FUN_00542dc0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00567370();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f3e04;
extern int DAT_006f3e08;
extern int DAT_006f3e0c;
extern int DAT_006f3e18;
extern int DAT_006f3e78;
extern int DAT_0077a920;
extern int _DAT_006b6340;
extern int _DAT_006cc7bc;
extern int _DAT_006cc858;
extern int _DAT_006cc970;
extern int _DAT_006cc974;
extern int _DAT_006ccb3c;
extern int _DAT_006cccc4;
extern int _DAT_006cccc8;
extern int _DAT_006ccccc;
extern int _DAT_006cccd4;
extern int _DAT_006f3ee0;
extern int _DAT_006f3ee4;
undefined4 __fastcall FUN_00542e40(int obj, float *param_1, float *param_2, int param_3, int param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;

  float *pfVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int iVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float fVar14;
  int iStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  undefined4 uStack_49c;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float afStack_488 [7];
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float afStack_460 [7];
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined1 auStack_3e8 [8];
  undefined1 local_3e0 [4];
  undefined4 uStack_3dc;
  undefined4 uStack_3cc;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  float afStack_3a8 [76];
  float afStack_278 [76];
  float afStack_148 [6];
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  
  if (param_1 == (float *)0x0) {
    return 0xffffffff;
  }
  if ((obj != 0) && (*(int *)(obj + 0x40) != 0)) {
    param_4 = *(int *)(obj + 0x40);
  }
  ((int (__cdecl *)())FUN_00542e40)(local_3e0,param_4);
  pfVar8 = afStack_278;
  for (iVar9 = 0x4c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 1;
  }
  pfVar8 = afStack_148;
  for (iVar9 = 0x4c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 1;
  }
  pfVar8 = afStack_3a8;
  for (iVar9 = 0x4c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 1;
  }
  uStack_3dc = 0;
  uStack_3cc = 0;
  uStack_3bc = 0;
  uStack_3ac = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  puVar10 = &DAT_006f3e18;
  if (DAT_0077a920 != 3) {
    puVar10 = &DAT_006f3e78;
  }
  puVar11 = (undefined4 *)(puVar10 + 0x14);
  iVar9 = 0;
  do {
    pfVar8 = (float *)((int)afStack_278 + iVar9);
    FUN_00542360((float)puVar11[-2] + _DAT_006ccb3c,((int)_DAT_006cccd4) - (float)puVar11[-1],0x3f800000);
    fStack_4a0 = *pfVar8;
    *pfVar8 = -*(float *)((int)afStack_278 + iVar9 + 4);
    fStack_4a8 = *pfVar8;
    *(float *)((int)afStack_278 + iVar9 + 4) = -*(float *)((int)afStack_278 + iVar9 + 8);
    fStack_4a4 = *(float *)((int)afStack_278 + iVar9 + 4);
    *(float *)((int)afStack_278 + iVar9 + 8) = fStack_4a0;
    uStack_49c = 0;
    ((int (__cdecl *)())FUN_00542e40)(&fStack_4a8,&fStack_4a8,auStack_3e8);
    *(float *)((int)afStack_278 + iVar9 + 4) = fStack_4a4;
    *(float *)((int)afStack_278 + iVar9 + 8) = fStack_4a0;
    *pfVar8 = fStack_4a8;
    uVar2 = *puVar11;
    *(undefined4 *)((int)afStack_3a8 + iVar9) = uVar2;
    *(undefined4 *)((int)afStack_3a8 + iVar9 + 4) = uVar2;
    *(undefined4 *)((int)afStack_3a8 + iVar9 + 8) = uVar2;
    *(undefined4 *)((int)afStack_3a8 + iVar9 + 0xc) = 0;
    iVar9 = iVar9 + 0x10;
    puVar11 = puVar11 + 3;
  } while (iVar9 < 0x70);
  iStack_4b0 = FUN_005413e0(afStack_488);
  if (0x13 < iStack_4b0 + 8) {
    iStack_4b0 = 0xb;
  }
  fVar14 = param_2[2];
  fStack_48c = *param_2;
  fVar3 = param_2[1];
  iVar9 = 0;
  if (0 < iStack_4b0) {
    iVar12 = 0;
    do {
      fVar4 = afStack_488[iVar9];
      *(float *)((int)afStack_278 + iVar12 + 0x70) = *(float *)((int)fVar4 + 0x10) - fStack_48c;
      *(float *)((int)afStack_278 + iVar12 + 0x74) = *(float *)((int)fVar4 + 0x14) - fVar3;
      *(float *)((int)afStack_278 + iVar12 + 0x78) = *(float *)((int)fVar4 + 0x18) - fVar14;
      uVar5 = *(uint *)((int)fVar4 + 0xc);
      fStack_494 = (float)(uVar5 & 0xff);
      fStack_490 = (float)(uVar5 >> 8 & 0xff);
      fVar6 = (float)(uVar5 >> 0x10 & 0xff);
      if (*(char *)((int)fVar4 + 4) == '\x03') {
        FUN_00674898();
        fVar13 = (float10)FUN_00564b10();
        fVar1 = (float)fVar13;
        fStack_4a8 = *param_2 - *(float *)((int)fVar4 + 0x10);
        fStack_4a4 = param_2[1] - *(float *)((int)fVar4 + 0x14);
        fStack_4a0 = param_2[2] - *(float *)((int)fVar4 + 0x18);
        FUN_00567370();
        fVar7 = fStack_4a8 * *(float *)((int)fVar4 + 0x20) +
                fStack_4a4 * *(float *)((int)fVar4 + 0x24) +
                fStack_4a0 * *(float *)((int)fVar4 + 0x28);
        fVar4 = DAT_006cc7a4;
        if (fVar1 < fVar7) {
          fVar4 = (fVar7 - fVar1) / (((int)_DAT_006cc7bc) - fVar1);
        }
        fVar4 = fVar4 * afStack_460[iVar9];
        *(float *)((int)afStack_3a8 + iVar12 + 0x70) = fStack_494 * fVar4 * ((int)_DAT_006b6340);
        *(float *)((int)afStack_3a8 + iVar12 + 0x74) = fStack_490 * fVar4 * ((int)_DAT_006b6340);
        fVar4 = fVar4 * fVar6 * ((int)_DAT_006b6340);
      }
      else {
        *(float *)((int)afStack_3a8 + iVar12 + 0x70) =
             fStack_494 * ((int)_DAT_006b6340) * afStack_460[iVar9];
        *(float *)((int)afStack_3a8 + iVar12 + 0x74) =
             fStack_490 * ((int)_DAT_006b6340) * afStack_460[iVar9];
        fVar4 = fVar6 * ((int)_DAT_006b6340) * afStack_460[iVar9];
      }
      *(float *)((int)afStack_3a8 + iVar12 + 0x78) = fVar4;
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar9 < iStack_4b0);
  }
  if (param_3 != 0) {
    ((int (__cdecl *)())FUN_00542e40)(afStack_488,param_3);
    iVar9 = iStack_4b0 + 8;
    afStack_488[3] = 0.0;
    fStack_46c = 0.0;
    afStack_460[1] = 0.0;
    afStack_460[5] = 0.0;
    afStack_460[2] = 0.0;
    afStack_460[3] = 0.0;
    afStack_460[4] = 0.0;
    if (0 < iVar9) {
      pfVar8 = afStack_278;
      do {
        ((int (__cdecl *)())FUN_00542e40)(pfVar8,pfVar8,afStack_488);
        pfVar8 = pfVar8 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  iStack_4b0 = iStack_4b0 + 8;
  if (0 < iStack_4b0) {
    iVar12 = 0;
    iVar9 = iStack_4b0;
    do {
      fVar14 = *(float *)((int)afStack_278 + iVar12 + 8);
      fVar3 = *(float *)((int)afStack_278 + iVar12 + 4);
      fVar14 = SQRT(fVar14 * fVar14 +
                    *(float *)((int)afStack_278 + iVar12) * *(float *)((int)afStack_278 + iVar12) +
                    fVar3 * fVar3);
      if (fVar14 == DAT_006cc7a4) {
        *(undefined4 *)((int)afStack_148 + iVar12) = 0x3f800000;
        *(undefined4 *)((int)afStack_148 + iVar12 + 4) = 0;
        *(undefined4 *)((int)afStack_148 + iVar12 + 8) = 0;
      }
      else {
        fVar14 = ((int)_DAT_006cc7bc) / fVar14;
        *(float *)((int)afStack_148 + iVar12) = fVar14 * *(float *)((int)afStack_278 + iVar12);
        *(float *)((int)afStack_148 + iVar12 + 4) =
             fVar14 * *(float *)((int)afStack_278 + iVar12 + 4);
        *(float *)((int)afStack_148 + iVar12 + 8) =
             fVar14 * *(float *)((int)afStack_278 + iVar12 + 8);
      }
      iVar12 = iVar12 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  fVar14 = DAT_006cc7a4;
  if (0 < iStack_4b0) {
    pfVar8 = afStack_3a8 + 2;
    iVar9 = iStack_4b0;
    do {
      iVar9 = iVar9 + -1;
      pfVar8[-2] = pfVar8[-2] * ((int)_DAT_006cc970);
      pfVar8[-1] = pfVar8[-1] * ((int)_DAT_006cc970);
      *pfVar8 = *pfVar8 * ((int)_DAT_006cc970);
      pfVar8[1] = pfVar8[1] * ((int)_DAT_006cc970);
      fVar3 = *pfVar8 * ((int)_DAT_006cccc8) + pfVar8[-2] * ((int)_DAT_006cccc4) + pfVar8[-1] * ((int)_DAT_006ccccc);
      pfVar8[1] = fVar3;
      fVar14 = fVar3 + fVar14;
      pfVar8 = pfVar8 + 4;
    } while (iVar9 != 0);
  }
  fVar13 = (float10)FUN_00542dc0(fVar14 * ((int)_DAT_006f3ee0));
  fVar13 = (float10)((int)_DAT_006cc7bc) - fVar13;
  if (_DAT_006f3ee4 < fVar14) {
    fVar13 = (float10)((int)_DAT_006f3ee4) / (float10)fVar14;
  }
  if (0 < iStack_4b0) {
    pfVar8 = afStack_3a8 + 2;
    iVar9 = iStack_4b0;
    do {
      iVar9 = iVar9 + -1;
      pfVar8[-2] = (float)(fVar13 * (float10)pfVar8[-2]);
      pfVar8[-1] = (float)((float10)pfVar8[-1] * fVar13);
      *pfVar8 = (float)((float10)*pfVar8 * fVar13);
      pfVar8[1] = (float)((float10)pfVar8[1] * fVar13);
      pfVar8 = pfVar8 + 4;
    } while (iVar9 != 0);
  }
  pfVar8 = afStack_488 + 2;
  iVar9 = 10;
  do {
    pfVar8[1] = 0.0;
    *pfVar8 = 0.0;
    pfVar8[-1] = 0.0;
    pfVar8[-2] = 0.0;
    pfVar8 = pfVar8 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (0 < iStack_4b0) {
    do {
      FUN_00541bf0();
      iStack_4b0 = iStack_4b0 + -1;
    } while (iStack_4b0 != 0);
  }
  FUN_00541fc0(DAT_006f3e04,DAT_006f3e08,DAT_006f3e0c);
  param_1[0x48] = afStack_488[0];
  param_1[0x49] = afStack_488[1];
  param_1[0x4a] = afStack_488[2];
  param_1[0x4b] = afStack_488[3];
  param_1[0x4c] = afStack_488[4];
  param_1[0x4d] = afStack_488[5];
  param_1[0x4e] = afStack_488[6];
  param_1[0x4f] = fStack_46c;
  param_1[0x50] = fStack_468;
  param_1[0x51] = fStack_464;
  param_1[0x52] = afStack_460[0];
  param_1[0x53] = afStack_460[1];
  param_1[0x54] = afStack_460[2];
  param_1[0x55] = afStack_460[3];
  param_1[0x56] = afStack_460[4];
  param_1[0x57] = afStack_460[5];
  param_1[0x58] = afStack_460[6];
  param_1[0x59] = fStack_444;
  param_1[0x5a] = fStack_440;
  param_1[0x5b] = fStack_43c;
  param_1[0x5c] = fStack_438;
  param_1[0x5d] = fStack_434;
  param_1[0x5e] = fStack_430;
  param_1[0x5f] = fStack_42c;
  param_1[0x60] = fStack_428;
  param_1[0x61] = fStack_424;
  param_1[0x62] = fStack_420;
  param_1[99] = fStack_41c;
  param_1[100] = fStack_418;
  param_1[0x65] = fStack_414;
  param_1[0x66] = fStack_410;
  param_1[0x67] = fStack_40c;
  param_1[0x68] = fStack_408;
  param_1[0x69] = fStack_404;
  param_1[0x6a] = fStack_400;
  afStack_3a8[0] = afStack_3a8[0] * ((int)_DAT_006cc974);
  param_1[0x6b] = fStack_3fc;
  param_1[0x6c] = fStack_3f8;
  param_1[0x6d] = fStack_3f4;
  param_1[0x6e] = fStack_3f0;
  param_1[0x6f] = fStack_3ec;
  *param_1 = afStack_3a8[0];
  afStack_3a8[1] = afStack_3a8[1] * ((int)_DAT_006cc974);
  param_1[0x10] = afStack_148[0];
  param_1[1] = afStack_3a8[1];
  param_1[0x14] = afStack_148[1];
  afStack_3a8[2] = afStack_3a8[2] * ((int)_DAT_006cc974);
  param_1[0x18] = afStack_148[2];
  param_1[2] = afStack_3a8[2];
  param_1[0x11] = afStack_148[4];
  afStack_3a8[4] = afStack_3a8[4] * ((int)_DAT_006cc974);
  param_1[0x15] = afStack_148[5];
  param_1[0x19] = fStack_130;
  param_1[4] = afStack_3a8[4];
  param_1[0x12] = fStack_128;
  afStack_3a8[5] = afStack_3a8[5] * ((int)_DAT_006cc974);
  param_1[0x16] = fStack_124;
  param_1[0x1a] = fStack_120;
  param_1[5] = afStack_3a8[5];
  param_1[6] = afStack_3a8[6] * ((int)_DAT_006cc974);
  param_1[8] = afStack_3a8[8] * ((int)_DAT_006cc974);
  param_1[9] = afStack_3a8[9] * ((int)_DAT_006cc974);
  param_1[10] = afStack_3a8[10] * ((int)_DAT_006cc974);
  iVar9 = FUN_00674898();
  fVar14 = (float)iVar9;
  if (iVar9 < 0) {
    fVar14 = fVar14 + _DAT_006cc858;
  }
  param_1[0xc] = fVar14;
  iVar9 = FUN_00674898();
  fVar14 = (float)iVar9;
  if (iVar9 < 0) {
    fVar14 = fVar14 + _DAT_006cc858;
  }
  param_1[0xd] = fVar14;
  iVar9 = FUN_00674898();
  fVar3 = (float)iVar9;
  if (iVar9 < 0) {
    fVar3 = fVar3 + _DAT_006cc858;
  }
  param_1[0xe] = fVar3;
  if ((float10)((int)_DAT_006cc974) < extraout_ST0) {
    param_1[0xc] = 255.0;
  }
  if (_DAT_006cc974 < fVar14) {
    param_1[0xd] = 255.0;
  }
  if (_DAT_006cc974 < fVar3) {
    param_1[0xe] = 255.0;
  }
  return 1;
}
