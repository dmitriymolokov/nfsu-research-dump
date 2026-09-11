/* spd-match: far pct=39.02 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00576ed0(...);
extern unsigned char *DAT_007306c8;

struct ThisCallBox {
  undefined4 * FUN_00576ee0(byte param_2);
};
undefined4 * ThisCallBox::FUN_00576ee0(byte param_2) {
  int iVar1;
  int iVar2;
  
  FUN_00576ed0();
  iVar2 = (unsigned int)(DAT_007306c8);
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_007306c8 + 0x18);
    *((undefined4 *)this) = *(undefined4 *)(DAT_007306c8 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = ((undefined4 *)this);
  }
  return ((undefined4 *)this);
}
