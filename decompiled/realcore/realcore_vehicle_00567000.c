/* spd-match: far pct=2.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_00565ce0();
extern void LAB_0056707b(void);

void FUN_00567000(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    do {
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x24);
      iVar5 = *(int *)(iVar5 + 8);
    } while (iVar5 != 0);
    for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      for (iVar5 = *(int *)(param_1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        iVar9 = 0;
        if (iVar5 != 0) {
          iVar7 = iVar5;
          do {
            uVar6 = (uint)((int)puVar2 + (-0x30 - iVar7)) / *(uint *)(iVar5 + 0x28);
            if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(iVar7 + 0x24))) {
              if ((-1 < (int)(uVar6 + iVar9)) && ((int)(uVar6 + iVar9) < *(int *)(iVar5 + 0x24))) {
                *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + -1;
                goto LAB_0056707b;
              }
              break;
            }
            piVar1 = (int *)(iVar7 + 0x24);
            iVar7 = *(int *)(iVar7 + 8);
            iVar9 = iVar9 + *piVar1;
          } while (iVar7 != 0);
        }
      }
LAB_0056707b:;
    }
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = param_1;
    while (iVar7 = iVar9, iVar9 = iVar5, iVar9 != 0) {
      iVar5 = *(int *)(iVar9 + 8);
      if (*(int *)(iVar9 + 0x18) == 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        puVar4 = (undefined4 *)(param_1 + 0x10);
joined_r0x005670be:
        puVar3 = puVar4;
        puVar4 = puVar2;
        if (puVar4 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar4;
          iVar10 = 0;
          iVar8 = iVar9;
          do {
            uVar6 = (uint)((int)puVar4 + (-0x30 - iVar8)) / *(uint *)(iVar9 + 0x28);
            if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(iVar8 + 0x24))) {
              if ((-1 < (int)(uVar6 + iVar10)) && ((int)(uVar6 + iVar10) < *(int *)(iVar9 + 0x24)))
              {
                *puVar3 = puVar2;
                puVar4 = puVar3;
              }
              break;
            }
            piVar1 = (int *)(iVar8 + 0x24);
            iVar8 = *(int *)(iVar8 + 8);
            iVar10 = iVar10 + *piVar1;
          } while (iVar8 != 0);
          goto joined_r0x005670be;
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - *(int *)(iVar9 + 0x24);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar9 + 8);
        FUN_00565ce0();
        iVar9 = iVar7;
      }
    }
  }
  return;
}
