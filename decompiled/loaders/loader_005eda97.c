/* spd-match: far pct=2.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);

extern int _DAT_006df2e0;
extern int _DAT_006df2f0;
extern int _DAT_006df300;
extern int _DAT_006df310;
extern int _DAT_006df320;
extern int _DAT_00709490;
extern int _DAT_007094a0;
extern int _DAT_007094b0;
extern unsigned int uRam006df2e4;
extern unsigned int uRam006df2e8;
extern unsigned int uRam006df2ec;
extern unsigned int uRam006df2f4;
extern unsigned int uRam006df2f8;
extern unsigned int uRam006df2fc;
extern unsigned int uRam006df304;
extern unsigned int uRam006df308;
extern unsigned int uRam006df30c;
extern unsigned int uRam006df314;
extern unsigned int uRam006df318;
extern unsigned int uRam006df31c;
extern unsigned int uRam006df324;
extern unsigned int uRam006df328;
extern unsigned int uRam006df32c;
extern unsigned int uRam00709494;
extern unsigned int uRam00709498;
extern unsigned int uRam0070949c;
extern unsigned int uRam007094a4;
extern unsigned int uRam007094a8;
extern unsigned int uRam007094ac;

void FUN_005eda97(float *param_1,float *param_2,float *param_3)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  ghidra_m128 in_XMM5;
  ghidra_m128 auVar16;
  float fVar19;
  
  fVar5 = (float)((uint)*param_3 & _DAT_006df320);
  fVar8 = (float)((uint)param_3[1] & uRam006df324);
  fVar9 = (float)((uint)param_3[2] & uRam006df328);
  fVar10 = (float)((uint)param_3[3] & uRam006df32c);
  fVar6 = fVar5 * fVar5 + fVar9 * fVar9;
  fVar9 = fVar8 * fVar8 + fVar10 * fVar10 + fVar6;
  fVar5 = fVar6;
  fVar8 = fVar6;
  if (fVar9 != 0.0) {
    if ((_DAT_007094b0 & 1) == 0) {
      _DAT_007094b0 = _DAT_007094b0 | 1;
      _DAT_007094a0 = 0.5;
      uRam007094a4 = 0;
      uRam007094a8 = 0;
      uRam007094ac = 0;
    }
    if ((_DAT_007094b0 & 2) == 0) {
      _DAT_007094b0 = _DAT_007094b0 | 2;
      _DAT_00709490 = 3.0;
      uRam00709494 = 0;
      uRam00709498 = 0;
      uRam0070949c = 0;
    }
    (*(float *)((unsigned char *)&(auVar16) + 4)) = fVar6;
    (*(float *)&(auVar16)) = fVar9;
    (*(float *)((unsigned char *)&(auVar16) + 8)) = fVar6;
    (*(float *)((unsigned char *)&(auVar16) + 12)) = fVar6;
    auVar16 = rsqrtss(in_XMM5,auVar16);
    fVar5 = (*(float *)&(auVar16));
    fVar8 = _DAT_007094a0 * fVar5 * (_DAT_00709490 - fVar9 * fVar5 * fVar5);
    fVar9 = *param_3 * fVar8;
    fVar6 = param_3[1] * fVar8;
    fVar5 = param_3[2] * fVar8;
    fVar8 = param_3[3] * fVar8;
  }
  fVar10 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = fVar9 * fVar10 + fVar5 * fVar2 + fVar6 * fVar1 + fVar8 * fVar3;
  fVar9 = (float)((uint)fVar9 ^ _DAT_006df2e0);
  fVar6 = (float)((uint)fVar6 ^ uRam006df2e4);
  fVar5 = (float)((uint)fVar5 ^ uRam006df2e8);
  fVar8 = (float)((uint)fVar8 ^ uRam006df2ec);
  fVar11 = fVar10 * fVar6 + (float)((uint)fVar4 & _DAT_006df2f0);
  fVar12 = fVar1 * fVar6 + (float)((uint)fVar4 & uRam006df2f4);
  fVar13 = fVar2 * fVar6 + (float)((uint)fVar4 & uRam006df2f8);
  fVar14 = fVar3 * fVar6 + (float)((uint)fVar4 & uRam006df2fc);
  fVar15 = fVar10 * fVar5 + (float)((uint)fVar4 & _DAT_006df300);
  fVar17 = fVar1 * fVar5 + (float)((uint)fVar4 & uRam006df304);
  fVar18 = fVar2 * fVar5 + (float)((uint)fVar4 & uRam006df308);
  fVar19 = fVar3 * fVar5 + (float)((uint)fVar4 & uRam006df30c);
  fVar7 = fVar10 * fVar9 + fVar4;
  fVar5 = fVar10 * fVar8 + (float)((uint)fVar4 & _DAT_006df310);
  fVar6 = fVar1 * fVar8 + (float)((uint)fVar4 & uRam006df314);
  fVar10 = fVar2 * fVar8 + (float)((uint)fVar4 & uRam006df318);
  fVar8 = fVar3 * fVar8 + (float)((uint)fVar4 & uRam006df31c);
  if (((uint)param_1 & 0xf) == 0) {
    *param_1 = fVar7;
    param_1[1] = fVar1 * fVar9;
    param_1[2] = fVar2 * fVar9;
    param_1[3] = fVar3 * fVar9;
    param_1[4] = fVar11;
    param_1[5] = fVar12;
    param_1[6] = fVar13;
    param_1[7] = fVar14;
    param_1[8] = fVar15;
    param_1[9] = fVar17;
    param_1[10] = fVar18;
    param_1[0xb] = fVar19;
    param_1[0xc] = fVar5;
    param_1[0xd] = fVar6;
    param_1[0xe] = fVar10;
    param_1[0xf] = fVar8;
  }
  else {
    *(ulonglong *)param_1 = CONCAT44(fVar1 * fVar9,fVar7);
    *(ulonglong *)(param_1 + 2) = CONCAT44(fVar3 * fVar9,fVar2 * fVar9);
    *(ulonglong *)(param_1 + 4) = CONCAT44(fVar12,fVar11);
    *(ulonglong *)(param_1 + 6) = CONCAT44(fVar14,fVar13);
    param_1[8] = fVar15;
    param_1[9] = fVar17;
    param_1[10] = fVar18;
    param_1[0xb] = fVar19;
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(fVar6,fVar5);
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(fVar8,fVar10);
  }
  return;
}
