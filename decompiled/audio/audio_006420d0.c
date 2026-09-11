/* spd-match: far pct=13.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641b50();

int * FUN_006420d0(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1 + 0x18;
  FUN_0063f190(iVar1);
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    while ((param_2 != (code *)0x0 && (iVar2 = (*param_2)(piVar3,param_3), iVar2 == 0))) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) {
        FUN_0063f1a0(iVar1);
        return (int *)0x0;
      }
    }
    if ((piVar3 != (int *)0x0) && (iVar2 = FUN_00641b50(), iVar2 == 0)) {
      piVar3 = (int *)0x0;
    }
  }
  FUN_0063f1a0(iVar1);
  return piVar3;
}
