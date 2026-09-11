/* spd-match: far pct=12.28 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EF050 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
int __fastcall FUN_004ef050(int obj, int param_1)

{

  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    for (iVar1 = *(int *)(obj + 0xe4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  else {
    iVar1 = FUN_004fd1e0(obj + 0xdc);
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      return iVar1;
    }
  }
  return 0;
}
