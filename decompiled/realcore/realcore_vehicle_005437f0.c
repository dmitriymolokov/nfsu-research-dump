/* spd-match: far pct=5.67 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_03/attempt5_signature_dat_cdecl */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b780();
int __cdecl FUN_0040be40();
int __cdecl FUN_0040c650();
int __cdecl FUN_004ad8d0();
int __cdecl FUN_00540830();
int __cdecl FUN_005413e0();
int __cdecl FUN_00541bf0();
int __cdecl FUN_00541fc0();
int __cdecl FUN_00542360();
int __cdecl FUN_00542c20();
int __cdecl FUN_00542e40();
int __cdecl FUN_00564b10();
int __cdecl FUN_00567370();
int __cdecl FUN_00567450();
int __cdecl FUN_00674898();
extern int DAT_006b6348;
extern int DAT_006b634c;
extern int DAT_006cc7a4;
extern int DAT_006f3e04;
extern int DAT_006f3e08;
extern int DAT_006f3e0c;
extern int DAT_006f3e18;
extern int DAT_006f3e78;
extern int DAT_006f3ed8;
extern int DAT_006f3edc;
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
extern char stack0xfffffa54;

undefined4 FUN_005437f0(float *param_1,int param_2,int param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float10 extraout_ST0;
  float fVar19;
  int iStack_598;
  undefined *puStack_594;
  float afStack_57c [7];
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float afStack_554 [4];
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 auStack_4bc [12];
  undefined1 auStack_4b0 [16];
  undefined1 local_4a0 [4];
  undefined4 uStack_49c;
  undefined4 uStack_48c;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [4];
  undefined4 uStack_464;
  undefined4 uStack_454;
  undefined4 uStack_444;
  undefined4 uStack_440;
  float afStack_43c [76];
  float afStack_30c [76];
  undefined1 auStack_1dc [64];
  float afStack_19c [4];
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_60 [92];
  
  if ((param_1 != (float *)0x0) && (param_2 != 0)) {
    iVar16 = 0x70;
    pfVar15 = param_1;
    if (DAT_006f3edc != 0) {
      for (; iVar16 != 0; iVar16 = iVar16 + -1) {
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + 1;
      }
      FUN_00542c20(param_2,param_3);
      FUN_00542e40(param_1,param_2 + 0x30,param_2,param_3);
      return 1;
    }
    for (; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
    iVar16 = param_3;
    if ((param_5 != 0) && (*(int *)(param_5 + 0x40) != 0)) {
      iVar16 = *(int *)(param_5 + 0x40);
    }
    ((int (__cdecl *)())FUN_005437f0)(local_4a0,param_2);
    uStack_49c = 0;
    uStack_48c = 0;
    uStack_47c = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    ((int (__cdecl *)())FUN_005437f0)(auStack_468,iVar16);
    uStack_464 = 0;
    uStack_454 = 0;
    uStack_444 = 0;
    afStack_43c[2] = 0.0;
    uStack_440 = 0;
    afStack_43c[0] = 0.0;
    afStack_43c[1] = 0.0;
    ((int (__cdecl *)())FUN_005437f0)(auStack_60,&uStack_470,auStack_4b0);
    if (param_4 != (float *)0x0) {
      fVar1 = *param_4;
      fVar2 = *(float *)(param_2 + 0x30);
      fVar3 = param_4[1];
      fVar4 = *(float *)(param_2 + 0x34);
      fVar5 = param_4[2];
      fVar6 = *(float *)(param_2 + 0x38);
      ((int (__cdecl *)())FUN_005437f0)(&stack0xfffffa54,&stack0xfffffa54,auStack_4bc);
      fVar18 = (float10)FUN_00540830();
      fVar19 = DAT_006b6348;
      if (((float10)((int)DAT_006b6348) <= fVar18) &&
         (fVar19 = (float)fVar18, DAT_006b634c < (float)fVar18)) {
        fVar19 = DAT_006b634c;
      }
      FUN_00567450();
      FUN_0040c650(fVar19);
      param_1[0x30] = fVar1 - fVar2;
      param_1[0x31] = fVar3 - fVar4;
      param_1[0x32] = fVar5 - fVar6;
      param_1[0x33] = 1.0;
    }
    FUN_004010a0(afStack_30c,0x10,0x13,FUN_004ad8d0);
    FUN_004010a0(afStack_19c,0x10,0x13,FUN_004ad8d0);
    FUN_004010a0(afStack_43c,0x10,0x13,FUN_004ad8d0);
    pfVar15 = afStack_30c;
    for (iVar16 = 0x4c; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
    pfVar15 = afStack_19c;
    for (iVar16 = 0x4c; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
    pfVar15 = afStack_43c;
    for (iVar16 = 0x4c; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
    puStack_594 = &DAT_006f3e18;
    if (DAT_0077a920 != 3) {
      puStack_594 = &DAT_006f3e78;
    }
    if (DAT_006f3ed8 == 0) {
      fStack_4d8 = param_4[1];
      fStack_4dc = *param_4;
      uStack_4cc = *(undefined4 *)(param_2 + 0x30);
      fStack_4d4 = param_4[2];
      uStack_4c8 = *(undefined4 *)(param_2 + 0x34);
      uStack_4c4 = *(undefined4 *)(param_2 + 0x38);
      FUN_0040b780(&stack0xfffffa54);
      FUN_0040be40();
      puVar14 = (undefined4 *)(puStack_594 + 0x14);
      iVar16 = 0;
    }
    else {
      FUN_00401cd0();
      puVar14 = (undefined4 *)(puStack_594 + 0x14);
      iVar16 = 0;
    }
    do {
      pfVar15 = (float *)((int)afStack_30c + iVar16);
      FUN_00542360((float)puVar14[-2] + _DAT_006ccb3c,((int)_DAT_006cccd4) - (float)puVar14[-1],0x3f800000)
      ;
      fVar1 = *pfVar15;
      *pfVar15 = -*(float *)((int)afStack_30c + iVar16 + 4);
      fVar2 = *pfVar15;
      *(float *)((int)afStack_30c + iVar16 + 4) = -*(float *)((int)afStack_30c + iVar16 + 8);
      uVar12 = *(undefined4 *)((int)afStack_30c + iVar16 + 4);
      *(float *)((int)afStack_30c + iVar16 + 8) = fVar1;
      ((int (__cdecl *)())FUN_005437f0)(&stack0xfffffa54,&stack0xfffffa54,auStack_1dc);
      *pfVar15 = fVar2;
      *(undefined4 *)((int)afStack_30c + iVar16 + 4) = uVar12;
      *(float *)((int)afStack_30c + iVar16 + 8) = fVar1;
      *(undefined4 *)((int)afStack_43c + iVar16) = *puVar14;
      *(undefined4 *)((int)afStack_43c + iVar16 + 4) = *puVar14;
      *(undefined4 *)((int)afStack_43c + iVar16 + 8) = *puVar14;
      *(undefined4 *)((int)afStack_43c + iVar16 + 0xc) = 0;
      puVar14 = puVar14 + 3;
      iVar16 = iVar16 + 0x10;
    } while (iVar16 < 0x70);
    iVar16 = FUN_005413e0(afStack_57c);
    if (0x13 < iVar16 + 8) {
      iVar16 = 0xb;
    }
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_2 + 0x34);
    fVar3 = *(float *)(param_2 + 0x38);
    puStack_594 = (undefined *)0x0;
    iStack_598 = iVar16;
    if (0 < iVar16) {
      iVar17 = 0;
      do {
        fVar4 = afStack_57c[(int)puStack_594];
        *(float *)((int)afStack_30c + iVar17 + 0x70) = *(float *)((int)fVar4 + 0x10) - fVar1;
        *(float *)((int)afStack_30c + iVar17 + 0x74) = *(float *)((int)fVar4 + 0x14) - fVar2;
        *(float *)((int)afStack_30c + iVar17 + 0x78) = *(float *)((int)fVar4 + 0x18) - fVar3;
        uVar13 = *(uint *)((int)fVar4 + 0xc);
        fVar5 = (float)(uVar13 >> 8 & 0xff);
        if (*(char *)((int)fVar4 + 4) == '\x03') {
          FUN_00674898();
          fVar18 = (float10)FUN_00564b10();
          fVar6 = (float)fVar18;
          fVar19 = *(float *)(param_2 + 0x30);
          fVar7 = *(float *)((int)fVar4 + 0x10);
          fVar8 = *(float *)(param_2 + 0x34);
          fVar9 = *(float *)((int)fVar4 + 0x14);
          fVar10 = *(float *)(param_2 + 0x38);
          fVar11 = *(float *)((int)fVar4 + 0x18);
          FUN_00567370();
          fVar19 = (fVar19 - fVar7) * *(float *)((int)fVar4 + 0x20) +
                   (fVar8 - fVar9) * *(float *)((int)fVar4 + 0x24) +
                   (fVar10 - fVar11) * *(float *)((int)fVar4 + 0x28);
          fVar4 = DAT_006cc7a4;
          if (fVar6 < fVar19) {
            fVar4 = (fVar19 - fVar6) / (((int)_DAT_006cc7bc) - fVar6);
          }
          fVar4 = fVar4 * afStack_554[(int)puStack_594];
          *(float *)((int)afStack_43c + iVar17 + 0x70) =
               (float)(uVar13 & 0xff) * fVar4 * ((int)_DAT_006b6340);
          *(float *)((int)afStack_43c + iVar17 + 0x74) = fVar5 * fVar4 * ((int)_DAT_006b6340);
        }
        else {
          *(float *)((int)afStack_43c + iVar17 + 0x70) =
               (float)(uVar13 & 0xff) * afStack_554[(int)puStack_594] * ((int)_DAT_006b6340);
          *(float *)((int)afStack_43c + iVar17 + 0x74) =
               fVar5 * afStack_554[(int)puStack_594] * ((int)_DAT_006b6340);
          fVar4 = afStack_554[(int)puStack_594];
        }
        puStack_594 = (undefined *)((int)puStack_594 + 1);
        *(float *)((int)afStack_43c + iVar17 + 0x78) =
             (float)(uVar13 >> 0x10 & 0xff) * fVar4 * ((int)_DAT_006b6340);
        iVar17 = iVar17 + 0x10;
      } while ((int)puStack_594 < iVar16);
      iStack_598 = iVar16;
      if (0 < iVar16) {
        pfVar15 = afStack_30c + 0x1c;
        do {
          ((int (__cdecl *)())FUN_005437f0)(pfVar15,pfVar15,auStack_4bc);
          pfVar15 = pfVar15 + 4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
    iStack_598 = iStack_598 + 8;
    iVar16 = iStack_598;
    if (0 < iStack_598) {
      do {
        FUN_00567370();
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    pfVar15 = afStack_57c + 2;
    iVar16 = 10;
    iVar17 = 0;
    do {
      pfVar15[1] = 0.0;
      *pfVar15 = 0.0;
      pfVar15[-1] = 0.0;
      pfVar15[-2] = 0.0;
      pfVar15 = pfVar15 + 4;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    if (0 < iStack_598) {
      do {
        pfVar15 = (float *)((int)afStack_43c + iVar17);
        *pfVar15 = *pfVar15 * ((int)_DAT_006cc970);
        *(float *)((int)afStack_43c + iVar17 + 4) =
             *(float *)((int)afStack_43c + iVar17 + 4) * ((int)_DAT_006cc970);
        *(float *)((int)afStack_43c + iVar17 + 8) =
             *(float *)((int)afStack_43c + iVar17 + 8) * ((int)_DAT_006cc970);
        *(float *)((int)afStack_43c + iVar17 + 0xc) =
             *(float *)((int)afStack_43c + iVar17 + 0xc) * ((int)_DAT_006cc970);
        *(float *)((int)afStack_43c + iVar17 + 0xc) =
             *(float *)((int)afStack_43c + iVar17 + 8) * ((int)_DAT_006cccc8) +
             *pfVar15 * ((int)_DAT_006cccc4) + *(float *)((int)afStack_43c + iVar17 + 4) * ((int)_DAT_006ccccc);
        FUN_00541bf0();
        iVar17 = iVar17 + 0x10;
        iStack_598 = iStack_598 + -1;
      } while (iStack_598 != 0);
    }
    FUN_00541fc0(DAT_006f3e04,DAT_006f3e08,DAT_006f3e0c);
    param_1[0x48] = afStack_57c[0];
    param_1[0x49] = afStack_57c[1];
    param_1[0x4a] = afStack_57c[2];
    param_1[0x4b] = afStack_57c[3];
    param_1[0x4c] = afStack_57c[4];
    param_1[0x4d] = afStack_57c[5];
    param_1[0x4e] = afStack_57c[6];
    param_1[0x4f] = fStack_560;
    param_1[0x50] = fStack_55c;
    param_1[0x51] = fStack_558;
    param_1[0x52] = afStack_554[0];
    param_1[0x53] = afStack_554[1];
    param_1[0x54] = afStack_554[2];
    param_1[0x55] = afStack_554[3];
    param_1[0x56] = fStack_544;
    param_1[0x57] = fStack_540;
    param_1[0x58] = fStack_53c;
    param_1[0x59] = fStack_538;
    param_1[0x5a] = fStack_534;
    param_1[0x5b] = fStack_530;
    param_1[0x5c] = fStack_52c;
    param_1[0x5d] = fStack_528;
    param_1[0x5e] = fStack_524;
    param_1[0x5f] = fStack_520;
    param_1[0x60] = fStack_51c;
    param_1[0x61] = fStack_518;
    param_1[0x62] = fStack_514;
    param_1[99] = fStack_510;
    param_1[100] = fStack_50c;
    param_1[0x65] = fStack_508;
    param_1[0x66] = fStack_504;
    param_1[0x67] = fStack_500;
    param_1[0x68] = fStack_4fc;
    param_1[0x69] = fStack_4f8;
    param_1[0x6a] = fStack_4f4;
    param_1[0x6b] = fStack_4f0;
    param_1[0x6c] = fStack_4ec;
    param_1[0x6f] = fStack_4e0;
    param_1[0x6d] = fStack_4e8;
    param_1[0x6e] = fStack_4e4;
    if ((param_3 != 0) && (param_4 != (float *)0x0)) {
      ((int (__cdecl *)())FUN_005437f0)(param_1 + 0x38,param_2,param_3);
      param_1[0x3b] = 0.0;
      param_1[0x3f] = 0.0;
      param_1[0x43] = 0.0;
      param_1[0x44] = param_1[0x30];
      param_1[0x45] = param_1[0x31];
      param_1[0x46] = param_1[0x32];
      param_1[0x47] = 0.0;
    }
    fVar1 = afStack_43c[0] * ((int)_DAT_006cc974);
    param_1[0x10] = afStack_19c[0];
    *param_1 = fVar1;
    param_1[0x14] = afStack_19c[1];
    fVar1 = afStack_43c[1] * ((int)_DAT_006cc974);
    param_1[0x18] = afStack_19c[2];
    param_1[1] = fVar1;
    param_1[0x11] = fStack_18c;
    fVar1 = afStack_43c[2] * ((int)_DAT_006cc974);
    param_1[0x15] = fStack_188;
    param_1[0x19] = fStack_184;
    param_1[2] = fVar1;
    param_1[0x12] = fStack_17c;
    afStack_43c[4] = afStack_43c[4] * ((int)_DAT_006cc974);
    param_1[0x16] = fStack_178;
    param_1[0x1a] = fStack_174;
    param_1[4] = afStack_43c[4];
    param_1[5] = afStack_43c[5] * ((int)_DAT_006cc974);
    param_1[6] = afStack_43c[6] * ((int)_DAT_006cc974);
    param_1[8] = afStack_43c[8] * ((int)_DAT_006cc974);
    param_1[9] = afStack_43c[9] * ((int)_DAT_006cc974);
    param_1[10] = afStack_43c[10] * ((int)_DAT_006cc974);
    iVar16 = FUN_00674898();
    fVar1 = (float)iVar16;
    if (iVar16 < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    param_1[0xc] = fVar1;
    iVar16 = FUN_00674898();
    fVar1 = (float)iVar16;
    if (iVar16 < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    param_1[0xd] = fVar1;
    iVar16 = FUN_00674898();
    fVar2 = (float)iVar16;
    if (iVar16 < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    param_1[0xe] = fVar2;
    if ((float10)((int)_DAT_006cc974) < extraout_ST0) {
      param_1[0xc] = 255.0;
    }
    if (_DAT_006cc974 < fVar1) {
      param_1[0xd] = 255.0;
    }
    if (_DAT_006cc974 < fVar2) {
      param_1[0xe] = 255.0;
    }
    return 1;
  }
  return 0xffffffff;
}
