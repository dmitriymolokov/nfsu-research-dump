/* spd-match: far pct=28.57 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba799(...);
int __cdecl FUN_005bb002(...);
int __cdecl FUN_005bb0d5(...);
int __cdecl FUN_005bf509(...);
int __cdecl FUN_005d7885(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d8670(...);
extern void LAB_005bfe33(...);

struct ThisCallBox {
  int FUN_005bfd33(int *param_2, int *param_3, int *param_4);
};
int ThisCallBox::FUN_005bfd33(int *param_2, int *param_3, int *param_4) {
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 local_1c [16];
  double local_c;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((param_2[6] * param_2[5] != 1) || (iVar1 = FUN_005ba799(param_2[4]), iVar1 == 0)) {
    FUN_005ba1d9(((undefined4)this),param_2 + 0xc,0xbcb,"float expected");
    return 0;
  }
  iVar1 = FUN_005bb0d5(param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_005bf509(param_2,local_1c), -1 < iVar1)) &&
     (iVar1 = FUN_005bb002(&local_c,local_1c,param_2 + 0xc), -1 < iVar1)) {
    if (local_c == 0.0) {
      param_3 = param_4;
    }
    iVar1 = FUN_005d7885(param_3);
    return iVar1;
  }
  pvVar2 = _malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_005d8670();
  }
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3[4] = 2;
  iVar1 = (**(code **)(*param_2 + 8))();
  puVar3[6] = iVar1;
  if (iVar1 != 0) {
    if (param_3 != (int *)0x0) {
      iVar1 = (**(code **)(*param_3 + 8))();
      puVar3[8] = iVar1;
      if (iVar1 == 0) goto LAB_005bfe33;
    }
    if (param_4 != (int *)0x0) {
      iVar1 = (**(code **)(*param_4 + 8))();
      puVar3[9] = iVar1;
      if (iVar1 == 0) goto LAB_005bfe33;
    }
    pvVar2 = _malloc(0x14);
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005d78db(puVar3,0,"Stmts");
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
LAB_005bfe33:
  (**(code **)*puVar3)(1);
  return 0;
}
