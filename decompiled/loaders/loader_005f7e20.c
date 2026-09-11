/* spd-match: far pct=10.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

void FUN_005f7e20(code *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_c;
  uint local_8;
  
  puVar3 = param_2;
  if (1 < param_3) {
    uVar5 = param_3 >> 1;
    if (uVar5 != 0) {
      local_8 = uVar5 * 2 + 1;
      do {
        uVar5 = uVar5 - 1;
        uVar1 = puVar3[uVar5];
        local_8 = local_8 - 2;
        uVar8 = local_8;
        param_2 = (undefined4 *)uVar5;
        while (uVar8 < param_3) {
          local_c = puVar3[uVar8];
          uVar7 = uVar8;
          if (uVar8 + 1 < param_3) {
            uVar6 = puVar3[uVar8 + 1];
            iVar4 = (*param_1)(uVar6,local_c,param_4);
            if (0 < iVar4) {
              uVar7 = uVar8 + 1;
              local_c = uVar6;
            }
          }
          iVar4 = (*param_1)(local_c,uVar1,param_4);
          if (iVar4 < 1) break;
          puVar3[(int)param_2] = puVar3[uVar7];
          param_2 = (undefined4 *)uVar7;
          uVar8 = uVar7 * 2 + 1;
        }
        puVar3[(int)param_2] = uVar1;
      } while (uVar5 != 0);
    }
    while (param_3 = param_3 - 1, param_3 != 0) {
      param_2 = (undefined4 *)0x0;
      uVar1 = puVar3[param_3];
      uVar5 = 1;
      puVar3[param_3] = *puVar3;
      if (1 < param_3) {
        do {
          uVar6 = puVar3[uVar5];
          uVar8 = uVar5;
          if (uVar5 + 1 < param_3) {
            uVar2 = puVar3[uVar5 + 1];
            iVar4 = (*param_1)(uVar2,uVar6,param_4);
            if (0 < iVar4) {
              uVar6 = uVar2;
              uVar8 = uVar5 + 1;
            }
          }
          iVar4 = (*param_1)(uVar6,uVar1,param_4);
          if (iVar4 < 1) break;
          uVar5 = uVar8 * 2 + 1;
          puVar3[(int)param_2] = puVar3[uVar8];
          param_2 = (undefined4 *)uVar8;
        } while (uVar5 < param_3);
      }
      puVar3[(int)param_2] = uVar1;
    }
  }
  return;
}
