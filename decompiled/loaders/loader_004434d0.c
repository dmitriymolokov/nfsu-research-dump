/* spd-match: far pct=1.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004434D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00443450();
undefined4 __fastcall FUN_004434d0(int * obj)

{
  int iVar1;
  uint uVar2;

  if (*obj == -0x7ffcbeb9) {
    iVar1 = obj[3];
    uVar2 = *(uint *)((int)obj + iVar1 + 0x14);
    FUN_00443450((int)obj + iVar1 + 0x18,uVar2 / 0x14,(int)obj + uVar2 + 0x10 + iVar1 + 0x10,
                 *(uint *)((int)obj + uVar2 + 0xc + iVar1 + 0x10) / 0xb4);
    return 1;
  }
  return 0;
}
