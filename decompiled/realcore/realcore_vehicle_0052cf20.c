/* spd-match: far pct=8.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052CF20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00564a50();
undefined4 __fastcall FUN_0052cf20(undefined4 val)

{

  int iVar1;
  
  switch(val) {
  case 0xb:
  case 0x10:
    return 0;
  case 0xe:
    iVar1 = FUN_00564a50(2);
    if (iVar1 == 0) {
      return 2;
    }
    if (iVar1 == 1) {
      return 3;
    }
  }
  return 0xffffffff;
}
