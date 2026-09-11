/* spd-match: far pct=10.34 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044EFD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044d570();
int __cdecl FUN_005aad10();
int __cdecl FUN_00647b70();
undefined4 __fastcall FUN_0044efd0(int obj, int param_1)

{
  int iVar1;
  char cVar2;

  int iVar3;
  
  iVar1 = *(int *)(obj + 0x3a8);
  iVar3 = FUN_00647b70();
  if ((((iVar3 == 6) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x90) + 0x14) + 4) == 3)) &&
      (iVar3 = *(int *)(iVar1 + 0xb8), iVar3 != -1)) && (*(int *)(iVar1 + 8 + iVar3 * 4) != 0)) {
    FUN_0044d570();
    FUN_00647b70();
    cVar2 = FUN_005aad10();
    if (cVar2 == '\0') {
      return 1;
    }
    return 0;
  }
  return 1;
}
