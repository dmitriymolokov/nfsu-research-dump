/* spd-match: far pct=8.28 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005ca526();
int __cdecl FUN_005d1d40();

undefined4 FUN_005d21d9(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  param_1 = (int *)param_1[0xd];
  if (param_3 != 0) {
    iVar2 = FUN_005ca526(param_3,1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1 = *(int **)(iVar2 + 4);
  }
  iVar2 = FUN_005d1d40(param_2,10,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(piVar1[0x23] + *(int *)(iVar2 + 4) * 4);
  iVar4 = *(int *)(iVar2 + 0x2c);
  if (iVar4 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + 0x10);
      if ((param_1 == (int *)*(int *)(*(int *)(iVar4 + 8) + 0x54)) ||
         (((iVar3 = *(int *)(*(int *)(iVar4 + 8) + 0x5c), iVar3 != -1 && (iVar3 != 0)) &&
          (iVar3 = (**(code **)(*piVar1 + 0xfc))
                             (piVar1,~*(uint *)(piVar1[0x23] + iVar3 * 4),param_3), iVar3 != 0)))) {
        return 1;
      }
    } while (iVar4 != *(int *)(iVar2 + 0x2c));
  }
  return 0;
}
