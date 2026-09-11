/* spd-match: far pct=11.51 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061a3fb();
int __cdecl FUN_0061aea7();
extern void LAB_006115d3(void);
extern void LAB_006115e2(void);
extern void LAB_0061169d(void);

int __fastcall FUN_0061141a(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2c [4];
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (0x1ff < (param_1[0xc] & 0xffffU)) {
    iVar1 = FUN_0061aea7(0x13);
    return iVar1;
  }
  iVar1 = param_1[0x26];
  uVar2 = *(uint *)(iVar1 + 0xc);
  local_18 = 0;
  if (*(uint *)(iVar1 + 4) < uVar2) {
    iVar1 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_2c,4,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_0061a3fb(0x4e,local_2c + 1,1,*(undefined4 *)(param_1[0x26] + 8),0,0,1,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = param_1[0x26];
    uVar2 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      do {
        local_2c[uVar2] = local_2c[1];
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 0xc));
    }
    iVar1 = FUN_0061a3fb(1,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),local_2c,0,0,
                         *(undefined4 *)(iVar1 + 0xc),0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    local_14 = 0;
    do {
      local_8 = 0;
      if (uVar2 != 0) {
        local_10 = 1;
        local_c = 2;
        do {
          piVar3 = (int *)(local_8 * 4 + *(int *)(iVar1 + 0x10));
          local_1c = *(int *)(*(int *)(param_1[5] + *piVar3 * 4) + 0xc);
          if ((local_1c == 1) && (local_c < *(uint *)(iVar1 + 0xc))) {
            if (local_14 == 1) {
              puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + local_8 * 4);
              uVar6 = 0x4e;
LAB_006115d3:
              iVar1 = FUN_0061a3fb(uVar6,piVar3,1,puVar4,0,0,1,0,0,0);
              if (iVar1 < 0) {
                return iVar1;
              }
            }
LAB_006115e2:
            local_8 = local_8 + 1;
            local_c = local_c + 1;
            local_10 = local_10 + 1;
          }
          else {
            if (*(uint *)(iVar1 + 0xc) <= local_10) {
              if (local_14 == 0) {
                if (local_18 == 0) {
                  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_2c,4,0,0);
                  if (iVar1 < 0) {
                    return iVar1;
                  }
                  local_18 = 1;
                }
                iVar1 = FUN_0061a3fb(0x4e,local_2c + 1,1,*(int *)(param_1[0x26] + 8) + local_8 * 4,0
                                     ,0,1,0,0,0);
                if (iVar1 < 0) {
                  return iVar1;
                }
                puVar4 = local_2c + 1;
                piVar3 = (int *)(*(int *)(param_1[0x26] + 0x10) + local_8 * 4);
                uVar6 = 1;
                goto LAB_006115d3;
              }
              goto LAB_006115e2;
            }
            if ((local_1c == 0) && (*(int *)(*(int *)(param_1[5] + piVar3[1] * 4) + 0xc) == 1)) {
              if (local_14 == 1) {
                puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + local_8 * 4);
                uVar6 = 0x13;
LAB_0061169d:
                iVar1 = FUN_0061a3fb(uVar6,piVar3,2,puVar4,0,0,2,0,0,0);
                if (iVar1 < 0) {
                  return iVar1;
                }
              }
            }
            else if (local_14 == 0) {
              if (local_18 == 0) {
                iVar1 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_2c,4,0,0);
                if (iVar1 < 0) {
                  return iVar1;
                }
                local_18 = 1;
              }
              iVar5 = local_8 * 4;
              iVar1 = FUN_0061a3fb(0x13,local_2c,2,*(int *)(param_1[0x26] + 8) + iVar5,0,0,2,0,0,0);
              if (iVar1 < 0) {
                return iVar1;
              }
              puVar4 = local_2c;
              piVar3 = (int *)(*(int *)(param_1[0x26] + 0x10) + iVar5);
              uVar6 = 1;
              goto LAB_0061169d;
            }
            local_c = local_c + 2;
            local_8 = local_8 + 2;
            local_10 = local_10 + 2;
          }
          iVar1 = param_1[0x26];
          uVar2 = *(uint *)(iVar1 + 0xc);
        } while (local_8 < uVar2);
      }
      local_14 = local_14 + 1;
    } while (local_14 < 2);
  }
  return 0;
}
