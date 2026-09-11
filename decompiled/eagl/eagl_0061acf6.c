/* spd-match: far pct=11.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f();
int __cdecl FUN_0061a26f();

int __fastcall FUN_0061acf6(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x26];
  uVar3 = uVar1 & 0xffffff;
  if (uVar1 == 0xf7000003) {
    uVar4 = 0x18;
  }
  else if (uVar1 == 0xf8000003) {
    uVar4 = 0x17;
  }
  else if (uVar1 == 0xf8000004) {
    uVar4 = 0x15;
  }
  else if (uVar1 == 0xf9000003) {
    uVar4 = 0x16;
  }
  else {
    uVar4 = local_18;
    if (uVar1 == 0xf9000004) {
      uVar4 = 0x14;
    }
  }
  iVar2 = FUN_0061a26f(uVar4);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x5c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 0x10) * 4),
                           &local_8,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x60))
                         (*(undefined4 *)(param_1[0x26] + 0x10),*(undefined4 *)(param_1[0x26] + 0xc)
                          ,&local_c,local_18), -1 < iVar2)) &&
     (iVar2 = (**(code **)(*param_1 + 0x54))(local_8,local_c), -1 < iVar2)) {
    local_c = ((uVar3 != 3) - 1 & 0xfff80000) + 0xf0000;
    iVar2 = (**(code **)(*param_1 + 100))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 8) * 4),&local_8,
                       &local_10);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x68))
                           (*(undefined4 *)(param_1[0x26] + 8),uVar3,local_c,&local_14), -1 < iVar2)
        ) && (iVar2 = (**(code **)(*param_1 + 0x58))(local_8,local_14,local_10), -1 < iVar2)) {
      iVar2 = (**(code **)(*param_1 + 100))
                        (*(undefined4 *)
                          (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x26] + 8)) * 4),
                         &local_8,&local_10);
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*param_1 + 0x68))
                             (*(int *)(param_1[0x26] + 8) + uVar3 * 4,uVar3,local_c,&local_14),
          -1 < iVar2)) &&
         ((iVar2 = (**(code **)(*param_1 + 0x58))(local_8,local_14,local_10), -1 < iVar2 &&
          ((iVar2 = (**(code **)(*param_1 + 0x50))(), -1 < iVar2 &&
           (iVar2 = FUN_0061663f(), -1 < iVar2)))))) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
