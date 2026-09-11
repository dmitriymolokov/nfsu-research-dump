/* spd-match: far pct=5.86 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b59d1(...);
int __cdecl FUN_005b5b7e(...);
int __cdecl FUN_005b626c(...);
extern void LAB_005b7492(...);
extern void LAB_005b749a(...);

struct ThisCallBox {
  uint FUN_005b7369(char *param_2, undefined4 param_3);
};
uint ThisCallBox::FUN_005b7369(char *param_2, undefined4 param_3) {
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  
  if ((char *)((uint)param_2 & 0xffff) == param_2) {
    return 0;
  }
  if ((char *)((uint)param_2 & 0x7fffffff) != param_2) {
    return ~-(uint)(*(int *)~(uint)param_2 != 3) & ~(uint)param_2;
  }
  uVar3 = *(uint *)(((int)this) + 0x120);
  if (uVar3 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(uVar3 + 4) + 0x40) + *(int *)(uVar3 + 0x18) +
              *(int *)(((int)this) + 0x118);
      piVar1 = (int *)(*(int *)(((int)this) + 0x118) + *(int *)(iVar5 + 8));
      if (*piVar1 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = piVar1 + 1;
      }
      pcVar6 = param_2;
      cVar4 = *param_2;
      if (*param_2 == (char)*piVar1) {
        do {
          if (cVar4 == '\0') break;
          pcVar6 = pcVar6 + 1;
          piVar1 = (int *)((int)piVar1 + 1);
          cVar4 = *pcVar6;
        } while (*pcVar6 == *(char *)piVar1);
      }
      cVar4 = *pcVar6;
      if (cVar4 == (char)*piVar1) {
        return uVar3;
      }
      if ((char)*piVar1 == '\0') {
        if (cVar4 == '.') {
          pcVar6 = pcVar6 + 1;
          uVar3 = ~uVar3;
          goto LAB_005b7492;
        }
        if (cVar4 == '@') {
          uVar3 = FUN_005b5b7e(~uVar3,pcVar6 + 1,param_3);
          goto LAB_005b749a;
        }
        if (cVar4 == '[') {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 < '0') {
            return 0;
          }
          if ('9' < *pcVar6) {
            return 0;
          }
          uVar2 = _atol(pcVar6);
          if (*(uint *)(iVar5 + 0x10) <= uVar2) {
            return 0;
          }
          for (; ('/' < *pcVar6 && (*pcVar6 < ':')); pcVar6 = pcVar6 + 1) {
          }
          if (*pcVar6 != ']') {
            return 0;
          }
          uVar3 = FUN_005b59d1(~uVar3,uVar2,param_3);
          if (uVar3 == 0) {
            return 0;
          }
          if (pcVar6[1] != '\0') {
            if (pcVar6[1] != '.') {
              return 0;
            }
            pcVar6 = pcVar6 + 2;
LAB_005b7492:
            uVar3 = FUN_005b626c(uVar3,pcVar6,param_3);
LAB_005b749a:
            if (uVar3 == 0) {
              return 0;
            }
          }
          return ~uVar3;
        }
      }
      uVar3 = *(uint *)(uVar3 + 0x34);
    } while (uVar3 != 0);
  }
  return 0;
}
