/* spd-match: far pct=25.58 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005b2aff(...);
int __cdecl FUN_005b2b58(...);

struct ThisCallBox {
  undefined4 FUN_005b2c79(undefined4 param_2, undefined4 *param_3);
};
undefined4 ThisCallBox::FUN_005b2c79(undefined4 param_2, undefined4 *param_3) {
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  local_8 = 0;
  pvVar1 = (undefined4 *)_malloc(0x1c);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005b2aff();
  }
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = 0x8007000e;
  }
  else {
    *puVar2 = 1;
    puVar3 = (undefined4 *)_malloc(4);
    puVar2[1] = (unsigned int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_8 = 0x8007000e;
    }
    else {
      *puVar3 = 0xffffffff;
      puVar2[5] = param_2;
      puVar2[3] = *(undefined4 *)(((int)this) + 0x10);
      *(undefined4 **)(*(int *)(((int)this) + 0x10) + 8) = puVar2;
      *(undefined4 **)(((int)this) + 0x10) = puVar2;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (unsigned int)puVar2;
      }
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      FUN_005b2b58(1);
    }
  }
  return local_8;
}
