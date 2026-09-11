/* spd-match: far pct=7.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern void LAB_0046ab8d(void);

void FUN_0046ab70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xc) == 0) goto LAB_0046ab8d;
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + -4);
  while( true ) {
    if (param_1 == -0xc) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(param_1 + 8);
    }
    if (piVar3 == piVar1) break;
    (**(code **)(*piVar3 + 0x18))(param_2 + iVar4 * 4);
    iVar2 = (**(code **)(*piVar3 + 4))();
    iVar4 = iVar4 + iVar2;
    if (piVar3[1] == 0) {
LAB_0046ab8d:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(piVar3[1] + -4);
    }
  }
  return;
}
