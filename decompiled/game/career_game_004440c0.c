/* spd-match: far pct=20.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004440C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00443a10();
extern int DAT_007372b0;
void __fastcall FUN_004440c0(undefined4 * obj, undefined4 param_1)

{

  *obj = 0;
  obj[1] = 0;
  obj[2] = 0;
  obj[3] = 0;
  obj[4] = 0;
  obj[5] = 0;
  obj[7] = 0;
  obj[8] = 0;
  obj[9] = 0;
  obj[6] = 0x3f800000;
  FUN_00443a10(&DAT_007372b0,param_1);
  return;
}
