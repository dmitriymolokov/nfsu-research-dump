/* spd-match: far pct=4.17 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00568200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733ff8;
uint __fastcall FUN_00568200(uint obj)

{

  uint uVar1;
  
  if (obj < 0x100) {
    uVar1 = (&DAT_00733ff8)[obj];
  }
  else {
    uVar1 = 0;
  }
  if ((*(int *)(uVar1 + 4) != 1) && (*(int *)(uVar1 + 4) != 7)) {
    uVar1 = *(uint *)(uVar1 + 8);
    switch(uVar1) {
    default:
      return CONCAT31((int3)(uVar1 >> 8),1);
    case 4:
      break;
    }
  }
  return uVar1 & 0xffffff00;
}
