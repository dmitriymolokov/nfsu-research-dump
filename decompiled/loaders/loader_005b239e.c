/* spd-match: far pct=15.62 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);

struct ThisCallBox {
  int FUN_005b239e(char *param_2, int *param_3);
};
int ThisCallBox::FUN_005b239e(char *param_2, int *param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_2 + 2;
  if ((((pcVar4 < *(char **)(((int)this) + 4)) && (*param_2 == '0')) && (param_2[1] == 'x')) &&
     (iVar2 = _isxdigit((int)*pcVar4), iVar2 != 0)) {
    iVar2 = 0;
    while ((pcVar4 < *(char **)(((int)this) + 4) && (iVar3 = _isxdigit((int)*pcVar4), iVar3 != 0))) {
      cVar1 = *pcVar4;
      iVar2 = iVar2 * 0x10;
      if (cVar1 < 'a') {
        if (cVar1 < 'A') {
          iVar2 = iVar2 + -0x30 + (int)cVar1;
        }
        else {
          iVar2 = iVar2 + -0x37 + (int)cVar1;
        }
      }
      else {
        iVar2 = iVar2 + -0x57 + (int)cVar1;
      }
      pcVar4 = pcVar4 + 1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    iVar2 = (int)pcVar4 - (int)param_2;
    if (10 < iVar2) {
      FUN_005b1f01(*(undefined4 *)(((int)this) + 0x30),((int)this) + 8,0x3ea,"hex value truncated to 32bits"
                  );
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
