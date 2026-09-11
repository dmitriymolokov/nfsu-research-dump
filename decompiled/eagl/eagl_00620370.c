/* spd-match: far pct=14.89 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0061f0e0(...);
extern void *PTR_LAB_006a77ec;

struct ThisCallBox {
  undefined4 * FUN_00620370(byte param_2);
};
undefined4 * ThisCallBox::FUN_00620370(byte param_2) {
  int iVar1;
  
  *((undefined4 *)this) = (unsigned int)&PTR_LAB_006a77ec;
  iVar1 = *(int *)(((undefined4 *)this)[3] + 0x10);
  while (iVar1 != 0) {
    FUN_0061f0e0(*(undefined4 *)(((undefined4 *)this)[3] + 0x10));
    iVar1 = *(int *)(((undefined4 *)this)[3] + 0x10);
  }
  if ((param_2 & 1) != 0) {
    _free(((undefined4 *)this));
  }
  return ((undefined4 *)this);
}
