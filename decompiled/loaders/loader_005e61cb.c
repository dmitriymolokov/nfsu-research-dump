/* spd-match: far pct=47.50 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_005e61cb(int param_2);
};
int ThisCallBox::FUN_005e61cb(int param_2) {
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(((int)this) + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(((int)this) + 100);
    if (uVar2 < *(uint *)(((int)this) + 0x5c)) {
      *(int *)(((int)this) + 0x30) = param_2;
      iVar3 = (**(code **)(*piVar1 + 0x10))
                        (piVar1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                         *(int *)(((int)this) + 0x58) + uVar2 * 4,*(uint *)(((int)this) + 0x5c) - uVar2);
      if (iVar3 < 0) {
        *(undefined4 *)(((int)this) + 0x4c) = 1;
        *(undefined4 *)(((int)this) + 0x50) = 1;
      }
      *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x5c);
      return iVar3;
    }
  }
  return 0;
}
