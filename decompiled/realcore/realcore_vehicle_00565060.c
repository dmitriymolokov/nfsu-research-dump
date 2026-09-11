/* spd-match: far pct=47.91 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00565060 */
#include "ghidra_compat.h"
extern float _DAT_006cc7bc;
void __fastcall FUN_00565060(float *obj, float *p) {
  float f0 = p[0], f1 = p[1], f2 = p[2], f4 = p[4], f5 = p[5], f6 = p[6], f8 = p[8], f9 = p[9], f10 = p[10], f12 = p[12], f13 = p[13], f14 = p[14];
  float det = (f5*f10-f9*f6)*f0 - (f10*f4-f8*f6)*f1 + (f9*f4-f8*f5)*f2;
  float r = _DAT_006cc7bc / det;
  obj[0] = (f5*f10-f9*f6)*r; obj[1] = -(f10*f1-f9*f2)*r; obj[2] = (f6*f1-f5*f2)*r; obj[3] = 0.0f;
  obj[4] = -(f10*f4-f8*f6)*r; obj[5] = (f10*f0-f8*f2)*r; obj[6] = -(f6*f0-f4*f2)*r; obj[7] = 0.0f;
  obj[8] = (f9*f4-f8*f5)*r; obj[9] = -(f9*f0-f8*f1)*r; obj[10] = (f5*f0-f4*f1)*r; obj[11] = 0.0f;
  obj[12] = -(obj[0]*f12 + obj[4]*f13 + obj[8]*f14);
  obj[13] = -(obj[1]*f12 + obj[5]*f13 + obj[9]*f14);
  obj[14] = -(obj[2]*f12 + obj[6]*f13 + obj[10]*f14);
  obj[15] = 1.0f;
}
