/* spd-match: far pct=36.96 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.5q/va_004521C0 */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern void *PTR_FUN_006c90cc;

void __cdecl FUN_004521c0(undefined4 this_ptr, undefined4 param_2, undefined4 param_3, int param_esi) {
  undefined4 *esi = (undefined4 *)param_esi;

  FUN_0044e2b0(0xc, this_ptr, param_2);
  *esi = (unsigned int)&PTR_FUN_006c90cc;
  esi[0x81] = 0;
  esi[0x81] = 0;
  esi[0x80] = param_3;
  return;
}
