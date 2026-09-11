/* spd-match: far pct=7.34 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b1c41(...);
int __cdecl FUN_005b24bf(...);
int __cdecl FUN_005d7700(...);

struct ThisCallBox {
  char * FUN_005b26f6(char *param_2, undefined4 *param_3);
};
char * ThisCallBox::FUN_005b26f6(char *param_2, undefined4 *param_3) {
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_30 [4];
  char acStack_2c [28];
  undefined1 local_10 [4];
  undefined4 local_c;
  
  pcVar3 = param_2;
  if ((*(byte *)(((int)this) + 0x28) & 2) == 0) {
    return (char *)0x0;
  }
  pcVar4 = param_2 + 1;
  if ((((pcVar4 < *(char **)(((int)this) + 4)) && (iVar1 = _isalpha((int)*param_2), iVar1 != 0)) &&
      (iVar1 = _isalpha((int)*pcVar4), iVar1 != 0)) &&
     ((pcVar3 + 2 < *(char **)(((int)this) + 4) && (pcVar3[2] == '.')))) {
    iVar1 = FUN_005b24bf(pcVar3 + 3,&param_2);
    if (((iVar1 != 0) &&
        ((param_2 < (char *)0x100 && (pcVar4 = pcVar3 + 3 + iVar1, pcVar4 < *(char **)(((int)this) + 4))
         ))) && (*pcVar4 == '.')) {
      pcVar4 = pcVar4 + 1;
      iVar1 = FUN_005b24bf(pcVar4,&param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_005b1c41(pcVar4,&param_2);
        if (iVar1 == 0) {
          return (char *)0x0;
        }
        param_2 = (char *)0x0;
      }
      if ((param_2 < (char *)0x100) &&
         (pcVar4 = pcVar4 + (iVar1 - (int)pcVar3), pcVar4 < (char *)0x20)) {
        pcVar5 = local_30;
        for (uVar2 = (uint)pcVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar2 = (uint)pcVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar5 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        }
        acStack_2c[(int)(pcVar4 + -4)] = '\0';
        iVar1 = FUN_005d7700(local_30,1,local_10);
        if (-1 < iVar1) {
          *param_3 = local_c;
          return pcVar4;
        }
      }
    }
  }
  return (char *)0x0;
}
