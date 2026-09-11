/* spd-match: far pct=17.86 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004FA3D0 */
#include <stddef.h>
int __fastcall FUN_004fa3d0(int val, int div) {
  if (val < 0) {
    if (div > 1) {
      return div - ((-val) % div);
    }
    return 0;
  }
  return val % div;
}
