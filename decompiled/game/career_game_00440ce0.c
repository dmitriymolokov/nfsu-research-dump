/* spd-match: far pct=13.89 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00440CE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00440a40();
undefined1 __fastcall FUN_00440ce0(undefined4 * obj, undefined4 param_1)

{

  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *obj;
  local_1c = obj[1];
  local_18 = 0x47c34f8d;
  FUN_00440a40(param_1,&local_20,0,0,&local_21);
  return local_21;
}
