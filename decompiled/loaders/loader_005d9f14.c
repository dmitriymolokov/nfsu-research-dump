/* spd-match: far pct=9.93 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

int __cdecl FUN_005d9413(...);
int __cdecl FUN_005dc760(...);
int __cdecl FUN_005e2a38(...);

struct ThisCallBox {
  int FUN_005d9f14(undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5);
};
int ThisCallBox::FUN_005d9f14(undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5) {
  int iVar1;
  uint uVar2;
  int local_c;
  int iStack_8;
  
  local_c = ((int)this);
  iStack_8 = ((int)this);
  iVar1 = FUN_005dc760(param_2);
  if (-1 < iVar1) {
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        iVar1 = FUN_005e2a38(param_3,&param_2);
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar1 = FUN_005d9413(param_2,&local_c);
        if (iVar1 < 0) break;
        if ((double)(__int64)CONCAT44(iStack_8,local_c) == 0.0) {
          return 0;
        }
        iVar1 = FUN_005dc760(param_5);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (*(int *)(((int)this) + 0x38) != 0) {
          return 0;
        }
        iVar1 = FUN_005dc760(param_4);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (*(int *)(((int)this) + 0x38) != 0) {
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x400);
    }
    iVar1 = -0x7fffbfff;
  }
  return iVar1;
}
