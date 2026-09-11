/* spd-match: far pct=9.64 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void LAB_005c811a(...);
extern void LAB_005c8120(...);
extern void LAB_005c819d(...);
extern void LAB_005c8269(...);
extern void LAB_005c827d(...);

struct ThisCallBox {
  undefined4 FUN_005c80ae(int param_2, uint *param_3, uint *param_4, uint *param_5, uint *param_6, int *param_7);
};
undefined4 ThisCallBox::FUN_005c80ae(int param_2, uint *param_3, uint *param_4, uint *param_5, uint *param_6, int *param_7) {
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  ushort *puVar6;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_2 == 0) goto LAB_005c8269;
  local_10 = 0;
  if (*(int *)(param_2 + 0xc) == 0) goto LAB_005c8269;
  puVar6 = (ushort *)(*(int *)(param_2 + 0x10) + param_2 + 6);
  do {
    uVar1 = puVar6[-1];
    uVar2 = (uint)puVar6[1] + (uint)*puVar6;
    puVar4 = param_4;
    if ((uVar1 == 0) || (puVar4 = param_5, uVar1 == 1)) {
LAB_005c811a:
      if (*puVar4 < uVar2) {
        *puVar4 = uVar2;
LAB_005c8120:
        local_8 = 1;
      }
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 == 3) {
          uVar2 = *puVar6 + 1;
          puVar4 = param_6;
          goto LAB_005c811a;
        }
        goto LAB_005c827d;
      }
      if (*param_3 < uVar2) {
        *param_3 = uVar2;
        goto LAB_005c8120;
      }
    }
    local_10 = local_10 + 1;
    puVar6 = puVar6 + 10;
  } while (local_10 < *(uint *)(param_2 + 0xc));
  if (local_8 == 0) goto LAB_005c8269;
  if (*(uint *)(((int)this) + 0x9c) < *param_3) {
    if (*(void **)(((int)this) + 0xa8) != (void *)0x0) {
      _free(*(void **)(((int)this) + 0xa8));
      *(undefined4 *)(((int)this) + 0xa8) = 0;
    }
    puVar3 = (unsigned int *)_malloc(*param_3 << 4);
    *(undefined4 **)(((int)this) + 0xa8) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar5 = (*param_3 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(uint *)(((int)this) + 0x9c) = *param_3;
      goto LAB_005c819d;
    }
  }
  else {
LAB_005c819d:
    if (*(uint *)(((int)this) + 0xa0) < *param_4) {
      if (*(void **)(((int)this) + 0xac) != (void *)0x0) {
        _free(*(void **)(((int)this) + 0xac));
        *(undefined4 *)(((int)this) + 0xac) = 0;
      }
      puVar3 = (unsigned int *)_malloc(*param_4 << 2);
      *(undefined4 **)(((int)this) + 0xac) = puVar3;
      if (puVar3 == (undefined4 *)0x0) goto LAB_005c827d;
      for (uVar2 = *param_4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(uint *)(((int)this) + 0xa0) = *param_4;
    }
    if (*param_5 <= *(uint *)(((int)this) + 0xa4)) goto LAB_005c8269;
    if (*(void **)(((int)this) + 0xb0) != (void *)0x0) {
      _free(*(void **)(((int)this) + 0xb0));
      *(undefined4 *)(((int)this) + 0xb0) = 0;
    }
    puVar3 = (unsigned int *)_malloc(*param_5 << 4);
    *(undefined4 **)(((int)this) + 0xb0) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar5 = (*param_5 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(uint *)(((int)this) + 0xa4) = *param_5;
      goto LAB_005c8269;
    }
  }
LAB_005c827d:
  local_c = 0x80004005;
LAB_005c8269:
  if (param_7 != (int *)0x0) {
    *param_7 = local_8;
  }
  return local_c;
}
