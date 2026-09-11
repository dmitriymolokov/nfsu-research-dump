/* spd-match: far pct=12.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_0070f488;
extern int DAT_0070f48c;

undefined4 FUN_0063d7e0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (iVar4 = ~param_1 * 0x24, *(char *)(iVar4 + DAT_0070f48c) != '\0')) {
    SetLastError(0);
    iVar2 = DAT_0070f48c;
    *(int *)(iVar4 + 0x18 + DAT_0070f48c) = param_2;
    iVar1 = *(int *)(iVar4 + 0x1c + iVar2);
    if (iVar1 < param_2) {
      *(int *)(iVar4 + 0x18 + iVar2) = iVar1;
    }
    else if (param_2 < 0) {
      *(undefined4 *)(iVar4 + 0x18 + iVar2) = 0;
    }
    if (*(int *)(iVar4 + 0x14 + iVar2) == 0) {
      DVar3 = SetFilePointer(*(HANDLE *)(iVar4 + 4 + iVar2),*(LONG *)(iVar4 + 0x18 + iVar2),
                             (PLONG)0x0,0);
      *(DWORD *)(iVar4 + 0x18 + DAT_0070f48c) = DVar3;
    }
    return 1;
  }
  SetLastError(6);
  return 0;
}
