/* spd-match: far pct=14.52 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00567500 */
#include "ghidra_compat.h"
struct Vec4 { float x, y, z, w; };
void __fastcall FUN_00567500(float *out, float *in1, float *in2, float s) {
  float t0, t1, t2, t3;
  t0 = s * in1[1];
  t1 = s * in1[2];
  t2 = s * in1[3];
  t3 = s * in1[0];
  out[3] = t2 + in2[3];
  out[0] = t3 + in2[0];
  out[1] = t0 + in2[1];
  out[2] = t1 + in2[2];
}
