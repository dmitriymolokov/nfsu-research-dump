/* spd-match: far pct=18.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004ffab0();

undefined4 FUN_004ffb00(int param_1)

{
  int iVar1;
  char cVar2;
  int *unaff_EDI;
  
  iVar1 = *(int *)(param_1 + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    cVar2 = (**(code **)(*unaff_EDI + 4))(iVar1);
    if ((cVar2 == '\0') ||
       ((*(int *)(iVar1 + 0x18) == 5 && (cVar2 = FUN_004ffab0(iVar1,unaff_EDI), cVar2 == '\0'))))
    break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 0;
}
