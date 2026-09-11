/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5q/va_00548A00 */
#include "ghidra_compat.h"

void __cdecl FUN_00548980(char *obj, int param_1);
void __stdcall FUN_00548a00(char *obj, int param_1)
{
  int edi = 0;
  if (obj != (char *)0x0) {
    if (obj[0] != '\0') {
      char cl;
      do {
        cl = obj[edi + 1];
        edi = edi + 1;
      } while (cl != '\0');
    }
  }
  FUN_00548980(obj, param_1);
}
