/* spd-match: far pct=39.02 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00596cc0(...);
extern unsigned char *DAT_00734468;

struct ThisCallBox {
  undefined4 * FUN_00596c90(byte param_2);
};
undefined4 * ThisCallBox::FUN_00596c90(byte param_2) {
  int iVar1;
  int iVar2;
  
  FUN_00596cc0();
  iVar2 = (unsigned int)(DAT_00734468);
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_00734468 + 0x18);
    *((undefined4 *)this) = *(undefined4 *)(DAT_00734468 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = ((undefined4 *)this);
  }
  return ((undefined4 *)this);
}
