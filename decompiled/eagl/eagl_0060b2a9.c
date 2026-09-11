/* spd-match: far pct=8.93 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0060B2A9 */
#include <windows.h>

extern int __cdecl FUN_005f7a96(void);

int __cdecl FUN_0060b2a9(int p1, unsigned int *p2, unsigned int *p3) {
  if (!p2) return 1;
  if (FUN_005f7a96() == 0) {
    unsigned int divisor = p2[0] & 0xffffff;
    unsigned int limit = p2[1] / divisor;
    if (limit > 1) {
      float *f_ptr = (float*)(p2 + 4);
      float f1 = f_ptr[0];
      float f2 = f_ptr[1];
      if (f1 == f2) return 0;
      return 0;
    }
  }
  return 0;
}
