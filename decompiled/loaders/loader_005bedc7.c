/* spd-match: far pct=13.52 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba5ee(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005be628(...);
int __cdecl FUN_005d7885(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d8831(...);
int __cdecl FUN_005d8b1b(...);
extern void LAB_005beec9(...);

struct ThisCallBox {
  undefined4 * FUN_005bedc7(int param_2, undefined4 *param_3);
};
undefined4 * ThisCallBox::FUN_005bedc7(int param_2, undefined4 *param_3) {
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != 2)) {
    return (undefined4 *)0x0;
  }
  param_2 = param_2 + 0x10;
  puVar5 = param_3;
  if ((param_3 != (undefined4 *)0x0) ||
     (iVar1 = FUN_005be628(1,param_2,0,0,*(undefined4 *)(((int)this) + 0xc),1,&local_8,0),
     puVar5 = local_8, iVar1 == 0)) {
    pvVar2 = _malloc(0x50);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_2);
    }
    if (puVar3 != (undefined4 *)0x0) {
      if ((int *)puVar5[9] == (int *)0x0) {
        pvVar2 = _malloc(0x40);
        if (pvVar2 == (void *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_005d8b1b(6,puVar5[4],puVar5[5],param_2);
        }
      }
      else {
        iVar1 = (**(code **)(*(int *)puVar5[9] + 8))();
      }
      puVar3[8] = iVar1;
      if (iVar1 != 0) {
        uVar4 = FUN_005d7885(puVar5[8]);
        puVar3[4] = uVar4;
        if (param_3 != (undefined4 *)0x0) {
          FUN_005ba5ee(uVar4,0);
        }
        pvVar2 = _malloc(0x14);
        if (pvVar2 == (void *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_005d78db(puVar3[8],0,"Value");
        }
        if (iVar1 != 0) {
          puVar3[8] = iVar1;
          FUN_005bb1eb(puVar3);
          goto LAB_005beec9;
        }
      }
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_005beec9:
  if ((param_3 == (undefined4 *)0x0) && (puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  return puVar3;
}
