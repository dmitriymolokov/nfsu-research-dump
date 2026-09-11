/* spd-match: far pct=5.79 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();

int FUN_00642290(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  iVar1 = param_1 + 0x18;
  local_4 = 0;
  FUN_0063f190(iVar1);
  uVar2 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar2 & 0xfffffffe;
  FUN_0063f1a0(iVar1);
  puVar3 = *(undefined4 **)(param_1 + 8);
  while ((puVar3 != (undefined4 *)0x0 && ((*(byte *)(param_1 + 4) & 1) == 0))) {
    iVar4 = (*param_2)(puVar3,param_3);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    puVar3 = (undefined4 *)*puVar3;
    local_4 = local_4 + 1;
  }
  FUN_0063f190(iVar1);
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    local_4 = -1;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar2 & 1;
  FUN_0063f1a0(iVar1);
  return local_4;
}
