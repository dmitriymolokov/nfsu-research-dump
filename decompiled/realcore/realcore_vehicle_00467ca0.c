/* spd-match: far pct=2.68 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;

struct ThisCallBox {
  void FUN_00467ca0(char param_2);
};
void ThisCallBox::FUN_00467ca0(char param_2) {
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  
  piVar3 = *(int **)(((int)this) + 600);
  if ((((*(char *)((int)piVar3 + 0x15) == '\x03') &&
       (piVar9 = *(int **)(((int)this) + 0x25c), piVar8 = piVar3,
       *(char *)((int)piVar9 + 0x15) == '\x01')) ||
      ((*(char *)((int)*(int **)(((int)this) + 0x25c) + 0x15) == '\x03' &&
       (piVar8 = *(int **)(((int)this) + 0x25c), piVar9 = piVar3,
       *(char *)((int)piVar3 + 0x15) == '\x01')))) &&
     ((piVar8 != (int *)0x0 && (piVar9 != (int *)0x0)))) {
    if ((param_2 == '\0') || (*(char *)((int)piVar9 + 0x15) == '\0')) {
      iVar6 = piVar8[0x18];
      fVar1 = *(float *)(iVar6 + 0x74);
      fVar4 = *(float *)(iVar6 + 0x70);
      iVar5 = piVar8[4];
      fVar2 = *(float *)(iVar6 + 0x78);
      if ((*(byte *)(iVar6 + 10) & 2) != 0) {
        iVar6 = (**(code **)(*piVar9 + 8))();
        *(undefined4 *)(iVar5 + 0x1f8) = *(undefined4 *)(iVar6 + 8);
      }
      pfVar7 = (float *)(**(code **)(*piVar9 + 8))();
      if (DAT_006cc7a4 <
          (pfVar7[1] - *(float *)(iVar5 + 500)) * fVar1 +
          (*pfVar7 - *(float *)(iVar5 + 0x1f0)) * fVar4 +
          fVar2 * (pfVar7[2] - *(float *)(iVar5 + 0x1f8))) {
        *(undefined1 *)(piVar8[4] + 0x1d0) = 1;
        return;
      }
      param_2 = '\0';
    }
    *(char *)(piVar8[4] + 0x1d0) = param_2;
  }
  return;
}
