/* spd-match: far pct=7.89 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005850a0(...);

struct ThisCallBox {
  void FUN_00469510(undefined4 *param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_00469510(undefined4 *param_2, undefined4 *param_3) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (((int *)this)[0x18] != 0) {
    FUN_005850a0(param_3);
    return;
  }
  puVar3 = (undefined4 *)(**(code **)(*((int *)this) + 0xc))();
  uVar1 = puVar3[2];
  uVar2 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar2;
  param_2[2] = uVar1;
  puVar3 = (undefined4 *)(**(code **)(*((int *)this) + 0x18))();
  uVar1 = puVar3[2];
  uVar2 = *puVar3;
  param_3[1] = puVar3[1];
  *param_3 = uVar2;
  param_3[2] = uVar1;
  return;
}
