/* spd-match: far pct=13.33 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_00526420 */
#include "ghidra_compat.h"
void FUN_00526420(int* p1, int p2, int p3) {
  struct { int dummy[200]; int ebp_234; int ebp_264; } frame;
  if (p2) {
    frame.ebp_234 = p2;
    frame.ebp_264 = p3;
  }
  *(volatile int*)p1 = frame.ebp_234;
}
