/* spd-match: far pct=15.19 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b59d1(...);
int __cdecl FUN_005b5b7e(...);
int __cdecl FUN_005b618f(...);
int __cdecl FUN_005b7369(...);
extern void LAB_005b6363(...);
extern void LAB_005b637a(...);
extern void LAB_005b63d1(...);
extern void LAB_005b63f2(...);

struct ThisCallBox {
  uint FUN_005b626c(uint param_2, char *param_3, int param_4);
};
uint ThisCallBox::FUN_005b626c(uint param_2, char *param_3, int param_4) {
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int local_c;
  
LAB_005b63d1:
  if (param_2 != 0) {
    uVar5 = FUN_005b7369(param_2,param_4 + 1);
    if (uVar5 != 0) {
      if (param_3 != (char *)0x0) {
        iVar2 = *(int *)(*(int *)(uVar5 + 4) + 0x40) + *(int *)(uVar5 + 0x18) +
                *(int *)(((int)this) + 0x118);
        if (((*(int *)(iVar2 + 4) == 5) &&
            ((*(int *)(uVar5 + 0x10) != -1 || (*(int *)(iVar2 + 0x10) == 0)))) &&
           ((uVar4 = *(uint *)(iVar2 + 0x14), *(int *)(uVar5 + 8) != 0 ||
            (iVar2 = FUN_005b618f(uVar5,uVar4), -1 < iVar2)))) {
          uVar8 = 0;
          local_c = 0;
          do {
            if (uVar4 <= uVar8) break;
            iVar2 = *(int *)(uVar5 + 8) + local_c;
            iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(iVar2 + 0x18) +
                    *(int *)(((int)this) + 0x118);
            piVar3 = (int *)(*(int *)(iVar2 + 8) + *(int *)(((int)this) + 0x118));
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
              uVar5 = uVar8 * 0x20 + *(int *)(uVar5 + 8);
              goto LAB_005b63f2;
            }
            if ((char)*piVar6 == '\0') {
              if (cVar1 == '.') {
                param_3 = pcVar7 + 1;
                param_2 = ~(uVar8 * 0x20 + *(int *)(uVar5 + 8));
                goto LAB_005b63d1;
              }
              if (cVar1 == '@') {
                uVar5 = FUN_005b5b7e(~(uVar8 * 0x20 + *(int *)(uVar5 + 8)),pcVar7 + 1,param_4);
                return uVar5;
              }
              if (cVar1 == '[') goto LAB_005b6363;
            }
            uVar8 = uVar8 + 1;
            local_c = local_c + 0x20;
          } while( true );
        }
        goto LAB_005b637a;
      }
      goto LAB_005b63f2;
    }
    goto LAB_005b637a;
  }
  if ((param_3 == (char *)0x0) || (uVar5 = FUN_005b7369(param_3,param_4 + 1), uVar5 == 0)) {
LAB_005b637a:
    uVar5 = 0;
  }
  else {
LAB_005b63f2:
    uVar5 = ~uVar5;
  }
  return uVar5;
LAB_005b6363:
  pcVar7 = pcVar7 + 1;
  if (((*pcVar7 < '0') || ('9' < *pcVar7)) ||
     (uVar4 = _atol(pcVar7), *(uint *)(iVar2 + 0x10) <= uVar4)) goto LAB_005b637a;
  for (; ('/' < *pcVar7 && (*pcVar7 < ':')); pcVar7 = pcVar7 + 1) {
  }
  if (*pcVar7 != ']') goto LAB_005b637a;
  param_2 = FUN_005b59d1(~(uVar8 * 0x20 + *(int *)(uVar5 + 8)),uVar4,param_4);
  if (param_2 == 0) goto LAB_005b637a;
  if (pcVar7[1] == '\0') {
    return param_2;
  }
  if (pcVar7[1] != '.') goto LAB_005b637a;
  param_3 = pcVar7 + 2;
  goto LAB_005b63d1;
}
