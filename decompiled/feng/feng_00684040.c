/* spd-match: far pct=6.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f1b0();

int FUN_00684040(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 100))(param_1);
  if (((iVar1 == -0x7ff8fff4) || (iVar1 == -0x7ff8ffe2)) &&
     (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 100))(param_1);
  }
  FUN_0063f1b0(0x718278,param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_1);
  if ((iVar1 == -0x7ff8fff4) || (iVar1 == -0x7ff8ffe2)) {
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
    if (iVar1 != 0) goto code_r0x006840b7;
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_1);
  }
  if (iVar1 == 0) {
    return 0;
  }
code_r0x006840b7:
  FUN_0063f1b0(param_1,0x718278,param_2);
  return iVar1;
}
