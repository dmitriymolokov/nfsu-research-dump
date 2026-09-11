/* spd-match: far pct=8.25 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_game_c/attempt4_89690 */
#include "ghidra_compat.h"

#ifndef SUB42
#define SUB42(x,n) ((unsigned int)((unsigned __int64)(x) >> ((n) * 8)))
#endif

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b930();
int __cdecl FUN_0040b990();
int __cdecl FUN_0040ba40();
int __cdecl FUN_0040bb20();
int __cdecl FUN_0040bc10();
int __cdecl FUN_004407b0();
int __cdecl FUN_00440a40();
int __cdecl FUN_00441d80();
int __cdecl FUN_0047d070();
int __cdecl FUN_0047d680();
int __cdecl FUN_004838e0();
int __cdecl FUN_00483ad0();
int __cdecl FUN_00489300();
int __cdecl FUN_00564b10();
int __cdecl FUN_00564cd0();
int __cdecl FUN_00564db0();
int __cdecl FUN_00575040();
int __cdecl FUN_00583f20();
int __cdecl FUN_005abda2();
int __cdecl FUN_005ac436();
int __cdecl FUN_005ac68f();
int __cdecl FUN_005ac8d8();
int __cdecl FUN_00674898();
extern int DAT_006b6e04;
extern int DAT_006b6e08;
extern int DAT_006cc7a4;
extern int DAT_006fbdec;
extern int DAT_006fbdf0;
extern int DAT_006fbdf4;
extern int DAT_006fbf08;
extern int DAT_006fbf14;
extern int DAT_006fbf18;
extern int DAT_006fbf1c;
extern int DAT_0073457c;
extern int DAT_00735ee8;
extern int DAT_00735eec;
extern int DAT_00735ef0;
extern int DAT_00735f5c;
extern int DAT_007361f8;
extern int DAT_007364a0;
extern int DAT_0073ad38;
extern int _DAT_006b6c5c;
extern int _DAT_006b6c60;
extern int _DAT_006b6c64;
extern int _DAT_006b6c68;
extern int _DAT_006b6c78;
extern int _DAT_006b6c98;
extern int _DAT_006b72dc;
extern int _DAT_006cc7b4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc8b0;
extern int _DAT_006cc954;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
extern int _DAT_006cc9f0;
extern int _DAT_006cca08;
extern int _DAT_006cca0c;
extern int _DAT_006ccc08;
extern int _DAT_006ccd94;
extern int _DAT_006fbec0;
extern int _DAT_006fbec4;
extern int _DAT_006fbec8;
extern int _DAT_006fbecc;
extern int _DAT_006fbedc;
extern int _DAT_006fbee0;
extern int _DAT_006fbee4;
extern int _DAT_006fbee8;
extern int _DAT_006fbeec;
extern int _DAT_006fbef0;
extern int _DAT_006fbef8;
extern int _DAT_006fbefc;
extern int _DAT_006fbf00;
extern int _DAT_006fbf04;
extern int _DAT_006fbf0c;
extern unsigned char *PTR_DAT_00705b20;
extern void LAB_00489752(void);
extern void LAB_00489ad5(void);
extern void LAB_00489cf1(void);
extern void LAB_00489dc1(void);
extern void LAB_00489dc7(void);
extern void LAB_00489dcd(void);
extern void LAB_0048acb3(void);
int unaff_EBX;

