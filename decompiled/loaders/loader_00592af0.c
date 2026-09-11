/* spd-match: far pct=36.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00592AF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00592af0(int obj)

{
  int iVar1;

  iVar1 = obj + 0x1c;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0x20) = iVar1;
  *(undefined4 *)(obj + 0x14) = 0;
  *(undefined4 *)(obj + 0x18) = 0;
  *(undefined4 *)(obj + 0x10) = 0xbf800000;
  *(undefined4 *)(obj + 8) = 0;
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined1 *)(obj + 0x24) = 0;
  return;
}
