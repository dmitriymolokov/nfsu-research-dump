/* spd-match: far pct=66.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FD840 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fd840(int obj)

{

  uint uVar1;
  
  uVar1 = *(int *)(obj + 0x84) + 1;
  *(uint *)(obj + 0x84) = uVar1;
  if (*(uint *)(obj + 0x5c) <= uVar1) {
    uVar1 = *(int *)(obj + 0x88) + 1;
    *(undefined4 *)(obj + 0x84) = 0;
    *(uint *)(obj + 0x88) = uVar1;
    if (*(uint *)(obj + 0x60) <= uVar1) {
      *(undefined4 *)(obj + 0x88) = 0;
    }
  }
  return;
}
