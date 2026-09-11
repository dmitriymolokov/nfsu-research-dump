/* spd-match: far pct=4.95 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_02/attempt3_recipe_thiscall */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
#ifndef SUB84
#define SUB84(x,n) ((unsigned int)((unsigned __int64)(x) >> (n)))
#endif
long __cdecl __ftol(void);
int __cdecl __isnan(double);
double __cdecl fpatan(double, double);
double __cdecl fcos(double);
double __cdecl fsin(double);
double __cdecl fptan(double);
double __cdecl log2(double);

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005ba5ee(...);
int __cdecl FUN_005ba70c(...);
int __cdecl FUN_005ba799(...);
int __cdecl FUN_005ba894(...);
int __cdecl FUN_005bb05e(...);
int __cdecl FUN_005bb0d5(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005bbe7f(...);
int __cdecl FUN_005bc1ad(...);
int __cdecl FUN_005bc254(...);
int __cdecl FUN_005beee7(...);
int __cdecl FUN_005c0cfc(...);
int __cdecl FUN_005d8831(...);
extern void LAB_005c14b0(...);
extern void LAB_005c150e(...);
extern void LAB_005c1678(...);
extern void LAB_005c1740(...);
extern void LAB_005c17de(...);
extern void LAB_005c18aa(...);
extern void LAB_005c18b2(...);
extern void LAB_005c18bc(...);

struct ThisCallBox {
  undefined4 * FUN_005c1473(int param_2, int *param_3, int *param_4, undefined4 param_5);
};
undefined4 * ThisCallBox::FUN_005c1473(int param_2, int *param_3, int *param_4, undefined4 param_5) {
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_3;
  local_8 = (int *)0x0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  if ((param_3 != (int *)0x0) && (param_3[1] != 0xc)) {
    return (undefined4 *)0x0;
  }
  if (param_4 == (int *)0x0) {
    if (param_3 != (int *)0x0) goto LAB_005c14b0;
    param_3 = (int *)(((int)this) + 0x20);
  }
  else {
    param_3 = param_4;
    if (param_4[1] != 0xc) {
      return (undefined4 *)0x0;
    }
LAB_005c14b0:
    param_3 = param_3 + 0xc;
  }
  pvVar2 = _malloc(0x50);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_005d8831(0,param_2,0,0,param_5,param_3);
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    puVar3[8] = iVar4;
    if (iVar4 != 0) goto LAB_005c150e;
    goto LAB_005c18b2;
  }
LAB_005c150e:
  iVar4 = 0x15;
  if ((((param_2 == 0x1c) || (param_2 == 0x1d)) || (param_2 == 0x1e)) ||
     (((param_2 == 0x1f || (param_2 == 0x20)) || ((param_2 == 0x21 || (param_2 == 0x22)))))) {
    if (param_2 == 0x1c) {
      piVar5 = (int *)0x7;
      param_2 = iVar4;
    }
    else if (param_2 == 0x1d) {
      piVar5 = (int *)0x8;
      param_2 = iVar4;
    }
    else if (param_2 == 0x1e) {
      piVar5 = (int *)0x9;
      param_2 = iVar4;
    }
    else if (param_2 == 0x1f) {
      piVar5 = (int *)0xa;
      param_2 = iVar4;
    }
    else if (param_2 == 0x20) {
      piVar5 = (int *)0xb;
      param_2 = iVar4;
    }
    else if (param_2 == 0x21) {
      piVar5 = (int *)0x2;
      param_2 = 1;
    }
    else {
      piVar5 = param_4;
      if (param_2 == 0x22) {
        piVar5 = (int *)0x3;
        param_2 = 1;
      }
    }
    iVar4 = (int)(uintptr_t)FUN_005c1473((int)(uintptr_t)piVar5,piVar1,param_4,0);
    puVar3[9] = iVar4;
    if (iVar4 == 0) goto LAB_005c18b2;
    puVar3[7] = param_2;
  }
  else if (param_4 != (int *)0x0) {
    iVar4 = (**(code **)(*param_4 + 8))();
    puVar3[9] = iVar4;
    if (iVar4 == 0) goto LAB_005c18b2;
  }
  if (puVar3[8] != 0) {
    local_14 = *(int **)(puVar3[8] + 0x10);
    local_8 = local_14;
  }
  if (((param_2 == 0) || (param_2 == 1)) ||
     (((param_2 == 0x14 || (((param_2 == 0x15 || (param_2 == 0x10)) || (param_2 == 0x11)))) ||
      (((local_8 != (int *)0x0 && (local_8[1] == 8)) && (iVar4 = FUN_005ba799(local_8), iVar4 != 0))
      )))) {
    if (((param_2 == 2) || (param_2 == 3)) || ((param_2 == 0x14 || (param_2 == 0x15)))) {
      iVar4 = FUN_005ba70c(local_8);
      if ((iVar4 == 0) && (iVar4 = FUN_005bb05e(puVar3[8]), iVar4 == 0)) {
        iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 0x10);
        if (((iVar4 != 3) && (iVar4 != 4)) || (iVar4 = FUN_005ba799(local_8), iVar4 != 0))
        goto LAB_005c1678;
        pcVar9 = "object assignments are not allowed inside functions";
        uVar8 = 0xbf9;
      }
      else {
        pcVar9 = "l-value specifies const object";
        uVar8 = 0xbd1;
      }
      goto LAB_005c18aa;
    }
LAB_005c1678:
    piVar1 = local_8;
    if (puVar3[9] != 0) {
      local_10 = *(int **)(puVar3[9] + 0x10);
      local_c = local_10;
    }
    if ((param_2 != 0x14) && (param_2 != 0x15)) {
      if (((param_2 == 0) || ((param_2 == 1 || (param_2 == 2)))) || (param_2 == 3)) {
        if (local_8 != (int *)0x0) {
          iVar4 = (**(code **)(*local_8 + 8))();
          puVar3[4] = iVar4;
          if (iVar4 == 0) goto LAB_005c18b2;
        }
      }
      else if (((param_2 == 4) || (param_2 == 5)) || (param_2 == 6)) {
        if (local_8 != (int *)0x0) {
          iVar4 = (**(code **)(*local_8 + 8))();
          puVar3[4] = iVar4;
          if (iVar4 == 0) goto LAB_005c18b2;
        }
        FUN_005ba5ee(puVar3[4],1);
      }
      else if ((((param_2 == 0xc) || (param_2 == 0xd)) ||
               ((param_2 == 0xe || ((param_2 == 0xf || (param_2 == 0x10)))))) ||
              ((param_2 == 0x11 || ((param_2 == 0x12 || (param_2 == 0x13)))))) {
        iVar4 = FUN_005bc254(local_8,local_c,&local_14,&local_10,puVar3 + 4);
        if (iVar4 < 0) goto LAB_005c1740;
        *(undefined4 *)(puVar3[4] + 0x14) = 0;
      }
      else {
        iVar4 = FUN_005bc254(local_8,local_c,&local_14,&local_10,puVar3 + 4);
        if (iVar4 < 0) {
LAB_005c1740:
          pcVar9 = "type mismatch";
          uVar8 = 0xbcc;
          goto LAB_005c18aa;
        }
      }
LAB_005c17de:
      if ((puVar3[8] != 0) && (local_8 != local_14)) {
        uVar7 = FUN_005ba894(local_8,local_14);
        if ((int)uVar7 == 0) {
          iVar4 = FUN_005beee7(local_14,(int)((ulonglong)uVar7 >> 0x20),0,0);
          if (iVar4 == 0) goto LAB_005c18b2;
          if ((undefined4 *)puVar3[8] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)puVar3[8])(1);
          }
          puVar3[8] = iVar4;
        }
      }
      if ((puVar3[9] != 0) && (local_c != local_10)) {
        uVar7 = FUN_005ba894(local_c,local_10);
        if ((int)uVar7 == 0) {
          iVar4 = FUN_005beee7(local_10,(int)((ulonglong)uVar7 >> 0x20),0,0);
          if (iVar4 == 0) goto LAB_005c18b2;
          if ((undefined4 *)puVar3[9] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)puVar3[9])(1);
          }
          puVar3[9] = iVar4;
        }
      }
      if (puVar3[4] == 0) {
        puVar3[4] = 0;
      }
      FUN_005bb1eb(puVar3);
      iVar4 = FUN_005bb0d5(puVar3);
      if ((iVar4 != 0) && (puVar6 = (undefined4 *)FUN_005c0cfc(puVar3), puVar6 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar3)(1);
        puVar3 = puVar6;
      }
      goto LAB_005c18bc;
    }
    iVar4 = FUN_005bbe7f(local_8,local_c,0);
    if (iVar4 != 0) {
      if (piVar1 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar1 + 8))();
        puVar3[4] = iVar4;
        if (iVar4 == 0) goto LAB_005c18b2;
      }
      local_10 = piVar1;
      goto LAB_005c17de;
    }
    FUN_005bc1ad(param_3,0,piVar1,local_c,0);
  }
  else {
    pcVar9 = "scalar, vector, or matrix expected";
    uVar8 = 0xbce;
LAB_005c18aa:
    FUN_005ba1d9(((int)this),param_3,uVar8,pcVar9);
  }
LAB_005c18b2:
  (**(code **)*puVar3)(1);
  puVar3 = (undefined4 *)0x0;
LAB_005c18bc:
  piVar1 = local_14;
  if (((local_14 != local_8) && (local_14 != local_c)) && (local_14 != (int *)0x0)) {
    (**(code **)*local_14)(1);
  }
  if (((local_10 != local_8) && (local_10 != local_c)) &&
     ((local_10 != piVar1 && (local_10 != (int *)0x0)))) {
    (**(code **)*local_10)(1);
  }
  return puVar3;
}
