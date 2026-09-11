/* spd-match: far pct=19.51 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00673026 */
#include "ghidra_compat.h"
void __stdcall FUN_00673026(void *a, void *b) {
  __try {
    ((void (*)(void *, void *, void *, void *))0x00682d12)(a, 0, (void*)0x0067304f, b);
  } __except(1) {
    unsigned int *p = (unsigned int *)b;
    p[1] &= ~2;
  }
}
