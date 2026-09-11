/* spd-match: far pct=22.73 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00553300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f67f0();
int __cdecl FUN_0059fb80();
void __fastcall FUN_00553300(int val)

{

  int iVar1;
  
  if (val == 0) {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f67f0(iVar1);
    return;
  }
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  return;
}
