/* spd-match: far pct=19.35 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00578010 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00577d10(int);
extern int __cdecl FUN_00577d50();
int __fastcall FUN_00578010(int val, int param_1) {
  if (param_1 == 0) {
    const char *p = (const char*)0x6cad50;
    int h = -1;
    do {
      h = h * 0x21 + (unsigned char)*p;
      p++;
    } while (*p != 0);
    param_1 = h;
  }
  if (val == 0) return 0;
  if (param_1 != 0) {
    FUN_00577d10(param_1);
    return FUN_00577d50();
  }
  return FUN_00577d50();
}
