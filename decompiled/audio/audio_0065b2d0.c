/* spd-match: far pct=1.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00654cd0();
int __cdecl FUN_00655660();
int __cdecl FUN_0065b040();
int __cdecl FUN_0065b130();

int FUN_0065b2d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))
                      (*(undefined4 **)(param_1 + 8),200,param_4,param_3,
                       *(undefined1 *)(param_1 + 0x1a));
    return iVar1;
  }
  iVar1 = FUN_0065b040(param_1,param_2);
  if ((-1 < *(int *)(param_1 + 0x20)) &&
     (iVar2 = FUN_00655660(*(int *)(param_1 + 0x20)), iVar2 < iVar1)) {
    return 0;
  }
  if (((iVar1 < 1) ||
      (iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))
                         (*(undefined4 **)(param_1 + 8),iVar1,param_4,param_3,
                          *(undefined1 *)(param_1 + 0x1a)), 0 < iVar1)) &&
     (iVar2 = FUN_0065b130(param_1,param_2,param_3,param_4), iVar1 = param_2, iVar2 < param_2)) {
    FUN_00654cd0(param_4 + iVar2 * 4,(param_2 - iVar2) * 4);
  }
  return iVar1;
}
