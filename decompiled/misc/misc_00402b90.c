/* spd-match: far pct=63.46 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00402B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00402b90(int obj)

{
  int iVar1;

  iVar1 = obj + 8;
  *(int *)obj = obj;
  *(int *)(obj + 4) = obj;
  *(int *)iVar1 = iVar1;
  *(int *)(obj + 0xc) = iVar1;
  *(undefined4 *)(obj + 0x40) = 0;
  *(undefined4 *)(obj + 0x44) = 0;
  *(undefined1 *)(obj + 0x48) = 0;
  *(undefined1 *)(obj + 0x49) = 0;
  *(undefined1 *)(obj + 0x4a) = 0;
  *(undefined1 *)(obj + 0x4b) = 0;
  *(undefined1 *)(obj + 0x4c) = 0;
  *(undefined1 *)(obj + 0x4d) = 0;
  *(undefined4 *)(obj + 0x50) = 0;
  *(undefined4 *)(obj + 0x54) = 0;
  *(undefined4 *)(obj + 0x58) = 0;
  *(undefined4 *)(obj + 0x5c) = 0;
  return;
}
