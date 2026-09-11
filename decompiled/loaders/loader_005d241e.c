/* spd-match: far pct=9.16 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005cb49a(...);
int __cdecl FUN_005d1d40(...);
extern unsigned char *DAT_006dc264;
extern void LAB_005d259a(...);
extern void LAB_005d259c(...);
extern void LAB_005d25bc(...);
extern void LAB_005d25f1(...);

struct ThisCallBox {
  undefined4 FUN_005d241e(int *param_2, int *param_3, uint *param_4);
};
undefined4 ThisCallBox::FUN_005d241e(int *param_2, int *param_3, uint *param_4) {
  uint uVar1;
  int iVar2;
  undefined4 *_Memory;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  uint local_8;
  
  iVar2 = *(int *)(&DAT_006dc264 + *param_2 * 0x1c);
  if ((((iVar2 != 0x10) && (iVar2 != 0xf)) && (iVar2 != 5)) && (iVar2 != 10)) {
    return 0x80004005;
  }
  local_8 = ((uint)this);
  if ((param_3 != (int *)0x0) &&
     (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar1)) {
    iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
    local_8 = *(uint *)(iVar2 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if (((param_3 != (int *)0x0) &&
      (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), uVar1 < *param_4)) || (local_8 < 2)) {
    return 0x80004005;
  }
  _Memory = (unsigned int *)_malloc(local_8);
  if (_Memory != (undefined4 *)0x0) {
    if (local_8 != 0) {
      if ((param_3 != (int *)0x0) &&
         (uVar1 = (**(code **)(*param_3 + 0x10))(param_3),
         (uint)((local_8 & 3) != 0) + (local_8 >> 2) + *param_4 <= uVar1)) {
        iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
        puVar7 = (undefined4 *)(iVar2 + *param_4 * 4);
        puVar9 = _Memory;
        for (uVar1 = local_8 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar1 = local_8 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      *param_4 = *param_4 + (uint)((local_8 & 3) != 0) + (local_8 >> 2);
    }
    if ((((param_3 != (int *)0x0) &&
         (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), uVar1 < *param_4)) ||
        (*(char *)((local_8 - 1) + (int)_Memory) != '\0')) ||
       (piVar3 = (int *)FUN_005d1d40(_Memory,2,0), piVar3 == (int *)0x0)) {
LAB_005d259c:
      uVar6 = 0x80004005;
      goto LAB_005d25f1;
    }
    iVar2 = *(int *)(*(int *)(((uint)this) + 0x8c) + piVar3[1] * 4);
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar5 = *(int *)(((uint)this) + 0x2c);
    }
    else {
      iVar5 = *(int *)(*(int *)(((uint)this) + 0xc) + 8);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + piVar3[2] + iVar5);
    iVar5 = *(int *)(&DAT_006dc264 + *param_2 * 0x1c);
    if (iVar5 == 5) {
      if (((iVar2 != 5) && (iVar2 != 6)) && ((iVar2 != 7 && (iVar2 != 8)))) {
        bVar11 = iVar2 == 9;
        goto LAB_005d259a;
      }
    }
    else {
      if (iVar5 == 10) {
        if (((iVar2 == 10) || (iVar2 == 0xb)) || ((iVar2 == 0xc || (iVar2 == 0xd))))
        goto LAB_005d25bc;
        bVar11 = iVar2 == 0xe;
      }
      else {
        bVar11 = iVar5 == iVar2;
      }
LAB_005d259a:
      if (!bVar11) goto LAB_005d259c;
    }
LAB_005d25bc:
    piVar8 = piVar3;
    piVar10 = param_2 + 2;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    param_2[0xb] = 1;
    pvVar4 = (unsigned int *)_malloc(4);
    param_2[0xc] = (int)pvVar4;
    if (pvVar4 != (void *)0x0) {
      uVar6 = FUN_005cb49a(piVar3,param_2,0);
      goto LAB_005d25f1;
    }
  }
  uVar6 = 0x8007000e;
LAB_005d25f1:
  if (_Memory != (undefined4 *)0x0) {
    _free(_Memory);
  }
  return uVar6;
}
