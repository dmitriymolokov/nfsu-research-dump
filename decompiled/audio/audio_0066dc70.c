/* spd-match: far pct=2.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0066db20();

int FUN_0066dc70(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_0066db20(param_1);
  piVar2 = *(int **)(param_1[5] + iVar3 * 4);
  piVar1 = (int *)(param_1[5] + iVar3 * 4);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = (*(code *)param_1[8])(*(undefined4 *)(*piVar1 + 8),param_2);
    if (iVar3 == 0) break;
    piVar1 = (int *)*piVar1;
    piVar2 = (int *)*piVar1;
  }
  *piVar1 = *piVar2;
  *piVar2 = param_1[7];
  param_1[7] = (int)piVar2;
  *param_1 = *param_1 + -1;
  return piVar2[1];
}
