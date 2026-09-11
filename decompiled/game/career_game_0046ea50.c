/* spd-match: far pct=4.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142711Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00567370();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006ccb7c;
extern void LAB_0046f871(void);
extern void LAB_004708d0(void);
extern void LAB_00470a76(void);
extern void LAB_0047135f(void);
int unaff_ESI;

float * __fastcall FUN_0046ea50(undefined4 param_1,float *param_2)

{
  int iVar1;
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
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float fVar31;
  float *pfVar32;
  float *extraout_EDX;
  int iVar33;
  int iVar34;
  int iVar35;
  float *unaff_ESI;
  int iVar36;
  float *pfVar37;
  int iVar38;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  int local_254;
  int local_250;
  float *local_24c;
  int local_248;
  float *local_244;
  int local_22c;
  int local_228;
  int local_224;
  float *local_218;
  int local_214;
  int local_1fc;
  int local_1f8;
  float local_1f4;
  float *local_1f0;
  float local_1e8;
  int local_19c [4];
  float *local_18c;
  int local_188 [4];
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_124;
  float local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_e8;
  float local_d8;
  float local_d0;
  float local_c8;
  float local_b8;
  float local_b0;
  float local_a8;
  float local_98;
  float local_88;
  float local_78;
  float local_68;
  float local_58;
  float local_48;
  float local_38;
  float local_28;
  float local_18;
  
  fVar31 = unaff_ESI[0x30];
  fVar11 = unaff_ESI[0x35];
  bVar12 = false;
  local_1f4 = 3.4028235e+38;
  if (fVar31 == 1.4013e-45) {
    if (fVar11 == 1.4013e-45) {
      pfVar28 = (float *)(unsigned int)*unaff_ESI;
      unaff_ESI[0x20] = (float)(unsigned int)pfVar28;
      unaff_ESI[0x21] = unaff_ESI[1];
      unaff_ESI[0x22] = unaff_ESI[2];
      unaff_ESI[0x24] = unaff_ESI[0x10];
      unaff_ESI[0x25] = unaff_ESI[0x11];
      unaff_ESI[0x26] = unaff_ESI[0x12];
      fVar31 = unaff_ESI[0x25];
      fVar11 = unaff_ESI[0x21];
      fVar27 = unaff_ESI[0x26];
      fVar2 = unaff_ESI[0x22];
      *param_2 = unaff_ESI[0x24] - unaff_ESI[0x20];
      param_2[1] = fVar31 - fVar11;
      param_2[2] = fVar27 - fVar2;
      return pfVar28;
    }
    iVar25 = (unsigned int)(float)fVar11+ -1;
    local_22c = 0;
    if (0 < iVar25) {
      local_218 = unaff_ESI + 0x12;
      do {
        fVar27 = local_218[-2] - *unaff_ESI;
        fVar2 = local_218[-1] - unaff_ESI[1];
        local_118 = *local_218 - unaff_ESI[2];
        iVar26 = local_22c + 1;
        pfVar28 = local_218;
        for (local_19c[1] = iVar26; local_19c[1] < (unsigned int)(float)fVar11; local_19c[1] = local_19c[1] + 1) {
          local_24c = pfVar28 + 4;
          fVar15 = pfVar28[2] - local_218[-2];
          fVar16 = pfVar28[3] - local_218[-1];
          local_f8 = *local_24c - *local_218;
          local_274 = -(fVar16 * fVar2 + local_f8 * local_118 + fVar15 * fVar27) /
                      (fVar16 * fVar16 + local_f8 * local_f8 + fVar15 * fVar15);
          if (DAT_006cc7a4 <= local_274) {
            if (local_274 <= _DAT_006cc7bc) {
              fVar5 = fVar2 * local_f8 - fVar16 * local_118;
              fVar4 = fVar15 * local_118 - fVar27 * local_f8;
              fVar3 = fVar27 * fVar16 - fVar15 * fVar2;
              *param_2 = fVar3 * fVar16 - fVar4 * local_f8;
              param_2[1] = fVar5 * local_f8 - fVar15 * fVar3;
              param_2[2] = fVar15 * fVar4 - fVar5 * fVar16;
            }
            else {
              local_274 = 1.0;
              fVar3 = pfVar28[3];
              fVar4 = unaff_ESI[1];
              fVar5 = *local_24c;
              fVar6 = unaff_ESI[2];
              *param_2 = pfVar28[2] - *unaff_ESI;
              param_2[2] = fVar5 - fVar6;
              param_2[1] = fVar3 - fVar4;
            }
          }
          else {
            local_274 = 0.0;
            fVar3 = local_218[-1];
            fVar4 = unaff_ESI[1];
            fVar5 = *local_218;
            fVar6 = unaff_ESI[2];
            local_108 = fVar5 - fVar6;
            *param_2 = local_218[-2] - *unaff_ESI;
            param_2[2] = fVar5 - fVar6;
            param_2[1] = fVar3 - fVar4;
          }
          local_248 = 0;
          iVar36 = 1;
          fVar3 = unaff_ESI[0x12] * param_2[2] +
                  *param_2 * unaff_ESI[0x10] + unaff_ESI[0x11] * param_2[1];
          if (3 < iVar25) {
            iVar33 = 4;
            pfVar28 = unaff_ESI + 0x15;
            do {
              fVar4 = param_2[1] * *pfVar28 + pfVar28[1] * param_2[2] + pfVar28[-1] * *param_2;
              if (fVar4 < fVar3) {
                fVar3 = fVar4;
                local_248 = iVar36;
              }
              fVar4 = pfVar28[3] * *param_2 + pfVar28[5] * param_2[2] + pfVar28[4] * param_2[1];
              if (fVar4 < fVar3) {
                local_248 = iVar33 + -2;
                fVar3 = fVar4;
              }
              fVar4 = pfVar28[7] * *param_2 + pfVar28[9] * param_2[2] + pfVar28[8] * param_2[1];
              if (fVar4 < fVar3) {
                local_248 = iVar33 + -1;
                fVar3 = fVar4;
              }
              fVar4 = pfVar28[0xb] * *param_2 +
                      pfVar28[0xd] * param_2[2] + pfVar28[0xc] * param_2[1];
              if (fVar4 < fVar3) {
                fVar3 = fVar4;
                local_248 = iVar33;
              }
              iVar33 = iVar33 + 4;
              iVar36 = iVar36 + 4;
              pfVar28 = pfVar28 + 0x10;
            } while (iVar33 < (unsigned int)(float)fVar11);
          }
          if (iVar36 < (unsigned int)(float)fVar11) {
            pfVar28 = unaff_ESI + iVar36 * 4 + 0x11;
            do {
              fVar4 = param_2[1] * *pfVar28 + pfVar28[1] * param_2[2] + pfVar28[-1] * *param_2;
              if (fVar4 < fVar3) {
                fVar3 = fVar4;
                local_248 = iVar36;
              }
              iVar36 = iVar36 + 1;
              pfVar28 = pfVar28 + 4;
            } while (iVar36 < (unsigned int)(float)fVar11);
          }
          if (param_2[1] * unaff_ESI[1] + param_2[2] * unaff_ESI[2] + *param_2 * *unaff_ESI < fVar3)
          {
            unaff_ESI[0x20] = *unaff_ESI;
            unaff_ESI[0x21] = unaff_ESI[1];
            unaff_ESI[0x22] = unaff_ESI[2];
            local_140 = fVar15 * local_274;
            local_13c = fVar16 * local_274;
            fVar3 = local_218[-1];
            fVar4 = *local_218;
            unaff_ESI[0x24] = fVar15 * local_274 + local_218[-2];
            unaff_ESI[0x26] = fVar4 + local_f8 * local_274;
            unaff_ESI[0x25] = fVar3 + fVar16 * local_274;
            fVar15 = (unaff_ESI[0x24] - unaff_ESI[0x20]) * (unaff_ESI[0x24] - unaff_ESI[0x20]) +
                     (unaff_ESI[0x25] - unaff_ESI[0x21]) * (unaff_ESI[0x25] - unaff_ESI[0x21]) +
                     (unaff_ESI[0x26] - unaff_ESI[0x22]) * (unaff_ESI[0x26] - unaff_ESI[0x22]);
            if ((local_248 == local_22c) || (local_248 == local_19c[1])) {
              if (local_274 != DAT_006cc7a4) {
                if (local_274 != _DAT_006cc7bc) {
                  unaff_ESI[0x35] = 2.8026e-45;
                  unaff_ESI[0x31] = unaff_ESI[local_22c + 0x31];
                  unaff_ESI[0x32] = unaff_ESI[local_19c[1] + 0x31];
                  local_22c = local_22c + 4;
                  fVar31 = unaff_ESI[local_22c * 4 + 1];
                  fVar11 = unaff_ESI[local_22c * 4 + 2];
                  unaff_ESI[0x10] = unaff_ESI[local_22c * 4];
                  unaff_ESI[0x11] = fVar31;
                  unaff_ESI[0x12] = fVar11;
                  pfVar28 = unaff_ESI + (local_19c[1] + 4) * 4;
                  fVar31 = pfVar28[1];
                  fVar11 = pfVar28[2];
                  pfVar28 = (float *)(unsigned int)*pfVar28;
                  unaff_ESI[0x14] = (float)(unsigned int)pfVar28;
                  unaff_ESI[0x15] = fVar31;
                  unaff_ESI[0x16] = fVar11;
                  return pfVar28;
                }
                unaff_ESI[0x35] = 1.4013e-45;
                unaff_ESI[0x31] = unaff_ESI[local_19c[1] + 0x31];
                local_22c = local_19c[1];
LAB_00470a76:
                local_22c = local_22c + 4;
                fVar31 = unaff_ESI[local_22c * 4 + 1];
                fVar11 = unaff_ESI[local_22c * 4 + 2];
                unaff_ESI[0x10] = unaff_ESI[local_22c * 4];
                unaff_ESI[0x11] = fVar31;
                unaff_ESI[0x12] = fVar11;
                return unaff_ESI + local_22c * 4;
              }
              unaff_ESI[0x35] = 1.4013e-45;
              fVar31 = unaff_ESI[local_22c + 0x31];
              local_248 = local_22c;
LAB_0047135f:
              local_248 = local_248 + 4;
              unaff_ESI[0x31] = fVar31;
              fVar31 = unaff_ESI[local_248 * 4 + 1];
              fVar11 = unaff_ESI[local_248 * 4 + 2];
              unaff_ESI[0x10] = unaff_ESI[local_248 * 4];
              unaff_ESI[0x11] = fVar31;
              unaff_ESI[0x12] = fVar11;
              return unaff_ESI + local_248 * 4;
            }
            if (fVar15 < local_1f4) {
              local_16c = unaff_ESI[0x21];
              local_160 = *param_2;
              local_168 = unaff_ESI[0x22];
              local_15c = param_2[1];
              local_14c = unaff_ESI[0x25];
              local_158 = param_2[2];
              local_148 = unaff_ESI[0x26];
              local_170 = unaff_ESI[0x20];
              local_150 = unaff_ESI[0x24];
              bVar12 = true;
              local_178 = 1.4013e-45;
              local_188[0] = 0;
              local_1f4 = fVar15;
              if (local_274 == DAT_006cc7a4) {
                local_18c = (float *)(unsigned int)0x1;
                local_19c[0] = local_22c;
              }
              else if (local_274 == _DAT_006cc7bc) {
                local_18c = (float *)(unsigned int)0x1;
                local_19c[0] = local_19c[1];
              }
              else {
                local_18c = (float *)(unsigned int)0x2;
                local_19c[0] = local_22c;
              }
            }
          }
          pfVar28 = local_24c;
        }
        local_218 = local_218 + 4;
        local_22c = iVar26;
      } while (iVar26 < iVar25);
    }
  }
  else if (fVar11 == 1.4013e-45) {
    iVar25 = (unsigned int)(float)fVar31+ -1;
    local_214 = 0;
    if (0 < iVar25) {
      pfVar28 = unaff_ESI + 1;
      do {
        iVar26 = local_214 + 1;
        fVar27 = unaff_ESI[0x10] - pfVar28[-1];
        fVar2 = unaff_ESI[0x11] - *pfVar28;
        local_118 = unaff_ESI[0x12] - pfVar28[1];
        if (iVar26 < (unsigned int)(float)fVar31) {
          pfVar37 = pfVar28 + 5;
          local_228 = iVar26;
          do {
            fVar15 = pfVar37[-2] - pfVar28[-1];
            fVar16 = pfVar37[-1] - *pfVar28;
            local_f8 = *pfVar37 - pfVar28[1];
            local_278 = (fVar16 * fVar2 + local_f8 * local_118 + fVar27 * fVar15) /
                        (fVar15 * fVar15 + fVar16 * fVar16 + local_f8 * local_f8);
            if (DAT_006cc7a4 <= local_278) {
              if (local_278 <= _DAT_006cc7bc) {
                fVar5 = fVar2 * local_f8 - fVar16 * local_118;
                fVar4 = local_118 * fVar15 - fVar27 * local_f8;
                fVar3 = fVar27 * fVar16 - fVar2 * fVar15;
                *param_2 = fVar3 * fVar16 - fVar4 * local_f8;
                param_2[1] = fVar5 * local_f8 - fVar3 * fVar15;
                param_2[2] = fVar4 * fVar15 - fVar5 * fVar16;
              }
              else {
                local_278 = 1.0;
                fVar3 = unaff_ESI[0x11];
                fVar4 = pfVar37[-1];
                fVar5 = unaff_ESI[0x12];
                fVar6 = *pfVar37;
                *param_2 = unaff_ESI[0x10] - pfVar37[-2];
                param_2[2] = fVar5 - fVar6;
                param_2[1] = fVar3 - fVar4;
              }
            }
            else {
              local_278 = 0.0;
              fVar3 = unaff_ESI[0x11];
              fVar4 = *pfVar28;
              fVar5 = unaff_ESI[0x12];
              fVar6 = pfVar28[1];
              local_108 = fVar5 - fVar6;
              *param_2 = unaff_ESI[0x10] - pfVar28[-1];
              param_2[2] = fVar5 - fVar6;
              param_2[1] = fVar3 - fVar4;
            }
            local_250 = 0;
            iVar36 = 1;
            fVar3 = param_2[1] * unaff_ESI[1] + param_2[2] * unaff_ESI[2] + *param_2 * *unaff_ESI;
            if (3 < iVar25) {
              iVar33 = 4;
              pfVar30 = unaff_ESI + 9;
              do {
                fVar4 = pfVar30[-4] * param_2[1] + pfVar30[-3] * param_2[2] + pfVar30[-5] * *param_2
                ;
                if (fVar3 < fVar4) {
                  fVar3 = fVar4;
                  local_250 = iVar36;
                }
                fVar4 = *pfVar30 * param_2[1] + pfVar30[1] * param_2[2] + pfVar30[-1] * *param_2;
                if (fVar3 < fVar4) {
                  local_250 = iVar33 + -2;
                  fVar3 = fVar4;
                }
                fVar4 = pfVar30[4] * param_2[1] + pfVar30[3] * *param_2 + pfVar30[5] * param_2[2];
                if (fVar3 < fVar4) {
                  local_250 = iVar33 + -1;
                  fVar3 = fVar4;
                }
                fVar4 = pfVar30[8] * param_2[1] + pfVar30[7] * *param_2 + pfVar30[9] * param_2[2];
                if (fVar3 < fVar4) {
                  fVar3 = fVar4;
                  local_250 = iVar33;
                }
                iVar33 = iVar33 + 4;
                iVar36 = iVar36 + 4;
                pfVar30 = pfVar30 + 0x10;
              } while (iVar33 < (unsigned int)(float)fVar31);
            }
            if (iVar36 < (unsigned int)(float)fVar31) {
              pfVar30 = unaff_ESI + iVar36 * 4 + 1;
              do {
                fVar4 = param_2[1] * *pfVar30 + pfVar30[1] * param_2[2] + pfVar30[-1] * *param_2;
                if (fVar3 < fVar4) {
                  fVar3 = fVar4;
                  local_250 = iVar36;
                }
                iVar36 = iVar36 + 1;
                pfVar30 = pfVar30 + 4;
              } while (iVar36 < (unsigned int)(float)fVar31);
            }
            if (fVar3 < unaff_ESI[0x10] * *param_2 +
                        unaff_ESI[0x11] * param_2[1] + unaff_ESI[0x12] * param_2[2]) {
              local_140 = local_278 * fVar15;
              local_13c = local_278 * fVar16;
              fVar3 = *pfVar28;
              fVar4 = pfVar28[1];
              unaff_ESI[0x20] = local_278 * fVar15 + pfVar28[-1];
              unaff_ESI[0x22] = fVar4 + local_278 * local_f8;
              unaff_ESI[0x21] = fVar3 + local_278 * fVar16;
              unaff_ESI[0x24] = unaff_ESI[0x10];
              unaff_ESI[0x25] = unaff_ESI[0x11];
              unaff_ESI[0x26] = unaff_ESI[0x12];
              fVar15 = (unaff_ESI[0x24] - unaff_ESI[0x20]) * (unaff_ESI[0x24] - unaff_ESI[0x20]) +
                       (unaff_ESI[0x25] - unaff_ESI[0x21]) * (unaff_ESI[0x25] - unaff_ESI[0x21]) +
                       (unaff_ESI[0x26] - unaff_ESI[0x22]) * (unaff_ESI[0x26] - unaff_ESI[0x22]);
              if ((local_250 == local_214) || (local_250 == local_228)) {
                bVar12 = NAN(DAT_006cc7a4);
                bVar13 = local_278 < DAT_006cc7a4;
                bVar14 = local_278 == DAT_006cc7a4;
                if (bVar14) {
                  unaff_ESI[0x30] = 1.4013e-45;
                  pfVar28 = unaff_ESI + local_214 * 4;
                  unaff_ESI[0x2c] = unaff_ESI[local_214 + 0x2c];
                  fVar31 = pfVar28[1];
                  fVar11 = pfVar28[2];
                  *unaff_ESI = *pfVar28;
                  unaff_ESI[1] = fVar31;
                  unaff_ESI[2] = fVar11;
                  return (float *)(unsigned int)CONCAT22((short)((uint)local_250 >> 0x10),
                                           (ushort)bVar13 << 8 |
                                           (ushort)(NAN(local_278) || bVar12) << 10 |
                                           (ushort)bVar14 << 0xe);
                }
                if (local_278 != _DAT_006cc7bc) {
                  unaff_ESI[0x30] = 2.8026e-45;
                  unaff_ESI[0x2c] = unaff_ESI[local_214 + 0x2c];
                  fVar31 = unaff_ESI[local_214 * 4 + 1];
                  fVar11 = unaff_ESI[local_214 * 4 + 2];
                  *unaff_ESI = unaff_ESI[local_214 * 4];
                  unaff_ESI[1] = fVar31;
                  unaff_ESI[2] = fVar11;
                  unaff_ESI[0x2d] = unaff_ESI[local_228 + 0x2c];
                  fVar31 = unaff_ESI[local_228 * 4 + 1];
                  pfVar28 = (float *)(unsigned int)unaff_ESI[local_228 * 4];
                  fVar11 = unaff_ESI[local_228 * 4 + 2];
                  unaff_ESI[4] = (float)(unsigned int)pfVar28;
                  unaff_ESI[5] = fVar31;
                  unaff_ESI[6] = fVar11;
                  return pfVar28;
                }
                unaff_ESI[0x30] = 1.4013e-45;
                pfVar28 = (float *)(unsigned int)unaff_ESI[local_228 + 0x2c];
                pfVar37 = unaff_ESI + local_228 * 4;
                unaff_ESI[0x2c] = (float)(unsigned int)pfVar28;
                fVar31 = pfVar37[1];
                fVar11 = pfVar37[2];
                *unaff_ESI = *pfVar37;
                unaff_ESI[1] = fVar31;
                unaff_ESI[2] = fVar11;
                return pfVar28;
              }
              if (fVar15 < local_1f4) {
                local_16c = unaff_ESI[0x21];
                local_160 = *param_2;
                local_168 = unaff_ESI[0x22];
                local_15c = param_2[1];
                local_14c = unaff_ESI[0x25];
                local_158 = param_2[2];
                local_148 = unaff_ESI[0x26];
                local_170 = unaff_ESI[0x20];
                local_150 = unaff_ESI[0x24];
                bVar12 = true;
                if (local_278 == DAT_006cc7a4) {
                  local_178 = 1.4013e-45;
LAB_0046f871:
                  local_188[0] = local_214;
                }
                else {
                  if (local_278 != _DAT_006cc7bc) {
                    local_178 = 2.8026e-45;
                    local_188[1] = local_228;
                    goto LAB_0046f871;
                  }
                  local_178 = 1.4013e-45;
                  local_188[0] = local_228;
                }
                local_18c = (float *)(unsigned int)0x1;
                local_19c[0] = 0;
                local_1f4 = fVar15;
              }
            }
            local_228 = local_228 + 1;
            pfVar37 = pfVar37 + 4;
          } while (local_228 < (unsigned int)(float)fVar31);
        }
        pfVar28 = pfVar28 + 4;
        local_214 = iVar26;
      } while (iVar26 < iVar25);
    }
  }
  else {
    iVar25 = (unsigned int)(float)fVar31+ -1;
    local_214 = 0;
    if (0 < iVar25) {
      do {
        iVar26 = local_214 + 1;
        if (iVar26 < (unsigned int)(float)fVar31) {
          pfVar28 = unaff_ESI + local_214 * 4;
          iVar33 = (unsigned int)(float)fVar11+ -1;
          iVar36 = iVar26;
          do {
            pfVar37 = unaff_ESI + iVar36 * 4;
            fVar27 = unaff_ESI[iVar36 * 4] - *pfVar28;
            fVar2 = pfVar37[1] - pfVar28[1];
            fVar15 = pfVar37[2] - pfVar28[2];
            local_18 = fVar15;
            local_22c = 0;
            local_174 = fVar27 * fVar27 + fVar2 * fVar2 + fVar15 * fVar15;
            if (0 < iVar33) {
              do {
                pfVar30 = unaff_ESI + (local_22c + 4) * 4;
                fVar16 = unaff_ESI[(local_22c + 4) * 4] - *pfVar28;
                fVar3 = pfVar30[1] - pfVar28[1];
                fVar4 = pfVar30[2] - pfVar28[2];
                local_28 = fVar4;
                iVar1 = local_22c + 1;
                local_124 = fVar2 * fVar3 + fVar15 * fVar4 + fVar16 * fVar27;
                for (iVar35 = iVar1; iVar35 < (unsigned int)(float)fVar11; iVar35 = iVar35 + 1) {
                  pfVar29 = unaff_ESI + (iVar35 + 4) * 4;
                  fVar5 = unaff_ESI[(iVar35 + 4) * 4] - *pfVar30;
                  fVar6 = pfVar29[1] - pfVar30[1];
                  fVar17 = pfVar29[2] - pfVar30[2];
                  local_48 = fVar17;
                  fVar8 = fVar6 * fVar6 + fVar17 * fVar17 + fVar5 * fVar5;
                  fVar7 = fVar2 * fVar6 + fVar15 * fVar17 + fVar5 * fVar27;
                  fVar9 = fVar6 * fVar3 + fVar17 * fVar4 + fVar5 * fVar16;
                  local_278 = local_174 * fVar8 - fVar7 * fVar7;
                  if (ABS(local_278) <= _DAT_006ccb7c) {
                    local_278 = 0.0;
                  }
                  else {
                    local_278 = (local_124 * fVar8 - fVar7 * fVar9) / local_278;
                    if (DAT_006cc7a4 <= local_278) {
                      if (_DAT_006cc7bc < local_278) {
                        local_278 = 1.0;
                      }
                    }
                    else {
                      local_278 = 0.0;
                    }
                  }
                  fVar8 = (fVar7 * local_278 - fVar9) / fVar8;
                  if ((fVar8 <= DAT_006cc7a4) || (_DAT_006cc7bc <= fVar8)) {
                    local_274 = 0.0;
                    if (fVar8 < DAT_006cc7a4 == (fVar8 == DAT_006cc7a4)) {
                      local_274 = 1.0;
                    }
                    fVar7 = (fVar7 * local_274 + local_124) / local_174;
                    if ((fVar7 <= DAT_006cc7a4) || (_DAT_006cc7bc <= fVar7)) {
                      local_278 = 0.0;
                      if (fVar7 < DAT_006cc7a4 == (fVar7 == DAT_006cc7a4)) {
                        local_278 = 1.0;
                      }
                      fVar7 = pfVar28[1];
                      fVar8 = pfVar28[2];
                      fVar9 = pfVar30[1];
                      fVar10 = pfVar30[2];
                      *param_2 = (fVar5 * local_274 + *pfVar30) - (local_278 * fVar27 + *pfVar28);
                      param_2[1] = (fVar6 * local_274 + fVar9) - (local_278 * fVar2 + fVar7);
                      param_2[2] = (fVar17 * local_274 + fVar10) - (local_278 * fVar15 + fVar8);
                    }
                    else {
                      fVar8 = (fVar5 * local_274 + *pfVar30) - *pfVar28;
                      fVar9 = (fVar6 * local_274 + pfVar30[1]) - pfVar28[1];
                      fVar18 = (fVar17 * local_274 + pfVar30[2]) - pfVar28[2];
                      fVar10 = fVar9 * fVar15 - fVar18 * fVar2;
                      fVar18 = fVar18 * fVar27 - fVar8 * fVar15;
                      fVar8 = fVar8 * fVar2 - fVar9 * fVar27;
                      *param_2 = fVar2 * fVar8 - fVar15 * fVar18;
                      param_2[1] = fVar15 * fVar10 - fVar8 * fVar27;
                      param_2[2] = fVar18 * fVar27 - fVar2 * fVar10;
                      local_278 = fVar7;
                    }
                  }
                  else {
                    local_274 = fVar8;
                    if ((local_278 <= DAT_006cc7a4) || (_DAT_006cc7bc <= local_278)) {
                      local_88 = local_278 * fVar15;
                      local_f0 = local_278 * fVar27;
                      local_140 = local_278 * fVar27 + *pfVar28;
                      local_13c = pfVar28[1] + local_278 * fVar2;
                      local_138 = pfVar28[2] + local_278 * fVar15;
                      fVar7 = *pfVar30 - local_140;
                      fVar8 = pfVar30[1] - local_13c;
                      local_d8 = pfVar30[2] - local_138;
                      fVar9 = fVar8 * fVar17 - local_d8 * fVar6;
                      fVar10 = fVar5 * local_d8 - fVar7 * fVar17;
                      fVar7 = fVar7 * fVar6 - fVar5 * fVar8;
                      *param_2 = fVar7 * fVar6 - fVar10 * fVar17;
                      param_2[1] = fVar9 * fVar17 - fVar7 * fVar5;
                      param_2[2] = fVar10 * fVar5 - fVar9 * fVar6;
                    }
                    else {
                      *param_2 = fVar2 * fVar17 - fVar15 * fVar6;
                      param_2[1] = fVar5 * fVar15 - fVar17 * fVar27;
                      param_2[2] = fVar6 * fVar27 - fVar5 * fVar2;
                      FUN_00567370();
                      if (fVar16 * *extraout_EDX + fVar4 * extraout_EDX[2] + fVar3 * extraout_EDX[1]
                          < DAT_006cc7a4) {
                        local_c8 = -extraout_EDX[2];
                        extraout_EDX[2] = -extraout_EDX[2];
                        *extraout_EDX = -*extraout_EDX;
                        extraout_EDX[1] = -extraout_EDX[1];
                      }
                      local_68 = local_278 * fVar15;
                      local_b0 = local_278 * fVar27;
                      fVar7 = *pfVar30 - (local_278 * fVar27 + *pfVar28);
                      fVar9 = pfVar30[1] - (pfVar28[1] + local_278 * fVar2);
                      local_38 = pfVar30[2] - (pfVar28[2] + local_278 * fVar15);
                      fVar18 = fVar9 * fVar17 - local_38 * fVar6;
                      fVar10 = local_38 * fVar5 - fVar7 * fVar17;
                      fVar7 = fVar7 * fVar6 - fVar5 * fVar9;
                      fVar19 = fVar18 * fVar17 - fVar5 * fVar7;
                      fVar9 = fVar5 * fVar10 - fVar18 * fVar6;
                      fVar7 = fVar7 * fVar6 - fVar10 * fVar17;
                      fVar10 = (fVar5 * fVar8 + *pfVar30) - *pfVar28;
                      fVar18 = (fVar6 * fVar8 + pfVar30[1]) - pfVar28[1];
                      fVar8 = (fVar17 * fVar8 + pfVar30[2]) - pfVar28[2];
                      local_120 = fVar18 * fVar15 - fVar8 * fVar2;
                      fVar21 = fVar8 * fVar27 - fVar10 * fVar15;
                      fVar8 = fVar10 * fVar2 - fVar18 * fVar27;
                      fVar24 = local_120 * fVar15 - fVar8 * fVar27;
                      fVar23 = fVar21 * fVar27 - local_120 * fVar2;
                      fVar8 = fVar8 * fVar2 - fVar21 * fVar15;
                      fVar10 = *pfVar37 * *extraout_EDX +
                               pfVar37[1] * extraout_EDX[1] + pfVar37[2] * extraout_EDX[2];
                      fVar18 = *pfVar28 * *extraout_EDX +
                               pfVar28[1] * extraout_EDX[1] + pfVar28[2] * extraout_EDX[2];
                      if (fVar18 < fVar10) {
                        fVar10 = fVar18;
                      }
                      fVar18 = *extraout_EDX * *pfVar29 +
                               pfVar29[1] * extraout_EDX[1] + pfVar29[2] * extraout_EDX[2];
                      fVar21 = *pfVar30 * *extraout_EDX +
                               pfVar30[1] * extraout_EDX[1] + pfVar30[2] * extraout_EDX[2];
                      if (fVar21 < fVar18) {
                        fVar18 = fVar21;
                      }
                      fVar21 = fVar7 * *pfVar37 + fVar19 * pfVar37[1] + fVar9 * pfVar37[2];
                      fVar22 = fVar7 * *pfVar28 + fVar19 * pfVar28[1] + fVar9 * pfVar28[2];
                      if (fVar22 < fVar21) {
                        fVar21 = fVar22;
                      }
                      fVar22 = fVar7 * *pfVar29 + fVar19 * pfVar29[1] + fVar9 * pfVar29[2];
                      fVar20 = fVar7 * *pfVar30 + fVar19 * pfVar30[1] + fVar9 * pfVar30[2];
                      if (fVar20 < fVar22) {
                        fVar22 = fVar20;
                      }
                      fVar20 = fVar18 - fVar10;
                      if (fVar18 - fVar10 < fVar22 - fVar21) {
                        *extraout_EDX = fVar7;
                        extraout_EDX[1] = fVar19;
                        extraout_EDX[2] = fVar9;
                        fVar20 = fVar22 - fVar21;
                      }
                      fVar7 = fVar8 * *pfVar37 + fVar24 * pfVar37[1] + fVar23 * pfVar37[2];
                      fVar9 = fVar8 * *pfVar28 + fVar24 * pfVar28[1] + fVar23 * pfVar28[2];
                      if (fVar9 < fVar7) {
                        fVar7 = fVar9;
                      }
                      fVar10 = fVar8 * *pfVar29 + fVar24 * pfVar29[1] + fVar23 * pfVar29[2];
                      fVar9 = fVar8 * *pfVar30 + fVar24 * pfVar30[1] + fVar23 * pfVar30[2];
                      if (fVar9 < fVar10) {
                        fVar10 = fVar9;
                      }
                      param_2 = extraout_EDX;
                      if (fVar20 < fVar10 - fVar7) {
                        *extraout_EDX = fVar8;
                        extraout_EDX[1] = fVar24;
                        extraout_EDX[2] = fVar23;
                      }
                    }
                  }
                  local_250 = 0;
                  iVar38 = 1;
                  fVar7 = param_2[1] * unaff_ESI[1] +
                          param_2[2] * unaff_ESI[2] + *param_2 * *unaff_ESI;
                  if (3 < iVar25) {
                    iVar34 = 4;
                    pfVar29 = unaff_ESI + 9;
                    do {
                      fVar8 = pfVar29[-4] * param_2[1] +
                              pfVar29[-3] * param_2[2] + pfVar29[-5] * *param_2;
                      if (fVar7 < fVar8) {
                        fVar7 = fVar8;
                        local_250 = iVar38;
                      }
                      fVar8 = param_2[1] * *pfVar29 +
                              pfVar29[1] * param_2[2] + pfVar29[-1] * *param_2;
                      if (fVar7 < fVar8) {
                        local_250 = iVar34 + -2;
                        fVar7 = fVar8;
                      }
                      fVar8 = pfVar29[4] * param_2[1] +
                              pfVar29[3] * *param_2 + pfVar29[5] * param_2[2];
                      if (fVar7 < fVar8) {
                        local_250 = iVar34 + -1;
                        fVar7 = fVar8;
                      }
                      fVar8 = pfVar29[8] * param_2[1] +
                              pfVar29[7] * *param_2 + pfVar29[9] * param_2[2];
                      if (fVar7 < fVar8) {
                        fVar7 = fVar8;
                        local_250 = iVar34;
                      }
                      iVar34 = iVar34 + 4;
                      iVar38 = iVar38 + 4;
                      pfVar29 = pfVar29 + 0x10;
                    } while (iVar34 < (unsigned int)(float)fVar31);
                  }
                  if (iVar38 < (unsigned int)(float)fVar31) {
                    pfVar29 = unaff_ESI + iVar38 * 4 + 1;
                    do {
                      fVar8 = param_2[1] * *pfVar29 +
                              pfVar29[1] * param_2[2] + pfVar29[-1] * *param_2;
                      if (fVar7 < fVar8) {
                        fVar7 = fVar8;
                        local_250 = iVar38;
                      }
                      iVar38 = iVar38 + 1;
                      pfVar29 = pfVar29 + 4;
                    } while (iVar38 < (unsigned int)(float)fVar31);
                  }
                  local_248 = 0;
                  iVar38 = 1;
                  fVar8 = unaff_ESI[0x12] * param_2[2] +
                          unaff_ESI[0x10] * *param_2 + unaff_ESI[0x11] * param_2[1];
                  if (3 < iVar33) {
                    iVar34 = 4;
                    pfVar29 = unaff_ESI + 0x15;
                    do {
                      fVar9 = param_2[1] * *pfVar29 +
                              pfVar29[1] * param_2[2] + pfVar29[-1] * *param_2;
                      if (fVar9 < fVar8) {
                        fVar8 = fVar9;
                        local_248 = iVar38;
                      }
                      fVar9 = pfVar29[4] * param_2[1] +
                              pfVar29[3] * *param_2 + pfVar29[5] * param_2[2];
                      if (fVar9 < fVar8) {
                        local_248 = iVar34 + -2;
                        fVar8 = fVar9;
                      }
                      fVar9 = pfVar29[8] * param_2[1] +
                              pfVar29[7] * *param_2 + pfVar29[9] * param_2[2];
                      if (fVar9 < fVar8) {
                        local_248 = iVar34 + -1;
                        fVar8 = fVar9;
                      }
                      fVar9 = pfVar29[0xc] * param_2[1] +
                              pfVar29[0xb] * *param_2 + pfVar29[0xd] * param_2[2];
                      if (fVar9 < fVar8) {
                        fVar8 = fVar9;
                        local_248 = iVar34;
                      }
                      iVar34 = iVar34 + 4;
                      iVar38 = iVar38 + 4;
                      pfVar29 = pfVar29 + 0x10;
                    } while (iVar34 < (unsigned int)(float)fVar11);
                  }
                  if (iVar38 < (unsigned int)(float)fVar11) {
                    pfVar29 = unaff_ESI + iVar38 * 4 + 0x11;
                    do {
                      fVar9 = *pfVar29 * param_2[1] +
                              pfVar29[1] * param_2[2] + pfVar29[-1] * *param_2;
                      if (fVar9 < fVar8) {
                        fVar8 = fVar9;
                        local_248 = iVar38;
                      }
                      iVar38 = iVar38 + 1;
                      pfVar29 = pfVar29 + 4;
                    } while (iVar38 < (unsigned int)(float)fVar11);
                  }
                  if (fVar7 < fVar8) {
                    local_b8 = local_278 * fVar15;
                    local_110 = local_278 * fVar27;
                    local_10c = local_278 * fVar2;
                    fVar7 = pfVar28[1];
                    local_98 = pfVar28[2] + local_278 * fVar15;
                    unaff_ESI[0x20] = local_278 * fVar27 + *pfVar28;
                    unaff_ESI[0x22] = local_98;
                    unaff_ESI[0x21] = fVar7 + local_278 * fVar2;
                    local_78 = fVar17 * local_274;
                    local_100 = fVar5 * local_274;
                    local_fc = fVar6 * local_274;
                    fVar7 = pfVar30[1];
                    local_58 = pfVar30[2] + fVar17 * local_274;
                    unaff_ESI[0x24] = fVar5 * local_274 + *pfVar30;
                    unaff_ESI[0x26] = local_58;
                    unaff_ESI[0x25] = fVar7 + fVar6 * local_274;
                    fVar5 = (unaff_ESI[0x24] - unaff_ESI[0x20]) *
                            (unaff_ESI[0x24] - unaff_ESI[0x20]) +
                            (unaff_ESI[0x25] - unaff_ESI[0x21]) *
                            (unaff_ESI[0x25] - unaff_ESI[0x21]) +
                            (unaff_ESI[0x26] - unaff_ESI[0x22]) *
                            (unaff_ESI[0x26] - unaff_ESI[0x22]);
                    if (((local_250 == local_214) || (local_250 == iVar36)) &&
                       ((local_248 == local_22c || (local_248 == iVar35)))) {
                      if (local_278 == DAT_006cc7a4) {
                        unaff_ESI[0x30] = 1.4013e-45;
                        unaff_ESI[0x2c] = unaff_ESI[local_214 + 0x2c];
                        fVar31 = unaff_ESI[local_214 * 4 + 1];
                        fVar11 = (unaff_ESI + local_214 * 4)[2];
                        *unaff_ESI = unaff_ESI[local_214 * 4];
                        unaff_ESI[1] = fVar31;
                        unaff_ESI[2] = fVar11;
                      }
                      else if (local_278 == _DAT_006cc7bc) {
                        unaff_ESI[0x30] = 1.4013e-45;
                        unaff_ESI[0x2c] = unaff_ESI[iVar36 + 0x2c];
                        fVar31 = unaff_ESI[iVar36 * 4 + 1];
                        fVar11 = unaff_ESI[iVar36 * 4 + 2];
                        *unaff_ESI = unaff_ESI[iVar36 * 4];
                        unaff_ESI[1] = fVar31;
                        unaff_ESI[2] = fVar11;
                      }
                      else {
                        unaff_ESI[0x30] = 2.8026e-45;
                        unaff_ESI[0x2c] = unaff_ESI[local_214 + 0x2c];
                        fVar31 = unaff_ESI[local_214 * 4 + 1];
                        fVar11 = (unaff_ESI + local_214 * 4)[2];
                        *unaff_ESI = unaff_ESI[local_214 * 4];
                        unaff_ESI[1] = fVar31;
                        unaff_ESI[2] = fVar11;
                        unaff_ESI[0x2d] = unaff_ESI[iVar36 + 0x2c];
                        fVar31 = unaff_ESI[iVar36 * 4 + 1];
                        fVar11 = unaff_ESI[iVar36 * 4 + 2];
                        unaff_ESI[4] = unaff_ESI[iVar36 * 4];
                        unaff_ESI[5] = fVar31;
                        unaff_ESI[6] = fVar11;
                      }
                      if (local_274 != DAT_006cc7a4) {
                        if (local_274 != _DAT_006cc7bc) {
                          unaff_ESI[0x35] = 2.8026e-45;
                          unaff_ESI[0x31] = unaff_ESI[local_22c + 0x31];
                          unaff_ESI[0x32] = unaff_ESI[iVar35 + 0x31];
                          local_22c = local_22c + 4;
                          fVar31 = unaff_ESI[local_22c * 4 + 1];
                          fVar11 = unaff_ESI[local_22c * 4 + 2];
                          unaff_ESI[0x10] = unaff_ESI[local_22c * 4];
                          unaff_ESI[0x11] = fVar31;
                          iVar35 = iVar35 + 4;
                          unaff_ESI[0x12] = fVar11;
                          fVar31 = unaff_ESI[iVar35 * 4 + 1];
                          fVar11 = unaff_ESI[iVar35 * 4 + 2];
                          unaff_ESI[0x14] = unaff_ESI[iVar35 * 4];
                          unaff_ESI[0x15] = fVar31;
                          unaff_ESI[0x16] = fVar11;
                          return unaff_ESI + local_22c * 4;
                        }
                        unaff_ESI[0x35] = 1.4013e-45;
                        unaff_ESI[0x31] = unaff_ESI[iVar35 + 0x31];
                        fVar31 = unaff_ESI[(iVar35 + 4) * 4 + 1];
                        fVar11 = (unaff_ESI + (iVar35 + 4) * 4)[2];
                        pfVar28 = (float *)(unsigned int)unaff_ESI[(iVar35 + 4) * 4];
                        unaff_ESI[0x10] = (float)(unsigned int)pfVar28;
                        unaff_ESI[0x11] = fVar31;
                        unaff_ESI[0x12] = fVar11;
                        return pfVar28;
                      }
                      unaff_ESI[0x35] = 1.4013e-45;
                      unaff_ESI[0x31] = unaff_ESI[local_22c + 0x31];
                      goto LAB_00470a76;
                    }
                    if (fVar5 < local_1f4) {
                      local_16c = unaff_ESI[0x21];
                      local_160 = *param_2;
                      local_168 = unaff_ESI[0x22];
                      local_15c = param_2[1];
                      local_14c = unaff_ESI[0x25];
                      local_158 = param_2[2];
                      local_148 = unaff_ESI[0x26];
                      local_170 = unaff_ESI[0x20];
                      local_150 = unaff_ESI[0x24];
                      bVar12 = true;
                      if (local_278 == DAT_006cc7a4) {
                        local_178 = 1.4013e-45;
LAB_004708d0:
                        local_188[0] = local_214;
                      }
                      else {
                        if (local_278 != _DAT_006cc7bc) {
                          local_178 = 2.8026e-45;
                          local_188[1] = iVar36;
                          goto LAB_004708d0;
                        }
                        local_178 = 1.4013e-45;
                        local_188[0] = iVar36;
                      }
                      local_1f4 = fVar5;
                      if (local_274 == DAT_006cc7a4) {
                        local_18c = (float *)(unsigned int)0x1;
                        local_19c[0] = local_22c;
                      }
                      else if (local_274 == _DAT_006cc7bc) {
                        local_18c = (float *)(unsigned int)0x1;
                        local_19c[0] = iVar35;
                      }
                      else {
                        local_18c = (float *)(unsigned int)0x2;
                        local_19c[0] = local_22c;
                        local_19c[1] = iVar35;
                      }
                    }
                  }
                }
                local_22c = iVar1;
              } while (iVar1 < iVar33);
            }
            iVar36 = iVar36 + 1;
          } while (iVar36 < (unsigned int)(float)fVar31);
        }
        local_214 = iVar26;
      } while (iVar26 < iVar25);
    }
  }
  local_174 = (float)((unsigned int)(float)fVar31+ -2);
  local_214 = 0;
  if (0 < (unsigned int)(float)(unsigned int)local_174) {
    local_254 = 5;
    pfVar28 = unaff_ESI;
    do {
      iVar25 = local_214 + 1;
      if (iVar25 < (unsigned int)(float)fVar31+ -1) {
        local_278 = (float)(local_214 + 2);
        local_224 = local_254 - local_214;
        local_228 = iVar25;
        pfVar37 = pfVar28;
        do {
          local_24c = pfVar37 + 4;
          local_22c = (unsigned int)(float)(unsigned int)local_278;
          if ((unsigned int)(float)(unsigned int)local_278< (unsigned int)(float)fVar31) {
            local_1f8 = local_224 - (unsigned int)(float)(unsigned int)local_278;
            local_244 = pfVar37 + 10;
            local_1f0 = unaff_ESI + (local_214 + -1 + (unsigned int)(float)(unsigned int)local_278* 2) * -4 + 0x19;
            do {
              local_58 = pfVar37[6] - pfVar28[2];
              local_78 = *local_244 - pfVar28[2];
              local_270 = local_78 * (pfVar37[5] - pfVar28[1]) -
                          (local_244[-1] - pfVar28[1]) * local_58;
              local_26c = (local_244[-2] - *pfVar28) * local_58 - (*local_24c - *pfVar28) * local_78
              ;
              fVar27 = (*local_24c - *pfVar28) * (local_244[-1] - pfVar28[1]) -
                       (local_244[-2] - *pfVar28) * (pfVar37[5] - pfVar28[1]);
              local_268 = SQRT(local_26c * local_26c + fVar27 * fVar27 + local_270 * local_270);
              if (local_268 == DAT_006cc7a4) {
                local_270 = 1.0;
                local_26c = 0.0;
                local_268 = 0.0;
              }
              else {
                local_268 = ((int)_DAT_006cc7bc) / local_268;
                local_270 = local_270 * local_268;
                local_26c = local_26c * local_268;
                local_268 = local_268 * fVar27;
              }
              if (DAT_006cc7a4 <=
                  (unaff_ESI[0x11] - pfVar28[1]) * local_26c +
                  (unaff_ESI[0x12] - pfVar28[2]) * local_268 +
                  (unaff_ESI[0x10] - *pfVar28) * local_270) {
                *param_2 = local_270;
                param_2[1] = local_26c;
                fVar27 = local_268;
              }
              else {
                local_98 = -local_268;
                *param_2 = -local_270;
                param_2[1] = -local_26c;
                fVar27 = -local_268;
              }
              param_2[2] = fVar27;
              local_250 = local_214;
              fVar27 = *pfVar28 * *param_2 + pfVar28[1] * param_2[1] + pfVar28[2] * param_2[2];
              local_1e8 = fVar27;
              if ((local_1f8 < (unsigned int)(float)fVar31) &&
                 (fVar2 = *local_1f0 * param_2[1] +
                          local_1f0[1] * param_2[2] + local_1f0[-1] * *param_2, fVar27 < fVar2)) {
                local_250 = local_1f8;
                local_1e8 = fVar2;
              }
              local_248 = 0;
              iVar26 = 1;
              local_68 = unaff_ESI[0x10] * *param_2 +
                         unaff_ESI[0x12] * param_2[2] + unaff_ESI[0x11] * param_2[1];
              if (3 < (unsigned int)(float)fVar11+ -1) {
                iVar36 = 4;
                pfVar30 = unaff_ESI + 0x15;
                do {
                  fVar2 = *pfVar30 * param_2[1] + pfVar30[1] * param_2[2] + pfVar30[-1] * *param_2;
                  if (fVar2 < local_68) {
                    local_68 = fVar2;
                    local_248 = iVar26;
                  }
                  fVar2 = pfVar30[3] * *param_2 + pfVar30[5] * param_2[2] + pfVar30[4] * param_2[1];
                  if (fVar2 < local_68) {
                    local_248 = iVar36 + -2;
                    local_68 = fVar2;
                  }
                  fVar2 = pfVar30[7] * *param_2 + pfVar30[9] * param_2[2] + pfVar30[8] * param_2[1];
                  if (fVar2 < local_68) {
                    local_248 = iVar36 + -1;
                    local_68 = fVar2;
                  }
                  fVar2 = pfVar30[0xb] * *param_2 +
                          pfVar30[0xd] * param_2[2] + pfVar30[0xc] * param_2[1];
                  if (fVar2 < local_68) {
                    local_68 = fVar2;
                    local_248 = iVar36;
                  }
                  iVar36 = iVar36 + 4;
                  iVar26 = iVar26 + 4;
                  pfVar30 = pfVar30 + 0x10;
                } while (iVar36 < (unsigned int)(float)fVar11);
              }
              if (iVar26 < (unsigned int)(float)fVar11) {
                pfVar30 = unaff_ESI + iVar26 * 4 + 0x11;
                do {
                  fVar2 = *pfVar30 * param_2[1] + pfVar30[1] * param_2[2] + pfVar30[-1] * *param_2;
                  if (fVar2 < local_68) {
                    local_68 = fVar2;
                    local_248 = iVar26;
                  }
                  iVar26 = iVar26 + 1;
                  pfVar30 = pfVar30 + 4;
                } while (iVar26 < (unsigned int)(float)fVar11);
              }
              if (local_1e8 < local_68) {
                pfVar30 = unaff_ESI + (local_248 + 4) * 4;
                local_b8 = pfVar30[2] - pfVar28[2];
                local_d8 = pfVar37[6] - pfVar28[2];
                if (DAT_006cc7a4 <
                    ((*local_24c - *pfVar28) * local_268 - local_270 * local_d8) *
                    (pfVar30[1] - pfVar28[1]) +
                    (local_270 * (pfVar37[5] - pfVar28[1]) - (*local_24c - *pfVar28) * local_26c) *
                    (pfVar30[2] - pfVar28[2]) +
                    (local_26c * local_d8 - (pfVar37[5] - pfVar28[1]) * local_268) *
                    (unaff_ESI[(local_248 + 4) * 4] - *pfVar28)) {
                  local_e8 = pfVar30[2] - pfVar37[6];
                  local_88 = *local_244 - pfVar37[6];
                  if (DAT_006cc7a4 <
                      ((local_244[-2] - *local_24c) * local_268 - local_270 * local_88) *
                      (pfVar30[1] - pfVar37[5]) +
                      (local_270 * (local_244[-1] - pfVar37[5]) -
                      (local_244[-2] - *local_24c) * local_26c) * (pfVar30[2] - pfVar37[6]) +
                      (local_26c * local_88 - (local_244[-1] - pfVar37[5]) * local_268) *
                      (*pfVar30 - *local_24c)) {
                    local_38 = pfVar30[2] - *local_244;
                    local_a8 = pfVar28[2] - *local_244;
                    if (DAT_006cc7a4 <
                        ((*pfVar28 - local_244[-2]) * local_268 - local_270 * local_a8) *
                        (pfVar30[1] - local_244[-1]) +
                        (local_270 * (pfVar28[1] - local_244[-1]) -
                        (*pfVar28 - local_244[-2]) * local_26c) * (pfVar30[2] - *local_244) +
                        (local_26c * local_a8 - (pfVar28[1] - local_244[-1]) * local_268) *
                        (*pfVar30 - local_244[-2])) {
                      local_68 = local_68 - fVar27;
                      local_d0 = local_68 * *param_2;
                      fVar15 = local_68 * param_2[1];
                      local_68 = local_68 * param_2[2];
                      fVar27 = pfVar30[1];
                      fVar2 = pfVar30[2];
                      local_48 = fVar2 - local_68;
                      unaff_ESI[0x20] = *pfVar30 - local_d0;
                      unaff_ESI[0x21] = fVar27 - fVar15;
                      unaff_ESI[0x22] = fVar2 - local_68;
                      fVar27 = pfVar30[1];
                      fVar2 = pfVar30[2];
                      unaff_ESI[0x24] = *pfVar30;
                      unaff_ESI[0x25] = fVar27;
                      unaff_ESI[0x26] = fVar2;
                      fVar27 = local_d0 * local_d0 + fVar15 * fVar15 + local_68 * local_68;
                      if (local_250 == local_214) {
                        unaff_ESI[0x30] = 4.2039e-45;
                        unaff_ESI[0x2c] = unaff_ESI[local_214 + 0x2c];
                        fVar31 = unaff_ESI[local_214 * 4 + 1];
                        fVar11 = unaff_ESI[local_214 * 4 + 2];
                        *unaff_ESI = unaff_ESI[local_214 * 4];
                        unaff_ESI[1] = fVar31;
                        unaff_ESI[2] = fVar11;
                        unaff_ESI[0x2d] = unaff_ESI[local_228 + 0x2c];
                        fVar31 = unaff_ESI[local_228 * 4 + 1];
                        fVar11 = unaff_ESI[local_228 * 4 + 2];
                        unaff_ESI[4] = unaff_ESI[local_228 * 4];
                        unaff_ESI[5] = fVar31;
                        unaff_ESI[6] = fVar11;
                        unaff_ESI[0x2e] = unaff_ESI[local_22c + 0x2c];
                        fVar31 = unaff_ESI[local_22c * 4 + 1];
                        fVar11 = unaff_ESI[local_22c * 4 + 2];
                        unaff_ESI[8] = unaff_ESI[local_22c * 4];
                        unaff_ESI[9] = fVar31;
                        unaff_ESI[10] = fVar11;
                        unaff_ESI[0x35] = 1.4013e-45;
                        fVar31 = unaff_ESI[local_248 + 0x31];
                        goto LAB_0047135f;
                      }
                      if (fVar27 < local_1f4) {
                        local_170 = unaff_ESI[0x20];
                        local_16c = unaff_ESI[0x21];
                        local_150 = unaff_ESI[0x24];
                        local_168 = unaff_ESI[0x22];
                        local_160 = *param_2;
                        local_188[0] = local_214;
                        local_14c = unaff_ESI[0x25];
                        bVar12 = true;
                        local_15c = param_2[1];
                        local_188[1] = local_228;
                        local_18c = (float *)(unsigned int)0x1;
                        local_148 = unaff_ESI[0x26];
                        local_158 = param_2[2];
                        local_178 = 4.2039e-45;
                        local_188[2] = local_22c;
                        local_19c[0] = local_248;
                        local_1f4 = fVar27;
                      }
                    }
                  }
                }
              }
              local_22c = local_22c + 1;
              local_1f0 = local_1f0 + -4;
              local_1f8 = local_1f8 + -1;
              local_244 = local_244 + 4;
            } while (local_22c < (unsigned int)(float)fVar31);
          }
          local_228 = local_228 + 1;
          local_278 = (float)((unsigned int)(float)(unsigned int)local_278+ 1);
          local_224 = local_224 + -1;
          pfVar37 = local_24c;
        } while (local_228 < (unsigned int)(float)fVar31+ -1);
      }
      local_254 = local_254 + -1;
      pfVar28 = pfVar28 + 4;
      local_214 = iVar25;
    } while (iVar25 < (unsigned int)(float)(unsigned int)local_174);
  }
  local_214 = 0;
  if (fVar11 != 2.8026e-45 && -1 < (unsigned int)(float)fVar11+ -2) {
    pfVar28 = unaff_ESI + 0x10;
    local_1fc = 5;
    do {
      iVar25 = local_214 + 1;
      if (iVar25 < (unsigned int)(float)fVar11+ -1) {
        iVar26 = local_214 + 2;
        local_1f8 = local_1fc - local_214;
        local_228 = iVar25;
        pfVar37 = pfVar28;
        do {
          pfVar30 = pfVar37 + 4;
          if (iVar26 < (unsigned int)(float)fVar11) {
            local_224 = local_1f8 - iVar26;
            local_244 = pfVar37 + 10;
            pfVar29 = unaff_ESI + (local_214 + -1 + iVar26 * 2) * -4 + 0x29;
            local_22c = iVar26;
            do {
              local_58 = pfVar37[6] - pfVar28[2];
              local_78 = *local_244 - pfVar28[2];
              local_270 = local_78 * (pfVar37[5] - pfVar28[1]) -
                          (local_244[-1] - pfVar28[1]) * local_58;
              local_26c = (local_244[-2] - *pfVar28) * local_58 - (*pfVar30 - *pfVar28) * local_78;
              fVar27 = (*pfVar30 - *pfVar28) * (local_244[-1] - pfVar28[1]) -
                       (local_244[-2] - *pfVar28) * (pfVar37[5] - pfVar28[1]);
              local_268 = SQRT(local_26c * local_26c + fVar27 * fVar27 + local_270 * local_270);
              if (local_268 == DAT_006cc7a4) {
                local_270 = 1.0;
                local_26c = 0.0;
                local_268 = 0.0;
              }
              else {
                local_268 = ((int)_DAT_006cc7bc) / local_268;
                local_270 = local_270 * local_268;
                local_26c = local_26c * local_268;
                local_268 = local_268 * fVar27;
              }
              if (DAT_006cc7a4 <=
                  (*pfVar28 - *unaff_ESI) * local_270 +
                  (pfVar28[1] - unaff_ESI[1]) * local_26c + local_268 * (pfVar28[2] - unaff_ESI[2]))
              {
                *param_2 = local_270;
                param_2[1] = local_26c;
                fVar27 = local_268;
              }
              else {
                local_98 = -local_268;
                *param_2 = -local_270;
                param_2[1] = -local_26c;
                fVar27 = -local_268;
              }
              param_2[2] = fVar27;
              local_248 = local_214;
              local_68 = param_2[2] * pfVar28[2] + pfVar28[1] * param_2[1] + *pfVar28 * *param_2;
              local_1e8 = local_68;
              if ((local_224 < (unsigned int)(float)fVar11) &&
                 (fVar27 = *pfVar29 * param_2[1] + pfVar29[1] * param_2[2] + pfVar29[-1] * *param_2,
                 fVar27 < local_68)) {
                local_248 = local_224;
                local_1e8 = fVar27;
              }
              local_250 = 0;
              iVar36 = 1;
              fVar27 = param_2[1] * unaff_ESI[1] + param_2[2] * unaff_ESI[2] + *param_2 * *unaff_ESI
              ;
              if (3 < (unsigned int)(float)fVar31+ -1) {
                iVar33 = 4;
                pfVar32 = unaff_ESI + 9;
                do {
                  fVar2 = pfVar32[-3] * param_2[2] +
                          pfVar32[-5] * *param_2 + pfVar32[-4] * param_2[1];
                  if (fVar27 < fVar2) {
                    fVar27 = fVar2;
                    local_250 = iVar36;
                  }
                  fVar2 = param_2[1] * *pfVar32 + pfVar32[1] * param_2[2] + pfVar32[-1] * *param_2;
                  if (fVar27 < fVar2) {
                    local_250 = iVar33 + -2;
                    fVar27 = fVar2;
                  }
                  fVar2 = pfVar32[3] * *param_2 + pfVar32[5] * param_2[2] + pfVar32[4] * param_2[1];
                  if (fVar27 < fVar2) {
                    local_250 = iVar33 + -1;
                    fVar27 = fVar2;
                  }
                  fVar2 = pfVar32[7] * *param_2 + pfVar32[9] * param_2[2] + pfVar32[8] * param_2[1];
                  if (fVar27 < fVar2) {
                    fVar27 = fVar2;
                    local_250 = iVar33;
                  }
                  iVar33 = iVar33 + 4;
                  iVar36 = iVar36 + 4;
                  pfVar32 = pfVar32 + 0x10;
                } while (iVar33 < (unsigned int)(float)fVar31);
              }
              if (iVar36 < (unsigned int)(float)fVar31) {
                pfVar32 = unaff_ESI + iVar36 * 4 + 1;
                do {
                  fVar2 = *pfVar32 * param_2[1] + pfVar32[1] * param_2[2] + pfVar32[-1] * *param_2;
                  if (fVar27 < fVar2) {
                    fVar27 = fVar2;
                    local_250 = iVar36;
                  }
                  iVar36 = iVar36 + 1;
                  pfVar32 = pfVar32 + 4;
                } while (iVar36 < (unsigned int)(float)fVar31);
              }
              if (fVar27 < local_1e8) {
                pfVar32 = unaff_ESI + local_250 * 4;
                local_b8 = pfVar32[2] - pfVar28[2];
                local_d8 = pfVar37[6] - pfVar28[2];
                if (DAT_006cc7a4 <
                    ((*pfVar30 - *pfVar28) * local_268 - local_270 * local_d8) *
                    (pfVar32[1] - pfVar28[1]) +
                    (local_270 * (pfVar37[5] - pfVar28[1]) - (*pfVar30 - *pfVar28) * local_26c) *
                    (pfVar32[2] - pfVar28[2]) +
                    (local_26c * local_d8 - (pfVar37[5] - pfVar28[1]) * local_268) *
                    (unaff_ESI[local_250 * 4] - *pfVar28)) {
                  local_e8 = pfVar32[2] - pfVar37[6];
                  local_88 = *local_244 - pfVar37[6];
                  if (DAT_006cc7a4 <
                      ((local_244[-2] - *pfVar30) * local_268 - local_270 * local_88) *
                      (pfVar32[1] - pfVar37[5]) +
                      (local_270 * (local_244[-1] - pfVar37[5]) -
                      (local_244[-2] - *pfVar30) * local_26c) * (pfVar32[2] - pfVar37[6]) +
                      (local_26c * local_88 - (local_244[-1] - pfVar37[5]) * local_268) *
                      (*pfVar32 - *pfVar30)) {
                    local_38 = pfVar32[2] - *local_244;
                    local_a8 = pfVar28[2] - *local_244;
                    if (DAT_006cc7a4 <
                        ((*pfVar28 - local_244[-2]) * local_268 - local_270 * local_a8) *
                        (pfVar32[1] - local_244[-1]) +
                        (local_270 * (pfVar28[1] - local_244[-1]) -
                        (*pfVar28 - local_244[-2]) * local_26c) * (pfVar32[2] - *local_244) +
                        (local_26c * local_a8 - (pfVar28[1] - local_244[-1]) * local_268) *
                        (*pfVar32 - local_244[-2])) {
                      local_68 = local_68 - fVar27;
                      local_d0 = local_68 * *param_2;
                      fVar15 = local_68 * param_2[1];
                      local_68 = local_68 * param_2[2];
                      fVar27 = pfVar32[1];
                      fVar2 = pfVar32[2];
                      unaff_ESI[0x20] = *pfVar32;
                      unaff_ESI[0x21] = fVar27;
                      unaff_ESI[0x22] = fVar2;
                      fVar27 = pfVar32[1];
                      fVar2 = pfVar32[2];
                      local_48 = fVar2 + local_68;
                      unaff_ESI[0x24] = local_d0 + *pfVar32;
                      unaff_ESI[0x25] = fVar27 + fVar15;
                      unaff_ESI[0x26] = fVar2 + local_68;
                      fVar27 = local_d0 * local_d0 + fVar15 * fVar15 + local_68 * local_68;
                      if (local_248 == local_214) {
                        unaff_ESI[0x30] = 1.4013e-45;
                        unaff_ESI[0x2c] = unaff_ESI[local_250 + 0x2c];
                        fVar31 = unaff_ESI[local_250 * 4 + 1];
                        fVar11 = (unaff_ESI + local_250 * 4)[2];
                        *unaff_ESI = unaff_ESI[local_250 * 4];
                        unaff_ESI[1] = fVar31;
                        iVar25 = local_214 + 4;
                        unaff_ESI[2] = fVar11;
                        unaff_ESI[0x35] = 4.2039e-45;
                        unaff_ESI[0x31] = unaff_ESI[local_214 + 0x31];
                        fVar31 = unaff_ESI[iVar25 * 4 + 1];
                        fVar11 = unaff_ESI[iVar25 * 4 + 2];
                        unaff_ESI[0x10] = unaff_ESI[iVar25 * 4];
                        unaff_ESI[0x11] = fVar31;
                        unaff_ESI[0x12] = fVar11;
                        unaff_ESI[0x32] = unaff_ESI[local_228 + 0x31];
                        local_228 = local_228 + 4;
                        fVar31 = unaff_ESI[local_228 * 4 + 1];
                        fVar11 = unaff_ESI[local_228 * 4 + 2];
                        unaff_ESI[0x14] = unaff_ESI[local_228 * 4];
                        unaff_ESI[0x15] = fVar31;
                        iVar25 = local_22c + 4;
                        unaff_ESI[0x16] = fVar11;
                        unaff_ESI[0x33] = unaff_ESI[local_22c + 0x31];
                        fVar31 = unaff_ESI[iVar25 * 4 + 1];
                        fVar11 = unaff_ESI[iVar25 * 4 + 2];
                        unaff_ESI[0x18] = unaff_ESI[iVar25 * 4];
                        unaff_ESI[0x19] = fVar31;
                        unaff_ESI[0x1a] = fVar11;
                        return unaff_ESI + iVar25 * 4;
                      }
                      if (fVar27 < local_1f4) {
                        local_170 = unaff_ESI[0x20];
                        local_16c = unaff_ESI[0x21];
                        local_150 = unaff_ESI[0x24];
                        local_168 = unaff_ESI[0x22];
                        bVar12 = true;
                        local_160 = *param_2;
                        local_178 = 1.4013e-45;
                        local_14c = unaff_ESI[0x25];
                        local_15c = param_2[1];
                        local_188[0] = local_250;
                        local_19c[0] = local_214;
                        local_148 = unaff_ESI[0x26];
                        local_158 = param_2[2];
                        local_18c = (float *)(unsigned int)0x3;
                        local_19c[1] = local_228;
                        local_19c[2] = local_22c;
                        local_1f4 = fVar27;
                      }
                    }
                  }
                }
              }
              local_244 = local_244 + 4;
              local_22c = local_22c + 1;
              pfVar29 = pfVar29 + -4;
              local_224 = local_224 + -1;
            } while (local_22c < (unsigned int)(float)fVar11);
          }
          local_228 = local_228 + 1;
          iVar26 = iVar26 + 1;
          local_1f8 = local_1f8 + -1;
          pfVar37 = pfVar30;
        } while (local_228 < (unsigned int)(float)fVar11+ -1);
      }
      local_1fc = local_1fc + -1;
      pfVar28 = pfVar28 + 4;
      local_214 = iVar25;
    } while (iVar25 < (unsigned int)(float)fVar11+ -2);
  }
  if (!bVar12) {
    return (float *)(unsigned int)0x0;
  }
  unaff_ESI[0x20] = local_170;
  unaff_ESI[0x21] = local_16c;
  unaff_ESI[0x22] = local_168;
  unaff_ESI[0x24] = local_150;
  unaff_ESI[0x25] = local_14c;
  unaff_ESI[0x26] = local_148;
  *param_2 = local_160;
  param_2[1] = local_15c;
  param_2[2] = local_158;
  iVar25 = 0;
  unaff_ESI[0x30] = local_178;
  unaff_ESI[0x35] = (float)(unsigned int)local_18c;
  if (0 < (unsigned int)(float)(unsigned int)local_178) {
    pfVar28 = unaff_ESI + 2;
    pfVar37 = unaff_ESI + 0x2c;
    do {
      iVar26 = local_188[iVar25];
      *pfVar37 = unaff_ESI[iVar26 + 0x2c];
      fVar31 = unaff_ESI[iVar26 * 4 + 1];
      fVar11 = unaff_ESI[iVar26 * 4 + 2];
      pfVar28[-2] = unaff_ESI[iVar26 * 4];
      pfVar28[-1] = fVar31;
      *pfVar28 = fVar11;
      iVar25 = iVar25 + 1;
      pfVar37 = pfVar37 + 1;
      pfVar28 = pfVar28 + 4;
    } while (iVar25 < (unsigned int)(float)(unsigned int)local_178);
  }
  iVar25 = 0;
  if (0 < (unsigned int)(float)(unsigned int)local_18c) {
    pfVar37 = unaff_ESI + 0x31;
    pfVar28 = unaff_ESI + 0x12;
    do {
      iVar26 = local_19c[iVar25] + 4;
      *pfVar37 = unaff_ESI[local_19c[iVar25] + 0x31];
      fVar31 = unaff_ESI[iVar26 * 4 + 1];
      fVar11 = unaff_ESI[iVar26 * 4 + 2];
      pfVar28[-2] = unaff_ESI[iVar26 * 4];
      pfVar28[-1] = fVar31;
      *pfVar28 = fVar11;
      iVar25 = iVar25 + 1;
      pfVar28 = pfVar28 + 4;
      pfVar37 = pfVar37 + 1;
    } while (iVar25 < (unsigned int)(float)(unsigned int)local_18c);
  }
  return local_18c;
}
