/* spd-match: far pct=8.63 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f(...);
int __cdecl FUN_00618c39(...);
int __cdecl FUN_0061a26f(...);

struct ThisCallBox {
  int FUN_0060d6b0(int *param_2, uint *param_3);
};
int ThisCallBox::FUN_0060d6b0(int *param_2, uint *param_3) {
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_20 [7];
  
  uVar6 = (uint)*(byte *)((int)param_2 + 0x51);
  uVar2 = param_2[0x14] & 0xff;
  if (uVar2 == 1) {
    if ((uint)((int *)this)[0x1b] <= uVar6) {
      return -0x7fffbffb;
    }
    *param_3 = uVar6;
    local_20[5] = 1;
    uVar5 = ((int *)this)[uVar6 + 0x4b];
  }
  else {
    if (uVar2 != 3) {
      return -0x7fffbffb;
    }
    if (7 < uVar6) {
      return -0x7fffbffb;
    }
    *param_3 = uVar6 + 2;
    uVar5 = ((int *)this)[uVar6 + 0x43];
    local_20[5] = 3;
  }
  param_3 = (uint *)0x0;
  local_20[6] = 0;
  if (uVar5 != 0) {
    do {
      if (local_20[6] == 0) {
        param_3 = (uint *)((uint)param_3 | 0x10000);
      }
      else if (local_20[6] == 1) {
        param_3 = (uint *)((uint)param_3 | 0x20000);
      }
      else if (local_20[6] == 2) {
        param_3 = (uint *)((uint)param_3 | 0x40000);
      }
      else if (local_20[6] == 3) {
        param_3 = (uint *)((uint)param_3 | 0x80000);
      }
      local_20[6] = (int)local_20[6] + 1;
    } while (local_20[6] < uVar5);
  }
  if ((uVar2 == 3) && ((*(byte *)((int)param_2 + 0x1b) & 2) != 0)) {
    param_3 = (uint *)((uint)param_3 | 0x200000);
  }
  iVar3 = FUN_0061a26f(0x200001f);
  if ((-1 < iVar3) && (iVar3 = FUN_00618c39(0x80000000), -1 < iVar3)) {
    if ((*(byte *)(((int *)this) + 0xd) & 1) != 0) {
      local_20[4] = 0;
      local_20[6] = 0;
      local_20[0] = 0xffffffff;
      local_20[1] = 0xffffffff;
      local_20[2] = 0xffffffff;
      local_20[3] = 0xffffffff;
      uVar2 = ((int *)this)[2];
      if (uVar2 != 0) {
        puVar4 = (undefined4 *)((int *)this)[5];
        do {
          piVar1 = (int *)*puVar4;
          if (((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) && (param_2[2] == piVar1[2])) {
            local_20[piVar1[3]] = local_20[6];
          }
          local_20[6] = (int)local_20[6] + 1;
          puVar4 = puVar4 + 1;
        } while (local_20[6] < uVar2);
      }
      uVar5 = 0;
      uVar2 = local_20[4];
      do {
        if (local_20[uVar5] != 0xffffffff) {
          local_20[uVar2] = (int)local_20[uVar5];
          uVar2 = uVar2 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      iVar3 = (**(code **)(*((int *)this) + 0x60))(local_20,uVar2,&param_2,1);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    iVar3 = (**(code **)(*((int *)this) + 0x54))
                      (((local_20[5] | 0xfffffff8) << 0x14 | local_20[5] & 0x18) << 8 | uVar6,
                       param_3);
    if ((-1 < iVar3) && (iVar3 = FUN_0061663f(), -1 < iVar3)) {
      iVar3 = 0;
    }
  }
  return iVar3;
}
