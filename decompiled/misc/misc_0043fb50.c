/* spd-match: far pct=11.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00436230();
int __cdecl FUN_004436d0();

void FUN_0043fb50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x2c) + 0x40))();
  iVar2 = FUN_004436d0(uVar1);
  if (((iVar2 != 0) && (*(short *)(iVar2 + 0x1a) == 0)) &&
     (*(undefined2 *)(iVar2 + 0x1a) = 1, *(char *)(*(int *)(param_1[1] + 0x50) + 0x14) != '\0')) {
    FUN_00436230();
    return;
  }
  return;
}
