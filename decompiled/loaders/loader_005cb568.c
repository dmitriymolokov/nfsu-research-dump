/* spd-match: far pct=6.83 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0(...);
int __cdecl FUN_005ca273(...);
int __cdecl FUN_005cb13e(...);
extern void LAB_005c8f17(...);

struct ThisCallBox {
  undefined4 FUN_005cb568(int param_2, int param_3);
};
undefined4 ThisCallBox::FUN_005cb568(int param_2, int param_3) {
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
  iVar1 = param_2;
  local_8 = ((int)this);
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_005cb13e(3);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  iVar4 = param_3;
  piVar2 = (int *)_malloc(param_3 * 0x20 + 4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar4;
    piVar2 = piVar2 + 1;
    FUN_004010a0(piVar2,0x20,param_3,&LAB_005c8f17);
  }
  *(int **)(iVar1 + 0x10) = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    piVar2 = (int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar1 + 4) * 4);
    local_8 = *(int *)(*piVar2 + 0x24) + 0x18 + *(int *)(iVar1 + 8);
    param_2 = *(int *)(*piVar2 + 0x28) + *(int *)(iVar1 + 0xc);
    if (param_3 != 0) {
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + *(int *)(iVar1 + 0x10)) = 3;
        *(undefined4 *)(iVar4 + 4 + *(int *)(iVar1 + 0x10)) = *(undefined4 *)(iVar1 + 4);
        *(int *)(iVar4 + 8 + *(int *)(iVar1 + 0x10)) =
             local_8 - *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar1 + 4) * 4) + 0x24)
        ;
        *(int *)(iVar4 + 0xc + *(int *)(iVar1 + 0x10)) =
             param_2 - *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar1 + 4) * 4) + 0x28)
        ;
        if (*(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar1 + 4) * 4) + 0x38) == 0) {
          uVar3 = *(undefined4 *)(((int)this) + 0x2c);
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 8);
        }
        uVar3 = FUN_005ca273(uVar3,&local_8,&param_2);
        *(undefined4 *)(iVar4 + 0x1c + *(int *)(iVar1 + 0x10)) = uVar3;
        iVar4 = iVar4 + 0x20;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}
