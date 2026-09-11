/* spd-match: far pct=5.87 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_14/attempt1_targeted_thiscall */
#include "ghidra_compat.h"

long __cdecl __ftol(void);

int __cdecl FUN_005f716a(...);
extern int _DAT_0069f318;
extern int _DAT_006ccaf8;
extern int _DAT_006ccb10;

struct ThisCallBox {
  int FUN_005f725a(int *param_2);
};
int ThisCallBox::FUN_005f725a(int *param_2) {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  local_8 = *(int *)(((int)this) + 0x20);
  if (*(int *)(((int)this) + 8) == local_8) {
    if (local_8 == 0) {
      local_8 = 0x400;
    }
    else {
      local_8 = local_8 * 2;
    }
    puVar1 = (undefined4 *)_malloc(local_8 << 2);
    if (puVar1 == (undefined4 *)0x0) {
      if (param_2 != (int *)0x0) {
        FUN_005f716a(1);
      }
      return -1;
    }
    puVar4 = *(undefined4 **)(((int)this) + 0x14);
    puVar5 = puVar1;
    for (uVar2 = *(uint *)(((int)this) + 8) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = puVar1 + *(int *)(((int)this) + 8);
    for (uVar2 = local_8 - *(int *)(((int)this) + 8) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    _free(*(void **)(((int)this) + 0x14));
    *(undefined4 **)(((int)this) + 0x14) = puVar1;
    *(int *)(((int)this) + 0x20) = local_8;
  }
  if (((param_2 != (int *)0x0) &&
      ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *param_2 * 4) + 4) & 0x80) != 0)) &&
     (param_2[1] == -1)) {
    param_2[6] = param_2[6] | 0x20;
    if ((*(double *)(param_2 + 4) == 0.0) || (*(double *)(param_2 + 4) == 1.0)) {
      param_2[6] = param_2[6] | 1;
    }
    iVar3 = __ftol();
    if (ABS(*(double *)(param_2 + 4) - (double)iVar3) < _DAT_0069f318) {
      param_2[6] = param_2[6] | 2;
    }
    if (_DAT_006ccaf8 <= *(double *)(param_2 + 4)) {
      param_2[6] = param_2[6] | 4;
    }
    if (*(double *)(param_2 + 4) < _DAT_006ccaf8 != (*(double *)(param_2 + 4) == _DAT_006ccaf8)) {
      param_2[6] = param_2[6] | 8;
    }
    if (ABS(*(double *)(param_2 + 4)) < _DAT_006ccb10 !=
        (ABS(*(double *)(param_2 + 4)) == _DAT_006ccb10)) {
      param_2[6] = param_2[6] | 0x10;
    }
  }
  *(int **)(*(int *)(((int)this) + 0x14) + *(int *)(((int)this) + 8) * 4) = param_2;
  iVar3 = *(int *)(((int)this) + 8);
  *(int *)(((int)this) + 8) = iVar3 + 1;
  return iVar3;
}
