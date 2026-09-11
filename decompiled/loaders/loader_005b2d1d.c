/* spd-match: far pct=3.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  undefined4 FUN_005b2d1d(int param_2, uint *param_3);
};
undefined4 ThisCallBox::FUN_005b2d1d(int param_2, uint *param_3) {
  uint * param_1 = (uint *)this;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  for (; param_1 != (uint *)0x0; param_1 = (uint *)param_1[2]) {
    if (param_3 != (uint *)0x0) {
      param_1[6] = *param_3;
      *param_3 = *param_3 + *param_1 * 4;
    }
    if (param_2 != 0) {
      if (param_1[5] == 0) {
        puVar3 = (undefined4 *)param_1[1];
      }
      else {
        puVar3 = (undefined4 *)(param_1[5] + 0x18);
      }
      puVar4 = (undefined4 *)(param_1[6] + param_2);
      for (uVar1 = *param_1 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  return 0;
}
