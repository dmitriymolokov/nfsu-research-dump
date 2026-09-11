/* spd-match: far pct=17.19 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.45-s1/va_00574B70 */
#include "ghidra_compat.h"
extern float DAT_006cc7a4;
extern int __fastcall FUN_00574b40(float);
struct Context { float *arr; int len; };
float __fastcall FUN_00574b70(Context *ecx, int edx, float f) {
  float *esi = ecx->arr;
  int edi = ecx->len;
  if (f < esi[0] || esi[edi * 2 - 2] <= f) return DAT_006cc7a4;
  int eax = FUN_00574b40(f);
  if (eax >= 0 && eax <= edi - 2) {
    float f0 = esi[eax * 2];
    float f1 = esi[eax * 2 + 1];
    float f2 = esi[eax * 2 + 2];
    float f3 = esi[eax * 2 + 3];
    return (f - f0) * ((f3 - f1) / (f2 - f0)) + f1;
  }
  return (f - esi[eax * 2]) * DAT_006cc7a4 + esi[eax * 2 + 1];
}
