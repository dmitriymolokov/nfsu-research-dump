/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00538170 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00538090();
undefined4 __fastcall FUN_00538170(int obj)

{

  int iVar1;
  undefined4 unaff_EDI;
  
  iVar1 = (**(code **)(**(int **)(obj + 0x20) + 0xa4))();
  if (iVar1 != -1) {
    (**(code **)(**(int **)(obj + 0x20) + 0x90))();
    return 1;
  }
  iVar1 = FUN_00538090(unaff_EDI);
  if (-1 < iVar1) {
    (**(code **)(**(int **)(obj + 0x20) + 0x90))();
    return 1;
  }
  return 0;
}
