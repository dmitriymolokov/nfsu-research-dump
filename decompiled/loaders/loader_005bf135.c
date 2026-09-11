/* spd-match: far pct=12.16 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_int/batches/20260724T134631Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba799(...);
int __cdecl FUN_005ba80b(...);
int __cdecl FUN_005ba894(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005bbe7f(...);
int __cdecl FUN_005bc254(...);
int __cdecl FUN_005beee7(...);
int __cdecl FUN_005d7885(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8831(...);
extern void LAB_005bf1fb(...);
extern void LAB_005bf20c(...);
extern void LAB_005bf2a8(...);
extern void LAB_005bf2b4(...);
extern void LAB_005bf3c0(...);
extern void LAB_005bf4b1(...);
extern void LAB_005bf4fc(...);

struct ThisCallBox {
  undefined4 * FUN_005bf135(int param_2, int param_3, int param_4);
};
undefined4 * ThisCallBox::FUN_005bf135(int param_2, int param_3, int param_4) {
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) != 0xc)) ||
      ((param_3 != 0 && (*(int *)(param_3 + 4) != 0xc)))) ||
     ((param_4 != 0 && (*(int *)(param_4 + 4) != 0xc)))) {
    return (undefined4 *)0x0;
  }
  local_1c = param_2 + 0x30;
  if (param_2 == 0) {
    local_1c = ((int)this) + 0x20;
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_2 + 0x10);
  }
  if (param_3 == 0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = *(int **)(param_3 + 0x10);
  }
  if (param_4 == 0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = *(int **)(param_4 + 0x10);
  }
  local_20 = local_14;
  local_24 = local_18;
  local_c = (undefined4 *)0x0;
  local_8 = ((int)this);
  pvVar2 = _malloc(0x50);
  if (pvVar2 == (void *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10 = (undefined4 *)FUN_005d8831(0,0x18,0,0,1,local_1c);
  }
  puVar1 = local_10;
  if (local_10 != (undefined4 *)0x0) {
    iVar3 = FUN_005ba799(local_28);
    if (iVar3 == 0) {
      pcVar8 = "conditional must be numeric";
LAB_005bf1fb:
      FUN_005ba1d9(((int)this),local_1c,0xbcc,pcVar8);
    }
    else {
      piVar6 = (int *)(unsigned int)(puVar1 + 4);
      iVar3 = FUN_005bc254(local_14,local_18,&local_20,&local_24,piVar6);
      if (iVar3 < 0) {
        pcVar8 = "type mismatch between conditional values";
        goto LAB_005bf1fb;
      }
      if (*piVar6 != 0) {
        if (*(int *)(*piVar6 + 4) == 8) {
          pvVar2 = _malloc(0x24);
          if (pvVar2 == (void *)0x0) {
LAB_005bf2a8:
            local_c = (undefined4 *)0x0;
          }
          else {
            local_c = (undefined4 *)
                      FUN_005d814c(2,0,*(undefined4 *)(*piVar6 + 0x18),
                                   *(undefined4 *)(*piVar6 + 0x1c),0x200);
          }
        }
        else {
          pvVar2 = _malloc(0x24);
          
          if (pvVar2 == (void *)0x0) goto LAB_005bf2a8;
          uVar9 = 0x200;
          uVar5 = FUN_005ba80b(*piVar6);
          local_c = (undefined4 *)FUN_005d814c(2,0,1,uVar5,uVar9);
          
        }
        if (local_c != (undefined4 *)0x0) goto LAB_005bf2b4;
        goto LAB_005bf20c;
      }
LAB_005bf2b4:
      iVar3 = FUN_005bbe7f(local_c,local_28,0);
      if (iVar3 == 0) {
        pcVar8 = "dimension of conditional does not match value";
        goto LAB_005bf1fb;
      }
      if (param_2 != 0) {
        iVar3 = FUN_005beee7(local_c,param_2,0,0);
        local_10[8] = iVar3;
        if (iVar3 == 0) goto LAB_005bf20c;
      }
      pvVar2 = _malloc(0x50);
      if (pvVar2 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005d8831(0,0,0,0,1,local_1c);
      }
      local_10[9] = iVar3;
      if (iVar3 != 0) {
        pvVar2 = _malloc(0x14);
        if (pvVar2 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005d78db(0,0,"Types");
        }
        *(int *)(iVar3 + 0x10) = iVar4;
        if (iVar4 != 0) {
          if (local_20 != (int *)0x0) {
            uVar5 = (**(code **)(*local_20 + 8))();
            *(undefined4 *)(*(int *)(iVar3 + 0x10) + 8) = uVar5;
            if (*(int *)(*(int *)(iVar3 + 0x10) + 8) == 0) goto LAB_005bf20c;
          }
          pvVar2 = _malloc(0x14);
          if (pvVar2 == (void *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_005d78db(0,0,"Value");
          }
          *(int *)(iVar3 + 0x20) = iVar4;
          if (iVar4 != 0) {
            if (param_3 != 0) {
              if (local_14 == local_20) {
LAB_005bf3c0:
                uVar5 = FUN_005d7885(param_3);
              }
              else {
                uVar7 = FUN_005ba894(local_14,local_20);
                if ((int)uVar7 != 0) goto LAB_005bf3c0;
                uVar5 = FUN_005beee7((int)((ulonglong)uVar7 >> 0x20),param_3,0,0);
              }
              *(undefined4 *)(*(int *)(iVar3 + 0x20) + 8) = uVar5;
              if (*(int *)(*(int *)(iVar3 + 0x20) + 8) == 0) goto LAB_005bf20c;
            }
            pvVar2 = _malloc(0x14);
            if (pvVar2 == (void *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_005d78db(0,0,"Types");
            }
            *(int *)(*(int *)(iVar3 + 0x10) + 0xc) = iVar4;
            if (iVar4 != 0) {
              if (local_24 != (int *)0x0) {
                uVar5 = (**(code **)(*local_24 + 8))();
                *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 8) = uVar5;
                if (*(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 8) == 0) goto LAB_005bf20c;
              }
              pvVar2 = _malloc(0x14);
              if (pvVar2 == (void *)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = FUN_005d78db(0,0,"Value");
              }
              *(int *)(*(int *)(iVar3 + 0x20) + 0xc) = iVar4;
              if (iVar4 != 0) {
                if (param_4 != 0) {
                  if (local_18 == local_24) {
LAB_005bf4fc:
                    uVar5 = FUN_005d7885(param_4);
                  }
                  else {
                    uVar7 = FUN_005ba894(local_18,local_24);
                    if ((int)uVar7 != 0) goto LAB_005bf4fc;
                    uVar5 = FUN_005beee7((int)((ulonglong)uVar7 >> 0x20),param_4,0,0);
                  }
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x20) + 0xc) + 8) = uVar5;
                  if (*(int *)(*(int *)(*(int *)(iVar3 + 0x20) + 0xc) + 8) == 0) goto LAB_005bf20c;
                }
                FUN_005bb1eb(iVar3);
                FUN_005bb1eb(local_10);
                goto LAB_005bf4b1;
              }
            }
          }
        }
      }
    }
LAB_005bf20c:
    (**(code **)*local_10)(1);
  }
  local_10 = (undefined4 *)0x0;
LAB_005bf4b1:
  if (local_c != (undefined4 *)0x0) {
    (**(code **)*local_c)(1);
  }
  piVar6 = local_20;
  if (((local_20 != local_14) && (local_20 != local_18)) && (local_20 != (int *)0x0)) {
    (**(code **)*local_20)(1);
  }
  if (((local_24 != local_14) && (local_24 != local_18)) &&
     ((local_24 != piVar6 && (local_24 != (int *)0x0)))) {
    (**(code **)*local_24)(1);
  }
  return local_10;
}
