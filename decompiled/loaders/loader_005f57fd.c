/* spd-match: far pct=6.17 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005f57dd(...);
extern void LAB_005f58bb(...);
extern void LAB_005f58c0(...);

struct ThisCallBox {
  int FUN_005f57fd(uint param_2, int *param_3, int *param_4, int *param_5);
};
int ThisCallBox::FUN_005f57fd(uint param_2, int *param_3, int *param_4, int *param_5) {
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_2 < 0x10000) {
    uVar9 = FUN_005f57dd(&param_2);
    uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 < 0) {
      return (int)uVar9;
    }
    if (*(uint *)(param_2 + 0xc) <= uVar5 - 1) {
      return -0x7789f4a7;
    }
    iVar3 = *(int *)(param_2 + 0x10) + (uVar5 - 1) * 0x14 + ((int *)this)[3];
    *param_3 = iVar3;
    *param_4 = *(int *)(iVar3 + 0xc) + ((int *)this)[3];
    if (param_5 != (int *)0x0) {
      piVar4 = (int *)*param_3;
      pbVar6 = (byte *)(*piVar4 + ((int *)this)[3]);
      param_3 = (int *)0x1;
      for (; uVar5 < *(uint *)(param_2 + 0xc); uVar5 = uVar5 + 1) {
        piVar4 = piVar4 + 5;
        pbVar2 = (byte *)(*piVar4 + ((int *)this)[3]);
        pbVar7 = pbVar6;
        if (pbVar6 != pbVar2) {
          do {
            bVar1 = *pbVar7;
            bVar8 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_005f58bb:
              iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_005f58c0;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar8 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_005f58bb;
            pbVar2 = pbVar2 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_005f58c0:
          if (iVar3 != 0) break;
        }
        param_3 = (int *)((int)param_3 + 1);
      }
      *param_5 = (int)param_3;
    }
  }
  else if ((int)param_2 < 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = -param_2;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -param_2 + 0x14;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 1;
    }
  }
  else {
    iVar3 = (**(code **)(*((int *)this) + 0x20))(((int *)this),0,param_2);
    if (iVar3 == 0) {
      return -0x7789f4a7;
    }
    iVar3 = FUN_005f57fd(iVar3,param_3,param_4,param_5);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  return 0;
}
