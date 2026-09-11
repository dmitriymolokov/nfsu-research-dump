/* spd-match: far pct=18.63 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);

struct ThisCallBox {
  int FUN_005b24bf(char *param_2, uint *param_3);
};
int ThisCallBox::FUN_005b24bf(char *param_2, uint *param_3) {
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((*(char **)(((int)this) + 4) <= param_2) || (iVar2 = _isdigit((int)*param_2), iVar2 == 0)) {
    return 0;
  }
  uVar5 = 0;
  bVar1 = false;
  pcVar4 = param_2;
  if (param_2 < *(char **)(((int)this) + 4)) {
    do {
      iVar2 = _isdigit((int)*pcVar4);
      if (iVar2 == 0) break;
      if (0x19999999 < uVar5) {
        bVar1 = true;
      }
      uVar3 = uVar5 * 10;
      uVar5 = *pcVar4 + -0x30 + uVar3;
      if (uVar5 < uVar3) {
        bVar1 = true;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < *(char **)(((int)this) + 4));
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  if (bVar1) {
    FUN_005b1f01(*(undefined4 *)(((int)this) + 0x30),((int)this) + 8,0x3ec,
                 "decimal value truncated to 32bits");
  }
  return (int)pcVar4 - (int)param_2;
}
