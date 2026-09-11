/* spd-match: far pct=27.89 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00618c39(...);

struct ThisCallBox {
  undefined4 FUN_0061a26f(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_0061a26f(undefined4 param_2) {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((*(byte *)(((int)this) + 0x34) & 1) != 0) && (*(int *)(((int)this) + 0xb8) != 0)) {
    if (*(uint *)(((int)this) + 0xc0) <= *(uint *)(((int)this) + 0xbc)) {
      puVar1 = (unsigned int *)_malloc(*(uint *)(((int)this) + 0xc0) * 0x30);
      if (puVar1 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      puVar4 = *(undefined4 **)(((int)this) + 0xb8);
      puVar5 = puVar1;
      for (iVar2 = (*(int *)(((int)this) + 0xbc) * 3 & 0x1fffffffU) << 1; iVar2 != 0; iVar2 = iVar2 + -1
          ) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      _free(*(void **)(((int)this) + 0xb8));
      *(int *)(((int)this) + 0xc0) = *(int *)(((int)this) + 0xc0) << 1;
      *(undefined4 **)(((int)this) + 0xb8) = puVar1;
    }
    *(undefined4 *)(*(int *)(((int)this) + 0xb8) + *(int *)(((int)this) + 0xbc) * 0x18) =
         *(undefined4 *)(((int)this) + 0x9c);
    *(int *)(*(int *)(((int)this) + 0xb8) + 4 + *(int *)(((int)this) + 0xbc) * 0x18) =
         *(int *)(((int)this) + 0xa4) << 2;
    uVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(((int)this) + 0xb8) + 8 + (uVar3 + *(int *)(((int)this) + 0xbc) * 6) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(int *)(((int)this) + 0xbc) = *(int *)(((int)this) + 0xbc) + 1;
  }
  *(undefined4 *)(((int)this) + 0xac) = *(undefined4 *)(((int)this) + 0xa4);
  FUN_00618c39(param_2);
  return 0;
}
