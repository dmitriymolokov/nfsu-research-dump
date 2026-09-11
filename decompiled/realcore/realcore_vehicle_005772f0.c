/* spd-match: far pct=4.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00567690();
int __cdecl FUN_00577730();

void FUN_005772f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x20);
  if (piVar5 != (int *)(param_1 + 0x20)) {
    do {
      piVar1 = *(int **)(param_1 + 0x1c);
      uVar3 = (**(code **)(*piVar1 + 0x14))();
      uVar4 = (**(code **)(*piVar1 + 8))(uVar3);
      FUN_00577730(uVar4,uVar3);
      if (piVar5 == *(int **)(param_1 + 0x20)) {
        iVar2 = piVar5[5];
        *(int *)(param_1 + 0x10) = piVar5[6];
        *(int *)(param_1 + 0xc) = iVar2;
        iVar2 = piVar5[7];
        *(int *)(param_1 + 0x18) = piVar5[8];
        *(int *)(param_1 + 0x14) = iVar2;
      }
      else {
        FUN_00567690();
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(param_1 + 0x20));
  }
  return;
}
