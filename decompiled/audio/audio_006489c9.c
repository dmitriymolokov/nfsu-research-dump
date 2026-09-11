/* spd-match: far pct=0.00 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_006489c9(undefined4 param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_006489c9(undefined4 param_2, undefined4 param_3) {
  undefined4 uVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = param_2;
  *(undefined4 *)(((int)this) + 4) = param_3;
  uVar1 = (**(code **)(**(int **)(((int)this) + 0x18) + 4))(((int)this),param_3);
  return uVar1;
}
