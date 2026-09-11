/* spd-match: far pct=2.16 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005f7616(...);
int __cdecl FUN_005f762c(...);

struct ThisCallBox {
  undefined4 FUN_005d932c(uint param_2);
};
undefined4 ThisCallBox::FUN_005d932c(uint param_2) {
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = param_2;
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_2 + 0x38) == 0)) {
    uVar7 = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      do {
        iVar3 = FUN_005f762c(*(undefined4 *)
                              (*(int *)(((int)this) + 0x18) + (*(int *)(param_2 + 0x10) + uVar7) * 4));
        uVar4 = *(int *)(iVar3 + 0x54) + 1;
        if (*(uint *)(param_2 + 0x34) < uVar4) {
          *(uint *)(param_2 + 0x34) = uVar4;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_2 + 0x14));
    }
    puVar5 = (unsigned int *)_malloc(*(int *)(param_2 + 0x34) << 2);
    *(undefined4 **)(param_2 + 0x38) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    for (uVar7 = *(uint *)(param_2 + 0x34) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    piVar1 = (int *)(param_2 + 0x14);
    iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 0x20);
    param_2 = 0;
    if (*piVar1 != 0) {
      do {
        if (iVar3 == 0) {
          return 0;
        }
        puVar5 = (undefined4 *)
                 FUN_005f762c(*(undefined4 *)
                               (*(int *)(((int)this) + 0x18) + (*(int *)(iVar2 + 0x10) + param_2) * 4));
        iVar6 = FUN_005f7616(*puVar5);
        if ((*(byte *)(iVar6 + 4) & 0x40) == 0) {
          *(int *)(*(int *)(iVar2 + 0x38) + puVar5[0x15] * 4) = *(int *)(iVar3 + 8) + 0x10;
        }
        param_2 = param_2 + 1;
        iVar3 = *(int *)(iVar3 + 0xc);
      } while (param_2 < *(uint *)(iVar2 + 0x14));
    }
  }
  return 0;
}
