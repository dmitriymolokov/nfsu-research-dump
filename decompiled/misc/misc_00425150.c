/* spd-match: far pct=40.58 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00425150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a8;
extern int DAT_00736208;
extern int DAT_0078a344;
undefined4 __fastcall FUN_00425150(int obj)

{
  bool bVar1;

  undefined4 uVar2;
  
  if (((*(int *)(*(int *)(obj + 0x14) + 4) == 1) &&
      (*(char *)(*(int *)(obj + 0x14) + 0x734) == '\0')) && (DAT_00736208 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) || (uVar2 = 3, bVar1)) {
    uVar2 = 1;
  }
  return uVar2;
}
