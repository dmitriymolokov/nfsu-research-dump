/* spd-match: far pct=7.39 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ca526(...);
int __cdecl FUN_005e8fb1(...);
extern int DAT_006db8f0;
extern void LAB_005cb746(...);
extern void LAB_005cb94b(...);
extern void LAB_005cb954(...);

struct ThisCallBox {
  int FUN_005cb729(int *param_2, uint param_3);
};
int ThisCallBox::FUN_005cb729(int *param_2, uint param_3) {
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = param_2[0xd];
  local_c = ((undefined4)this);
  if (param_2[0x21] == 3) {
LAB_005cb746:
    iVar4 = -0x7789f794;
  }
  else {
    if (param_3 != 0) {
      iVar4 = FUN_005ca526(param_3,1);
      if (iVar4 == 0) goto LAB_005cb746;
      param_2[0xd] = *(int *)(iVar4 + 4);
    }
    iVar4 = (**(code **)(*(int *)param_2[2] + 0x158))((int *)param_2[2],&DAT_006db8f0,&local_8);
    if (-1 < iVar4) {
      piVar5 = param_2 + 0x26;
      if (*piVar5 == 0) {
        iVar4 = (**(code **)(*(int *)param_2[2] + 0xf0))((int *)param_2[2]);
        if (iVar4 < 0) goto LAB_005cb954;
        iVar4 = (**(code **)(*(int *)param_2[2] + 0x15c))((int *)param_2[2],local_8);
        if (((iVar4 < 0) ||
            (iVar4 = (**(code **)(*(int *)param_2[2] + 0x170))((int *)param_2[2],0), iVar4 < 0)) ||
           (iVar4 = (**(code **)(*(int *)param_2[2] + 0x1ac))((int *)param_2[2],0), iVar4 < 0)) {
          (**(code **)(*(int *)param_2[2] + 0xf4))((int *)param_2[2],piVar5);
          piVar2 = (int *)*piVar5;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar5 = 0;
          }
          goto LAB_005cb954;
        }
        iVar4 = (**(code **)(*(int *)param_2[2] + 0xf4))((int *)param_2[2],piVar5);
        if (iVar4 < 0) goto LAB_005cb954;
      }
      iVar4 = (**(code **)(*(int *)*piVar5 + 0x10))((int *)*piVar5);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*(int *)param_2[2] + 0x15c))((int *)param_2[2],local_8);
        if (((iVar4 < 0) ||
            (iVar4 = (**(code **)(*(int *)param_2[2] + 0x170))((int *)param_2[2],0), iVar4 < 0)) ||
           ((iVar4 = (**(code **)(*(int *)param_2[2] + 0x1ac))((int *)param_2[2],0), iVar4 < 0 ||
            (iVar4 = (**(code **)(*param_2 + 0x100))(param_2,0,0), iVar4 < 0)))) {
LAB_005cb94b:
          piVar5 = (int *)*piVar5;
          iVar3 = *piVar5;
        }
        else {
          param_2[0x21] = 2;
          FUN_005e8fb1(1);
          param_3 = 0;
          if (*(int *)(param_2[0xd] * 0xac + 0x2c + param_2[7]) != 0) {
            do {
              iVar4 = (**(code **)(*param_2 + 0x104))(param_2,param_3);
              if ((iVar4 < 0) ||
                 (iVar4 = (**(code **)(*(int *)param_2[2] + 0x118))((int *)param_2[2],&local_c),
                 iVar4 < 0)) {
                FUN_005e8fb1(0);
                param_2[0x21] = 3;
                (**(code **)(*param_2 + 0x108))(param_2);
                goto LAB_005cb94b;
              }
              param_3 = param_3 + 1;
            } while (param_3 < *(uint *)(param_2[0xd] * 0xac + 0x2c + param_2[7]));
          }
          FUN_005e8fb1(0);
          param_2[0x21] = 3;
          iVar4 = (**(code **)(*param_2 + 0x108))(param_2);
          piVar5 = (int *)*piVar5;
          iVar3 = *piVar5;
          if (-1 < iVar4) {
            iVar4 = (**(code **)(iVar3 + 0x14))();
            goto LAB_005cb954;
          }
        }
        (**(code **)(iVar3 + 0x14))(piVar5);
      }
    }
  }
LAB_005cb954:
  param_2[0xd] = iVar1;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar4;
}
