/* spd-match: far pct=4.55 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int unaff_ESI;

int __fastcall FUN_0059bb80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    iVar2 = -1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x40))();
    iVar2 = unaff_ESI[2];
    if (iVar1 != 0) {
      if (iVar2 < 5) {
        return iVar2 + 5;
      }
      if ((10 < iVar2) && (iVar2 < 0x11)) {
        return iVar2 + 6;
      }
    }
  }
  return iVar2;
}
