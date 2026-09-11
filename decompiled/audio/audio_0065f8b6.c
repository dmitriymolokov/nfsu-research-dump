/* spd-match: far pct=3.57 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uint_uint */
#include "ghidra_compat.h"

int  FUN_0065f640(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  iVar5 = param_1[2];
  iVar6 = 0;
  local_10 = 0;
  param_1[0x29] = *param_2;
  if (iVar5 != 0) {
    if (param_3 < iVar5) {
      iVar5 = param_3;
    }
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      local_10 = iVar4;
      if (iVar5 < iVar4) {
        local_10 = iVar5;
      }
      if (3 < local_10) {
        iVar4 = 3;
        do {
          *(undefined4 *)param_1[0x29] = *(undefined4 *)param_1[4];
          iVar1 = param_1[0x29];
          iVar2 = param_1[4];
          param_1[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          param_1[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar1 = param_1[0x29];
          iVar2 = param_1[4];
          param_1[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          param_1[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar1 = param_1[0x29];
          iVar2 = param_1[4];
          param_1[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          param_1[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar4 = iVar4 + 4;
          iVar6 = iVar6 + 4;
          param_1[0x29] = param_1[0x29] + 4;
          param_1[4] = param_1[4] + 4;
        } while (iVar4 < local_10);
      }
      if (iVar6 < local_10) {
        iVar6 = local_10 - iVar6;
        do {
          *(undefined4 *)param_1[0x29] = *(undefined4 *)param_1[4];
          iVar6 = iVar6 + -1;
          param_1[0x29] = param_1[0x29] + 4;
          param_1[4] = param_1[4] + 4;
        } while (iVar6 != 0);
      }
      param_1[2] = param_1[2] - local_10;
      param_1[1] = param_1[1] - local_10;
      iVar5 = iVar5 - local_10;
    }
    iVar4 = (iVar5 / 0x1c) * 0x1c;
    iVar6 = iVar5 % 0x1c;
    param_1[0x25] = iVar4;
    if (0 < iVar4) {
      (*(code *)*param_1)(param_1 + 0x25);
      local_10 = local_10 + iVar4;
      param_1[2] = param_1[2] + (iVar5 / 0x1c) * -0x1c;
    }
    if (0 < iVar6) {
      iVar5 = param_1[0x29];
      param_1[0x29] = (unsigned int)(param_1 + 9);
      param_1[0x25] = iVar6;
      (*(code *)*param_1)(param_1 + 0x25);
      param_1[2] = param_1[2] - iVar6;
      param_1[4] = param_1[0x29] + param_1[0x25] * 4;
      iVar4 = 0;
      param_1[1] = -param_1[0x25];
      param_1[0x29] = param_1[0x29] + -0x70;
      if (3 < iVar6) {
        param_3 = 3;
        param_2 = (undefined4 *)0x8;
        puVar3 = (undefined4 *)(iVar5 + 8);
        do {
          puVar3[-2] = *(undefined4 *)((int)puVar3 + param_1[0x29] + -iVar5 + -8);
          puVar3[-1] = *(undefined4 *)((int)puVar3 + param_1[0x29] + -iVar5 + -4);
          *puVar3 = *(undefined4 *)(param_1[0x29] + (int)param_2);
          puVar3[1] = *(undefined4 *)((int)puVar3 + param_1[0x29] + (4 - iVar5));
          param_3 = param_3 + 4;
          param_2 = (undefined4 *)((int)param_2 + 0x10);
          iVar4 = iVar4 + 4;
          puVar3 = puVar3 + 4;
        } while (param_3 < iVar6);
      }
      for (; iVar4 < iVar6; iVar4 = iVar4 + 1) {
        *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(param_1[0x29] + iVar4 * 4);
      }
      local_10 = local_10 + iVar6;
    }
    if ((int)param_1[2] < 1) {
      param_1[1] = 0;
    }
    return local_10;
  }
  return 0;
}
