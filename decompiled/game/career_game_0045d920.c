/* spd-match: far pct=7.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00456e90();
int unaff_ESI;

void FUN_0045d920(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (**(int **)(unaff_ESI + 0x3d8) != 0) {
    uVar1 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 4) + 0x2c) + 0x40))
                      (*(undefined4 *)(unaff_ESI + 0x504),*(undefined4 *)(unaff_ESI + 0x508));
    uVar1 = FUN_00456e90(*(undefined4 *)(unaff_ESI + 4),uVar1);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x3d8) + 8) = uVar1;
  }
  return;
}
