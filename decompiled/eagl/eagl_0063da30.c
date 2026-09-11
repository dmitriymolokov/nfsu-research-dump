/* spd-match: far pct=4.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_0070f488;
extern int DAT_0070f48c;

BOOL FUN_0063da30(uint param_1,LONG param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (iVar3 = ~param_1 * 0x24, *(char *)(iVar3 + DAT_0070f48c) != '\0')) {
    SetLastError(0);
    if (*(int *)(iVar3 + 0x14 + DAT_0070f48c) == 0) {
      BVar1 = SetEndOfFile(*(HANDLE *)(iVar3 + 4 + DAT_0070f48c));
      DVar2 = SetFilePointer(*(HANDLE *)(iVar3 + 4 + DAT_0070f48c),param_2,(PLONG)0x0,0);
      *(DWORD *)(iVar3 + 0x18 + DAT_0070f48c) = DVar2;
      return BVar1;
    }
    return 0;
  }
  SetLastError(6);
  return 0;
}
