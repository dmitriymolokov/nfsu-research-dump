/* spd-match: far pct=5.67 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005b079c(...);
int __cdecl FUN_005b09cb(...);
int __cdecl FUN_005b09ec(...);
int __cdecl FUN_005b0a97(...);
int __cdecl FUN_005b0eda(...);
int __cdecl FUN_005b100b(...);
int __cdecl FUN_005b1130(...);
int __cdecl FUN_005b148d(...);
extern void LAB_005b1667(...);
extern void LAB_005b1708(...);

struct ThisCallBox {
  int FUN_005b14b6(int param_2, int param_3);
};
int ThisCallBox::FUN_005b14b6(int param_2, int param_3) {
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *_Size;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = *(int *)(param_3 + 0x24) + *(int *)(param_2 + 0x2c);
  local_14 = *(int *)(param_3 + 0x28) + *(int *)(param_2 + 0x2c);
  local_18 = iVar8;
  for (piVar3 = *(int **)(((int)this) + 0x10); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[8]) {
    iVar1 = FUN_005b09cb(*(undefined4 *)(param_2 + 0x2c),iVar8,*(int *)(((int)this) + 8),
                         *piVar3 + *(int *)(((int)this) + 8),&local_10);
    if (-1 < iVar1) {
      if (((local_10 != 0) && (*(int *)piVar3[7] != 0)) &&
         (*(int *)(param_2 + 8) != *(int *)(*(int *)piVar3[7] + 8))) {
        return -0x7fffbffb;
      }
      if ((piVar3 + 3 == (int *)piVar3[7]) &&
         (local_8 = FUN_005b1130(iVar8,piVar3[1] + *(int *)(((int)this) + 8),local_14), local_8 < 0)) {
        return local_8;
      }
      goto LAB_005b1667;
    }
  }
  local_8 = iVar8;
  local_8 = FUN_005b0a97(*(undefined4 *)(param_2 + 0x2c),&local_8,&local_10,&local_1c,&local_c);
  if (local_8 < 0) {
    return local_8;
  }
  _Size = (undefined1 *)((int)local_1c + local_c + *(int *)(((int)this) + 0xc) + local_10);
  local_1c = (undefined4 *)_malloc((size_t)_Size);
  if (local_1c == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  puVar7 = local_1c;
  for (uVar5 = (uint)_Size >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = (uint)_Size & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  uVar5 = *(uint *)(((int)this) + 0xc);
  if (uVar5 != 0) {
    puVar7 = *(undefined4 **)(((int)this) + 8);
    puVar9 = local_1c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  if (*(void **)(((int)this) + 8) != (void *)0x0) {
    _free(*(void **)(((int)this) + 8));
    *(undefined4 *)(((int)this) + 8) = 0;
  }
  *(undefined4 **)(((int)this) + 8) = local_1c;
  local_8 = FUN_005b0eda(*(undefined4 *)(param_2 + 0x2c),local_18,local_14,local_1c,
                         *(undefined4 *)(((int)this) + 0xc),local_c,local_10,&local_20);
  if (local_8 < 0) {
    return local_8;
  }
  pvVar2 = (undefined4 *)_malloc(0x24);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b079c();
  }
  if (piVar3 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  *piVar3 = *(int *)(((int)this) + 0xc) + local_c;
  piVar3[1] = *(int *)(((int)this) + 0xc) + local_10 + local_c;
  piVar3[2] = (unsigned int)local_20;
  piVar3[8] = *(int *)(((int)this) + 0x10);
  *(int **)(((int)this) + 0x10) = piVar3;
  *(undefined1 **)(((int)this) + 0xc) = _Size;
LAB_005b1667:
  piVar4 = (int *)_malloc(0x14);
  piVar10 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar4[2] = 0;
    *piVar4 = 0;
    piVar4[4] = (int)piVar4;
    piVar4[3] = (int)piVar4;
    piVar10 = piVar4;
  }
  if (piVar10 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  if (piVar3[2] != 0) {
    pvVar2 = (undefined4 *)_malloc(piVar3[2] << 2);
    piVar10[2] = (int)pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
      goto LAB_005b1708;
    }
    local_8 = FUN_005b100b(local_18,local_14,pvVar2);
    if (local_8 < 0) goto LAB_005b1708;
  }
  *piVar10 = param_2;
  piVar10[1] = param_3;
  *(int **)(piVar3[7] + 0xc) = piVar10;
  piVar10[3] = (int)(piVar3 + 3);
  piVar10[4] = (unsigned int)piVar3[7];
  piVar3[7] = (int)piVar10;
  *(int **)(param_3 + 0x38) = piVar10;
  *(int *)(param_3 + 0x24) = *piVar3;
  iVar8 = piVar3[1];
  *(int *)(param_3 + 0x28) = iVar8;
  piVar10 = (int *)0x0;
  local_8 = FUN_005b148d(*(int *)(param_3 + 0x24) + *(int *)(((int)this) + 8),
                         iVar8 + *(int *)(((int)this) + 8),*(undefined4 *)(param_3 + 0x38),piVar3[6]);
LAB_005b1708:
  if (piVar10 != (int *)0x0) {
    FUN_005b09ec(1);
    return local_8;
  }
  return local_8;
}
