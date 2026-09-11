/* spd-match: far pct=13.02 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f(...);
int __cdecl FUN_00618c39(...);
int __cdecl FUN_0061a26f(...);
int unaff_retaddr;

struct ThisCallBox {
  int FUN_0061a5d9(uint param_2);
};
int ThisCallBox::FUN_0061a5d9(uint param_2) {
  uint uVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  if (param_2 < 0x800) {
    uVar1 = param_2 & 0x7ff | 0xa0000000;
  }
  else if (param_2 < 0x1000) {
    uVar1 = param_2 & 0x7ff | 0xb0000800;
  }
  else if (param_2 < 0x1800) {
    uVar1 = param_2 & 0x7ff | 0xc0000800;
  }
  else {
    uVar1 = param_2 & 0x7ff | 0xd0000800;
  }
  iVar2 = FUN_0061a26f(0x51);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*((int *)this) + 0x54))(uVar1,0xf0000);
    if (-1 < iVar2) {
      iVar2 = FUN_00618c39(*unaff_retaddr);
      if (-1 < iVar2) {
        iVar2 = FUN_00618c39(unaff_retaddr[1]);
        if (-1 < iVar2) {
          iVar2 = FUN_00618c39(unaff_retaddr[2]);
          if (-1 < iVar2) {
            iVar2 = FUN_00618c39(unaff_retaddr[3]);
            if (-1 < iVar2) {
              iVar2 = (**(code **)(*((int *)this) + 0x50))();
              if (-1 < iVar2) {
                iVar2 = FUN_0061663f();
                if (-1 < iVar2) {
                  iVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}
