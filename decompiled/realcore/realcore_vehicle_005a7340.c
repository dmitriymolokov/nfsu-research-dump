/* spd-match: far pct=56.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0077af30;

undefined4 __fastcall FUN_005a7340(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (char)param_1[0x17];
  if ((cVar1 != -1) && (*(short *)((int)param_1 + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    iVar2 = *(short *)((int)param_1 + 0x5e) * 0x88 + 0x27c + iVar2;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x14))(iVar2);
      return uVar3;
    }
  }
  return 0;
}
