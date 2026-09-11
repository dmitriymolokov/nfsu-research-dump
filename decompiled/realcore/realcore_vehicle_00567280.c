/* spd-match: close pct=92.68 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00567280 */
#include <math.h>
float __fastcall FUN_00567280(float *ecx, float *eax) {
  float dx = ecx[0] - eax[0];
  float dy = ecx[1] - eax[1];
  float dz = ecx[2] - eax[2];
  float m1 = dx * dx;
  float m2 = dy * dy;
  float m3 = dz * dz;
  return (float)sqrt((double)(m1 + m2 + m3));
}
