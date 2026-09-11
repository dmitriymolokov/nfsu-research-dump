/* spd-match: far pct=19.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005d78c0();

int __fastcall FUN_005d795a(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  piVar4 = &local_8;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return local_8;
    }
    if (param_1[1] != 1) break;
    pvVar1 = _malloc(0x14);
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005d78c0();
    }
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      return local_8;
    }
    *(int *)(iVar2 + 0x10) = param_1[4];
    if ((int *)param_1[2] != (int *)0x0) {
      uVar3 = (**(code **)(*(int *)param_1[2] + 8))();
      *(undefined4 *)(*piVar4 + 8) = uVar3;
      if (*(int *)(*piVar4 + 8) == 0) {
        if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar4)(1);
        }
        *piVar4 = 0;
        return local_8;
      }
    }
    param_1 = (int *)param_1[3];
    piVar4 = (int *)(*piVar4 + 0xc);
  }
  iVar2 = (**(code **)(*param_1 + 8))();
  *piVar4 = iVar2;
  return local_8;
}
