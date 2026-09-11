/* spd-match: far pct=5.26 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00426110();
int unaff_EDI;

void FUN_005832e0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x4d2) != '\0') {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 4) + 0x3c);
    if (*(char *)((int)piVar1 + 0x1b) != '\0') {
      *(char *)((int)piVar1 + 0x1b) = *(char *)((int)piVar1 + 0x1b) + -1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x50))();
    if (iVar2 != 0) {
      *(undefined1 *)(*(int *)(unaff_EDI + 4) + 0x4d0) = 1;
      FUN_00426110();
      *(undefined1 *)(unaff_EDI + 0x4d2) = 0;
      return;
    }
    *(undefined1 *)(*(int *)(unaff_EDI + 4) + 0x4d0) = 0;
    FUN_00426110();
    *(undefined1 *)(unaff_EDI + 0x4d2) = 0;
  }
  return;
}
