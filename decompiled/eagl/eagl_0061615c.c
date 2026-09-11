/* spd-match: far pct=9.83 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005fbec8(...);
extern void LAB_006161d8(...);
extern void LAB_006161fe(...);
extern void LAB_00616273(...);
extern void LAB_0061634f(...);

struct ThisCallBox {
  int FUN_0061615c(int *param_2, uint *param_3, int *param_4);
};
int ThisCallBox::FUN_0061615c(int *param_2, uint *param_3, int *param_4) {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *local_8;
  
  piVar2 = param_2;
  if (((int *)this)[0x18] == *param_2) {
    local_8 = (int *)param_2[2];
    param_2 = (int *)0x0;
    if (local_8 < (int *)((int *)this)[0x1c]) {
      piVar1 = (int *)((int *)this)[0x23];
      if ((piVar1 != (int *)0x0) && (piVar1 <= local_8)) {
        local_8 = (int *)((int)local_8 - (int)piVar1);
        param_2 = (int *)0x3;
      }
LAB_006161d8:
      uVar4 = piVar2[8] & 0xf0000;
      uVar5 = 0;
      if (uVar4 == 0x80000) {
        uVar5 = 0x1000000;
      }
      else if (uVar4 == 0x20000) {
        uVar5 = 0x2000000;
      }
      else if (uVar4 == 0xa0000) {
        uVar5 = 0x3000000;
      }
      else if (uVar4 == 0x60000) {
        uVar5 = 0x4000000;
      }
      else if (uVar4 == 0xe0000) {
        uVar5 = 0x5000000;
      }
      else if (uVar4 == 0x10000) {
        uVar5 = 0x6000000;
      }
      else if (uVar4 == 0x40000) {
        uVar5 = 0x7000000;
      }
      else if (uVar4 == 0xc0000) {
        uVar5 = 0x8000000;
      }
      *param_3 = (((uint)param_2 | 0xfffffff8) << 0x14 | (uint)param_2 & 0x18) << 8 |
                 (uint)local_8 & 0x7ff | uVar5;
      *param_4 = (int)piVar2[1];
      if (piVar2[1] != -1) {
        if (((int *)this)[0x3a] == 0) {
          pcVar8 = "target does not support relative addressing";
          uVar7 = 0x119f;
          uVar6 = *(undefined4 *)(((int *)this)[0x26] + 0x34);
LAB_0061634f:
          FUN_005fbec8(((int *)this),uVar6,uVar7,pcVar8);
          return -0x7fffbffb;
        }
        *(byte *)((int)param_3 + 1) = *(byte *)((int)param_3 + 1) | 0x20;
      }
      return 0;
    }
    pcVar8 = "maximum temp register index exceeded";
  }
  else {
    uVar4 = *(uint *)(*(int *)(((int *)this)[4] + *param_2 * 4) + 4);
    local_8 = ((int *)this);
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 0x100) != 0) goto LAB_006161fe;
      if ((uVar4 & 0x40) == 0) {
        pcVar8 = "internal error: unexpected input register type";
        uVar7 = 0;
        uVar6 = 0;
        goto LAB_0061634f;
      }
    }
    else {
      if ((uVar4 & 0x100) == 0) {
        iVar3 = (**(code **)(*((int *)this) + 0x74))(param_2,&local_8,&param_2);
        if (iVar3 < 0) {
          return iVar3;
        }
        goto LAB_006161d8;
      }
LAB_006161fe:
      if ((uVar4 & 0x40) == 0) {
        local_8 = (int *)param_2[2];
        if ((int *)((int *)this)[0x1e] <= local_8) {
          pcVar8 = "maximum constant register index exceeded";
          uVar6 = 0x119b;
          goto LAB_00616273;
        }
        if (local_8 < (int *)0x800) {
          param_2 = (int *)0x2;
        }
        else if (local_8 < (int *)0x1000) {
          param_2 = (int *)0xb;
        }
        else {
          param_2 = (int *)(0xd - (uint)(local_8 < (int *)0x1800));
        }
        local_8 = (int *)((uint)local_8 & 0x7ff);
        goto LAB_006161d8;
      }
    }
    local_8 = (int *)param_2[2];
    param_2 = (int *)0xa;
    if (local_8 < (int *)((int *)this)[0x22]) goto LAB_006161d8;
    pcVar8 = "maximum sampler register index exceeded";
  }
  uVar6 = 0x1199;
LAB_00616273:
  FUN_005fbec8(((int *)this),*(undefined4 *)(((int *)this)[0x26] + 0x34),uVar6,pcVar8);
  return -0x7789f4a7;
}
