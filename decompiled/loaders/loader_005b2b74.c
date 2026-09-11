/* spd-match: far pct=16.02 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005b2aff(...);
int __cdecl FUN_005b2b58(...);
extern void LAB_005b2c12(...);

struct ThisCallBox {
  undefined4 FUN_005b2b74(undefined4 *param_2, uint param_3, undefined4 *param_4);
};
undefined4 ThisCallBox::FUN_005b2b74(undefined4 *param_2, uint param_3, undefined4 *param_4) {
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_8;
  
  local_8 = 0;
  pvVar1 = (undefined4 *)_malloc(0x1c);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005b2aff();
  }
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  if (param_3 != 0) {
    iVar3 = (uint)((param_3 & 3) != 0) + (param_3 >> 2);
    *piVar2 = iVar3;
    puVar4 = (undefined4 *)_malloc(iVar3 * 4);
    piVar2[1] = (int)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      local_8 = 0x8007000e;
      goto LAB_005b2c12;
    }
    for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  piVar2[3] = *(int *)(((int)this) + 0x10);
  *(int **)(*(int *)(((int)this) + 0x10) + 8) = piVar2;
  *(int **)(((int)this) + 0x10) = piVar2;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (unsigned int)piVar2;
  }
  piVar2 = (int *)0x0;
LAB_005b2c12:
  if (piVar2 != (int *)0x0) {
    FUN_005b2b58(1);
  }
  return local_8;
}
