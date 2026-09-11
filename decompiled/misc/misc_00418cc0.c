/* spd-match: far pct=3.03 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00418CC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004dcbe0();
void __fastcall FUN_00418cc0(int obj)

{

  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xde02cf84;
  local_10 = 0xd58384eb;
  local_8 = 0x12349000;
  FUN_004dcbe0(&local_10,"GenericOKDialog.fng",*(undefined4 *)(obj + 0xc));
  return;
}
