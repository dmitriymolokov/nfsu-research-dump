/* spd-match: far pct=4.05 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void LAB_005b182e(...);
extern void LAB_005b18d9(...);
extern void LAB_005b1915(...);

struct ThisCallBox {
  undefined4 FUN_005b17e6(uint param_2, uint *param_3);
};
undefined4 ThisCallBox::FUN_005b17e6(uint param_2, uint *param_3) {
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_10;
  uint local_8;
  
  uVar1 = *(uint *)(((int)this) + 0x14);
  uVar8 = 0;
  local_8 = uVar1 >> 1;
  local_10 = 0;
  uVar4 = uVar1;
  if (uVar1 == 0) {
LAB_005b182e:
    if (uVar1 == (~uVar1 + 1 & uVar1)) {
      if (uVar1 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = uVar1 * 2;
      }
      puVar3 = (unsigned int *)_malloc(iVar6 << 2);
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(((int)this) + 0x1c);
        puVar9 = puVar3;
        for (uVar8 = *(uint *)(((int)this) + 0x14) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        _free(*(void **)(((int)this) + 0x1c));
        *(undefined4 **)(((int)this) + 0x1c) = puVar3;
        if (*(int *)(((int)this) + 0x14) == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = *(int *)(((int)this) + 0x14) * 2;
        }
        puVar3 = (unsigned int *)_malloc(iVar6 << 2);
        if (puVar3 != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(((int)this) + 0x18);
          puVar9 = puVar3;
          for (uVar8 = *(uint *)(((int)this) + 0x14) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          _free(*(void **)(((int)this) + 0x18));
          *(undefined4 **)(((int)this) + 0x18) = puVar3;
          goto LAB_005b18d9;
        }
      }
      local_10 = 0x8007000e;
      goto LAB_005b1915;
    }
LAB_005b18d9:
    for (uVar8 = *(uint *)(((int)this) + 0x14); local_8 < uVar8; uVar8 = uVar8 - 1) {
      puVar3 = (undefined4 *)(*(int *)(((int)this) + 0x18) + uVar8 * 4);
      *puVar3 = puVar3[-1];
      puVar3 = (undefined4 *)(*(int *)(((int)this) + 0x1c) + uVar8 * 4);
      *puVar3 = puVar3[-1];
    }
    *(uint *)(*(int *)(((int)this) + 0x18) + local_8 * 4) = param_2;
    *(undefined4 *)(*(int *)(((int)this) + 0x1c) + local_8 * 4) = 1;
    *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x14) + 1;
  }
  else {
    do {
      uVar2 = *(uint *)(*(int *)(((int)this) + 0x18) + local_8 * 4);
      if (uVar2 < param_2) {
        uVar8 = local_8 + 1;
        uVar5 = uVar4;
      }
      else {
        uVar5 = local_8;
        if (uVar2 <= param_2) break;
      }
      local_8 = uVar5 + uVar8 >> 1;
      uVar4 = uVar5;
    } while (uVar8 < uVar5);
    if (uVar4 <= uVar8) goto LAB_005b182e;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_8;
  }
LAB_005b1915:
  _free((void *)0x0);
  return local_10;
}
