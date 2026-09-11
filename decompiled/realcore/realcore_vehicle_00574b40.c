/* spd-match: far pct=52.08 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00574B40 */
#include <windows.h>
typedef struct { float* arr; int len; } Container;
int __stdcall FUN_00574b40(Container* c, float v) {
  int ecx = 0;
  int len = c->len;
  float* p = c->arr;
  if (len > 0) {
    while (ecx < len) {
      if (v < *p) break;
      ecx++;
      p += 2;
    }
    if (ecx > 0) ecx--;
  }
  return ecx;
}
