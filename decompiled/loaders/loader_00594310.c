/* spd-match: far pct=31.58 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00594310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063c2c0();
extern unsigned char *DAT_00734488;
void __fastcall FUN_00594310(int obj)

{

  DAT_00734488 = DAT_00734488 + -1;
  FUN_0063c2c0(*(undefined4 *)(obj + 0xc),100);
  return;
}
