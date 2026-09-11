/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00548A30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005489c0();
void __fastcall FUN_00548a30(undefined4 val, int esi)

{

  int iVar1;
  
  iVar1 = FUN_005489c0(esi,val);
  *(undefined1 *)(iVar1 + esi) = 0;
  return;
}
