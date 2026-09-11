/* spd-match: far pct=3.35 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2297/batches/20260724T143135Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int _DAT_006df000;
extern int _DAT_006df010;
extern int _DAT_006df020;
extern int _DAT_006df030;
extern unsigned int fRam006df004;
extern unsigned int fRam006df008;
extern unsigned int fRam006df00c;
extern unsigned int fRam006df014;
extern unsigned int fRam006df018;
extern unsigned int fRam006df01c;
extern unsigned int fRam006df024;
extern unsigned int fRam006df028;
extern unsigned int fRam006df02c;

undefined8 *
FUN_005eb653(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_6 * param_6;
  fVar8 = param_6 * fVar7;
  fVar3 = param_6 * ((int)_DAT_006df020) + ((int)_DAT_006df030) + fVar7 * ((int)_DAT_006df010) + fVar8 * ((int)_DAT_006df000);
  fVar4 = param_6 * fRam006df024 + fVar7 * fRam006df014 + fVar8 * fRam006df004;
  fVar5 = param_6 * fRam006df028 + fVar7 * fRam006df018 + fVar8 * fRam006df008;
  fVar6 = param_6 * fRam006df02c + fVar7 * fRam006df01c + fVar8 * fRam006df00c;
  fVar7 = *(float *)(param_2 + 1);
  fVar8 = *(float *)(param_3 + 1);
  fVar1 = *(float *)(param_4 + 1);
  fVar2 = *(float *)(param_5 + 1);
  *param_1 = CONCAT44((float)(__int64)((ulonglong)*param_2 >> 0x20) * fVar3 +
                      (float)(__int64)((ulonglong)*param_3 >> 0x20) * fVar4 +
                      (float)(__int64)((ulonglong)*param_4 >> 0x20) * fVar5 +
                      (float)(__int64)((ulonglong)*param_5 >> 0x20) * fVar6,
                      (float)(__int64)*param_2 * fVar3 + (float)(__int64)*param_3 * fVar4 + (float)(__int64)*param_4 * fVar5 +
                      (float)(__int64)*param_5 * fVar6);
  *(float *)(param_1 + 1) = fVar7 * fVar3 + fVar8 * fVar4 + fVar1 * fVar5 + fVar2 * fVar6;
  return param_1;
}
