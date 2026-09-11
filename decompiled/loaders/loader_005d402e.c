/* spd-match: far pct=10.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005d1d40();

undefined4 FUN_005d402e(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if ((param_3 != (undefined4 *)0x0) && (iVar3 = FUN_005d1d40(param_2,1,0), iVar3 != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
    iVar2 = *(int *)(iVar1 + 0x38);
    if (iVar2 == 0) {
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar5 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar6);
    if ((((piVar5[4] == 0) || (*(int *)(iVar3 + 0x18) != -1)) && (piVar5[1] == 4)) && (*piVar5 == 4)
       ) {
      iVar3 = *(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        iVar3 = *(int *)(iVar3 + *(int *)(param_1 + 0x2c));
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar2 + 8) +
                        *(int *)(iVar3 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
      }
      piVar5 = *(int **)(iVar3 * 0x1c + *(int *)(param_1 + 0x24) + 4);
      if (piVar5 != (int *)0x0) {
        uVar4 = (**(code **)(*piVar5 + 0xc))(piVar5);
        *param_3 = uVar4;
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
  }
  return 0x8876086c;
}
