/* spd-match: far pct=16.57 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005cb49a(int param_2, int param_3, int param_4);
};
undefined4 ThisCallBox::FUN_005cb49a(int param_2, int param_3, int param_4) {
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  local_8 = 0;
  puVar3 = (undefined4 *)_malloc(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[5] = 0xffffffff;
    puVar3[3] = (unsigned int)puVar3;
    puVar3[4] = (unsigned int)puVar3;
  }
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = 0x8007000e;
  }
  else {
    puVar3[5] = param_4;
    *puVar3 = 1;
    *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    iVar1 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(param_2 + 4) * 4);
    iVar2 = *(int *)(iVar1 + 0x2c);
    if (iVar2 == 0) {
      *(undefined4 **)(iVar1 + 0x2c) = puVar3;
    }
    else {
      puVar3[3] = *(undefined4 *)(iVar2 + 0xc);
      puVar3[4] = *(undefined4 *)
                   (*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(param_2 + 4) * 4) + 0x2c);
      *(undefined4 **)
       (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(param_2 + 4) * 4) + 0x2c) +
                0xc) + 0x10) = puVar3;
      *(undefined4 **)
       (*(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(param_2 + 4) * 4) + 0x2c) + 0xc) =
           puVar3;
    }
    *(undefined4 **)(*(int *)(param_3 + 0x30) + param_4 * 4) = puVar3;
  }
  return local_8;
}
