/* spd-match: far pct=7.54 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005f74cf(...);
extern void LAB_0061654f(...);
extern void LAB_00616626(...);
extern void LAB_00616638(...);

struct ThisCallBox {
  undefined4 FUN_00616454(uint param_2, int param_3, uint param_4, int param_5, uint param_6);
};
undefined4 ThisCallBox::FUN_00616454(uint param_2, int param_3, uint param_4, int param_5, uint param_6) {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  uVar2 = 0;
  bVar1 = false;
  if (param_6 != 0) {
    do {
      if (*(int *)(((int)this) + 0xe4) == *(int *)(param_5 + uVar2 * 4)) {
        bVar1 = true;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_6);
  }
  if ((*(uint *)(((int)this) + 0xe0) <= param_2) || (bVar1)) {
    *(undefined4 *)(((int)this) + 0xd0) = 0xffffffff;
    *(undefined4 *)(((int)this) + 0xd4) = 0xffffffff;
    *(undefined4 *)(((int)this) + 0xd8) = 0xffffffff;
    *(undefined4 *)(((int)this) + 0xdc) = 0xffffffff;
    local_8 = (unsigned int *)_malloc(*(int *)(((int)this) + 0x70) << 2);
    if (local_8 == (undefined4 *)0x0) {
LAB_00616638:
      uVar7 = 0x8007000e;
      goto LAB_00616626;
    }
    puVar8 = local_8;
    for (uVar2 = *(uint *)(((int)this) + 0x70) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar2 = 0;
    if (*(int *)(((int)this) + 8) != 0) {
      do {
        piVar6 = *(int **)(*(int *)(((int)this) + 0x14) + uVar2 * 4);
        if (((*(int *)(((int)this) + 0x60) == *piVar6) && (piVar6[1] == -1)) &&
           ((uint)piVar6[2] < *(uint *)(((int)this) + 0x70))) {
          if (((uint)piVar6[0xb] < param_2) && (param_2 <= (uint)piVar6[0xf])) {
            local_8[piVar6[2]] = 0;
          }
          uVar5 = piVar6[0xb];
          if ((param_2 <= uVar5) && (uVar5 < (uint)local_8[piVar6[2]])) {
            local_8[piVar6[2]] = uVar5;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(((int)this) + 8));
    }
    uVar2 = 0;
    *(undefined4 *)(((int)this) + 0xe4) = 0;
    *(undefined4 *)(((int)this) + 0xe0) = 0;
    if (*(int *)(((int)this) + 0x70) != 0) {
      do {
        uVar5 = 0;
        if (param_6 == 0) {
LAB_0061654f:
          if (*(uint *)(((int)this) + 0xe0) < (uint)local_8[uVar2]) {
            *(uint *)(((int)this) + 0xe4) = uVar2;
            *(undefined4 *)(((int)this) + 0xe0) = local_8[uVar2];
          }
        }
        else {
          do {
            if (uVar2 == *(uint *)(param_5 + uVar5 * 4)) break;
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_6);
          if (param_6 <= uVar5) goto LAB_0061654f;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(((int)this) + 0x70));
    }
    if (*(uint *)(((int)this) + 0xe0) <= param_2) {
      *(undefined4 *)(((int)this) + 0xe0) = 0xffffffff;
      *(int *)(((int)this) + 0xe4) = *(int *)(((int)this) + 0x70);
    }
  }
  param_6 = 0;
  iVar4 = (-(uint)(param_4 != 1) & 0xfffffffd) + 3;
  if (param_4 != 0) {
    piVar6 = (int *)(((int)this) + 0xd0 + iVar4 * 4);
    do {
      if (*piVar6 != -1) {
        *(uint *)(*(int *)(*(int *)(((int)this) + 0x14) + *piVar6 * 4) + 0x34) = param_2;
      }
      iVar3 = FUN_005f74cf(*(undefined4 *)(((int)this) + 0x60),*(undefined4 *)(((int)this) + 0xe4),iVar4,0);
      *piVar6 = iVar3;
      if (iVar3 == -1) goto LAB_00616638;
      iVar3 = *(int *)(*(int *)(((int)this) + 0x14) + iVar3 * 4);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(uint *)(iVar3 + 0x2c) = param_2;
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(((int)this) + 0xe0);
      *(uint *)(iVar3 + 0x38) = param_2;
      *(uint *)(iVar3 + 0x3c) = param_2;
      *(undefined4 *)(iVar3 + 0x40) = 1;
      if (param_3 != 0) {
        *(int *)(param_3 + param_6 * 4) = *piVar6;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
      param_6 = param_6 + 1;
    } while (param_6 < param_4);
  }
  uVar7 = 0;
LAB_00616626:
  _free(local_8);
  return uVar7;
}
