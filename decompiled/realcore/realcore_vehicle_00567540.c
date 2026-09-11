/* spd-match: far pct=28.57 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s2/va_00567540 */
#include <windows.h>
struct Vec3 { float f[3]; };
void __fastcall FUN_00567540(float *ecx, float *edx, float *eax) {
  float *a = (float*)ecx;
  float *b = (float*)edx;
  float *o = (float*)eax;
  o[0] = a[0] * b[2] - a[2] * b[0];
  o[1] = a[1] * b[0] - b[1] * a[0];
  o[2] = a[2] * b[1] - a[1] * b[2];
}
