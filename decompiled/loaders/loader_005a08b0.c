/* spd-match: far pct=26.19 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A08B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733f78;
undefined4 __fastcall FUN_005a08b0(uint obj, undefined4 param_1)

{

  int iVar1;
  
  if (obj < 0x20) {
    iVar1 = (&DAT_00733f78)[obj];
  }
  else {
    iVar1 = 0;
  }
  switch(param_1) {
  default:
    return 0;
  case 1:
    return *(undefined4 *)(iVar1 + 4);
  case 2:
    return *(undefined4 *)(iVar1 + 8);
  case 3:
    return *(undefined4 *)(iVar1 + 0xc);
  }
}
