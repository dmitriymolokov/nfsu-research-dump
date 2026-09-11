/* spd-match: far pct=18.75 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005447C0 */
#include "ghidra_compat.h"
struct Frame { char data[0x3d4]; };
int __cdecl FUN_005447c0(int v, int p1, int p2, int p3, int p4, int p5, float p6) {
  struct Frame f;
  float* p = (float*)&f;
  *p = p6;
  if (*p == 0.0f) return 1;
  return 0;
}
