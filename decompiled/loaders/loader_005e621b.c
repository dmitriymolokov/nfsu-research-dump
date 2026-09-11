/* spd-match: far pct=9.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005e621b(int param_2);
};
undefined4 ThisCallBox::FUN_005e621b(int param_2) {
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = *(uint *)(((int)this) + 0x60);
  uVar1 = *(int *)(((int)this) + 0x5c) + param_2;
  if (uVar4 < uVar1) {
    if (uVar4 == 0) {
      uVar4 = 0x100;
    }
    if (uVar4 < uVar1) {
      do {
        uVar4 = uVar4 * 2;
      } while (uVar4 < (uint)(*(int *)(((int)this) + 0x5c) + param_2));
    }
    puVar2 = (unsigned int *)_malloc(uVar4 << 2);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar5 = *(undefined4 **)(((int)this) + 0x58);
    puVar6 = puVar2;
    for (uVar1 = *(uint *)(((int)this) + 0x5c) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    _free(*(void **)(((int)this) + 0x58));
    *(undefined4 **)(((int)this) + 0x58) = puVar2;
    *(uint *)(((int)this) + 0x60) = uVar4;
  }
  return 0;
}
