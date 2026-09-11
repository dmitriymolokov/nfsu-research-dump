/* spd-match: far pct=28.57 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FDE00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fde00(int obj)

{
  uint uVar1;

  *(undefined4 *)(obj + 0x6c) = *(undefined4 *)(obj + 0x90);
  *(undefined4 *)(obj + 0x70) = *(undefined4 *)(obj + 0x94);
  uVar1 = *(uint *)(obj + 0x58);
  *(uint *)(obj + 0x58) = uVar1 & 0xffffff9d;
  if (*(int *)(obj + 0x84) == 0) {
    *(uint *)(obj + 0x58) = uVar1 & 0xffffff95;
    *(undefined4 *)(obj + 0x6c) = 0;
  }
  if (*(int *)(obj + 0x88) == 0) {
    *(uint *)(obj + 0x58) = *(uint *)(obj + 0x58) & 0xffffffef;
    *(undefined4 *)(obj + 0x70) = 0;
  }
  return;
}
