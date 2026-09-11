/* spd-match: far pct=6.59 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __cdecl FUN_0061556b();

int __fastcall FUN_00618a35(int *param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_1c;
  int local_18;
  uint *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_14 = (uint *)0x0;
  puVar1 = (uint *)param_1[0x26];
  uVar7 = *puVar1 & 0xffffff;
  local_8 = CONCAT13(0x24,(int3)*puVar1);
  local_10 = uVar7;
  local_c = (undefined4 *)FUN_0061556b(local_8,puVar1,&local_1c,2,1);
  if (((local_c != (undefined4 *)0x0) ||
      ((local_14 = (uint *)FUN_0061556b(local_10 | 0x11000000,puVar1,0,2,1), local_14 != (uint *)0x0
       && (local_c = (undefined4 *)FUN_0061556b(local_8,local_14,&local_1c,2,1),
          local_c != (undefined4 *)0x0)))) &&
     (iVar4 = *(int *)(param_1[5] + **(int **)(param_1[0x26] + 0x10) * 4),
     (*(uint *)(iVar4 + 0x20) & 0xfff7ffff) == 0)) {
    pvVar2 = _malloc(0x38);
    if (pvVar2 == (void *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_005f7709();
    }
    iVar6 = local_18;
    if (local_18 == 0) {
      return -0x7ff8fff2;
    }
    if ((local_14 == (uint *)0x0) && ((*(byte *)(iVar4 + 0x22) & 8) == 0)) {
      uVar3 = local_10 | 0xf5000000;
    }
    else {
      uVar3 = local_10 | 0xf6000000;
    }
    iVar4 = FUN_005f7760(uVar3,uVar7 * 3,uVar7,0);
    puVar8 = local_c;
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar5 = FUN_005f7a42(local_c);
    iVar4 = local_18;
    if (iVar5 < 0) {
      return iVar5;
    }
    puVar8 = (undefined4 *)puVar8[4];
    puVar9 = *(undefined4 **)(iVar6 + 0x10);
    for (uVar3 = uVar7; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar8 = (undefined4 *)puVar1[2];
    puVar9 = *(undefined4 **)(local_18 + 8);
    for (iVar6 = uVar7 << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar8 = (undefined4 *)(local_c[2] + uVar7 * 4);
    puVar9 = (undefined4 *)(*(int *)(local_18 + 8) + uVar7 * 8);
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar6 = (**(code **)(*param_1 + 0x24))(local_18,0);
    puVar8 = local_c;
    if (iVar6 == 0) {
      *puVar1 = 0;
      *local_c = 0;
      if (local_14 != (uint *)0x0) {
        *local_14 = 0;
      }
      iVar6 = (**(code **)(*param_1 + 0x34))(iVar4,local_1c);
      if (iVar6 == 0) {
        if (*(int *)(local_1c * 4 + param_1[6]) != 0) {
          FUN_005f7186(1);
        }
        *(int *)(local_1c * 4 + param_1[6]) = iVar4;
        return 0;
      }
      *puVar1 = local_10 | 0x25000000;
      *puVar8 = local_8;
      if (local_14 != (uint *)0x0) {
        *local_14 = local_10 | 0x11000000;
      }
    }
    FUN_005f7186(1);
  }
  return 1;
}
