/* spd-match: far pct=7.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005ca361(...);
int __cdecl FUN_005d07f5(...);
int __cdecl FUN_005d19ea(...);
extern void LAB_005d1e99(...);
extern void LAB_005d1ed3(...);
extern void LAB_005d1eda(...);

struct ThisCallBox {
  int * FUN_005d1d40(char *param_2, undefined4 param_3, undefined4 param_4);
};
int * ThisCallBox::FUN_005d1d40(char *param_2, undefined4 param_3, undefined4 param_4) {
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint local_c;
  
  if ((char *)((uint)param_2 & 0xffff) != param_2) {
    if ((char *)((uint)param_2 & 0x7fffffff) == param_2) {
      local_c = 0;
      if (*(int *)(((int)this) + 0x10) == 0) {
        return (int *)0x0;
      }
      piVar8 = *(int **)(((int)this) + 0x14);
      do {
        iVar7 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar8[1] * 4);
        iVar1 = *(int *)(iVar7 + 0x38);
        if (iVar1 == 0) {
          iVar3 = *(int *)(((int)this) + 0x2c);
        }
        else {
          iVar3 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
        }
        iVar3 = *(int *)(iVar7 + 0x24) + piVar8[2] + iVar3;
        if (iVar1 == 0) {
          iVar7 = *(int *)(((int)this) + 0x2c);
        }
        else {
          iVar7 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
        }
        iVar2 = *(int *)(iVar3 + 8);
        pcVar9 = param_2;
        cVar6 = *param_2;
        if (*(int *)(iVar2 + iVar7) == 0) {
          pcVar4 = (char *)0x0;
        }
        else {
          if (iVar1 == 0) {
            iVar7 = *(int *)(((int)this) + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
          }
          pcVar4 = (char *)(iVar2 + 4 + iVar7);
        }
        while ((cVar6 == *pcVar4 && (cVar6 != '\0'))) {
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
          cVar6 = *pcVar9;
        }
        cVar6 = *pcVar9;
        if (cVar6 == *pcVar4) {
          return piVar8;
        }
        if (*pcVar4 == '\0') {
          if (cVar6 == '.') {
            pcVar9 = pcVar9 + 1;
            uVar5 = ~(uint)piVar8;
            goto LAB_005d1ed3;
          }
          if (cVar6 == '@') {
            *(undefined4 *)(((int)this) + 0x94) = param_4;
            uVar5 = FUN_005d07f5(~(uint)piVar8,pcVar9 + 1,param_3);
            *(undefined4 *)(((int)this) + 0x94) = 0;
            goto LAB_005d1eda;
          }
          if (cVar6 == '[') {
            pcVar9 = pcVar9 + 1;
            if (*pcVar9 < '0') {
              return (int *)0x0;
            }
            if ('9' < *pcVar9) {
              return (int *)0x0;
            }
            uVar5 = _atol(pcVar9);
            if (*(uint *)(iVar3 + 0x10) <= uVar5) {
              return (int *)0x0;
            }
            for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
            }
            if (*pcVar9 == ']') {
              uVar5 = FUN_005ca361(~(uint)piVar8,uVar5,param_3);
              if (uVar5 != 0) {
                if (pcVar9[1] == '\0') {
LAB_005d1e99:
                  return (int *)~uVar5;
                }
                if (pcVar9[1] == '.') {
                  pcVar9 = pcVar9 + 2;
LAB_005d1ed3:
                  uVar5 = FUN_005d19ea(uVar5,pcVar9,param_3);
LAB_005d1eda:
                  if (uVar5 != 0) goto LAB_005d1e99;
                }
              }
            }
            return (int *)0x0;
          }
        }
        local_c = local_c + 1;
        piVar8 = piVar8 + 0x11;
        if (*(uint *)(((int)this) + 0x10) <= local_c) {
          return (int *)0x0;
        }
      } while( true );
    }
    piVar8 = (int *)~(uint)param_2;
    if ((*piVar8 == 3) && ((uint)piVar8[1] < *(uint *)(((int)this) + 0x88))) {
      return piVar8;
    }
  }
  return (int *)0x0;
}
