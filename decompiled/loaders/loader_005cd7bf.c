/* spd-match: far pct=5.96 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/batches/p1_09/h3_loader_recipe */
#include "ghidra_compat.h"

unsigned int __cdecl __controlfp(unsigned int, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005c8286(...);
int __cdecl FUN_005c8e04(...);
int __cdecl FUN_005ccec4(...);
int __cdecl FUN_005d65b0(...);

struct ThisCallBox {
  int FUN_005cd7bf(int param_2, int *param_3, uint *param_4);
};
int ThisCallBox::FUN_005cd7bf(int param_2, int *param_3, uint *param_4) {
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_c;
  int local_8;
  
  puVar7 = param_4;
  if ((param_3 != (int *)0x0) &&
     (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), puVar7 = param_4, *param_4 + 1 <= uVar1)) {
    iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
    local_c = *(uint *)(iVar2 + *puVar7 * 4);
  }
  *puVar7 = *puVar7 + 1;
  if ((param_3 == (int *)0x0) || (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), *puVar7 <= uVar1)
     ) {
    local_8 = 0;
    if ((local_c != 0) && (local_8 = FUN_005d65b0(local_c,param_2 + 0x50), -1 < (unsigned int)(local_8))) {
      puVar3 = (undefined4 *)
               (**(code **)(**(int **)(param_2 + 0x50) + 0xc))(*(int **)(param_2 + 0x50));
      if ((param_3 != (int *)0x0) &&
         (uVar1 = (**(code **)(*param_3 + 0x10))(param_3),
         (uint)((local_c & 3) != 0) + (local_c >> 2) + *puVar7 <= uVar1)) {
        iVar2 = (**(code **)(*param_3 + 0xc))(param_3);
        puVar5 = (undefined4 *)(iVar2 + *puVar7 * 4);
        puVar6 = puVar3;
        for (uVar1 = local_c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar1 = local_c & 3; puVar7 = param_4, uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      *puVar7 = *puVar7 + (uint)((local_c & 3) != 0) + (local_c >> 2);
      if ((param_3 == (int *)0x0) ||
         (uVar1 = (**(code **)(*param_3 + 0x10))(param_3), *puVar7 <= uVar1)) {
        local_8 = FUN_005c8e04(puVar3,(undefined4 *)(param_2 + 0x34));
        if ((-1 < (unsigned int)(local_8)) &&
           (local_8 = FUN_005ccec4(param_2,*(undefined4 *)(param_2 + 0x34),1), -1 < (unsigned int)(local_8))) {
          param_4 = (uint *)(*(int *)(param_2 + 0x10) + *(int *)(((int)this) + 0x2c));
          iVar2 = FUN_005c8286(&param_4,4);
          *(int *)(param_2 + 0x38) = iVar2;
          iVar2 = iVar2 * 4;
          *(int *)(param_2 + 0x40) = iVar2;
          if (iVar2 != 0) {
            *(int *)(param_2 + 0x40) = iVar2 + -1;
          }
          uVar4 = *(uint *)(param_2 + 0x40) >> 1 | *(uint *)(param_2 + 0x40);
          uVar4 = uVar4 >> 2 | uVar4;
          uVar4 = uVar4 >> 4 | uVar4;
          uVar4 = uVar4 >> 8 | uVar4;
          uVar4 = uVar4 >> 0x10 | uVar4;
          uVar1 = uVar4 * 8 + 8;
          *(uint *)(param_2 + 0x40) = uVar4;
          puVar3 = (undefined4 *)_malloc(uVar1);
          *(undefined4 **)(param_2 + 0x48) = puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            local_8 = -0x7ff8fff2;
          }
          else {
            for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined1 *)puVar3 = 0;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
          }
        }
      }
      else {
        local_8 = -0x7fffbffb;
      }
    }
  }
  else {
    local_8 = -0x7fffbffb;
  }
  return local_8;
}
