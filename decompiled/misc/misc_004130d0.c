/* spd-match: far pct=2.01 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004131a0();
int unaff_EBX;

undefined4 FUN_004130d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  byte local_14 [20];
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[5] = 0;
    local_14[6] = 0;
    local_14[7] = 0;
    local_14[8] = 0;
    local_14[9] = 0;
    local_14[10] = 0;
    local_14[0xb] = 0;
    local_14[0xc] = 0;
    local_14[0xd] = 0;
    local_14[0xe] = 0;
    local_14[0xf] = 0;
    local_14[0x10] = 0;
    local_14[0x11] = 0;
    local_14[0x12] = 0;
    local_14[0x13] = 0;
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
      if (iVar2 == -0x7ff8ffe2) {
        do {
          iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
        } while (iVar2 == -0x7ff8ffe2);
        return 0;
      }
    }
    else {
      param_1[1] = param_1[1] + 0x14;
      param_1[2] = (int)(local_14 + param_1[2]);
      param_1[5] = unaff_EBX;
      param_1[3] = 0x14;
      param_1[4] = (int)local_14;
      *(bool *)((int)param_1 + 0x1a) = (local_14[0] >> 7 & *(byte *)(param_1 + 6) == 0) != 0;
      *(bool *)((int)param_1 + 0x19) = (*(byte *)(param_1 + 6) & -1 < (char)local_14[0]) != 0;
      *(byte *)(param_1 + 6) = local_14[0] >> 7;
      FUN_004131a0(param_1);
    }
  }
  return 0;
}
