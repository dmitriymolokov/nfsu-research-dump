/* spd-match: far pct=52.50 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_00593C20 */
#include <math.h>
extern float _DAT_006cc7ac;
extern float _DAT_006cc7bc;
void __fastcall FUN_00593c20(float* p, int dummy, float fVal) {
  float f1 = _DAT_006cc7bc / p[9];
  float f2 = f1 * p[9];
  float f3 = f2 * p[4];
  float f4 = f3 * _DAT_006cc7ac;
  float f5 = p[5] + p[5];
  float f6 = (f5 + f4) * f2 + p[6];
  float res = f6 * f1;
  if (fabs(res) >= fVal) {
    p[3] = (res / fabs(res)) * fVal * p[9];
  }
}
