/* spd-match: far pct=8.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

undefined4 FUN_004ffab0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    cVar2 = (**(code **)(*param_2 + 4))(iVar1);
    if ((cVar2 == '\0') ||
       ((*(int *)(iVar1 + 0x18) == 5 && (cVar2 = FUN_004ffab0(iVar1,param_2), cVar2 == '\0'))))
    break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 0;
}
