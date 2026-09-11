/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052A0A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
void __fastcall FUN_0052a0a0(int obj)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(obj + 0x18dc);
  *(undefined4 *)(obj + 0x18e8) = 2;
  FUN_00532640();
  FUN_00532670(uVar1,uVar1,0,0);
  *(undefined4 *)(obj + 0x17dc) = uVar1;
  return;
}
