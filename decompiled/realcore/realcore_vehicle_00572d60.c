/* spd-match: far pct=13.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00572D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00572d60(int * obj, int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;

  iVar1 = *obj;
  piVar2 = (int *)obj[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  puVar3 = *(undefined4 **)(param_1 + 0x6c);
  *puVar3 = obj;
  *(int **)(param_1 + 0x6c) = obj;
  obj[1] = (int)puVar3;
  *obj = param_1 + 0x68;
  return;
}
