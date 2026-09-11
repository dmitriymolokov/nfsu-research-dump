/* spd-match: far pct=22.22 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00540BE0 */
#include "ghidra_compat.h"
typedef struct { float data[4]; } FloatVec4;
void __fastcall FUN_00540be0(FloatVec4 *out, const FloatVec4 *in) {
  FloatVec4 t;
  t.data[0] = in->data[0];
  t.data[1] = in->data[1];
  t.data[2] = -in->data[2];
  t.data[3] = in->data[3];
  out->data[0] = t.data[0];
  out->data[1] = t.data[1];
  out->data[2] = t.data[2];
  out->data[3] = t.data[3];
}
