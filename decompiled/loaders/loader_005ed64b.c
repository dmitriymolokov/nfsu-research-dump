/* spd-match: far pct=1.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);


void FUN_005ed64b(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ghidra_m128 auVar7;
  ghidra_m128 auVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = (float)(__int64)*param_2;
  fVar3 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
  fVar9 = *(float *)(param_2 + 1);
  if (((uint)param_3 & 0xf) == 0) {
    fVar13 = param_3[8] * fVar9 + param_3[0xc];
    fVar14 = param_3[9] * fVar9 + param_3[0xd];
    fVar15 = param_3[10] * fVar9 + param_3[0xe];
    fVar16 = param_3[0xb] * fVar9 + param_3[0xf];
    fVar10 = param_3[4];
    fVar11 = param_3[5];
    fVar9 = param_3[6];
    fVar12 = param_3[7];
    fVar2 = *param_3;
    fVar4 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[3];
  }
  else {
    fVar13 = (float)(__int64)*(undefined8 *)(param_3 + 8) * fVar9 + (float)(__int64)*(undefined8 *)(param_3 + 0xc);
    fVar14 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar9 +
             (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
    fVar15 = (float)(__int64)*(undefined8 *)(param_3 + 10) * fVar9 + (float)(__int64)*(undefined8 *)(param_3 + 0xe);
    fVar16 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 10) >> 0x20) * fVar9 +
             (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 0xe) >> 0x20);
    fVar10 = (float)(__int64)*(undefined8 *)(param_3 + 4);
    fVar11 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    fVar9 = (float)(__int64)*(undefined8 *)(param_3 + 6);
    fVar12 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 6) >> 0x20);
    fVar2 = (float)(__int64)*(undefined8 *)param_3;
    fVar4 = (float)(__int64)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar5 = (float)(__int64)*(undefined8 *)(param_3 + 2);
    fVar6 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  }
  (*(float *)((unsigned char *)&(auVar7) + 4)) = fVar1;
  (*(float *)&(auVar7)) = fVar1;
  (*(float *)((unsigned char *)&(auVar7) + 8)) = fVar1;
  (*(float *)((unsigned char *)&(auVar7) + 12)) = fVar1;
  fVar13 = fVar2 * fVar1 + fVar10 * fVar3 + fVar13;
  fVar14 = fVar4 * fVar1 + fVar11 * fVar3 + fVar14;
  fVar15 = fVar5 * fVar1 + fVar9 * fVar3 + fVar15;
  fVar16 = fVar6 * fVar1 + fVar12 * fVar3 + fVar16;
  (*(float *)((unsigned char *)&(auVar8) + 4)) = fVar14;
  (*(float *)&(auVar8)) = fVar13;
  (*(float *)((unsigned char *)&(auVar8) + 8)) = fVar15;
  (*(float *)((unsigned char *)&(auVar8) + 12)) = fVar16;
  auVar8 = rcpps(auVar7,auVar8);
  fVar9 = (*(float *)((unsigned char *)&(auVar8) + 12));
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar16 * fVar9;
  *param_1 = CONCAT44(fVar14 * fVar9,fVar13 * fVar9);
  *(float *)(param_1 + 1) = fVar15 * fVar9;
  return;
}
