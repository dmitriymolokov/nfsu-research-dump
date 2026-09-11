/* spd-match: far pct=8.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f();
int __cdecl FUN_0061a26f();

int __fastcall FUN_0061a926(int *param_1)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0061a26f(1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x5c))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 0x10) * 4),&local_8,
                       &local_10);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x60))
                        (*(undefined4 *)(param_1[0x26] + 0x10),*(undefined4 *)(param_1[0x26] + 0xc),
                         &local_c,local_10);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x54))(local_8,local_c);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 100))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x26] + 8) * 4),
                             &local_8,&local_14);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x68))
                              (*(undefined4 *)(param_1[0x26] + 8),
                               *(undefined4 *)(param_1[0x26] + 0xc),local_c,&local_18);
            if (-1 < iVar1) {
              iVar1 = (**(code **)(*param_1 + 0x58))(local_8,local_18 | 0x1000000,local_14);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(*param_1 + 0x50))();
                if (-1 < iVar1) {
                  iVar1 = FUN_0061663f();
                  if (-1 < iVar1) {
                    iVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}
