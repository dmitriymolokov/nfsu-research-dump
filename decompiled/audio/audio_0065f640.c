/* spd-match: far pct=6.72 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_uint/batches/20260724T132840Z_w0_tp1 */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_0065f640(undefined4 *param_2, int param_3);
};
int ThisCallBox::FUN_0065f640(undefined4 *param_2, int param_3) {
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  iVar5 = ((undefined4 *)this)[2];
  iVar6 = 0;
  local_10 = 0;
  ((undefined4 *)this)[0x29] = *param_2;
  if (iVar5 != 0) {
    if (param_3 < iVar5) {
      iVar5 = param_3;
    }
    iVar4 = ((undefined4 *)this)[1];
    if (iVar4 != 0) {
      local_10 = iVar4;
      if (iVar5 < iVar4) {
        local_10 = iVar5;
      }
      if (3 < local_10) {
        iVar4 = 3;
        do {
          *(undefined4 *)((undefined4 *)this)[0x29] = *(undefined4 *)((undefined4 *)this)[4];
          iVar1 = ((undefined4 *)this)[0x29];
          iVar2 = ((undefined4 *)this)[4];
          ((undefined4 *)this)[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          ((undefined4 *)this)[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar1 = ((undefined4 *)this)[0x29];
          iVar2 = ((undefined4 *)this)[4];
          ((undefined4 *)this)[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          ((undefined4 *)this)[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar1 = ((undefined4 *)this)[0x29];
          iVar2 = ((undefined4 *)this)[4];
          ((undefined4 *)this)[0x29] = (unsigned int)((undefined4 *)(iVar1 + 4));
          ((undefined4 *)this)[4] = (unsigned int)((undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
          iVar4 = iVar4 + 4;
          iVar6 = iVar6 + 4;
          ((undefined4 *)this)[0x29] = ((undefined4 *)this)[0x29] + 4;
          ((undefined4 *)this)[4] = ((undefined4 *)this)[4] + 4;
        } while (iVar4 < local_10);
      }
      if (iVar6 < local_10) {
        iVar6 = local_10 - iVar6;
        do {
          *(undefined4 *)((undefined4 *)this)[0x29] = *(undefined4 *)((undefined4 *)this)[4];
          iVar6 = iVar6 + -1;
          ((undefined4 *)this)[0x29] = ((undefined4 *)this)[0x29] + 4;
          ((undefined4 *)this)[4] = ((undefined4 *)this)[4] + 4;
        } while (iVar6 != 0);
      }
      ((undefined4 *)this)[2] = ((undefined4 *)this)[2] - local_10;
      ((undefined4 *)this)[1] = ((undefined4 *)this)[1] - local_10;
      iVar5 = iVar5 - local_10;
    }
    iVar4 = (iVar5 / 0x1c) * 0x1c;
    iVar6 = iVar5 % 0x1c;
    ((undefined4 *)this)[0x25] = iVar4;
    if (0 < iVar4) {
      (*(code *)*((undefined4 *)this))(((undefined4 *)this) + 0x25);
      local_10 = local_10 + iVar4;
      ((undefined4 *)this)[2] = ((undefined4 *)this)[2] + (iVar5 / 0x1c) * -0x1c;
    }
    if (0 < iVar6) {
      iVar5 = ((undefined4 *)this)[0x29];
      ((undefined4 *)this)[0x29] = (unsigned int)(((undefined4 *)this) + 9);
      ((undefined4 *)this)[0x25] = iVar6;
      (*(code *)*((undefined4 *)this))(((undefined4 *)this) + 0x25);
      ((undefined4 *)this)[2] = ((undefined4 *)this)[2] - iVar6;
      ((undefined4 *)this)[4] = ((undefined4 *)this)[0x29] + ((undefined4 *)this)[0x25] * 4;
      iVar4 = 0;
      ((undefined4 *)this)[1] = -((undefined4 *)this)[0x25];
      ((undefined4 *)this)[0x29] = ((undefined4 *)this)[0x29] + -0x70;
      if (3 < iVar6) {
        param_3 = 3;
        param_2 = (undefined4 *)0x8;
        puVar3 = (undefined4 *)(iVar5 + 8);
        do {
          puVar3[-2] = *(undefined4 *)((int)puVar3 + ((undefined4 *)this)[0x29] + -iVar5 + -8);
          puVar3[-1] = *(undefined4 *)((int)puVar3 + ((undefined4 *)this)[0x29] + -iVar5 + -4);
          *puVar3 = *(undefined4 *)(((undefined4 *)this)[0x29] + (int)param_2);
          puVar3[1] = *(undefined4 *)((int)puVar3 + ((undefined4 *)this)[0x29] + (4 - iVar5));
          param_3 = param_3 + 4;
          param_2 = (undefined4 *)((int)param_2 + 0x10);
          iVar4 = iVar4 + 4;
          puVar3 = puVar3 + 4;
        } while (param_3 < iVar6);
      }
      for (; iVar4 < iVar6; iVar4 = iVar4 + 1) {
        *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(((undefined4 *)this)[0x29] + iVar4 * 4);
      }
      local_10 = local_10 + iVar6;
    }
    if ((int)((undefined4 *)this)[2] < 1) {
      ((undefined4 *)this)[1] = 0;
    }
    return local_10;
  }
  return 0;
}
