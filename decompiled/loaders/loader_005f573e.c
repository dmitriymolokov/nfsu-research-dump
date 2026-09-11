/* spd-match: far pct=5.03 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_08/attempt3_recipe_thiscall_f573e */
#include "ghidra_compat.h"

struct ThisCallBox {
  short * FUN_005f573e(int param_2, short *param_3);
};
short * ThisCallBox::FUN_005f573e(int param_2, short *param_3) {
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint local_c;
  
  puVar1 = (ushort *)(param_3 + 5);
  if (*puVar1 == 0) {
    if (*(short *)(param_2 + 4) == 0) {
      uVar8 = (uint)(ushort)param_3[3];
      uVar3 = param_3[2];
    }
    else {
      if (*param_3 == 3) {
        uVar4 = param_3[2];
        uVar3 = param_3[3];
      }
      else {
        uVar4 = param_3[3];
        uVar3 = param_3[2];
      }
      uVar8 = (int)(uVar4 + 3) >> 2;
    }
    param_3 = (short *)(uVar8 * uVar3);
  }
  else {
    piVar6 = (int *)(param_3 + 6);
    param_3 = (short *)0x0;
    iVar5 = *(int *)(((int)this) + 0xc);
    local_c = (uint)*puVar1;
    if (local_c != 0) {
      piVar6 = (int *)(*piVar6 + iVar5 + 4);
      do {
        if (*piVar6 != 0) {
          iVar2 = *piVar6 + iVar5;
          iVar7 = (int)(uintptr_t)FUN_005f573e(param_2,(short *)iVar2);
          param_3 = (short *)((int)param_3 + iVar7 * (uint)*(ushort *)(iVar2 + 8));
        }
        piVar6 = piVar6 + 2;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return param_3;
}
