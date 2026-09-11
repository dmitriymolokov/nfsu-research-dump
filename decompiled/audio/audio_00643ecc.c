/* spd-match: far pct=9.77 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00643ECC */
#include "ghidra_compat.h"
struct Vec4 { float x, y, z, w; };
struct Mat4 { float m[16]; };
void FUN_00643ecc(float *out, float *in, float *mat) {
  float *a = in; float *b = mat;
  float *o = out;
  o[0] = a[0]*b[0] + a[1]*b[4] + a[2]*b[8] + a[3]*b[12];
  o[1] = a[0]*b[1] + a[1]*b[5] + a[2]*b[9] + a[3]*b[13];
  o[2] = a[0]*b[2] + a[1]*b[6] + a[2]*b[10] + a[3]*b[14];
  o[3] = a[0]*b[3] + a[1]*b[7] + a[2]*b[11] + a[3]*b[15];
}
