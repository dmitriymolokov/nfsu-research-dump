/* spd-match: far pct=24.22 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern void LAB_005b1e4b(...);

struct ThisCallBox {
  int FUN_005b1e12(char *param_2, undefined4 *param_3);
};
int ThisCallBox::FUN_005b1e12(char *param_2, undefined4 *param_3) {
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  bVar2 = false;
  bVar1 = false;
  pcVar4 = param_2;
  if (param_2 < *(char **)(((int)this) + 4)) {
    do {
      if (bVar1) {
LAB_005b1e4b:
        if (bVar2) break;
        iVar3 = _tolower((int)*pcVar4);
        if (iVar3 != 0x6c) break;
        bVar2 = true;
      }
      else {
        iVar3 = _tolower((int)*pcVar4);
        if (iVar3 != 0x75) goto LAB_005b1e4b;
        bVar1 = true;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < *(char **)(((int)this) + 4));
  }
  if (param_3 != (undefined4 *)0x0) {
    if (bVar1) {
      *param_3 = 4;
    }
    else if (bVar2) {
      *param_3 = 3;
    }
  }
  return (int)pcVar4 - (int)param_2;
}
