/* spd-match: far pct=14.29 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_005409C0 */
#include "ghidra_compat.h"
extern float _DAT_006cc7bc;
void __fastcall FUN_005409c0(float *obj, float *p) {
  float x = p[0], y = p[1], z = p[2];
  float m = (float)sqrt(x * x + y * y + z * z);
  float inv = _DAT_006cc7bc / m;
  volatile float tx = x * inv;
  volatile float ty = y * inv;
  volatile float tz = z * inv;
  obj[0] = tx;
  obj[1] = ty;
  obj[2] = tz;
  obj[3] = 0.0f;
}
