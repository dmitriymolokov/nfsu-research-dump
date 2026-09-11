/* spd-match: far pct=12.34 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f(...);
int __cdecl FUN_0061a26f(...);

struct ThisCallBox {
  int FUN_0060a9c6(uint param_2);
};
int ThisCallBox::FUN_0060a9c6(uint param_2) {
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_c;
  uint local_8;
  
  puVar1 = (uint *)((int *)this)[0x26];
  piVar2 = (int *)puVar1[2];
  uVar6 = *puVar1 & 0xffffff;
  piVar5 = (int *)(-(uint)(uVar6 != puVar1[1]) & (uint)(piVar2 + uVar6));
  piVar3 = (int *)(-(uint)(uVar6 * 2 < puVar1[1]) & (uint)(piVar2 + uVar6 * 2));
  iVar4 = FUN_0061a26f(param_2);
  if (-1 < iVar4) {
    param_2 = (uint)*(byte *)(*(int *)(((int *)this)[5] + *piVar2 * 4) + 0x51);
    local_8 = param_2 | 0xb0000000;
    iVar4 = (**(code **)(*((int *)this) + 0x54))(local_8,0xf0000);
    if (-1 < iVar4) {
      if (piVar5 != (int *)0x0) {
        iVar4 = (**(code **)(*((int *)this) + 100))
                          (*(undefined4 *)(((int *)this)[5] + *piVar5 * 4),&local_8,&param_2);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*((int *)this) + 0x68))(piVar5,uVar6,0xf0000,&local_c);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*((int *)this) + 0x58))(local_8,local_c,param_2);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*((int *)this) + 100))
                          (*(undefined4 *)(((int *)this)[5] + *piVar3 * 4),&local_8,&param_2);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*((int *)this) + 0x68))(piVar3,uVar6,0xf0000,&local_c);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*((int *)this) + 0x58))(local_8,local_c,param_2);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      iVar4 = (**(code **)(*((int *)this) + 0x50))();
      if ((-1 < iVar4) && (iVar4 = FUN_0061663f(), -1 < iVar4)) {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}
