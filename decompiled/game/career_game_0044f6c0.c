/* spd-match: far pct=8.20 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00465430();
int unaff_EDI;

void FUN_0044f6c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *unaff_EDI;
  
  *(undefined1 *)(param_1 + 499) = 0;
  if (*(int *)(*(int *)(*unaff_EDI + 0x14) + 4) == 2) {
    piVar1 = *(int **)(*unaff_EDI + 0x2c);
    cVar2 = FUN_00465430();
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x78))(), cVar2 != '\0')) {
      *(undefined1 *)(param_1 + 499) = 1;
    }
  }
  return;
}
