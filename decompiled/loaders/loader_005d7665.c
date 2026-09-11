/* spd-match: far pct=8.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_005d7113();
int __cdecl FUN_005f70e0();

int FUN_005d7665(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  
  puVar2 = param_2;
  piVar1 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    iVar3 = FUN_005d7113(param_1,0x42415443,&local_8,&param_2);
    if (-1 < iVar3) {
      puVar6 = local_8;
      if (iVar3 == 1) {
        local_14 = *piVar1;
        uStack_18 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        local_1c = 0x14;
        param_2 = (undefined4 *)0x14;
        puVar6 = &local_1c;
      }
      iVar3 = FUN_005f70e0(param_2,&param_1);
      if (-1 < iVar3) {
        puVar4 = (**(undefined4 * (**)())(*param_1 + 0xc))(param_1);
        for (uVar5 = (uint)param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar5 = (uint)param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        *puVar2 = param_1;
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
