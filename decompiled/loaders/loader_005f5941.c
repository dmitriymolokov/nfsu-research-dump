/* spd-match: far pct=5.97 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

extern void LAB_005f59bc(...);

struct ThisCallBox {
  int FUN_005f5941(int *param_2, int *param_3);
};
int ThisCallBox::FUN_005f5941(int *param_2, int *param_3) {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  piVar3 = (int *)(((int)this) + 0x10 +
                  ((int)(((uint)*(ushort *)(param_2 + 1) * 0x1000 +
                         (uint)*(ushort *)((int)param_2 + 6)) * 0x1000 +
                        (uint)*(ushort *)(param_2 + 2)) % 0xb) * 4);
  while (*piVar3 != 0) {
    piVar1 = (int *)*piVar3;
    iVar2 = 5;
    bVar6 = true;
    piVar4 = piVar1;
    piVar5 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar2 = 4;
      bVar6 = true;
      piVar4 = piVar1 + 5;
      piVar5 = param_3;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_005f59bc;
    }
    piVar3 = piVar1 + 9;
  }
  piVar1 = (int *)_malloc(0x28);
  *piVar3 = (int)piVar1;
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *param_2;
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 1;
    }
    iVar2 = *piVar3;
    *(int *)(iVar2 + 0x14) = *param_3;
    *(int *)(iVar2 + 0x18) = param_3[1];
    *(int *)(iVar2 + 0x1c) = param_3[2];
    *(int *)(iVar2 + 0x20) = param_3[3];
    *(undefined4 *)(*piVar3 + 0x24) = 0;
LAB_005f59bc:
    iVar2 = -*piVar3;
  }
  return iVar2;
}
