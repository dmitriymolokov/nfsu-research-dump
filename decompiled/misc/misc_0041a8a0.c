/* spd-match: far pct=46.15 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_0041A8A0 */
#include "ghidra_compat.h"
extern int DAT_0071d890[];
void __stdcall FUN_00419f50(int, int);
void __stdcall FUN_0041a8a0(int obj) {
  if (DAT_0071d890[obj]) {
    FUN_00419f50(obj, 2);
  }
}
