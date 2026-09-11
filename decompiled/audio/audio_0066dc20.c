/* spd-match: far pct=5.66 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0066db20();

undefined4 FUN_0066dc20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0066db20(param_1);
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(puVar1[2],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[1];
}
