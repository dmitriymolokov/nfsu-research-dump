/* spd-match: far pct=15.56 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00416950 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00414a10();
int __cdecl FUN_00414a60();
int __cdecl FUN_004f68c0();
void __fastcall FUN_00416950(int obj)

{

  FUN_004f68c0(0x20,"on_option_%02d",obj + 1);
  FUN_00414a10();
  FUN_004f68c0(0x20,"off_option_%02d",obj + 1);
  FUN_00414a60();
  return;
}
