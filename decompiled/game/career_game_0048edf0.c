/* spd-match: far pct=9.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EDF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0048edf0(int obj)

{
  int *_Memory;
  int iVar1;
  int *piVar2;

  _Memory = *(int **)(obj + 8);
  while (_Memory != (int *)(obj + 8)) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = *(int **)(obj + 8);
  }
  return;
}
