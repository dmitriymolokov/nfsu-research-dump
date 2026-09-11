/* spd-match: far pct=9.68 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00537CA0 */
#include "ghidra_compat.h"
extern int DAT_006f1dd8;
void __cdecl FUN_00537cc0(int);
void __stdcall FUN_00537ca0(void *ptr, int val) {
  int *esi = (int *)ptr;
  if (DAT_006f1dd8 != 0) {
    esi[0x1c4 / 4] = val;
    FUN_00537cc0(val);
  }
}
