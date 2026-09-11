/* spd-match: far pct=15.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00586640 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
undefined4 __fastcall FUN_00586640(int * obj)

{
  int iVar1;

  int iVar2;
  
  iVar1 = *obj;
  if (iVar1 != 0) {
    if (iVar1 != 0x7fffffff) {
      iVar2 = FUN_00674898();
      *obj = iVar1 - iVar2;
      if (iVar1 - iVar2 < 0) {
        *obj = 0;
        return 0;
      }
    }
    if ((*obj != 0) && (*obj != 0x7fffffff)) {
      return 1;
    }
  }
  return 0;
}
