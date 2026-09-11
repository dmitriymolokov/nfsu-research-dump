/* spd-match: far pct=44.74 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00579090 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00579140();
void __fastcall FUN_00579090(int * obj)

{
  int iVar1;
  int *piVar2;

  if (obj[0x38] != 0) {
    iVar1 = *obj;
    piVar2 = (int *)obj[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    obj[0x38] = 0;
    FUN_00579140();
    return;
  }
  return;
}
