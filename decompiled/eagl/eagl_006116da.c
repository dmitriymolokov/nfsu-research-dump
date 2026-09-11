/* spd-match: far pct=10.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061a3fb();
int __cdecl FUN_0061af1a();

int __fastcall FUN_006116da(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_24 [4];
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  iVar2 = param_1[0x26];
  uVar5 = *(uint *)(iVar2 + 0xc);
  local_8 = 0;
  if (uVar5 != 0) {
    local_c = *(int **)(iVar2 + 0x10);
    do {
      if ((*(byte *)(*(int *)(param_1[5] + *local_c * 4) + 0x1b) & 2) == 0) break;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_8 < uVar5);
  }
  if (local_8 < uVar5) {
    uVar7 = *(undefined4 *)(iVar2 + 4);
    uVar10 = *(undefined4 *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0x10);
    uVar8 = 0xe;
  }
  else {
    if ((param_1[0xc] & 0xffffU) < 0x200) {
      local_c = (int *)0x0;
      if (*(uint *)(iVar2 + 4) < uVar5) {
        iVar2 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_24,4,0,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = FUN_0061a3fb(0x4e,local_24 + 2,1,*(undefined4 *)(param_1[0x26] + 8),0,0,1,0,0,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = param_1[0x26];
        uVar5 = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          do {
            local_24[uVar5] = local_24[2];
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar2 + 0xc));
        }
        iVar2 = FUN_0061a3fb(1,*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0xc),local_24,0
                             ,0,*(undefined4 *)(iVar2 + 0xc),0,0,0);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      else {
        local_8 = 0;
        if (uVar5 != 0) {
          do {
            iVar6 = local_8 * 4;
            piVar4 = (int *)(*(int *)(iVar2 + 0x10) + iVar6);
            iVar1 = *(int *)(*(int *)(param_1[5] + *piVar4 * 4) + 0xc);
            piVar3 = (int *)(*(int *)(iVar2 + 8) + iVar6);
            iVar2 = *(int *)(param_1[5] + *piVar3 * 4);
            local_14 = piVar4;
            local_10 = piVar3;
            if ((((iVar1 == 0) && ((*(byte *)(iVar2 + 0x18) & 2) != 0)) || (iVar1 == 2)) ||
               (((iVar1 == 3 && (uVar5 = *(uint *)(iVar2 + 0x18), (uVar5 & 4) != 0)) &&
                ((uVar5 & 8) != 0)))) {
              uVar7 = 0x4e;
            }
            else {
              if (local_c == (int *)0x0) {
                iVar2 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_24,4,0,0);
                if (iVar2 < 0) {
                  return iVar2;
                }
                local_c = (int *)0x1;
              }
              iVar2 = FUN_0061a3fb(0x4e,local_24 + 2,1,*(int *)(param_1[0x26] + 8) + iVar6,0,0,1,0,0
                                   ,0);
              if (iVar2 < 0) {
                return iVar2;
              }
              piVar3 = local_24 + 2;
              piVar4 = (int *)(*(int *)(param_1[0x26] + 0x10) + iVar6);
              uVar7 = 1;
            }
            iVar2 = FUN_0061a3fb(uVar7,piVar4,1,piVar3,0,0,1,0,0,0);
            if (iVar2 < 0) {
              return iVar2;
            }
            local_8 = local_8 + 1;
            iVar2 = param_1[0x26];
          } while (local_8 < *(uint *)(iVar2 + 0xc));
        }
      }
      return 0;
    }
    uVar7 = *(undefined4 *)(iVar2 + 4);
    uVar10 = *(undefined4 *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0x10);
    uVar8 = 0x4e;
  }
  iVar2 = FUN_0061af1a(uVar8,uVar9,uVar10,uVar5,uVar7,0,0);
  return iVar2;
}
