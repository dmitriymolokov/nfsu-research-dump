/* spd-match: far pct=5.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00433620 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00433620(int obj, int param_1)

{
  char cVar1;

  cVar1 = *(char *)(obj + 8);
  *(undefined1 *)(obj + 9) = (undefined1)param_1;
  *(undefined1 *)(obj + 8) = (undefined1)param_1;
  *(float *)(obj + 0x14) = (*(float *)(obj + 0x14) - (float)(int)cVar1) + (float)param_1;
  return;
}
