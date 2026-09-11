/* spd-match: far pct=4.02 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_feng/attempt3_cfa9_v5 */
#include "ghidra_compat.h"

int __cdecl FUN_0067b9b7();
extern int DAT_006b01d0;
extern int DAT_006b01e0;
extern int DAT_006b01f0;
extern int DAT_006b0240;
extern int DAT_006b0248;
extern int DAT_006b0250;
extern int DAT_006b0258;
extern int DAT_006b0260;
extern void LAB_0067d026(void);
extern void LAB_0067d178(void);
extern void LAB_0067d444(void);
extern void LAB_0067d4ca(void);
extern void LAB_0067d5c9(void);
extern void LAB_0067d60f(void);
extern void LAB_0067d6bc(void);
extern void LAB_0067d72e(void);
extern void LAB_0067d79a(void);
extern void LAB_0067d7b1(void);
extern void LAB_0067da0a(void);
extern void LAB_0067da2d(void);

typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef double double_t;
typedef float float10;
#define SUB161(x,n) ((unsigned char)(((unsigned __int64)(x))>>(8*(n))))
#define AUSHIFT(av,n) SUB161(*(unsigned __int64 *)&(av) >> (n),0)
#define _local_c (*(double *)local_c)
#define UNK_PTR_006acd58 ((char *)0x006acd58)
#define UNK_PTR_006af9c8 ((char *)0x006af9c8)
#define DAT_PTR_006acd50 ((char *)0x006acd50)
#define SUB168(x,n) ((longlong)(*(unsigned __int64 *)((char *)&(x) + (n))))
#define GH128_OR(a,b) ((*(unsigned __int64 *)&(a)) | (*(unsigned __int64 *)&(b)))
#define DAT_006b01f0_hi (*(unsigned int *)((char *)((char *)0x006b01f0) + 4))
typedef union {
    double _0_8_;
    unsigned __int64 _8_8_;
    unsigned int _0_4_;
    unsigned int _4_4_;
    unsigned short _6_2_;
    unsigned int _8_4_;
    unsigned int _12_4_;
} gh128;



