/* spd-match: far pct=63.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00529A00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584310();
void __fastcall FUN_00529a00(int obj)

{

  *(undefined4 *)(obj + 0x1e50) = 0;
  *(undefined4 *)(obj + 0x1a3c) = 0;
  *(undefined4 *)(obj + 0x1a40) = 0;
  *(undefined4 *)(obj + 0x1d14) = 0;
  FUN_00584310(*(undefined4 *)(obj + 0x1f8c));
  return;
}
