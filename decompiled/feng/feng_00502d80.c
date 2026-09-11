/* spd-match: far pct=50.00 flags=/O2 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_00502D80 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee590();
int __cdecl FUN_004ee670();

void __fastcall FUN_00502d80(unsigned int * ctx, unsigned int * obj)
{
  unsigned int *esi;

  esi = (unsigned int *)ctx[2];
  if (esi != 0) {
    while ((unsigned int *)obj < esi + 3 || esi + 0x1a3 <= (unsigned int *)obj) {
      esi = (unsigned int *)esi[1];
      if (esi == 0) return;
    }
    FUN_004ee590();
    if (--((int *)esi)[0x1a7] == 0) {
      FUN_004ee670();
      (*(void (__fastcall **)(unsigned int *, int))(*esi))(esi, 1);
    }
  }
}
