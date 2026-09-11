/* spd-match: far pct=9.66 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186(...);

struct ThisCallBox {
  int FUN_005f73c0(int param_2);
};
int ThisCallBox::FUN_005f73c0(int param_2) {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  local_8 = *(int *)(((int)this) + 0x24);
  if (*(int *)(((int)this) + 0xc) == local_8) {
    if (local_8 == 0) {
      local_8 = 0x100;
    }
    else {
      local_8 = local_8 * 2;
    }
    puVar1 = (unsigned int *)_malloc(local_8 << 2);
    if (puVar1 == (undefined4 *)0x0) {
      if (param_2 != 0) {
        FUN_005f7186(1);
      }
      return -1;
    }
    puVar4 = *(undefined4 **)(((int)this) + 0x18);
    puVar5 = puVar1;
    for (uVar2 = *(uint *)(((int)this) + 0xc) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = puVar1 + *(int *)(((int)this) + 0xc);
    for (uVar2 = local_8 - *(int *)(((int)this) + 0xc) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    _free(*(void **)(((int)this) + 0x18));
    *(int *)(((int)this) + 0x24) = local_8;
    *(undefined4 **)(((int)this) + 0x18) = puVar1;
  }
  *(int *)(*(int *)(((int)this) + 0x18) + *(int *)(((int)this) + 0xc) * 4) = param_2;
  iVar3 = *(int *)(((int)this) + 0xc);
  *(int *)(((int)this) + 0xc) = iVar3 + 1;
  return iVar3;
}
