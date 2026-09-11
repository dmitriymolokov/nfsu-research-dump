/* spd-match: far pct=26.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005d6598();

int FUN_005d65b0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    pvVar2 = _malloc(0x10);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_005d6598();
    }
    if (piVar3 == (int *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x18))(param_1);
      if (iVar1 < 0) {
        (**(code **)(*piVar3 + 0x14))(1);
      }
      else {
        *param_2 = piVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
