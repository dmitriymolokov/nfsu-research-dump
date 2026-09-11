/* spd-match: far pct=16.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00418BE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f4d0();
extern int DAT_0070108e;
void __fastcall FUN_00418be0(int obj)

{

  *(undefined4 *)(obj + 0x244) = 0x97a7ed57;
  DAT_0070108e = 1;
  FUN_0041f4d0();
  return;
}
