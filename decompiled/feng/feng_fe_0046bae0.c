/* spd-match: far pct=5.67 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_09/attempt4_combined */
#include "ghidra_compat.h"

void FUN_005abda2(float *dst, float *src, void *mtx);

int __cdecl FUN_00465830();
int __cdecl FUN_00466500();
int __cdecl FUN_00467220();
int __cdecl FUN_0046b8c0();
int __cdecl FUN_0046ba50();
int __cdecl FUN_0046c620();
extern int DAT_006cc7a4;
extern int _DAT_006b7254;
extern int _DAT_006b7258;
extern int _DAT_006b725c;
extern int _DAT_006b7260;
extern int _DAT_006b7264;
extern int _DAT_006b7268;
extern int _DAT_006cc7b4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8a8;
extern int _DAT_006cca04;
extern int _DAT_006ccac0;
extern int _DAT_006ccb7c;
extern int _DAT_006ccdfc;
extern int _DAT_0070009c;
extern int _DAT_007000a8;
extern void LAB_0046c09b(void);
extern char stack0xfffffe08;
int unaff_EBX;

void FUN_0046bae0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float unaff_EBX;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float *pfStack_210;
  undefined4 uStack_208;
  float *pfStack_204;
  float fVar15;
  float fVar16;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  undefined1 auStack_1b8 [4];
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float *pfStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined1 auStack_150 [28];
  int iStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 local_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c0 [2];
  float fStack_b8;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_50;
  float fStack_38;
  float fStack_30;
  
  pfStack_204 = (float *)(unsigned int)0x46bb07;
  FUN_0046b8c0();
  iVar7 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar7 + 0x264) == 0) {
    pfStack_204 = &local_130;
    uStack_208 = (float *)(unsigned int)0x46bb21;
    FUN_00467220();
  }
  local_114 = *(undefined4 *)(iVar7 + 0x264);
  pfStack_204 = (float *)(unsigned int)0x46bb36;
  pfVar6 = (float *)(unsigned int)((**(code **)(**(int **)(param_1 + 0xc) + 8)))();
  fStack_1dc = fStack_12c - pfVar6[1];
  fStack_1d8 = fStack_128 - pfVar6[2];
  fStack_1e0 = local_130 - *pfVar6;
  pfStack_204 = (float *)(unsigned int)0x46bb69;
  pfVar6 = (float *)(unsigned int)((**(code **)(**(int **)(param_1 + 0x10) + 8)))();
  fStack_1cc = fStack_12c - pfVar6[1];
  fStack_1c8 = fStack_128 - pfVar6[2];
  fStack_1d0 = local_130 - *pfVar6;
  do {
    pfStack_204 = &fStack_110;
    uStack_208 = afStack_c0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x38))();
    pfStack_210 = afStack_68;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x38))();
    fStack_9c = fStack_118 * fStack_1f0 - fStack_1e8 * fStack_120;
    fStack_98 = fStack_1ec * fStack_120 - fStack_11c * fStack_1f0;
    fStack_50 = (fStack_11c * fStack_1e8 - fStack_118 * fStack_1ec) + fStack_d0;
    fStack_58 = fStack_c8 + fStack_98;
    fStack_7c = afStack_108[0] * fStack_1e0 - fStack_1d8 * fStack_110;
    fStack_78 = fStack_1dc * fStack_110 - fStack_10c * fStack_1e0;
    afStack_c0[0] = (fStack_10c * fStack_1d8 - afStack_108[0] * fStack_1dc) + fStack_70;
    fStack_b8 = afStack_68[0] + fStack_78;
    fStack_e0 = afStack_c0[0] - fStack_50;
    fStack_dc = (fStack_6c + fStack_7c) - (fStack_cc + fStack_9c);
    fVar16 = fStack_e0 * fStack_170 + fStack_16c * fStack_dc + fStack_168 * (fStack_b8 - fStack_58);
    fVar15 = -fVar16;
    local_160 = fStack_170 * fVar15 + fStack_e0;
    fStack_15c = fStack_16c * fVar15 + fStack_dc;
    fStack_158 = fStack_168 * fVar15 + (fStack_b8 - fStack_58);
    if (DAT_006cc7a4 <= fVar16) {
      return;
    }
    fStack_38 = fStack_b8;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0xc) + 0x6c))();
    fVar13 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x6c))();
    fStack_1a8 = (float)fVar12;
    if ((float10)(float)fVar12 <= fVar13) {
      fStack_1a8 = (float)fVar13;
    }
    cVar5 = FUN_0046c620(param_1,&fStack_1f0,&fStack_1e0);
    if (cVar5 != '\0') {
      fStack_1a8 = ((int)_DAT_006b7254) * fStack_1a8;
    }
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0xc) + 0x58))();
    fStack_1c4 = (float)fVar12;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x58))();
    fVar1 = (float)fVar12;
    fStack_1a4 = -((fStack_1a8 + _DAT_006cc7bc) * fVar16);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))();
    fVar13 = (float10)FUN_0046ba50();
    fVar12 = (float10)fStack_1c4;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x5c))();
    fVar14 = (float10)FUN_0046ba50();
    fVar15 = (float)(fVar14 + (float10)(float)((float10)fVar1 + fVar12 + fVar13));
    if (fVar1 < fStack_1c4) {
      fVar1 = fStack_1c4;
    }
    fVar16 = fStack_1a4 / fVar15;
    if (fVar16 < ((int)_DAT_0070009c) / fVar1) {
      fVar16 = ((int)_DAT_0070009c) / fVar1;
    }
    fStack_190 = fStack_170 * fVar16;
    fStack_18c = fStack_16c * fVar16;
    fStack_188 = fStack_168 * fVar16;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x48))(&fStack_190,&fStack_1e0);
    uStack_208 = (float *)(unsigned int)((float)fVar12);
    fStack_198 = -fStack_198;
    fStack_194 = -fStack_194;
    fStack_190 = -fStack_190;
    fStack_30 = fStack_190;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0xc) + 0x48))(&fStack_198,&stack0xfffffe08);
    if (fVar12 == (float10)(unsigned int)(_DAT_006ccdfc)) {
      return;
    }
    if ((float)(unsigned int)(pfStack_210) == _DAT_006ccdfc) {
      return;
    }
    uStack_1b4 = 1;
    if ((float10)(unsigned int)(DAT_006cc7a4) <= fVar12) {
      if (DAT_006cc7a4 <= (float)(unsigned int)(pfStack_210)) {
        uStack_1b4 = 0;
      }
      else {
        pfStack_210 = (float *)(unsigned int)(-(float)(unsigned int)(pfStack_210));
      }
    }
    else {
      fVar12 = -fVar12;
    }
    if ((float10)(float)(unsigned int)(pfStack_210) <= fVar12) {
      pfStack_184 = pfStack_210;
    }
    else {
      pfStack_184 = (float *)(unsigned int)((float)fVar12);
    }
    fVar2 = (float)(unsigned int)(pfStack_184) * (float)afStack_108[0];
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0xc) + 0x70))();
    fVar1 = (float)fVar12;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x70))();
    fStack_1bc = fVar1;
    if ((float10)fVar1 <= fVar12) {
      fStack_1bc = (float)fVar12;
    }
    piVar11 = (int *)0x0;
    uStack_208 = (float *)(unsigned int)(((uint)uStack_208 & 0xffffff));
    if ((((fStack_1d4 != DAT_006cc7a4) || (fVar12 != (float10)(unsigned int)(_DAT_006cc7b4))) ||
        (*(char *)((int)*(int **)(param_1 + 0x10) + 0x15) != '\0')) ||
       (iVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(),
       *(float *)(unsigned int)((iVar7 + 0x28)) <= _DAT_006cca04)) {
      if ((((float)(unsigned int)(pfStack_204) == DAT_006cc7a4) && (fVar1 == _DAT_006cc7b4)) &&
         ((*(char *)((int)*(int **)(param_1 + 0xc) + 0x15) == '\0' &&
          (iVar7 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(),
          _DAT_006cca04 < *(float *)(unsigned int)((iVar7 + 0x28)))))) {
        piVar11 = *(int **)(param_1 + 0xc);
        goto LAB_0046c09b;
      }
    }
    else {
      piVar11 = *(int **)(param_1 + 0x10);
LAB_0046c09b:
      fStack_1bc = 0.1;
      uStack_208 = (float *)(unsigned int)(CONCAT13(1,(undefined3)uStack_208));
    }
    iVar7 = iStack_134;
    pfStack_204 = (float *)(unsigned int)(SQRT(fStack_170 * fStack_170 +
                                fStack_16c * fStack_16c + fStack_168 * fStack_168));
    fStack_158 = fStack_1bc * fVar2;
    if ((float)(unsigned int)(pfStack_204) < _DAT_007000a8) {
      fStack_158 = (fStack_158 / ((int)_DAT_007000a8)) * (float)(unsigned int)(pfStack_204);
    }
    if ((float)(unsigned int)(pfStack_204) <= _DAT_006ccb7c) {
      local_160 = 0.0;
      fStack_15c = 0.0;
      fStack_158 = 0.0;
    }
    else {
      fStack_158 = (((int)_DAT_006cc8a8) / (float)(unsigned int)(pfStack_204)) * fStack_158;
      local_160 = fStack_170 * fStack_158;
      fStack_15c = fStack_16c * fStack_158;
      fStack_158 = fStack_168 * fStack_158;
    }
    fStack_1a0 = fStack_180 * fVar2;
    fStack_19c = fStack_17c * fVar2;
    fStack_198 = fStack_178 * fVar2;
    cVar5 = FUN_00466500();
    fStack_1c8 = fStack_158;
    if (cVar5 != '\0') {
      fStack_1c8 = fStack_158 * ((int)_DAT_006b7264);
    }
    fStack_1d0 = local_160 + fStack_1a0;
    fStack_1cc = fStack_15c + fStack_19c;
    fStack_1c8 = fStack_198 + fStack_1c8;
    fStack_1b0 = -fStack_1d0;
    fStack_1ac = -fStack_1cc;
    fStack_1a8 = -fStack_1c8;
    if ((*((unsigned char *)&(uStack_208) + 3)) != '\0') {
      pfVar6 = (float *)(unsigned int)((**(code **)(*piVar11 + 0xc)))();
      fVar1 = pfVar6[1];
      fStack_110 = *pfVar6;
      fVar2 = SQRT(fStack_110 * fStack_110 + pfVar6[2] * pfVar6[2] + fVar1 * fVar1);
      if (_DAT_006ccac0 < fVar2) {
        fVar4 = -_DAT_006b725c;
        if (fVar2 * fVar4 < -_DAT_006b7258) {
          fVar4 = (((int)_DAT_006cc8a8) / fVar2) * ((int)_DAT_006b7258);
        }
        fStack_110 = fStack_110 * fVar4;
        if (fStack_1d4 == DAT_006cc7a4) {
          fVar3 = SQRT(fStack_1d0 * fStack_1d0 + fStack_1c8 * fStack_1c8 + fStack_1cc * fStack_1cc);
          fStack_1d0 = fStack_110 + fStack_1d0;
          fStack_1cc = fVar4 * fVar1 + fStack_1cc;
          if (_DAT_006cc7bc < fVar3 + fVar2) {
            fVar3 = fVar3 / (fVar2 / ((int)_DAT_006b7260) + fVar3);
            fStack_1f0 = fStack_1f0 * fVar3;
            fStack_1ec = fStack_1ec * fVar3;
            fStack_1e8 = fStack_1e8 * fVar3;
          }
        }
        else {
          fVar3 = SQRT(fStack_1b0 * fStack_1b0 + fStack_1a8 * fStack_1a8 + fStack_1ac * fStack_1ac);
          fStack_1b0 = fStack_110 + fStack_1b0;
          fStack_1ac = fVar4 * fVar1 + fStack_1ac;
          if (_DAT_006cc7bc < fVar3 + fVar2) {
            fVar3 = fVar3 / (fVar2 / ((int)_DAT_006b7260) + fVar3);
            fVar15 = fVar15 * fVar3;
            fVar16 = fVar16 * fVar3;
            unaff_EBX = unaff_EBX * fVar3;
          }
        }
      }
    }
    FUN_00465830(iVar7,auStack_150,&fStack_1b0,pfStack_204);
    if (*(int *)(iVar7 + 0x10) != 0) {
      iStack_94 = *(int *)(param_1 + 0x10);
      if ((*(char *)(*(int *)(param_1 + 0xc) + 0x15) == '\0') &&
         (iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x140), *(int *)(iVar7 + 0x3cc) == 4)) {
        fStack_f8 = *(float *)(unsigned int)((iVar7 + 0xb8));
        fVar15 = *(float *)(unsigned int)((iVar7 + 0xb0)) * fVar15 +
                 *(float *)(unsigned int)((iVar7 + 0xb4)) * fVar16 + fStack_f8 * unaff_EBX;
        afStack_c0[0] = *(float *)(unsigned int)((iVar7 + 0xb0)) * fVar15;
        unaff_EBX = unaff_EBX - fStack_f8 * fVar15;
      }
      if ((*(char *)(iStack_94 + 0x15) == '\0') &&
         (iVar7 = *(int *)(iStack_94 + 0x140), *(int *)(iVar7 + 0x3cc) == 4)) {
        fStack_f8 = *(float *)(unsigned int)((iVar7 + 0xb8));
        fVar15 = *(float *)(unsigned int)((iVar7 + 0xb0)) * fStack_1f0 +
                 *(float *)(unsigned int)((iVar7 + 0xb4)) * fStack_1ec + fStack_f8 * fStack_1e8;
        afStack_c0[0] = *(float *)(unsigned int)((iVar7 + 0xb0)) * fVar15;
        fStack_1f0 = fStack_1f0 - afStack_c0[0];
        fStack_1ec = fStack_1ec - *(float *)(unsigned int)((iVar7 + 0xb4)) * fVar15;
        fStack_1e8 = fStack_1e8 - fStack_f8 * fVar15;
      }
    }
    piVar11 = *(int **)(param_1 + 0xc);
    piVar9 = (int *)0x0;
    if ((((*(char *)((int)piVar11 + 0x15) != '\0') ||
         (piVar8 = *(int **)(param_1 + 0x10), *(char *)((int)piVar8 + 0x15) != '\x01')) ||
        (piVar10 = piVar11, piVar8[0x4c] < 1)) &&
       (((piVar8 = *(int **)(param_1 + 0x10), piVar10 = piVar9,
         *(char *)((int)piVar8 + 0x15) == '\0' && (*(char *)((int)piVar11 + 0x15) == '\x01')) &&
        (0 < piVar11[0x4c])))) {
      piVar10 = piVar8;
    }
    if (piVar11 == piVar10) {
      fStack_1a8 = fStack_1a8 * ((int)_DAT_006b7268);
      if (fStack_1a8 < DAT_006cc7a4) {
        fStack_1a8 = 0.0;
      }
    }
    else if ((piVar8 == piVar10) &&
            (fStack_1c8 = fStack_1c8 * ((int)_DAT_006b7268), fStack_1c8 < DAT_006cc7a4)) {
      fStack_1c8 = 0.0;
    }
    (**(code **)(*piVar8 + 0x4c))(&fStack_1d0,&fStack_1f0);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))(auStack_1b8,&uStack_208);
    if (fStack_164 == _DAT_006cc7bc) {
      return;
    }
    if (fStack_194 != 0.0) {
      return;
    }
  } while( true );
}
