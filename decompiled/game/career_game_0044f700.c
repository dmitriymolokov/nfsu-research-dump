/* spd-match: far pct=26.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int unaff_ESI;

void FUN_0044f700(void)

{
  char cVar1;
  int *unaff_ESI;
  
  unaff_ESI[4] = 0;
  cVar1 = (**(code **)(*unaff_ESI + 0x24))();
  if (cVar1 != '\0') {
    unaff_ESI[4] = 3;
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x20))();
  if (cVar1 != '\0') {
    unaff_ESI[4] = 2;
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x1c))();
  if (cVar1 != '\0') {
    unaff_ESI[4] = 1;
  }
  return;
}
