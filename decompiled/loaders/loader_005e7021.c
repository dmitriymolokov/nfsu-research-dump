/* spd-match: far pct=13.79 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005d65b0(...);

struct ThisCallBox {
  int FUN_005e7021(undefined4 *param_2);
};
int ThisCallBox::FUN_005e7021(undefined4 *param_2) {
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *local_8;
  
  local_8 = ((int *)this);
  iVar1 = FUN_005d65b0(((int *)this)[0x17] << 2,&local_8);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(*local_8 + 0x10))(local_8);
    puVar5 = (undefined4 *)((int *)this)[0x16];
    puVar3 = (undefined4 *)(**(code **)(*local_8 + 0xc))(local_8);
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *param_2 = (unsigned int)local_8;
    iVar1 = 0;
  }
  return iVar1;
}
