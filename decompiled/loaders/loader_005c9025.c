/* spd-match: far pct=20.42 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005c9025(int param_2, int *param_3, uint *param_4);
};
undefined4 ThisCallBox::FUN_005c9025(int param_2, int *param_3, uint *param_4) {
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x20) = 4;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  if ((param_3 != (int *)0x0) &&
     (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar1)) {
    iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar2 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) &&
     (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar1)) {
    iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(iVar2 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) && (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), uVar1 < *param_4)
     ) {
    return 0x80004005;
  }
  *(int *)(((int)this) + 0x88) = *(int *)(((int)this) + 0x88) + 1;
  return 0;
}
