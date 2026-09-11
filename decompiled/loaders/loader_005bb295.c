/* spd-match: far pct=22.42 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba799(...);
int __cdecl FUN_005bb22e(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d8670(...);
extern void LAB_005bb374(...);

struct ThisCallBox {
  int FUN_005bb295(int *param_2, int *param_3, int param_4, int *param_5);
};
int ThisCallBox::FUN_005bb295(int *param_2, int *param_3, int param_4, int *param_5) {
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if ((param_3 != (int *)0x0) &&
     ((param_3[6] * param_3[5] != 1 || (iVar1 = FUN_005ba799(param_3[4]), iVar1 == 0)))) {
    FUN_005ba1d9(((undefined4)this),param_3 + 0xc,0xbcb,"float expected");
    return 0;
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
  puVar3[4] = 3;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))();
    puVar3[5] = iVar1;
    if (iVar1 == 0) goto LAB_005bb374;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = (**(code **)(*param_3 + 8))();
    puVar3[6] = iVar1;
    if (iVar1 == 0) goto LAB_005bb374;
  }
  if (param_4 != 0) {
    iVar1 = FUN_005bb22e(param_4);
    puVar3[7] = iVar1;
    if (iVar1 == 0) goto LAB_005bb374;
  }
  if (param_5 != (int *)0x0) {
    iVar1 = (**(code **)(*param_5 + 8))();
    puVar3[8] = iVar1;
    if (iVar1 == 0) goto LAB_005bb374;
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
LAB_005bb374:
  (**(code **)*puVar3)(1);
  return 0;
}
