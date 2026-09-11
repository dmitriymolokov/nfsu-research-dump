/* spd-match: far pct=7.97 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0044b1b0(...);
int __cdecl FUN_00584270(...);
int __cdecl FUN_00586640(...);
int __cdecl FUN_00674898(...);
extern int DAT_007000f4;
extern int DAT_007372b0;

struct ThisCallBox {
  void FUN_00462430(undefined4 param_2);
};
void ThisCallBox::FUN_00462430(undefined4 param_2) {
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(((int)this) + 4);
  *(undefined4 *)(iVar1 + 0x478) = DAT_007000f4;
  if (*(int *)(iVar1 + 0x28) == 1) {
    *(undefined4 *)(*(int *)(iVar1 + 0x34) + 0x78) = DAT_007000f4;
  }
  if ((*(int *)(((int)this) + 0x4d8) != 0) && (*(int *)(((int)this) + 0x4d8) != 0x7fffffff)) {
    iVar1 = FUN_00586640(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_00674898();
      *(undefined4 *)(((int)this) + 0x4d8) = uVar2;
      FUN_00584270(ABS(*(float *)(*(int *)(*(int *)(((int)this) + 4) + 0x1c) + 0x18)) * DAT_007372b0);
    }
  }
  FUN_0044b1b0(param_2);
  return;
}
