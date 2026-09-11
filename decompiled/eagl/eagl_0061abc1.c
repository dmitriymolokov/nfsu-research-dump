/* spd-match: far pct=12.30 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f();
int __cdecl FUN_0061a26f();

int __fastcall FUN_0061abc1(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = *(uint *)param_1[0x26] & 0xffffff;
  uVar2 = (**(code **)(*param_1 + 0x4c))(4);
  iVar3 = FUN_0061a26f(uVar2);
  if ((((-1 < iVar3) &&
       (iVar3 = (**(code **)(*param_1 + 0x5c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 0x10) * 4),
                           &local_c,&local_18), -1 < iVar3)) &&
      (iVar3 = (**(code **)(*param_1 + 0x60))
                         (*(undefined4 *)(param_1[0x26] + 0x10),uVar4,&local_10,local_18),
      -1 < iVar3)) && (iVar3 = (**(code **)(*param_1 + 0x54))(local_c,local_10), -1 < iVar3)) {
    local_8 = 0;
    do {
      piVar1 = (int *)(((uint *)param_1[0x26])[2] + local_8 * uVar4 * 4);
      if ((local_8 == 1) && ((*(uint *)param_1[0x26] & 0xff000000) == 0xf6000000)) {
        local_14 = 0x1000000;
      }
      else {
        local_14 = 0;
      }
      iVar3 = (**(code **)(*param_1 + 100))
                        (*(undefined4 *)(param_1[5] + *piVar1 * 4),&local_c,&local_1c);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x68))(piVar1,uVar4,local_10,&local_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x58))(local_14 ^ local_c,local_20,local_1c);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 3);
    iVar3 = (**(code **)(*param_1 + 0x50))();
    if ((-1 < iVar3) && (iVar3 = FUN_0061663f(), -1 < iVar3)) {
      iVar3 = 0;
    }
  }
  return iVar3;
}
