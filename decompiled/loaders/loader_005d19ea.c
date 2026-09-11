/* spd-match: far pct=16.14 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005ca361(...);
int __cdecl FUN_005cb568(...);
int __cdecl FUN_005d07f5(...);
int __cdecl FUN_005d1d40(...);
extern void LAB_005d1b40(...);
extern void LAB_005d1b57(...);
extern void LAB_005d1bb1(...);
extern void LAB_005d1bd2(...);

struct ThisCallBox {
  uint FUN_005d19ea(uint param_2, char *param_3, int param_4);
};
uint ThisCallBox::FUN_005d19ea(uint param_2, char *param_3, int param_4) {
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int local_c;
  
LAB_005d1bb1:
  if (param_2 != 0) {
    uVar6 = FUN_005d1d40(param_2,param_4 + 1,0);
    uVar9 = 0;
    if (uVar6 != 0) {
      if (param_3 != (char *)0x0) {
        iVar4 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(uVar6 + 4) * 4);
        if (*(int *)(iVar4 + 0x38) == 0) {
          iVar3 = *(int *)(((int)this) + 0x2c);
        }
        else {
          iVar3 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
        }
        iVar3 = *(int *)(iVar4 + 0x24) + *(int *)(uVar6 + 8) + iVar3;
        if (((*(int *)(iVar3 + 4) == 5) &&
            ((*(int *)(uVar6 + 0x18) != -1 || (*(int *)(iVar3 + 0x10) == 0)))) &&
           ((uVar5 = *(uint *)(iVar3 + 0x14), *(int *)(uVar6 + 0x10) != 0 ||
            (iVar4 = FUN_005cb568(uVar6,uVar5), -1 < iVar4)))) {
          local_c = 0;
          do {
            if (uVar5 <= uVar9) break;
            iVar3 = *(int *)(uVar6 + 0x10) + local_c;
            iVar4 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar3 + 4) * 4);
            if (*(int *)(iVar4 + 0x38) == 0) {
              iVar8 = *(int *)(((int)this) + 0x2c);
            }
            else {
              iVar8 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
            }
            iVar1 = *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(uVar6 + 4) * 4) + 0x38);
            iVar8 = *(int *)(iVar4 + 0x24) + *(int *)(iVar3 + 8) + iVar8;
            if (iVar1 == 0) {
              iVar4 = *(int *)(((int)this) + 0x2c);
            }
            else {
              iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
            }
            iVar3 = *(int *)(iVar8 + 8);
            if (*(int *)(iVar3 + iVar4) == 0) {
              pcVar7 = (char *)0x0;
            }
            else {
              if (iVar1 == 0) {
                iVar4 = *(int *)(((int)this) + 0x2c);
              }
              else {
                iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
              }
              pcVar7 = (char *)(iVar3 + 4 + iVar4);
            }
            cVar2 = *param_3;
            pcVar10 = param_3;
            while ((cVar2 == *pcVar7 && (cVar2 != '\0'))) {
              pcVar10 = pcVar10 + 1;
              pcVar7 = pcVar7 + 1;
              cVar2 = *pcVar10;
            }
            cVar2 = *pcVar10;
            if (cVar2 == *pcVar7) {
              uVar6 = uVar9 * 0x20 + *(int *)(uVar6 + 0x10);
              goto LAB_005d1bd2;
            }
            if (*pcVar7 == '\0') {
              if (cVar2 == '.') {
                param_3 = pcVar10 + 1;
                param_2 = ~(uVar9 * 0x20 + *(int *)(uVar6 + 0x10));
                goto LAB_005d1bb1;
              }
              if (cVar2 == '@') {
                uVar6 = FUN_005d07f5(~(uVar9 * 0x20 + *(int *)(uVar6 + 0x10)),pcVar10 + 1,param_4);
                return uVar6;
              }
              if (cVar2 == '[') goto LAB_005d1b40;
            }
            uVar9 = uVar9 + 1;
            local_c = local_c + 0x20;
          } while( true );
        }
        goto LAB_005d1b57;
      }
      goto LAB_005d1bd2;
    }
    goto LAB_005d1b57;
  }
  if ((param_3 == (char *)0x0) || (uVar6 = FUN_005d1d40(param_3,param_4 + 1,0), uVar6 == 0)) {
LAB_005d1b57:
    uVar6 = 0;
  }
  else {
LAB_005d1bd2:
    uVar6 = ~uVar6;
  }
  return uVar6;
LAB_005d1b40:
  pcVar10 = pcVar10 + 1;
  if (((*pcVar10 < '0') || ('9' < *pcVar10)) ||
     (uVar5 = _atol(pcVar10), *(uint *)(iVar8 + 0x10) <= uVar5)) goto LAB_005d1b57;
  for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
  }
  if (*pcVar10 != ']') goto LAB_005d1b57;
  param_2 = FUN_005ca361(~(uVar9 * 0x20 + *(int *)(uVar6 + 0x10)),uVar5,param_4);
  if (param_2 == 0) goto LAB_005d1b57;
  if (pcVar10[1] == '\0') {
    return param_2;
  }
  if (pcVar10[1] != '.') goto LAB_005d1b57;
  param_3 = pcVar10 + 2;
  goto LAB_005d1bb1;
}
