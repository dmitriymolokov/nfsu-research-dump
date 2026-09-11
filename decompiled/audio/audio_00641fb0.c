/* spd-match: far pct=16.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();

undefined4 * FUN_00641fb0(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0063f190(param_1 + 0x18);
  puVar1 = *(undefined4 **)(param_1 + 8);
  while (((puVar1 != (undefined4 *)0x0 && (param_2 != (code *)0x0)) &&
         (iVar2 = (*param_2)(puVar1,param_3), iVar2 == 0))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_0063f1a0(param_1 + 0x18);
  return puVar1;
}
