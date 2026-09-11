/* spd-match: far pct=35.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0061663f(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x108);
  uVar5 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(param_1 + 0xb0);
    if ((uVar2 < *(uint *)(param_1 + 0xa4)) && (*(int *)(param_1 + 0x38) == 0)) {
      uVar4 = 0;
      if ((*(int *)(param_1 + 0x98) != 0) &&
         ((iVar3 = *(int *)(*(int *)(param_1 + 0x98) + 0x34), iVar3 != 0 &&
          (*(int *)(iVar3 + 4) == 0xc)))) {
        uVar4 = *(undefined4 *)(iVar3 + 0x40);
        uVar5 = *(undefined4 *)(iVar3 + 0x44);
      }
      uVar5 = (**(code **)(*piVar1 + 0x10))
                        (piVar1,uVar4,uVar5,*(int *)(param_1 + 0xa0) + uVar2 * 4,
                         *(uint *)(param_1 + 0xa4) - uVar2);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa4);
      return uVar5;
    }
  }
  return 0;
}
