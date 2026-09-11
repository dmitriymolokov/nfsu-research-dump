/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00583250 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00457060();
void __fastcall FUN_00583250(int obj, undefined4 param_1)

{

  *(undefined4 *)(obj + 0x4d4) = param_1;
  FUN_00457060(obj + 0x3d4);
  return;
}
