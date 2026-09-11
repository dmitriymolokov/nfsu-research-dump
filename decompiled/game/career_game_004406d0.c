/* spd-match: close pct=83.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004406D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00440740();
void __fastcall FUN_004406d0(int obj)

{

  *(undefined4 *)(obj + 0x2a0) = 0;
  *(undefined4 *)(obj + 0x2a4) = 0;
  *(undefined4 *)(obj + 0x2a8) = 0;
  *(undefined4 *)(obj + 0x2ac) = 0;
  *(undefined4 *)(obj + 0x2b4) = 0;
  *(undefined4 *)(obj + 0x2b8) = 0;
  *(undefined4 *)(obj + 700) = 0;
  FUN_00440740();
  return;
}
