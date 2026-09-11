/* spd-match: far pct=8.05 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba5ee(...);
int __cdecl FUN_005ba70c(...);
int __cdecl FUN_005ba799(...);
int __cdecl FUN_005ba80b(...);
int __cdecl FUN_005bb05e(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005bbe7f(...);
int __cdecl FUN_005bc1ad(...);
int __cdecl FUN_005be628(...);
int __cdecl FUN_005d8831(...);
extern void LAB_005bef9d(...);
extern void LAB_005befea(...);
extern void LAB_005bf033(...);
extern void LAB_005bf0c2(...);
extern void LAB_005bf0ca(...);
extern void LAB_005bf11f(...);

struct ThisCallBox {
  undefined4 * FUN_005beee7(int *param_2, int *param_3, int param_4, undefined4 param_5);
};
undefined4 * ThisCallBox::FUN_005beee7(int *param_2, int *param_3, int param_4, undefined4 param_5) {
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_3;
  local_10 = (int *)0x0;
  piVar8 = param_2;
  local_8 = ((int)this);
  if ((param_2 != (int *)0x0) && (param_2[1] == 2)) {
    FUN_005be628(0,param_2 + 4,0,0,*(undefined4 *)(((int)this) + 0xc),1,&local_10,0);
    piVar8 = local_10;
  }
  param_2 = (int *)(((int)this) + 0x20);
  if (param_4 == 0) {
    local_c = 0;
    if (param_3 == (int *)0x0) {
LAB_005bef9d:
      iVar2 = FUN_005bbe7f(piVar8,local_c,param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_005ba70c(piVar8);
        if (iVar2 == 0) {
          iVar2 = FUN_005ba70c(local_c);
          if (iVar2 == 0) {
            param_3 = (int *)0x0;
            goto LAB_005befea;
          }
        }
        param_3 = (int *)0x1;
        goto LAB_005befea;
      }
      FUN_005bc1ad(param_2,0,piVar8,local_c,param_5);
    }
    else if (param_3[1] == 0xc) {
      local_c = param_3[4];
      param_2 = param_3 + 0xc;
      goto LAB_005bef9d;
    }
  }
  else {
    if ((piVar8 != (int *)0x0) && (piVar8[1] == 8)) {
      iVar2 = FUN_005ba799(piVar8);
      if (iVar2 != 0) {
        if ((param_3 != (int *)0x0) && (param_3[1] != 1)) goto LAB_005bf0ca;
        param_3 = (int *)FUN_005ba70c(piVar8);
LAB_005befea:
        uVar3 = FUN_005bb05e(piVar1);
        param_3 = (int *)((uint)param_3 | uVar3);
        pvVar4 = _malloc(0x50);
        puVar7 = (undefined4 *)0x0;
        if (pvVar4 != (void *)0x0) {
          puVar7 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_2);
        }
        if (puVar7 == (undefined4 *)0x0) goto LAB_005bf0ca;
        if (piVar8 == (int *)0x0) {
LAB_005bf033:
          if (piVar1 != (int *)0x0) {
            iVar2 = (**(code **)(*piVar1 + 8))();
            puVar7[8] = iVar2;
            if (iVar2 == 0) goto LAB_005bf0c2;
          }
          if (param_4 != 0) {
            for (iVar2 = puVar7[8]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
              iVar6 = *(int *)(iVar2 + 8);
              if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0xc)) {
                iVar6 = FUN_005ba799(*(undefined4 *)(iVar6 + 0x10));
                if (iVar6 == 0) {
                  FUN_005ba1d9(local_8,param_2,0xbc9,
                               "cannot convert from \'object type\' to \'numeric type\'");
                  goto LAB_005bf0c2;
                }
                if (param_3 == (int *)0x0) {
                  param_3 = (int *)FUN_005ba70c(*(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
                }
              }
            }
          }
          if (param_3 != (int *)0x0) {
            FUN_005ba5ee(puVar7[4],1);
          }
          if (param_4 != 0) {
            iVar6 = 0;
            for (iVar2 = puVar7[8]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
              iVar5 = *(int *)(iVar2 + 8);
              if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0xc)) {
                iVar5 = FUN_005ba80b(*(undefined4 *)(iVar5 + 0x10));
                iVar6 = iVar6 + iVar5;
              }
            }
            iVar2 = FUN_005ba80b(puVar7[4]);
            if (iVar6 != iVar2) {
              FUN_005ba1d9(local_8,param_2,0xbc6,
                           "incorrect number of arguments to numeric-type constructor");
            }
          }
          FUN_005bb1eb(puVar7);
          goto LAB_005bf11f;
        }
        iVar2 = (**(code **)(*piVar8 + 8))();
        puVar7[4] = iVar2;
        if (iVar2 != 0) goto LAB_005bf033;
LAB_005bf0c2:
        (**(code **)*puVar7)(1);
        goto LAB_005bf0ca;
      }
    }
    FUN_005ba1d9(((int)this),param_2,0xbdd,"constructors only defined for numeric base types");
  }
LAB_005bf0ca:
  puVar7 = (undefined4 *)0x0;
LAB_005bf11f:
  if (local_10 != (int *)0x0) {
    (**(code **)*local_10)(1);
  }
  return puVar7;
}
