/* spd-match: far pct=12.70 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int unaff_ESI;

void FUN_00530b30(void)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x74))();
  if (cVar1 == '\0') {
    (**(code **)(*unaff_ESI + 0x7c))();
    *(undefined1 *)((int)unaff_ESI + 0x34e) = 0;
  }
  if (((char)unaff_ESI[0xbd] != '\0') && ((char)unaff_ESI[0xb2] != '\0')) {
    (**(code **)(*unaff_ESI + 0x80))();
    *(undefined1 *)(unaff_ESI + 0xd4) = 0;
  }
  return;
}
