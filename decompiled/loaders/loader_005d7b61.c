/* spd-match: far pct=24.07 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.1-filter100/va_005D7B61 */
#include "ghidra_compat.h"
struct S { unsigned int f0; unsigned int f1; unsigned int f2; unsigned int f3; unsigned int f4; unsigned int f5; unsigned int f6; unsigned int f7; };
extern void *PTR_FUN_006a0c14;
void __stdcall FUN_005d7b61(struct S *p, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4) {
  p->f2 = 0;
  p->f3 = 0;
  p->f4 = a1;
  p->f5 = a2;
  p->f6 = a3;
  p->f1 = 3;
  p->f0 = (unsigned int)&PTR_FUN_006a0c14;
  p->f7 = a4;
}
