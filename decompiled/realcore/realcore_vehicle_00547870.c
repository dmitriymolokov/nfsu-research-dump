/* spd-match: far pct=25.40 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00547870 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004389b0();
int __cdecl FUN_004392a0();
int __cdecl FUN_0043b4e0();
int __cdecl FUN_005479e0();
int __cdecl FUN_00548840();
void __fastcall FUN_00547870(undefined4 val, undefined4 param_1)

{

  undefined1 local_40c [1036];
  
  FUN_004392a0();
  FUN_004389b0(1);
  FUN_00548840(val);
  FUN_0043b4e0(val,local_40c);
  FUN_005479e0(param_1,1,1);
  return;
}
