/* spd-match: far pct=8.53 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004FEA10 */
#include <math.h>
extern float _DAT_006b6710;
unsigned short __fastcall FUN_004fea10(float *p1, float *p2) {
  float t = _DAT_006b6710;
  float a = p1[0], b = p2[0];
  if (a < b + t && a > b - t) {
    a = p1[1]; b = p2[1];
    if (a < b + t && a > b - t) {
      a = p1[2]; b = p2[2];
      if (a < b + t && a > b - t) return 1;
    }
  }
  return 0;
}
