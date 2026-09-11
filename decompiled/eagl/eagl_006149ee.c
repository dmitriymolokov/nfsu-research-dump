/* spd-match: far pct=5.15 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186(...);
extern void LAB_00614b06(...);

struct ThisCallBox {
  undefined4 FUN_006149ee(uint param_2, int param_3, uint param_4);
};
undefined4 ThisCallBox::FUN_006149ee(uint param_2, int param_3, uint param_4) {
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = param_2;
  iVar2 = (**(code **)(*((int *)this) + 0x24))(param_2,0);
  if (iVar2 == 0) {
    local_8 = 0;
    local_14 = *(int **)(param_2 + 0xc);
    param_2 = 0xffffffff;
    if (local_14 != (int *)0x0) {
      piVar3 = *(int **)(iVar1 + 0x10);
      do {
        iVar2 = *(int *)(((int *)this)[5] + *piVar3 * 4);
        uVar4 = *(uint *)(iVar2 + 0x30);
        if (local_8 < uVar4) {
          local_8 = uVar4;
        }
        uVar4 = *(uint *)(iVar2 + 0x2c);
        if (uVar4 < param_2) {
          param_2 = uVar4;
        }
        piVar3 = piVar3 + 1;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
    }
    local_18 = *(int *)(iVar1 + 4);
    if (local_18 != 0) {
      local_14 = *(int **)(iVar1 + 8);
      do {
        piVar3 = *(int **)(((int *)this)[5] + *local_14 * 4);
        if (((*(byte *)(*(int *)(((int *)this)[4] + *piVar3 * 4) + 4) & 2) != 0) && (piVar3[0xb] != -1)) {
          uVar4 = piVar3[0xb] + 1;
          if (local_8 < uVar4) {
            local_8 = uVar4;
          }
          while (uVar4 = piVar3[0xd], uVar4 <= param_2) {
            if ((uVar4 == 0xffffffff) || (uVar5 = 0, param_4 == 0)) {
LAB_00614b06:
              param_2 = piVar3[0xd] - 1;
              break;
            }
            do {
              if (*(int *)(param_3 + uVar5 * 4) == *(int *)(((int *)this)[6] + uVar4 * 4)) break;
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_4);
            if (param_4 <= uVar5) goto LAB_00614b06;
            iVar2 = *(int *)(param_3 + uVar5 * 4);
            local_c = 0;
            if (*(int *)(iVar2 + 0xc) != 0) {
              local_10 = *(int **)(iVar2 + 0x10);
              do {
                if (piVar3[3] == *(int *)(*(int *)(((int *)this)[5] + *local_10 * 4) + 0xc)) break;
                local_c = local_c + 1;
                local_10 = local_10 + 1;
              } while (local_c < *(uint *)(iVar2 + 0xc));
            }
            if (*(uint *)(iVar2 + 0xc) <= local_c) goto LAB_00614b06;
            piVar3 = *(int **)(((int *)this)[5] + *(int *)(*(int *)(iVar2 + 0x10) + local_c * 4) * 4);
          }
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    uVar4 = 0;
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar5 = *(uint *)(*(int *)(((int *)this)[5] + **(int **)(*(int *)(param_3 + uVar4 * 4) + 0x10) * 4
                                  ) + 0x2c);
        if ((local_8 <= uVar5) && (uVar5 <= param_2)) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_4);
    }
    if ((uVar4 != param_4) && (iVar2 = (**(code **)(*((int *)this) + 0x34))(iVar1,uVar5), iVar2 == 0)) {
      uVar4 = 0;
      if (param_4 != 0) {
        do {
          **(undefined4 **)(param_3 + uVar4 * 4) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_4);
      }
      if (*(int *)(((int *)this)[6] + uVar5 * 4) != 0) {
        FUN_005f7186(1);
      }
      *(int *)(((int *)this)[6] + uVar5 * 4) = iVar1;
      uVar4 = 0;
      if (*(int *)(iVar1 + 0xc) != 0) {
        do {
          iVar2 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          *(uint *)(*(int *)(((int *)this)[5] + *(int *)(*(int *)(iVar1 + 0x10) + iVar2) * 4) + 0x2c) =
               uVar5;
        } while (uVar4 < *(uint *)(iVar1 + 0xc));
      }
      return 0;
    }
  }
  if (iVar1 != 0) {
    FUN_005f7186(1);
  }
  return 1;
}
