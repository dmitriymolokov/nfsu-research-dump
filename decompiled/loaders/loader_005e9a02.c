/* spd-match: far pct=3.97 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);

extern int _DAT_006def80;
extern unsigned int fRam006def84;
extern unsigned int fRam006def88;
extern unsigned int fRam006def8c;

void FUN_005e9a02(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ghidra_m128 auVar9;
  ghidra_m128 auVar10;
  
  fVar5 = (float)(__int64)*param_2;
  fVar6 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
  fVar7 = (float)(__int64)param_2[1];
  fVar8 = (float)(__int64)((ulonglong)param_2[1] >> 0x20);
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar2 = fVar6 * fVar6 + fVar4;
  (*(float *)((unsigned char *)&(auVar9) + 4)) = fVar2;
  (*(float *)&(auVar9)) = fVar2;
  (*(float *)((unsigned char *)&(auVar9) + 8)) = fVar2;
  (*(float *)((unsigned char *)&(auVar9) + 12)) = fVar2;
  fVar1 = fVar5 * fVar5 + fVar3 + fVar2;
  (*(float *)((unsigned char *)&(auVar10) + 4)) = fVar2;
  (*(float *)&(auVar10)) = fVar1;
  (*(float *)((unsigned char *)&(auVar10) + 8)) = fVar3 + fVar3;
  (*(float *)((unsigned char *)&(auVar10) + 12)) = fVar4 + fVar4;
  auVar10 = rcpss(auVar9,auVar10);
  fVar2 = (*(float *)&(auVar10));
  fVar1 = (fVar2 + fVar2) - fVar2 * fVar1 * fVar2;
  fVar6 = fVar6 * fRam006def84;
  fVar7 = fVar7 * fRam006def88;
  fVar8 = fVar8 * fRam006def8c;
  *param_1 = fVar5 * _DAT_006def80 * fVar1;
  param_1[1] = fVar6 * fVar1;
  param_1[2] = fVar7 * fVar1;
  param_1[3] = fVar8 * fVar1;
  return;
}
