/* spd-match: far pct=24.32 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00464EA0 */
#include "ghidra_compat.h"
extern float _DAT_006b72dc;
extern float _DAT_006cc7a4;
int __cdecl FUN_00464ed0(void);
float __cdecl FUN_00464ea0(int obj) {
  float *p = (float*)(obj + 0x390);
  if (*p < _DAT_006b72dc) {
    return _DAT_006cc7a4;
  }
  return (float)FUN_00464ed0();
}
