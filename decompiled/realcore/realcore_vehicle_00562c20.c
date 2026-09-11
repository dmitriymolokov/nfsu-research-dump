/* spd-match: far pct=6.11 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_05/attempt04_thiscall_repaired */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f3f90(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f78e0(...);
int __cdecl FUN_004fd1e0(...);
int __cdecl FUN_004ffb00(...);
int __cdecl FUN_004ffb70(...);
int __cdecl FUN_00563550(...);
int __cdecl FUN_005637a0(...);
extern int DAT_00734bc8;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void *PTR_FUN_006bc640;
extern void LAB_00562dda(...);
extern void LAB_00562e11(...);
extern void LAB_00562e33(...);
extern void LAB_00562ea2(...);
extern void LAB_00562ed9(...);
extern void LAB_00562efb(...);
extern void LAB_00562f6a(...);
extern void LAB_00562fa1(...);
extern void LAB_00562fc3(...);
extern void LAB_00563030(...);
extern void LAB_00563067(...);
extern void LAB_00563089(...);
extern void LAB_005630f8(...);
extern void LAB_0056312f(...);
extern void LAB_00563151(...);
extern void LAB_005631c0(...);
extern void LAB_005631f7(...);
extern void LAB_00563219(...);
extern void LAB_00563286(...);
extern void LAB_005632bd(...);
extern void LAB_005632df(...);
extern void LAB_0056334e(...);
extern void LAB_00563385(...);
extern void LAB_005633a7(...);
extern void LAB_00563416(...);
extern void LAB_0056344d(...);
extern void LAB_00563471(...);
extern void LAB_00689690(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_00562c20(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_00562c20(undefined4 *param_2) {
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined1 *)(uintptr_t)&LAB_00689690;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_2,((int)this));
  pcVar2 = (char *)param_2[3];
  *param_2 = (undefined4)(uintptr_t)&PTR_FUN_006bc640;
  param_2[0x13] = *(undefined4 *)(((int)this) + 4);
  DAT_00734bc8 = *pcVar2;
  local_4 = 0;
  if (DAT_00734bc8 != '\0') {
    pcVar4 = (char *)(uintptr_t)&DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  FUN_00563550();
  *(undefined1 *)(param_2 + 8) = 1;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if (((param_2[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xaa68bfd7);
    }
  }
  param_2[0x10] = iVar5;
  if (((param_2[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xaa68bfc6);
    }
  }
  param_2[0x11] = iVar5;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004fd1e0(iVar3 + 0xdc);
        if (iVar5 == 0) {
          iVar5 = FUN_004fd1e0(iVar3 + 0xec);
        }
      }
    }
  }
  param_2[0x12] = iVar5;
  if (param_2[3] == 0) {
LAB_00562e11:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246a), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00562e33;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00562dda:
      local_4 = 1;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_00562e11;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00562e11;
      goto LAB_00562dda;
    }
LAB_00562e33:
    iVar5 = 0;
  }
  param_2[0x14] = iVar5;
  if (param_2[3] == 0) {
LAB_00562ed9:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246b), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00562efb;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00562ea2:
      local_4 = 2;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_00562ed9;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00562ed9;
      goto LAB_00562ea2;
    }
LAB_00562efb:
    iVar5 = 0;
  }
  param_2[0x15] = iVar5;
  if (param_2[3] == 0) {
LAB_00562fa1:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246c), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00562fc3;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00562f6a:
      local_4 = 3;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_00562fa1;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00562fa1;
      goto LAB_00562f6a;
    }
LAB_00562fc3:
    iVar5 = 0;
  }
  param_2[0x16] = iVar5;
  if (param_2[3] == 0) {
LAB_00563067:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246d), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00563089;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00563030:
      local_4 = 4;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_00563067;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00563067;
      goto LAB_00563030;
    }
LAB_00563089:
    iVar5 = 0;
  }
  param_2[0x17] = iVar5;
  if (param_2[3] == 0) {
LAB_0056312f:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246e), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00563151;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_005630f8:
      local_4 = 5;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_0056312f;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_0056312f;
      goto LAB_005630f8;
    }
LAB_00563151:
    iVar5 = 0;
  }
  param_2[0x18] = iVar5;
  if (param_2[3] == 0) {
LAB_005631f7:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a246f), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00563219;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_005631c0:
      local_4 = 6;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_005631f7;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_005631f7;
      goto LAB_005631c0;
    }
LAB_00563219:
    iVar5 = 0;
  }
  param_2[0x19] = iVar5;
  if (param_2[3] == 0) {
LAB_005632bd:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a2470), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_005632df;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00563286:
      local_4 = 7;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_005632bd;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_005632bd;
      goto LAB_00563286;
    }
LAB_005632df:
    iVar5 = 0;
  }
  param_2[0x1a] = iVar5;
  if (param_2[3] == 0) {
LAB_00563385:
    if (((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(0x334a2471), iVar5 == 0)) ||
       (*(int *)(iVar5 + 0x18) != 2)) goto LAB_005633a7;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_0056334e:
      local_4 = 8;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_00563385;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00563385;
      goto LAB_0056334e;
    }
LAB_005633a7:
    iVar5 = 0;
  }
  param_2[0x1b] = iVar5;
  if (param_2[3] == 0) {
LAB_0056344d:
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0x334a2472), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x18) == 2)) goto LAB_00563471;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00563416:
      local_4 = 9;
      FUN_004ffb00(iVar5);
      local_4 = 0;
      goto LAB_0056344d;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_0056344d;
      goto LAB_00563416;
    }
  }
  iVar5 = 0;
LAB_00563471:
  param_2[0x1c] = iVar5;
  FUN_005637a0();
  ExceptionList = local_c;
  return param_2;
}
