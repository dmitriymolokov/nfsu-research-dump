/* spd-match: far pct=5.26 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2297/batches/20260724T143135Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int _DAT_006df040;
extern int _DAT_006df050;
extern int _DAT_006df060;
extern int _DAT_006df070;
extern unsigned int fRam006df044;
extern unsigned int fRam006df048;
extern unsigned int fRam006df04c;
extern unsigned int fRam006df054;
extern unsigned int fRam006df058;
extern unsigned int fRam006df05c;
extern unsigned int fRam006df064;
extern unsigned int fRam006df068;
extern unsigned int fRam006df06c;
extern unsigned int fRam006df074;
extern unsigned int fRam006df078;
extern unsigned int fRam006df07c;

undefined8 *
FUN_005eb529(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_6 * param_6;
  fVar5 = param_6 * fVar4;
  fVar1 = param_6 * ((int)_DAT_006df060) + ((int)_DAT_006df070) + fVar4 * ((int)_DAT_006df050) + fVar5 * ((int)_DAT_006df040);
  fVar2 = param_6 * fRam006df064 + fRam006df074 + fVar4 * fRam006df054 + fVar5 * fRam006df044;
  fVar3 = param_6 * fRam006df068 + fRam006df078 + fVar4 * fRam006df058 + fVar5 * fRam006df048;
  fVar4 = param_6 * fRam006df06c + fRam006df07c + fVar4 * fRam006df05c + fVar5 * fRam006df04c;
  *param_1 = CONCAT44((float)(__int64)((ulonglong)*param_2 >> 0x20) * fVar1 +
                      (float)(__int64)((ulonglong)*param_4 >> 0x20) * fVar3 +
                      (float)(__int64)((ulonglong)*param_3 >> 0x20) * fVar2 +
                      (float)(__int64)((ulonglong)*param_5 >> 0x20) * fVar4,
                      (float)(__int64)*param_2 * fVar1 + (float)(__int64)*param_4 * fVar3 +
                      (float)(__int64)*param_3 * fVar2 + (float)(__int64)*param_5 * fVar4);
  return param_1;
}
