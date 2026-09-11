/* spd-match: far pct=14.59 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005fbec8(...);
extern void LAB_00615f3a(...);

struct ThisCallBox {
  undefined4 FUN_00615ec7(int *param_2, uint *param_3, undefined4 *param_4);
};
undefined4 ThisCallBox::FUN_00615ec7(int *param_2, uint *param_3, undefined4 *param_4) {
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = *param_2;
  if (((int *)this)[0x18] == iVar2) {
    local_c = param_2[2];
    local_8 = 0;
    if ((uint)((int *)this)[0x1c] <= local_c) {
      pcVar5 = "maximum temp register index exceeded";
      uVar4 = 0x1199;
LAB_00615f3a:
      FUN_005fbec8(((int *)this),*(undefined4 *)(((int *)this)[0x26] + 0x34),uVar4,pcVar5);
      return 0x88760b59;
    }
    uVar1 = ((int *)this)[0x23];
    uVar3 = 0;
    if ((uVar1 != 0) && (uVar1 <= local_c)) {
      local_c = local_c - uVar1;
      uVar3 = 3;
    }
  }
  else if (((int *)this)[0x19] == iVar2) {
    local_8 = 3;
    local_c = 0;
    uVar3 = 3;
    if (param_2[2] != 0) {
      pcVar5 = "maximum address register index exceeded";
      uVar4 = 0x119c;
      local_c = param_2[2];
      goto LAB_00615f3a;
    }
  }
  else {
    if (((int *)this)[0x17] != iVar2) {
      FUN_005fbec8(((int *)this),0,0,"internal error: unexpected output register type");
      return 0x80004005;
    }
    iVar2 = (**(code **)(*((int *)this) + 0x70))(param_2,&local_c,&local_8,param_4);
    uVar3 = local_8;
    if (iVar2 < 0) {
      return 0x80004005;
    }
  }
  *param_3 = ((uVar3 | 0xfffffff8) << 0x14 | uVar3 & 0x18) << 8 | local_c & 0x7ff;
  return 0;
}
