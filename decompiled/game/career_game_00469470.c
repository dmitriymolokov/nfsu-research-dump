/* spd-match: far pct=15.91 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_00469470(undefined4 *param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_00469470(undefined4 *param_2, undefined4 *param_3) {
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (((int *)this)[0x18] != 0) {
    iVar2 = ((int *)this)[0x1b];
    uVar3 = *(undefined4 *)(iVar2 + 0xa0);
    uVar1 = *(undefined4 *)(iVar2 + 0xa8);
    param_2[1] = *(undefined4 *)(iVar2 + 0xa4);
    *param_2 = uVar3;
    param_2[2] = uVar1;
    iVar2 = ((int *)this)[0x1b];
    uVar3 = *(undefined4 *)(iVar2 + 0xc0);
    uVar1 = *(undefined4 *)(iVar2 + 200);
    param_3[1] = *(undefined4 *)(iVar2 + 0xc4);
    *param_3 = uVar3;
    param_3[2] = uVar1;
    return;
  }
  puVar4 = (undefined4 *)(**(code **)(*((int *)this) + 0xc))();
  uVar1 = puVar4[2];
  uVar3 = *puVar4;
  param_2[1] = puVar4[1];
  *param_2 = uVar3;
  param_2[2] = uVar1;
  puVar4 = (undefined4 *)(**(code **)(*((int *)this) + 0x18))();
  uVar1 = puVar4[2];
  uVar3 = *puVar4;
  param_3[1] = puVar4[1];
  *param_3 = uVar3;
  param_3[2] = uVar1;
  return;
}
