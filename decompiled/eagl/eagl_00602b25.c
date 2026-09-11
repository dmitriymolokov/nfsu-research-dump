/* spd-match: far pct=29.13 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005f8040(...);
int __cdecl FUN_005fc5a6(...);
int __cdecl FUN_005fede4(...);

struct ThisCallBox {
  int FUN_00602b25(undefined4 *param_2);
};
int ThisCallBox::FUN_00602b25(undefined4 *param_2) {
  int iVar1;
  
  ((int *)this)[0xf] = 0;
  ((int *)this)[0x10] = 0;
  ((int *)this)[0x11] = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar1 = (**(code **)(*((int *)this) + 0x14))();
  if ((((-1 < iVar1) && (iVar1 = FUN_005f8040(), -1 < iVar1)) &&
      (iVar1 = FUN_005fc5a6(), -1 < iVar1)) && (iVar1 = FUN_005fede4(), -1 < iVar1)) {
    if (((*(byte *)(((int *)this) + 0xd) & 8) == 0) &&
       (iVar1 = (**(code **)(*((int *)this) + 0x18))(), iVar1 < 0)) {
      return iVar1;
    }
    ((int *)this)[0xf] = 1;
    iVar1 = (**(code **)(*((int *)this) + 0x1c))();
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
