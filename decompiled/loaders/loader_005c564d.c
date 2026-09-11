/* spd-match: far pct=36.67 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005c564d(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_005c564d(undefined4 param_2) {
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (unsigned int *)_malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = param_2;
    puVar1[2] = 1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    puVar1[1] = *(undefined4 *)(((int)this) + 0x48);
    *(undefined4 **)(((int)this) + 0x48) = puVar1;
    *(undefined4 *)(((int)this) + 0x80) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}
