/* spd-match: far pct=19.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern void LAB_00666e90(void);

void FUN_00666e50(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),*param_2);
    if (iVar1 < 1) {
      iVar1 = (**(code **)(param_1 + 0x24))
                        (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),param_3);
      if (iVar1 < 1) goto LAB_00666e90;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_00666e90:
  *param_2 = param_3;
  return;
}
