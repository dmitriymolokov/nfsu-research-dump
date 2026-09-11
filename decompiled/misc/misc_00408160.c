/* spd-match: far pct=6.45 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_00408160 */
#include <windows.h>
struct Vec3 { float v[3]; };
void __fastcall FUN_00408160(float *out, float *in, float scale) {
  out[0] = in[0] * scale;
  out[1] = in[1] * scale;
  out[2] = in[2] * scale;
}
