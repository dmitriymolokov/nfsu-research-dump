/* spd-match: far pct=6.25 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_00615e2f(int param_2);
};
undefined4 ThisCallBox::FUN_00615e2f(int param_2) {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = *(uint *)(((int)this) + 0xa8);
  uVar4 = uVar2;
  if (uVar2 == 0) {
    uVar4 = 0x400;
  }
  if (uVar4 < (uint)(*(int *)(((int)this) + 0xa4) + param_2)) {
    do {
      uVar4 = uVar4 * 2;
    } while (uVar4 < (uint)(param_2 + *(int *)(((int)this) + 0xa4)));
  }
  if (uVar4 != uVar2) {
    puVar1 = (unsigned int *)_malloc(uVar4 << 2);
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar5 = *(undefined4 **)(((int)this) + 0xa0);
    puVar6 = puVar1;
    for (uVar2 = *(uint *)(((int)this) + 0xa4) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    _free(*(void **)(((int)this) + 0xa0));
    *(undefined4 **)(((int)this) + 0xa0) = puVar1;
    *(uint *)(((int)this) + 0xa8) = uVar4;
  }
  return 0;
}