void __fastcall FUN_00489690(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  float fVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 unaff_EBX;
  int iVar13;
  short *psVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  float10 extraout_ST0;
  float10 fVar18;
  float10 fVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  short *psVar22;
  char cVar23;
  float fVar24;
  short *psStack_300;
  float fStack_2f8;
  undefined4 uStack_2f4;
  float fStack_2f0;
  short *local_2ec;
  float fStack_2e8;
  float fStack_2e4;
  short *psStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  int local_2cc;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  short *psStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_214;
  undefined1 auStack_208 [8];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  undefined1 auStack_1b0 [12];
  float afStack_1a4 [13];
  undefined1 auStack_170 [76];
  float fStack_124;
  float fStack_120;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [76];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (param_1[8] == 0) {
    uStack_2f4 = (float)(uint)(uint3)uStack_2f4;
  }
  else {
    uStack_2f4 = (float)(__int64)CONCAT13(*(char *)(param_1[8] + 0x29) == '\0',(uint3)uStack_2f4);
  }
  if (DAT_006fbf14 == 0) {
    iVar16 = *(int *)(((int)(DAT_007361f8)) + 0x18);
    iVar11 = 0;
    if (0 < iVar16) {
      puVar10 = (undefined4 *)(((int)(DAT_007361f8)) + 0x28);
      do {
        local_2ec = (short *)*puVar10;
        if (local_2ec[5] == DAT_006fbf18) goto joined_r0x004896fe;
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar11 < iVar16);
    }
    local_2ec = (short *)0x0;
joined_r0x004896fe:
    if (local_2ec == (short *)0x0) {
      if (DAT_006fbf18 < 0) {
        local_2ec = (short *)param_1[0xb];
        goto LAB_00489752;
      }
      DAT_006fbf18 = ((int)(DAT_006fbf18)) + -1;
      iVar11 = 0;
      if (0 < iVar16) {
        puVar10 = (undefined4 *)(((int)(DAT_007361f8)) + 0x28);
        do {
          local_2ec = (short *)*puVar10;
          if (local_2ec[5] == DAT_006fbf18) goto joined_r0x004896fe;
          iVar11 = iVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar11 < iVar16);
      }
      local_2ec = (short *)0x0;
      goto joined_r0x004896fe;
    }
  }
  else {
    local_2ec = (short *)param_1[0xb];
  }
LAB_00489752:
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((float)param_1[0xd] <= (float)param_1[0xe]) {
    if (((float)param_1[0xd] < (float)param_1[0xe]) &&
       (fVar24 = (float)param_1[0xe] - (float)param_1[0xcc] * ((int)DAT_0073457c),
       param_1[0xe] = (int)fVar24, fVar24 < (float)param_1[0xd])) {
      param_1[0xe] = param_1[0xd];
    }
  }
  else {
    fVar24 = (float)param_1[0xcc] * ((int)(DAT_0073457c)) + (float)param_1[0xe];
    param_1[0xe] = (int)fVar24;
    if ((float)param_1[0xd] < fVar24) {
      param_1[0xe] = param_1[0xd];
    }
  }
  local_2cc = FUN_0047d680();
  if (local_2cc == 0) {
    (**(code **)(*param_1 + 0x20))(0);
    local_2cc = FUN_0047d680();
  }
  psVar14 = local_2ec;
  local_1fc = *(undefined4 *)(local_2ec + 0x42);
  local_200 = *(undefined4 *)(local_2ec + 0x40);
  local_1f8 = *(undefined4 *)(local_2ec + 0x44);
  psVar22 = local_2ec + 0x48;
  _DAT_006fbec0 = 1.0;
  FUN_005ac8d8(local_50);
  puVar21 = auStack_58;
  puVar20 = auStack_208;
  FUN_005abda2(puVar20,auStack_208,puVar21);
  fVar24 = ((int)_DAT_006fbee4) * ((int)_DAT_006fbec0) * fStack_214;
  fVar15 = ((int)_DAT_006fbeec) * ((int)_DAT_006fbec0);
  if (fVar15 <= fVar24) {
    fVar24 = ((int)_DAT_006fbee0) * ((int)_DAT_006fbec0) * fStack_214;
    if (fVar24 <= ((int)_DAT_006fbee8) * ((int)_DAT_006fbec0)) {
      iVar16 = 0;
      fVar24 = 0.0;
    }
    else {
      iVar16 = 1;
    }
  }
  else {
    iVar16 = -1;
  }
  fVar7 = (float)FUN_00674898();
  cVar23 = (char)((uint)psVar22 >> 0x18);
  param_1[0xe4] = (int)(float)(extraout_ST0 - (float10)(int)fVar7);
  uStack_2f4 = fVar7;
  if (0 < (int)fVar7) {
    do {
      piVar8 = param_1 + 0xe0;
      iVar11 = 0x13;
      do {
        *piVar8 = piVar8[-1];
        piVar8 = piVar8 + -1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      param_1[0xcd] = (int)fVar24;
      fVar2 = fVar24;
      if (iVar16 == -1) {
        if (DAT_006cc7a4 <= (float)param_1[0xe1]) {
          iVar11 = -1;
          pfVar12 = (float *)(unsigned int)(param_1 + 0xce);
          iVar13 = 9;
          do {
            fVar2 = fVar2 + *pfVar12;
            if (fVar15 < *pfVar12) {
              iVar11 = 0;
            }
            pfVar12 = pfVar12 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          if (iVar11 != 0) {
            pfVar12 = (float *)(unsigned int)(param_1 + 0xd7);
            iVar13 = 10;
            do {
              if (*pfVar12 < fVar15) {
                iVar11 = 0;
              }
              pfVar12 = pfVar12 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
LAB_00489ad5:
            if (iVar11 != 0) {
              param_1[0xe2] = (int)(fVar2 * ((int)_DAT_006cc7b8));
              fVar2 = DAT_006cc7a4;
              if (_DAT_006b72dc <= *(float *)(unsigned int)(psStack_300 + 0x1e8)) {
                sVar4 = FUN_00564db0(*(undefined4 *)(psStack_300 + 0x38),
                                     *(undefined4 *)(psStack_300 + 0x3a));
                uStack_2f4 = (float)(uint)(ushort)(psStack_300[0x1da] - sVar4);
                fStack_2e4 = (float)(int)uStack_2f4 * ((int)_DAT_006cc980);
                if (_DAT_006cc97c < fStack_2e4) {
                  fStack_2e4 = fStack_2e4 - _DAT_006cc978;
                }
                fVar2 = fStack_2e4;
                if (fStack_2e4 < DAT_006cc7a4) {
                  fVar2 = -fStack_2e4;
                }
              }
              fVar2 = ((int)_DAT_006cc7bc) - fVar2 * ((int)_DAT_006fbedc);
              if (fVar2 < DAT_006cc7a4) {
                fVar2 = DAT_006cc7a4;
              }
              fVar1 = (float)param_1[0xe2];
              param_1[0xe2] = (int)(fVar2 * fVar1);
              fStack_2e8 = ((int)_DAT_006fbf00) * ((int)_DAT_006fbec0);
              if (fStack_2e8 < fVar2 * fVar1) {
                param_1[0xe2] = (int)fStack_2e8;
              }
              if ((float)param_1[0xe2] < ((int)_DAT_006fbf04) * ((int)_DAT_006fbec0)) {
                param_1[0xe2] = (int)(((int)_DAT_006fbf04) * ((int)_DAT_006fbec0));
              }
              param_1[0xe3] = 0;
              if ((param_1[0xcb] == 0) || (*(float *)(unsigned int)(psStack_300 + 0x1e8) <= _DAT_006cc954)) {
                param_1[0xe5] = 0x3f800000;
              }
              else {
                if (*(int *)(psStack_300 + 0x200) == 1) {
                  param_1[0xe2] = (int)((float)param_1[0xe2] * ((int)_DAT_006cca08));
                }
                fVar2 = ((int)DAT_006fbf08) * (float)param_1[0xe2];
                param_1[0xe5] = (int)DAT_006fbf08;
                param_1[0xe2] = (int)fVar2;
              }
            }
          }
        }
      }
      else if (iVar16 == 0) {
        pfVar12 = (float *)(unsigned int)(param_1 + 0xce);
        fVar2 = ((int)_DAT_006fbee8) * ((int)_DAT_006fbec0);
        iVar11 = 9;
        do {
          if ((*pfVar12 < fVar2) && (fVar15 < *pfVar12)) {
            param_1[0xe2] = 0;
          }
          pfVar12 = pfVar12 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else if ((iVar16 == 1) && ((float)param_1[0xe1] <= DAT_006cc7a4)) {
        pfVar12 = (float *)(unsigned int)(param_1 + 0xce);
        fStack_2e8 = ((int)_DAT_006fbee8) * ((int)_DAT_006fbec0);
        iVar13 = 9;
        iVar11 = 1;
        do {
          fVar2 = fVar2 + *pfVar12;
          if (*pfVar12 < fStack_2e8) {
            iVar11 = 0;
          }
          pfVar12 = pfVar12 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        if (iVar11 != 0) {
          pfVar12 = (float *)(unsigned int)(param_1 + 0xd7);
          iVar13 = 10;
          do {
            if (fStack_2e8 < *pfVar12) {
              iVar11 = 0;
            }
            pfVar12 = pfVar12 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          goto LAB_00489ad5;
        }
      }
      cVar23 = (char)((uint)psVar22 >> 0x18);
      fVar7 = (float)((int)fVar7 - 1);
      psVar14 = psStack_300;
    } while (fVar7 != 0.0);
  }
  fVar24 = ((int)DAT_0073457c) * ((int)_DAT_006cc8b0);
  if ((float)param_1[0xe2] == DAT_006cc7a4) {
    fVar24 = ((int)_DAT_006fbec8) * (float)param_1[0xe5] * fVar24;
    if ((float)param_1[0xe1] <= _DAT_006fbf0c) {
      if ((float)param_1[0xe1] <= DAT_006cc7a4) {
        if (DAT_006cc7a4 <= (float)param_1[0xe1]) goto LAB_00489dcd;
        if ((float)param_1[0xe1] < -fVar24) goto LAB_00489dc1;
      }
      else if (fVar24 < (float)param_1[0xe1]) {
        fVar24 = (float)param_1[0xe1] - fVar24;
        goto LAB_00489dc7;
      }
      param_1[0xe1] = 0;
      goto LAB_00489dcd;
    }
    fVar24 = (float)param_1[0xe1] - (fVar24 + fVar24);
LAB_00489dc7:
    param_1[0xe1] = (int)fVar24;
  }
  else if ((float)param_1[0xe2] <= DAT_006cc7a4) {
    if (_DAT_006cc954 <= *(float *)(unsigned int)(psVar14 + 0x1e8) * ((int)_DAT_006cc9f0)) {
      if ((float)param_1[0xe1] < (float)param_1[0xe2]) goto LAB_00489cf1;
      fVar24 = -(((int)_DAT_006fbec4) * (float)param_1[0xe5]) * fVar24;
      goto LAB_00489dc1;
    }
    param_1[0xe2] = 0;
  }
  else {
    fVar15 = (float)param_1[0xe1] - (float)param_1[0xe2];
    if (fVar15 <= DAT_006cc7a4) {
      if (fVar15 <= _DAT_006ccd94) {
        fVar24 = ((int)_DAT_006fbec4) * (float)param_1[0xe5] * fVar24;
        if (_DAT_006cc8a8 < fVar15) {
          fVar24 = fVar24 * ((int)_DAT_006cca0c);
        }
      }
      else {
        fVar24 = ((int)_DAT_006fbec4) * (float)param_1[0xe5] * fVar24 * ((int)_DAT_006cc7b4);
      }
LAB_00489dc1:
      fVar24 = fVar24 + (float)param_1[0xe1];
      goto LAB_00489dc7;
    }
LAB_00489cf1:
    fVar24 = ((int)(DAT_0073457c)) + (float)param_1[0xe3];
    param_1[0xe3] = (int)fVar24;
    if ((_DAT_006fbecc < fVar24) || (iVar16 == 0)) {
      param_1[0xe2] = 0;
    }
  }
LAB_00489dcd:
  fVar24 = ((int)_DAT_006fbef8) - *(float *)(unsigned int)(psVar14 + 0x1e8) * ((int)_DAT_006cc9f0);
  if (fVar24 < DAT_006cc7a4) {
    fVar24 = DAT_006cc7a4;
  }
  if (param_1[0xcb] == 0) {
    fVar24 = (fVar24 / ((int)_DAT_006fbef8)) * (float)param_1[0xe1] * ((int)_DAT_006fbef0);
  }
  else {
    fVar24 = 0.0;
  }
  FUN_00674898();
  FUN_00564b10();
  if (DAT_00735ee8 == 0) {
    sVar4 = *psStack_2e0;
    psVar22 = *(short **)(psStack_2e0 + 4);
    fStack_2e4 = *(float *)(unsigned int)(psStack_2e0 + 6);
    fStack_2e8 = (float)(__int64)CONCAT22((*(unsigned short *)((unsigned char *)&fStack_2e8 + 2)),psStack_2e0[1]);
    uStack_2b8 = 10000;
  }
  else {
    sVar4 = *psStack_2e0;
    fStack_2e8 = DAT_00735ef0;
    uStack_2b8 = DAT_006fbdf0;
    fStack_2e4 = (float)((int)DAT_00735eec);
    psVar22 = (short *)(unsigned int)DAT_006fbdec;
  }
  if ((((sVar4 == 1) || (sVar4 == 0)) || (sVar4 == 4)) && (fVar24 < DAT_006cc7a4)) {
    psVar22 = (short *)(unsigned int)(fVar24 * ((int)_DAT_006fbefc) + (float)(unsigned int)psVar22);
  }
  uStack_1f4 = 0x3f800000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0x3f800000;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0x3f800000;
  uStack_1c8 = 0;
  afStack_1bc[1] = 1.0;
  fStack_1c4 = -*(float *)(unsigned int)(psStack_300 + 0x28);
  fStack_1c0 = -*(float *)(unsigned int)(psStack_300 + 0x2a);
  afStack_1bc[0] = -*(float *)(unsigned int)(psStack_300 + 0x2c);
  uVar5 = FUN_00674898();
  *(undefined2 *)(param_1 + 0x11) = uVar5;
  uVar6 = 0;
  FUN_00401cd0();
  sVar4 = *psStack_2e0;
  if (((sVar4 == 1) || (sVar4 == 0)) || (sVar4 == 4)) {
    fStack_2f0 = *(float *)(unsigned int)(psStack_300 + 0x3a);
    uStack_2f4 = *(float *)(unsigned int)(psStack_300 + 0x38);
    fVar24 = uStack_2f4 * fStack_124 + fStack_120 * fStack_2f0;
    if (fVar24 < DAT_006cc7a4) {
      fVar24 = fVar24 * ((int)_DAT_006ccc08);
      fStack_2d8 = fVar24 * fStack_120;
      uStack_2f4 = fStack_124 * fVar24 + uStack_2f4;
      fStack_2f0 = fStack_2d8 + fStack_2f0;
    }
    fVar24 = SQRT(uStack_2f4 * uStack_2f4 + fStack_2f0 * fStack_2f0);
    fVar18 = (float10)FUN_00583f20(&PTR_DAT_00705b20,fVar24);
    fStack_2f8 = (float)fVar18;
    fStack_2dc = _DAT_006cc7bc;
    fStack_2d8 = DAT_006cc7a4;
    if (fVar24 / fStack_2f8 != DAT_006cc7a4) {
      fVar24 = ((int)_DAT_006cc7bc) / (fVar24 / fStack_2f8);
      fStack_2dc = uStack_2f4 * fVar24;
      fStack_2d8 = fVar24 * fStack_2f0;
    }
    fStack_2f0 = (((int)_DAT_006cc7bc) - fStack_2f8) * fStack_120;
    fStack_2dc = fStack_124 * (((int)_DAT_006cc7bc) - fStack_2f8) + fStack_2dc;
    fStack_2d8 = fStack_2f0 + fStack_2d8;
    uVar6 = FUN_00564db0(fStack_2dc,fStack_2d8);
    fVar18 = (float10)FUN_00564b10();
    fStack_2f8 = (float)fVar18;
    fVar18 = (float10)FUN_00564b10();
    fStack_2a0 = (float)fVar18;
    fStack_294 = (float)-fVar18;
    pfVar12 = &fStack_2a4;
    fStack_2a4 = fStack_2f8;
    fStack_290 = fStack_2f8;
    fStack_29c = 0.0;
    fStack_298 = 0.0;
    fStack_28c = 0.0;
    fStack_288 = 0.0;
    fStack_284 = 0.0;
    uStack_280 = 0;
    uStack_27c = 0x3f800000;
    uStack_278 = 0;
    uStack_274 = 0;
    psStack_270 = (short *)0x0;
    fStack_26c = 0.0;
    fStack_268 = 1.0;
  }
  else {
    FUN_005ac8d8(afStack_1a4,&fStack_124);
    if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
      FUN_0040b930();
      FUN_005ac68f(afStack_1a4,afStack_1a4,&fStack_2a4);
    }
    pfVar12 = afStack_1a4;
  }
  FUN_005ac68f(auStack_a4,&uStack_1f4,pfVar12);
  uStack_260 = 0x3f800000;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0x3f800000;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_238 = 0x3f800000;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  fStack_228 = 0.0;
  uStack_224 = 0x3f800000;
  cVar3 = (**(code **)(*param_1 + 0x24))();
  fVar15 = _DAT_006cc7bc;
  sVar4 = *local_2ec;
  if (((sVar4 == 1) || (sVar4 == 0)) || (sVar4 == 4)) {
    fStack_2f8 = (float)(uint)uVar6;
    iVar16 = param_1[0x12];
    fVar7 = (float)(int)((uint)(2 < *(int *)((int)fVar24 + 0x3cc)) * 2 + -1);
    fVar2 = ((int)_DAT_006b6c78) * fVar7 + (float)param_1[0x1a];
    param_1[0x1a] = (int)fVar2;
    if (fVar2 <= fVar15) {
      if (fVar2 < DAT_006cc7a4) {
        param_1[0x1a] = 0;
      }
    }
    else {
      param_1[0x1a] = 0x3f800000;
    }
    FUN_00489300();
    iVar13 = FUN_00674898();
    iVar11 = param_1[0x13];
    fVar18 = (float10)FUN_00564b10();
    fVar19 = (float10)FUN_00564b10();
    fStack_2ac = (float)fVar19;
    fStack_2a0 = (float)-fVar19;
    uStack_2a8 = 0;
    fStack_2a4 = 0.0;
    fStack_298 = 0.0;
    fStack_294 = 0.0;
    fStack_290 = 0.0;
    fStack_28c = 0.0;
    fStack_288 = 1.0;
    fStack_284 = 0.0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_274 = 0x3f800000;
    fStack_2b0 = (float)fVar18;
    fStack_29c = (float)fVar18;
    FUN_005ac68f(&uStack_260,&uStack_260,&fStack_2b0);
    param_1[0x12] = (int)fStack_2f8;
    param_1[0x13] = (uint)(ushort)((short)iVar11 + (uVar6 - (short)iVar16)) + iVar13 & 0xffff;
    uVar6 = FUN_00564cd0(*(undefined4 *)((int)fVar24 + 0x98));
    fVar15 = (float)(uint)uVar6;
    if ((short)param_1[0x11] == 0) {
      uVar6 = *(ushort *)(param_1 + 0x16);
    }
    else {
      uVar6 = *(ushort *)(param_1 + 0x16);
    }
    fStack_2f8 = fVar15;
    if (fVar7 == DAT_006cc7a4) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_00674898();
    }
    FUN_00441d80(8);
    uVar17 = (uint)uVar6 + iVar16 & 0xffff;
    FUN_00674898();
    FUN_0040ba40(&uStack_260,&uStack_260);
    if (cVar23 == '\0') {
      FUN_0040b930();
      FUN_005ac68f(&uStack_260,&uStack_260,auStack_1b0);
      fVar15 = fStack_2f8;
    }
    param_1[0x15] = (int)fVar15;
  }
  else {
    uVar17 = 0;
    param_1[0x12] = (uint)(ushort)psStack_300[0x1da];
    param_1[0x13] = 0;
    uVar9 = FUN_00564cd0(*(undefined4 *)(psStack_300 + 0x4c));
    param_1[0x15] = uVar9 & 0xffff;
  }
  param_1[0x16] = uVar17;
  if ((cVar23 != '\0') && (DAT_006cc7a4 < (float)param_1[0xe])) {
    fVar15 = _DAT_006b6c60;
    if (DAT_007364a0 == 3) {
      fVar15 = _DAT_006b6c68;
    }
    puVar21 = (undefined1 *)(unsigned int)(((((int)_DAT_006cc7bc) - (float)param_1[0xe]) * (float)(unsigned int)puVar21 + fVar15 * (float)param_1[0xe]));
    fVar15 = _DAT_006b6c5c;
    if (DAT_007364a0 == 3) {
      fVar15 = _DAT_006b6c64;
    }
    fStack_2f8 = (float)((uint)uStack_2f4 & 0xffff);
    psVar22 = (short *)(unsigned int)((((int)_DAT_006cc7bc) - (float)param_1[0xe]) * (float)(unsigned int)psVar22 +
                       fVar15 * (float)param_1[0xe]);
    FUN_00674898();
    FUN_0040ba40(&uStack_260,&uStack_260);
  }
  fStack_2e8 = 0.0;
  fStack_2e4 = 0.0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  fVar15 = fStack_2f0;
  if (cVar3 != '\0') {
    fStack_2d8 = -(float)(unsigned int)puVar21;
    fStack_2dc = fStack_2f0;
    psStack_2e0 = psVar22;
    FUN_0040bb20(auStack_1b0,&uStack_260);
    FUN_005ac68f(auStack_1b0,auStack_b0,auStack_1b0);
    FUN_0040bc10();
    pfVar12 = (float *)(unsigned int)(psVar22 + 0x30);
    local_2ec = (short *)(unsigned int)((fStack_28c + *(float *)(unsigned int)(psVar22 + 0x30)) * ((int)_DAT_006cc7dc));
    fStack_2e8 = (*(float *)(unsigned int)(psVar22 + 0x32) + fStack_288) * ((int)_DAT_006cc7dc);
    fStack_2e4 = (*(float *)(unsigned int)(psVar22 + 0x34) + fStack_284) * ((int)_DAT_006cc7dc);
    psVar14 = psVar22;
    FUN_004407b0(&local_2ec,
                 SQRT((*pfVar12 - fStack_28c) * (*pfVar12 - fStack_28c) +
                      (*(float *)(unsigned int)(psVar22 + 0x32) - fStack_288) *
                      (*(float *)(unsigned int)(psVar22 + 0x32) - fStack_288) +
                      (*(float *)(unsigned int)(psVar22 + 0x34) - fStack_284) *
                      (*(float *)(unsigned int)(psVar22 + 0x34) - fStack_284)) * ((int)(_DAT_006cc7dc)) + _DAT_006cc7bc,
                 psVar22 + 0x38);
    FUN_005abda2(&uStack_1cc,pfVar12,afStack_1bc);
    fStack_2f8 = 0.0;
    uStack_2f4 = 0.0;
    fStack_2f0 = 0.0;
    local_2ec = (short *)0x0;
    FUN_004838e0(param_1,param_1 + 0x1b,pfVar12,&fStack_298,&fStack_2f8);
    fStack_2d8 = fStack_298 + fStack_2f8;
    fStack_2d4 = fStack_294 + uStack_2f4;
    fStack_2d0 = fStack_290 + fStack_2f0;
    fStack_220 = *(float *)(unsigned int)(psVar22 + 0x34) - fStack_2d0;
    fVar7 = (*(float *)(unsigned int)(psVar22 + 0x32) - fStack_2d4) * (*(float *)(unsigned int)(psVar22 + 0x32) - fStack_2d4);
    fVar15 = (*pfVar12 - fStack_2d8) * (*pfVar12 - fStack_2d8);
    fStack_228 = *(float *)(unsigned int)(*(int *)(puVar20 + 0x3c) + 0x100);
    fVar2 = ABS(*(float *)(unsigned int)(*(int *)(puVar20 + 0x3c) + 0xf0));
    if (fVar2 < fStack_228) {
      fVar2 = fStack_228;
    }
    fVar2 = fVar2 + *(float *)(unsigned int)0x006b6c84;
    if (SQRT(fStack_220 * fStack_220 + fVar15 + fVar7) < fVar2) {
      fVar15 = SQRT(fVar2 * fVar2 - (fVar15 + fVar7)) - (fStack_2d0 - *(float *)(unsigned int)(puVar20 + 0x68));
      fStack_2f0 = fStack_2f0 + fVar15;
      fStack_2d0 = fStack_2d0 + fVar15;
    }
    FUN_005ac436(&fStack_288,&fStack_2f8,&uStack_1c8);
    puVar21 = (undefined1 *)(unsigned int)(fStack_268 + fVar7);
    psVar22 = (short *)(unsigned int)((float)(unsigned int)psVar14 - (float)(unsigned int)psStack_270);
    fVar15 = fStack_2f0 - fStack_26c;
  }
  fStack_268 = -(float)(unsigned int)puVar21;
  psStack_270 = psVar22;
  fStack_26c = fVar15;
  FUN_0040bb20(&uStack_260,&uStack_260);
  uStack_2c4 = (uStack_2c4 & 0xffff) - ((uint)uStack_2f4 & 0xffff);
  FUN_00674898();
  FUN_0040ba40(&uStack_260,&uStack_260);
  if (cVar3 == '\0') {
    FUN_005ac68f(auStack_f0,auStack_b0,&uStack_260);
    FUN_0040bc10();
    fVar18 = (float10)FUN_00440a40(param_1 + 0x1b,auStack_c0,0,0,0);
    if (fVar18 + (float10)((int)_DAT_006b6c98) <= (float10)fStack_b8) {
      FUN_005ac68f(auStack_170,auStack_b0,&uStack_260);
    }
    else {
      fStack_b8 = (float)(fVar18 + (float10)((int)_DAT_006b6c98));
      FUN_0040bc10();
    }
    FUN_0040b990(auStack_170,auStack_170);
    FUN_0040ba40(auStack_170,auStack_170);
  }
  else {
    FUN_00483ad0(param_1,auStack_170,(int)fVar24 + 0x60,&fStack_2e8);
  }
  iVar16 = DAT_00735f5c;
  if (DAT_00735f5c == 0) {
    *(undefined4 *)(param_1[7] + 0x284) = 0;
  }
  if (cVar3 == '\0') {
    if (iVar16 == 0) {
      *(float *)(unsigned int)(param_1[7] + 0x280) = fVar24;
    }
    if ((*local_2ec == 3) && (param_1[0xd] != 0x3f800000)) {
      if (iVar16 != 0) goto LAB_0048acb3;
      *(undefined4 *)(param_1[7] + 0x284) = 1;
    }
    else if (iVar16 != 0) goto LAB_0048acb3;
  }
  else {
    if (iVar16 != 0) goto LAB_0048acb3;
    *(undefined4 *)(param_1[7] + 0x280) = 0;
  }
  *(undefined2 *)(param_1[7] + 0xc4) = *(undefined2 *)(&((int)(DAT_006fbdf4)) + *local_2ec * 2);
LAB_0048acb3:
  if (*local_2ec == 3) {
    *(undefined4 *)(param_1[7] + 0xbc) = DAT_006fbf1c;
  }
  else {
    *(undefined4 *)(param_1[7] + 0xbc) = 0x3f000000;
  }
  FUN_00575040(param_1[4]);
  iVar11 = DAT_00735f5c;
  iVar16 = param_1[7];
  fVar15 = *(float *)(unsigned int)(iVar16 + 0x40) - *(float *)(unsigned int)((int)fVar24 + 0x60);
  fVar7 = *(float *)(unsigned int)(iVar16 + 0x44) - *(float *)(unsigned int)((int)fVar24 + 100);
  fVar24 = *(float *)(unsigned int)(iVar16 + 0x48) - *(float *)(unsigned int)((int)fVar24 + 0x68);
  if (DAT_00735f5c == 0) {
    *(float *)(unsigned int)(iVar16 + 0xb0) = SQRT(fVar15 * fVar15 + fVar7 * fVar7 + fVar24 * fVar24);
  }
  if ((param_1[0xe6] == 0) && (iVar11 == 0)) {
    *(undefined4 *)(param_1[7] + 0xb4) = DAT_006b6e08;
    *(undefined4 *)(param_1[7] + 0xb8) = DAT_006b6e04;
  }
  FUN_0047d070(param_1[7],auStack_170,DAT_0073ad38);
  if (cVar23 != '\0') {
    *(undefined2 *)(param_1 + 0x11) = 0;
  }
  return;
}
