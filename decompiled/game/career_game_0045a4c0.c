/* spd-match: far pct=7.84 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045A4C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00459710();
int __cdecl FUN_0045a5b0();
void __fastcall FUN_0045a4c0(int obj)

{

  if (*(int *)(*(int *)(obj + 0x14) + 4) != 1) {
    FUN_00459710(*(undefined4 *)(obj + 0x3d0),obj + 0x60,obj + 0x70);
    FUN_0045a5b0(obj + 0x60,obj + 0x80);
  }
  return;
}
