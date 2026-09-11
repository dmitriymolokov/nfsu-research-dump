/* spd-match: far pct=11.42 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b4c4b(...);
int __cdecl FUN_005b4d58(...);
int __cdecl FUN_005b4dd4(...);
int __cdecl FUN_005b59d1(...);
int __cdecl FUN_005b626c(...);
extern void LAB_005b5bd1(...);
extern void LAB_005b5c8b(...);

struct ThisCallBox {
  uint FUN_005b5b7e(undefined4 param_2, char *param_3, undefined4 param_4);
};
uint ThisCallBox::FUN_005b5b7e(undefined4 param_2, char *param_3, undefined4 param_4) {
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  iVar2 = FUN_005b4c4b(param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_005b4d58(param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_005b4dd4(param_2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = *(uint *)(iVar2 + 0x28);
      goto LAB_005b5bd1;
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  uVar5 = *(uint *)(iVar2 + 0x30);
LAB_005b5bd1:
  if (uVar5 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(uVar5 + 4) + 0x40) + *(int *)(uVar5 + 0x18) +
              *(int *)(((int)this) + 0x118);
      piVar3 = (int *)(*(int *)(((int)this) + 0x118) + *(int *)(iVar2 + 8));
      piVar6 = (int *)0x0;
      if (*piVar3 != 0) {
        piVar6 = piVar3 + 1;
      }
      cVar1 = *param_3;
      pcVar7 = param_3;
      while ((cVar1 == (char)*piVar6 && (cVar1 != '\0'))) {
        pcVar7 = pcVar7 + 1;
        piVar6 = (int *)((int)piVar6 + 1);
        cVar1 = *pcVar7;
      }
      cVar1 = *pcVar7;
      if (cVar1 == (char)*piVar6) {
        return ~uVar5;
      }
      if ((char)*piVar6 == '\0') {
        if (cVar1 == '.') {
          pcVar7 = pcVar7 + 1;
          uVar5 = ~uVar5;
          goto LAB_005b5c8b;
        }
        if (cVar1 == '[') {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 < '0') {
            return 0;
          }
          if ('9' < *pcVar7) {
            return 0;
          }
          uVar4 = _atol(pcVar7);
          if (*(uint *)(iVar2 + 0x10) <= uVar4) {
            return 0;
          }
          for (; ('/' < *pcVar7 && (*pcVar7 < ':')); pcVar7 = pcVar7 + 1) {
          }
          if (*pcVar7 != ']') {
            return 0;
          }
          uVar5 = FUN_005b59d1(~uVar5,uVar4,param_4);
          if (uVar5 == 0) {
            return 0;
          }
          if (pcVar7[1] == '\0') {
            return uVar5;
          }
          if (pcVar7[1] != '.') {
            return 0;
          }
          pcVar7 = pcVar7 + 2;
LAB_005b5c8b:
          uVar5 = FUN_005b626c(uVar5,pcVar7,param_4);
          return uVar5;
        }
      }
      uVar5 = *(uint *)(uVar5 + 0x34);
    } while (uVar5 != 0);
  }
  return 0;
}
