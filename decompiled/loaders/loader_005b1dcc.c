/* spd-match: far pct=8.82 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern void LAB_005b1dfe(...);

struct ThisCallBox {
  int FUN_005b1dcc(char *param_2, undefined4 *param_3);
};
int ThisCallBox::FUN_005b1dcc(char *param_2, undefined4 *param_3) {
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if (*(char **)(((int)this) + 4) <= param_2) {
    return 0;
  }
  iVar1 = _tolower((int)*param_2);
  if (iVar1 == 0x66) {
    uVar3 = 7;
  }
  else {
    pcVar2 = param_2;
    if (iVar1 != 0x68) goto LAB_005b1dfe;
    uVar3 = 6;
  }
  pcVar2 = param_2 + 1;
LAB_005b1dfe:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  return (int)pcVar2 - (int)param_2;
}
