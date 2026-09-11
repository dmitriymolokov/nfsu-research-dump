/* spd-match: far pct=3.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);

extern int _DAT_006df230;
extern int _DAT_006df240;
extern int _DAT_006df250;

void FUN_005ed36a(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  ghidra_m128 auVar10;
  ghidra_m128 auVar11;
  
  fVar1 = *(float *)(param_2 + 1);
  fVar8 = (float)(__int64)*param_2;
  fVar9 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
  fVar4 = fVar8 - (float)(__int64)*param_3;
  fVar5 = fVar9 - (float)(__int64)((ulonglong)*param_3 >> 0x20);
  fVar6 = fVar8 - (float)(__int64)*param_4;
  fVar7 = fVar9 - (float)(__int64)((ulonglong)*param_4 >> 0x20);
  fVar2 = (fVar1 - *(float *)(param_4 + 1)) * fVar5 - (fVar1 - *(float *)(param_3 + 1)) * fVar7;
  fVar3 = fVar6 * (fVar1 - *(float *)(param_3 + 1)) - fVar4 * (fVar1 - *(float *)(param_4 + 1));
  fVar4 = fVar7 * fVar4 - fVar5 * fVar6;
  fVar7 = fVar4 * fVar4;
  fVar5 = fVar2 * fVar2 + fVar7;
  fVar6 = fVar3 * fVar3 + 0.0;
  (*(float *)((unsigned char *)&(auVar10) + 4)) = fVar5;
  (*(float *)&(auVar10)) = fVar6;
  (*(float *)((unsigned char *)&(auVar10) + 8)) = fVar5;
  (*(float *)((unsigned char *)&(auVar10) + 12)) = fVar5;
  (*(float *)((unsigned char *)&(auVar11) + 4)) = fVar6;
  (*(float *)&(auVar11)) = fVar5 + fVar6;
  (*(float *)((unsigned char *)&(auVar11) + 8)) = fVar7 + fVar7;
  (*(float *)((unsigned char *)&(auVar11) + 12)) = 0;
  auVar11 = rsqrtss(auVar10,auVar11);
  fVar7 = (*(float *)&(auVar11));
  fVar5 = _DAT_006df240 * fVar7 * (_DAT_006df250 - (fVar5 + fVar6) * fVar7 * fVar7);
  *param_1 = fVar2 * fVar5;
  param_1[1] = fVar3 * fVar5;
  param_1[2] = fVar4 * fVar5;
  param_1[3] = fVar5 * 0.0;
  param_1[3] = (float)((uint)(fVar2 * fVar5 * fVar8 + fVar4 * fVar5 * fVar1 + fVar3 * fVar5 * fVar9)
                      ^ _DAT_006df230);
  return;
}