float10 FUN_0067cfa9(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  gh128 auVar17;
  ulonglong uVar16;
  gh128 auVar18;
  gh128 auVar19;
  gh128 auVar20;
  gh128 auVar21;
  longlong lVar22;
  ulonglong in_XMM2_Qb;
  gh128 auVar23;
  longlong lVar26;
  gh128 auVar24;
  gh128 auVar25;
  ulonglong in_XMM3_Qb;
  gh128 auVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_c [4];
  
  dVar13 = (double)(__int64)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar34 = (double)(__int64)((*(unsigned __int64 *)0x006b01d0) & (ulonglong)param_1 | (*(unsigned __int64 *)0x006b01e0)) *
           *(double *)(((char *)0x006ac940) + uVar3 * 4);
  dVar31 = *(double *)(((char *)0x006ac940) + uVar3 * 4);
  dVar14 = *(double *)(DAT_PTR_006acd50 + uVar3 * 8);
  dVar33 = *(double *)(UNK_PTR_006acd58 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if ((uVar11 - 0x10 | uVar7) < 0x80000000) {
    uVar7 = 0;
    uVar8 = 0x3fe7f;
LAB_0067d026:
    uVar4 = ((ushort)((ulonglong)dVar34 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar29 = (double)(__int64)((ulonglong)dVar32 & (*(unsigned __int64 *)0x006b01d0) | (*(unsigned __int64 *)0x006b01e0));
    dVar15 = (double)(__int64)((*(unsigned __int64 *)0x006b0228 & (ulonglong)dVar29));
    in_XMM3_Qb = in_XMM3_Qb >> 0x1f;
    dVar29 = dVar29 - dVar15;
    uVar5 = ((ushort)((ulonglong)(dVar34 * *(double *)(((char *)0x006ad560) + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar30 = dVar31 * *(double *)(((char *)0x006ad560) + uVar4 * 4) *
             *(double *)(((char *)0x006ae180) + uVar5 * 4);
    dVar34 = dVar34 * *(double *)(((char *)0x006ad560) + uVar4 * 4) *
             *(double *)(((char *)0x006ae180) + uVar5 * 4);
    dVar32 = dVar14 + *(double *)(((char *)0x006ad970) + uVar4 * 8) +
             (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
             *(double *)(((char *)0x006ae990) + uVar5 * 8);
    dVar13 = dVar33 + *(double *)(((char *)0x006ad978) + uVar4 * 8) +
             *(double *)(((char *)0x006ae998) + uVar5 * 8);
    dVar14 = (double)(__int64)((*(unsigned __int64 *)0x006b0228 & (ulonglong)dVar30));
    dVar30 = dVar30 - dVar14;
    dVar35 = (*(double *)0x006b0230) + dVar34;
    dVar33 = dVar32 + dVar35;
    dVar31 = (double)(__int64)CONCAT44(param_3,param_2);
    uVar2 = (ushort)(param_3 >> 0x10);
    dVar32 = dVar32 - dVar33;
    uVar4 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
    dVar14 = (((dVar34 - dVar14 * dVar15) - dVar15 * dVar30) - dVar14 * dVar29) - dVar29 * dVar30;
    dVar15 = dVar35 - dVar14;
    dVar34 = dVar33 - dVar14;
    uVar8 = uVar2 & 0x7ff0;
    if (uVar8 < 0x7ff0) {
      iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_0067d178:
        dVar29 = (double)(__int64)((*(unsigned __int64 *)0x006b0228 & (ulonglong)dVar31));
        dVar30 = (double)(__int64)((*(unsigned __int64 *)0x006b0228 & (ulonglong)dVar34));
        dVar14 = (dVar32 + dVar35) - (dVar14 - (dVar33 - dVar34));
        dVar33 = dVar29 * dVar30 * 128.0;
        uVar3 = (uint)ROUND(dVar33);
        dVar31 = dVar29 * (dVar34 - dVar30) + dVar30 * (dVar31 - dVar29) +
                 (dVar34 - dVar30) * (dVar31 - dVar29);
        if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
          iVar6 = (uVar3 & 0x7f) * 0x10;
          auVar17._0_8_ = (double)(__int64)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar17._8_4_ = 0;
          auVar17._12_4_ = (int)((ulonglong)auVar17._0_8_ >> 0x20);
          dVar32 = *(double *)(((char *)0x006af9c0) + iVar6) * auVar17._0_8_;
          dVar31 = (dVar33 - ((dVar33 + (*(double *)0x006b01c0)) - (*(double *)0x006b01c0))) * 0.0078125 +
                   dVar31 + (((*(double *)0x006af9a0) * dVar15 + (*(double *)0x006af9b0) * dVar15 * dVar15) *
                             dVar15 * dVar15 +
                             (*(double *)0x006af9a8) * dVar15 + (*(double *)0x006af9b8) * dVar15 * dVar15 +
                            dVar13 + dVar14) * (double)(__int64)CONCAT44(param_3,param_2);
          return (float10)(dVar31 * dVar31 * dVar32 *
                           ((*(double *)0x006b0210) + (*(double *)0x006b0200) * dVar31) * dVar31 * dVar31 +
                           *(double *)(UNK_PTR_006af9c8 + iVar6) * (double)(__int64)auVar17._8_8_ +
                           ((*(double *)0x006b0218) + (*(double *)0x006b0208) * dVar31) * dVar31 * dVar31 * dVar32 +
                           (*(double *)0x006b0220) * dVar31 * dVar32 + dVar32);
        }
        if ((int)uVar3 < 1) {
          if ((int)uVar3 < -0x3fdff) {
LAB_0067da0a:
            _local_c = (double)(__int64)((ulonglong)((*(double *)0x006b0258) * DAT_006b0258) | (ulonglong)uVar7 << 0x2d)
            ;
            uVar10 = 0x19;
            goto LAB_0067d7b1;
          }
          uVar7 = uVar7 + 0x80;
          uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
          uVar11 = 0;
        }
        else {
          if (0x3ffff < uVar3) goto LAB_0067da2d;
          uVar7 = uVar7 + 0x3ff00;
          uVar9 = uVar3 - 0x80 & 0xffffff80;
          uVar11 = 0x3ff0;
        }
        iVar6 = (uVar3 & 0x7f) * 0x10;
        uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
        auVar21._0_8_ = (double)(__int64)((ulonglong)uVar9 << 0x2d);
        auVar21._8_4_ = 0;
        auVar21._12_4_ = (int)((ulonglong)auVar21._0_8_ >> 0x20);
        dVar32 = *(double *)(((char *)0x006af9c0) + iVar6) * auVar21._0_8_;
        dVar31 = (dVar33 - ((dVar33 + (*(double *)0x006b01c0)) - (*(double *)0x006b01c0))) * 0.0078125 +
                 dVar31 + (((*(double *)0x006af9a0) * dVar15 + (*(double *)0x006af9b0) * dVar15 * dVar15) *
                           dVar15 * dVar15 +
                           (*(double *)0x006af9a8) * dVar15 + (*(double *)0x006af9b8) * dVar15 * dVar15 +
                          dVar13 + dVar14) * (double)(__int64)CONCAT44(param_3,param_2);
        _local_c = (double)(__int64)((ulonglong)uVar7 << 0x2d);
        uVar28 = (ulonglong)(uVar3 + (uVar3 & 0x20));
        dVar14 = (double)(__int64)(-1L << uVar28 & (ulonglong)dVar32);
        dVar31 = dVar31 * dVar31 * dVar32 *
                 ((*(double *)0x006b0210) + (*(double *)0x006b0200) * dVar31) * dVar31 * dVar31 +
                 *(double *)(UNK_PTR_006af9c8 + iVar6) * (double)(__int64)auVar21._8_8_ +
                 ((*(double *)0x006b0218) + (*(double *)0x006b0208) * dVar31) * dVar31 * dVar31 * dVar32 +
                 (*(double *)0x006b0220) * dVar31 * dVar32;
        dVar33 = (double)(__int64)((ulonglong)(dVar14 + dVar31) & -1L << uVar28);
        dVar31 = dVar31 + (dVar14 - dVar33) + (dVar32 - dVar14);
        if ((int)(uVar9 - 0x1ff80) < 1) {
          _local_c = dVar31 * _local_c + dVar33 * _local_c;
          _local_c = _local_c + (double)(__int64)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
        else {
          _local_c = (dVar31 + dVar33) * _local_c;
          _local_c = _local_c + (double)(__int64)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
      }
      else {
        dVar33 = dVar31 * dVar34;
        uVar3 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
        uVar9 = uVar3 - 0x3c70;
        if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_0067d178;
        if (0x7fffffff < uVar9) {
          return (float10)(double)(__int64)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
        }
        if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_0067da0a;
LAB_0067da2d:
        uVar10 = 0x18;
        _local_c = DAT_006b0240;
        if (uVar7 != 0) {
          _local_c = DAT_006b0248;
        }
      }
      goto LAB_0067d7b1;
    }
    _local_c = (double)(__int64)CONCAT44(param_3,param_2);
    auVar23._8_8_ = in_XMM2_Qb;
    auVar23._0_8_ = _local_c;
    bVar12 = uVar3 != 0;
    uVar3 = uVar4;
    if (bVar12) goto LAB_0067d6bc;
    if (uVar9 == 0x3ff00000) goto LAB_0067d79a;
    uVar3 = uVar9;
    if (uVar9 != 0xbff00000) goto LAB_0067d6bc;
    auVar19._0_4_ = -(uint)((int)((*(unsigned __int64 *)0x006b01d0) & (ulonglong)_local_c) == 0);
    auVar19._4_4_ = -(uint)((int)(((*(unsigned __int64 *)0x006b01d0) & (ulonglong)_local_c) >> 0x20) == 0);
    auVar19._8_4_ = -(uint)((int)(in_XMM3_Qb & in_XMM2_Qb) == 0);
    auVar19._12_4_ = -(uint)((int)((in_XMM3_Qb & in_XMM2_Qb) >> 0x20) == 0);
    if ((ushort)((ushort)(AUSHIFT(auVar19,0x7) & 1) | (ushort)(AUSHIFT(auVar19,0xf) & 1) << 1
                 | (ushort)(AUSHIFT(auVar19,0x17) & 1) << 2 |
                 (ushort)(AUSHIFT(auVar19,0x1f) & 1) << 3 |
                 (ushort)(AUSHIFT(auVar19,0x27) & 1) << 4 |
                 (ushort)(AUSHIFT(auVar19,0x2f) & 1) << 5 |
                 (ushort)(AUSHIFT(auVar19,0x37) & 1) << 6 |
                 (ushort)(AUSHIFT(auVar19,0x3f) & 1) << 7 |
                 (ushort)(AUSHIFT(auVar19,0x47) & 1) << 8 |
                 (ushort)(AUSHIFT(auVar19,0x4f) & 1) << 9 |
                 (ushort)(AUSHIFT(auVar19,0x57) & 1) << 10 |
                 (ushort)(AUSHIFT(auVar19,0x5f) & 1) << 0xb |
                 (ushort)((byte)(auVar19._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar19._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar19._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf) == 0xff) {
      return (float10)1;
    }
  }
  else {
    auVar23._4_4_ = param_3;
    auVar23._0_4_ = param_2;
    auVar23._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & DAT_006b01f0_hi;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        uVar10 = 0x1a;
        _local_c = DAT_006b01e0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)DAT_006b01e0;
          }
        }
        goto LAB_0067d7b1;
      }
      if ((int)uVar7 < 0) {
        auVar27._0_8_ = CONCAT44(DAT_006b01f0_hi,(undefined4)DAT_006b01f0) << 0x34;
        auVar27._8_8_ = in_XMM3_Qb << 0x34;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3_Qb = 0;
        uVar28 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar22 = ((longlong)((*(unsigned __int64 *)&(auVar23)) | (*(unsigned __int64 *)&(auVar27)))) << uVar28;
        lVar26 = ((longlong)(*(unsigned __int64 *)((char *)&(auVar23) + 8) | *(unsigned __int64 *)((char *)&(auVar27) + 8))) << uVar28;
        auVar24._0_4_ = -(uint)((int)lVar22 == 0);
        auVar24._4_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0);
        auVar24._8_4_ = -(uint)((int)lVar26 == 0);
        auVar24._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
        bVar1 = AUSHIFT(auVar24,7) & 1 | (AUSHIFT(auVar24,0xf) & 1) << 1 |
                (AUSHIFT(auVar24,0x17) & 1) << 2 | (AUSHIFT(auVar24,0x1f) & 1) << 3 |
                (AUSHIFT(auVar24,0x27) & 1) << 4 | (AUSHIFT(auVar24,0x2f) & 1) << 5 |
                (AUSHIFT(auVar24,0x37) & 1) << 6 | AUSHIFT(auVar24,0x3f) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar28 = auVar24._8_8_;
        if (0x7fef < uVar8) {
          auVar18._0_4_ = -(uint)((int)((*(unsigned __int64 *)0x006b01d0) & (ulonglong)param_1) == 0);
          auVar18._4_4_ =
               -(uint)((int)(((*(unsigned __int64 *)0x006b01d0) & (ulonglong)param_1) >> 0x20) == 0);
          auVar18._8_4_ = 0xffffffff;
          auVar18._12_4_ = 0xffffffff;
          if ((byte)(AUSHIFT(auVar18,7) & 1 | (AUSHIFT(auVar18,0xf) & 1) << 1 |
                     (AUSHIFT(auVar18,0x17) & 1) << 2 | (AUSHIFT(auVar18,0x1f) & 1) << 3 |
                     (AUSHIFT(auVar18,0x27) & 1) << 4 | (AUSHIFT(auVar18,0x2f) & 1) << 5 |
                     (AUSHIFT(auVar18,0x37) & 1) << 6 | AUSHIFT(auVar18,0x3f) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar16 = (ulonglong)(((param_3 & DAT_006b01f0_hi) >> 0x14) - 0x3f4),
                 lVar22 = CONCAT44(param_3,param_2) << uVar16, lVar26 = uVar28 << uVar16,
                 auVar25._0_4_ = -(uint)((int)lVar22 == 0),
                 auVar25._4_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0),
                 auVar25._8_4_ = -(uint)((int)lVar26 == 0),
                 auVar25._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0),
                 (byte)(AUSHIFT(auVar25,7) & 1 | (AUSHIFT(auVar25,0xf) & 1) << 1 |
                        (AUSHIFT(auVar25,0x17) & 1) << 2 | (AUSHIFT(auVar25,0x1f) & 1) << 3
                        | (AUSHIFT(auVar25,0x27) & 1) << 4 |
                        (AUSHIFT(auVar25,0x2f) & 1) << 5 | (AUSHIFT(auVar25,0x37) & 1) << 6
                       | AUSHIFT(auVar25,0x3f) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_0067d72e;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)DAT_006b0248;
              }
              goto LAB_0067d5c9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_0067d72e;
          }
          goto LAB_0067d60f;
        }
        if (bVar1 == 0xff) {
          uVar16 = (ulonglong)(((param_3 & DAT_006b01f0_hi) >> 0x14) - 0x3f4);
          in_XMM3_Qb = 0;
          lVar22 = CONCAT44(param_3,param_2) << uVar16;
          lVar26 = uVar28 << uVar16;
          auVar23._0_4_ = -(uint)((int)lVar22 == SUB84(DAT_006b0250,0));
          auVar23._4_4_ =
               -(uint)((int)((ulonglong)lVar22 >> 0x20) == (int)((*(unsigned __int64 *)0x006b0250) >> 0x20));
          auVar23._8_4_ = -(uint)((int)lVar26 == 0);
          auVar23._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(AUSHIFT(auVar23,7) & 1) |
                           (ushort)(AUSHIFT(auVar23,0xf) & 1) << 1 |
                           (ushort)(AUSHIFT(auVar23,0x17) & 1) << 2 |
                           (ushort)(AUSHIFT(auVar23,0x1f) & 1) << 3 |
                           (ushort)(AUSHIFT(auVar23,0x27) & 1) << 4 |
                           (ushort)(AUSHIFT(auVar23,0x2f) & 1) << 5 |
                           (ushort)(AUSHIFT(auVar23,0x37) & 1) << 6 |
                          (ushort)(AUSHIFT(auVar23,0x3f) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3_Qb = 0;
            in_XMM2_Qb = auVar23._8_8_;
            goto LAB_0067d026;
          }
          goto LAB_0067d444;
        }
        dVar31 = (double)(__int64)((ulonglong)param_1 >> 0x20);
        in_XMM2_Qb = uVar28 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1c;
          _local_c = DAT_006b0260;
          goto LAB_0067d7b1;
        }
LAB_0067d4ca:
        dVar32 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_0067d5c9:
            return (float10)DAT_006b0250;
          }
          _local_c = (double)(__int64)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_0067d7b1;
        }
      }
      else {
        uVar7 = 0;
LAB_0067d444:
        in_XMM2_Qb = auVar23._8_8_;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar32 = dVar13;
        dVar34 = DAT_006b01d0;
        dVar31 = DAT_006b01e0;
        if (uVar3 == 0) goto LAB_0067d4ca;
      }
      dVar13 = (double)(__int64)(((ulonglong)dVar32 & CONCAT44(DAT_006b01f0_hi,(undefined4)DAT_006b01f0))
                       >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar34 = (double)(__int64)((ulonglong)dVar34 & (ulonglong)dVar32 | (ulonglong)dVar31) *
               *(double *)(((char *)0x006ac940) + uVar8 * 4);
      dVar31 = *(double *)(((char *)0x006ac940) + uVar8 * 4);
      dVar14 = *(double *)(DAT_PTR_006acd50 + uVar8 * 8);
      dVar33 = *(double *)(UNK_PTR_006acd58 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_0067d026;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_0067d60f:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_0067d7b1;
    }
LAB_0067d6bc:
    _local_c = auVar23._0_8_;
    uVar28 = in_XMM3_Qb & auVar23._8_8_;
    auVar20._0_4_ = -(uint)((int)((*(unsigned __int64 *)0x006b01d0) & (ulonglong)_local_c) == 0);
    auVar20._4_4_ = -(uint)((int)(((*(unsigned __int64 *)0x006b01d0) & (ulonglong)_local_c) >> 0x20) == 0);
    auVar20._8_4_ = -(uint)((int)uVar28 == 0);
    auVar20._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
    if ((byte)(AUSHIFT(auVar20,7) & 1 | (AUSHIFT(auVar20,0xf) & 1) << 1 |
               (AUSHIFT(auVar20,0x17) & 1) << 2 | (AUSHIFT(auVar20,0x1f) & 1) << 3 |
               (AUSHIFT(auVar20,0x27) & 1) << 4 | (AUSHIFT(auVar20,0x2f) & 1) << 5 |
               (AUSHIFT(auVar20,0x37) & 1) << 6 | AUSHIFT(auVar20,0x3f) << 7) == 0xff) {
      if (uVar3 != 0 || uVar7 != 0xbff00000) {
        if ((auVar23._6_2_ & 0x8000) == 0) {
          if ((uVar11 & 0x7ff0) < 0x3ff0) {
            return (float10)0;
          }
        }
        else if (0x3fef < (uVar11 & 0x7ff0)) {
          return (float10)0;
        }
LAB_0067d72e:
        return (float10)DAT_006b0240;
      }
LAB_0067d79a:
      _local_c = (double)(__int64)CONCAT44(param_3,param_2) + DAT_006b0260;
      uVar10 = 0x1c;
      goto LAB_0067d7b1;
    }
  }
  _local_c = _local_c + _local_c;
  uVar10 = 0x3ee;
LAB_0067d7b1:
  FUN_0067b9b7(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}
