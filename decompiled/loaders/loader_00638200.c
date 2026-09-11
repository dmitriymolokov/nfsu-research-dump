/* spd-match: far pct=4.82 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006e74b0;

void FUN_00638200(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_006e74b0;
  puVar3 = (undefined4 *)(param_2 + 0x1b00);
  do {
    *puVar3 = 0;
    uVar1 = *puVar4;
    iVar2 = (**(code **)(*param_1 + 0x28))
                      (param_1,*(undefined4 *)(param_2 + 0x210),1,*(undefined4 *)(param_2 + 0x220),0
                       ,3,uVar1);
    if (iVar2 == 0) {
      *puVar3 = uVar1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)puVar4 < 0x6e7540);
  return;
}
