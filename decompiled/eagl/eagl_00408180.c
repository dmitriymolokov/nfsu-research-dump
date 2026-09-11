/* spd-match: far pct=26.00 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00408180 */
#include "ghidra_compat.h"
void __stdcall FUN_00408180(float *obj, float *src, float val) {
  float t1 = src[0] * val;
  float t2 = src[1] * val;
  float t3 = src[2] * val;
  obj[2] = t3;
  obj[0] = t1;
  obj[1] = t2;
}
