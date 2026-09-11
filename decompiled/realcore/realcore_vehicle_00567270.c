/* spd-match: far pct=64.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00567270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00567270(int * obj, int param_1)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 4);
  *piVar1 = (int)obj;
  *(int **)(param_1 + 4) = obj;
  obj[1] = (int)piVar1;
  *obj = param_1;
  return;
}
