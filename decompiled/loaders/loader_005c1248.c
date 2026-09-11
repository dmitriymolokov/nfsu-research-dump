/* spd-match: far pct=11.65 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba77a(...);
int __cdecl FUN_005ba80b(...);
int __cdecl FUN_005bb0d5(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005c0e2d(...);
int __cdecl FUN_005d7885(...);
int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8831(...);
int __cdecl FUN_005d8a65(...);
extern void LAB_005c143d(...);
extern void LAB_005c144a(...);
extern void LAB_005c1462(...);

struct ThisCallBox {
  undefined4 * FUN_005c1248(int *param_2, int param_3);
};
undefined4 * ThisCallBox::FUN_005c1248(int *param_2, int param_3) {
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  iVar5 = param_3;
  if (param_2 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2[1] != 0xc) {
    return (undefined4 *)0x0;
  }
  if (param_3 == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_3 + 4) != 0xc) {
    return (undefined4 *)0x0;
  }
  iVar4 = param_3 + 0x30;
  param_3 = iVar4;
  pvVar1 = _malloc(0x50);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d8831(0,0x16,0,0,1,iVar4);
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar4 = param_2[4];
  uVar7 = *(undefined4 *)(iVar5 + 0x10);
  if (iVar4 == 0) {
LAB_005c144a:
    pcVar8 = "array expected";
    uVar7 = 0xbcd;
  }
  else {
    if (*(int *)(iVar4 + 4) == 7) {
      if (*(int **)(iVar4 + 0x10) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 8))();
        puVar2[4] = iVar3;
        if (iVar3 == 0) goto LAB_005c1462;
      }
      piVar6 = *(int **)(iVar4 + 0x14);
    }
    else {
      if (*(int *)(iVar4 + 4) != 8) goto LAB_005c144a;
      if (*(int *)(iVar4 + 0x10) == 1) {
        pvVar1 = _malloc(0x24);
        if (pvVar1 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_005d814c(0,*(undefined4 *)(iVar4 + 0x14),1,1,*(uint *)(iVar4 + 0x20) & 0x200);
        }
        puVar2[4] = iVar3;
        if (iVar3 == 0) goto LAB_005c1462;
        piVar6 = *(int **)(iVar4 + 0x1c);
      }
      else {
        if (*(int *)(iVar4 + 0x10) != 2) goto LAB_005c144a;
        pvVar1 = _malloc(0x24);
        if (pvVar1 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_005d814c(1,*(undefined4 *)(iVar4 + 0x14),1,*(undefined4 *)(iVar4 + 0x1c),
                               *(uint *)(iVar4 + 0x20) & 0x200);
        }
        puVar2[4] = iVar3;
        if (iVar3 == 0) goto LAB_005c1462;
        piVar6 = *(int **)(iVar4 + 0x18);
      }
    }
    iVar4 = FUN_005ba77a(uVar7);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_2 + 8))();
      puVar2[8] = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_005bb0d5(iVar5);
        if (iVar4 == 0) {
          iVar5 = FUN_005d7885(iVar5);
          puVar2[9] = iVar5;
          if (iVar5 != 0) {
LAB_005c143d:
            FUN_005bb1eb(puVar2);
            return puVar2;
          }
        }
        else {
          iVar5 = FUN_005c0e2d(iVar5,&param_2);
          if (-1 < iVar5) {
            if (piVar6 <= param_2) {
              FUN_005ba1d9(((undefined4)this),param_3,0xbd6,"array index out of bounds");
              param_2 = (int *)0x0;
            }
            iVar5 = FUN_005ba80b(puVar2[4]);
            pvVar1 = _malloc(0x40);
            if (pvVar1 == (void *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_005d8a65(2,iVar5 * (int)param_2,param_3);
            }
            puVar2[9] = iVar5;
            if (iVar5 != 0) {
              puVar2[7] = 0x17;
              goto LAB_005c143d;
            }
          }
        }
      }
      goto LAB_005c1462;
    }
    pcVar8 = "scalar expected";
    uVar7 = 0xbeb;
  }
  FUN_005ba1d9(((undefined4)this),param_3,uVar7,pcVar8);
LAB_005c1462:
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}
