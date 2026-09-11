/* spd-match: far pct=14.60 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f();
int __cdecl FUN_0061a26f();

int __fastcall FUN_0061aa11(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  uVar3 = *(uint *)param_1[0x26] & 0xffffff;
  uVar1 = (**(code **)(*param_1 + 0x4c))(0x12);
  iVar2 = FUN_0061a26f(uVar1);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x5c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 0x10) * 4),
                           &local_8,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x60))
                         (*(undefined4 *)(param_1[0x26] + 0x10),uVar3,&local_14,local_18),
      -1 < iVar2)) && (iVar2 = (**(code **)(*param_1 + 0x54))(local_8,local_14), -1 < iVar2)) {
    local_10 = 0;
    local_c = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1[0x26] + 8) + local_c);
      iVar2 = (**(code **)(*param_1 + 100))
                        (*(undefined4 *)(param_1[5] + *piVar4 * 4),&local_8,&local_1c);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(piVar4,uVar3,local_14,&local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x58))(local_8,local_20,local_1c);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_10 = local_10 + 1;
      local_c = local_c + uVar3 * 4;
    } while (local_10 < 3);
    iVar2 = (**(code **)(*param_1 + 0x50))();
    if ((-1 < iVar2) && (iVar2 = FUN_0061663f(), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}
