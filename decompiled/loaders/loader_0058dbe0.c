/* spd-match: far pct=27.03 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058DBE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058da60();
int __cdecl FUN_0058db20();
void __fastcall FUN_0058dbe0(undefined4 val)

{

  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_0058da60(val,0x3f800000,0x461c3c00);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  FUN_0058db20();
  return;
}
