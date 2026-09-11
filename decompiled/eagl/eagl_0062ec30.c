/* spd-match: far pct=11.46 flags=/Og /c /nologo /TC method=m39 source=m39/m4g0-s01/va_0062EC30 */
#include "ghidra_compat.h"
void __fastcall FUN_0062ec30(float *ecx, float *esi, float *eax) {
  float temp8, tempC;
  temp8 = -(eax[1] * esi[0]);
  tempC = esi[3] * eax[3];
  ecx[0] = (esi[0] * eax[3]) * eax[3] - (eax[1] * esi[3]) * eax[2];
  ecx[1] = (esi[0] * eax[3]) * eax[2] + (eax[1] * esi[3]) * eax[3];
  ecx[2] = temp8 * eax[3] + tempC * eax[2];
  ecx[3] = tempC * eax[3] - temp8 * eax[2];
}
