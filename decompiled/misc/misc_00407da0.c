/* spd-match: far pct=54.55 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00407DA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00407da0(int * obj)

{
  int iVar1;
  int *piVar2;

  iVar1 = *obj;
  piVar2 = (int *)obj[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}
