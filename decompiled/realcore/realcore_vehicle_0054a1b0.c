/* spd-match: far pct=35.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054A1B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054a140();
int __cdecl FUN_0054b700();
void __fastcall FUN_0054a1b0(undefined4 val, undefined4 param_1)

{

  undefined4 unaff_ESI;
  
  FUN_0054b700(unaff_ESI,param_1);
  FUN_0054a140(unaff_ESI,val);
  return;
}
