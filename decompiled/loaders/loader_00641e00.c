/* spd-match: far pct=7.26 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();

void FUN_00641e00(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0063f190(param_1 + 6);
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = (*(code *)param_1[4])(param_2,param_1[5]);
    *param_1 = *param_1 + 1;
    puVar3 = (undefined4 *)param_1[2];
    puVar2 = (undefined4 *)0x0;
    while ((puVar1 = puVar3, puVar1 != (undefined4 *)0x0 &&
           (uVar5 = (*(code *)param_1[4])(puVar1,param_1[5]), uVar5 < uVar4))) {
      puVar3 = (undefined4 *)*puVar1;
      puVar2 = puVar1;
    }
    *param_2 = puVar1;
    if (puVar2 == (undefined4 *)0x0) {
      param_1[2] = (int)param_2;
    }
    else {
      *puVar2 = param_2;
    }
    if (puVar1 == (undefined4 *)0x0) {
      param_1[3] = (int)param_2;
    }
    param_1[1] = param_1[1] | 1;
  }
  FUN_0063f1a0(param_1 + 6);
  return;
}
