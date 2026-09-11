/* spd-match: far pct=12.05 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

void FUN_00564990(int *param_1,code *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  do {
    piVar6 = (int *)*param_1;
    iVar3 = 0;
    piVar4 = (int *)*piVar6;
    if (piVar6 == param_1) {
      return;
    }
    do {
      if (piVar4 == param_1) break;
      iVar2 = (*param_2)(piVar6,piVar4);
      if (iVar2 == 0) {
        iVar2 = *piVar4;
        piVar5 = (int *)piVar4[1];
        *piVar5 = iVar2;
        *(int **)(iVar2 + 4) = piVar5;
        puVar1 = (undefined4 *)piVar6[1];
        *puVar1 = piVar4;
        piVar6[1] = (int)piVar4;
        piVar4[1] = (int)puVar1;
        *piVar4 = (int)piVar6;
        piVar5 = (int *)*piVar6;
        iVar3 = iVar3 + 1;
      }
      else {
        piVar5 = (int *)*piVar4;
        piVar6 = piVar4;
      }
      piVar4 = piVar5;
    } while (piVar6 != param_1);
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}
