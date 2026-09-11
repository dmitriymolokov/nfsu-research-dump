/* spd-match: far pct=0.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int unaff_EDI;

void FUN_0051d1b0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x60) != 0) {
    if (*(char *)(unaff_EDI + 100) != '\0') {
      piVar2 = (int *)(unaff_EDI + 0x48);
      iVar3 = 4;
      do {
        if ((((char)piVar2[1] != '\0') && ((int *)*piVar2 != (int *)0x0)) &&
           (*(char *)((int)piVar2 + 5) != '\0')) {
          cVar1 = (**(code **)(*(int *)*piVar2 + 0x58))();
          if (cVar1 != '\0') {
            *(undefined1 *)(unaff_EDI + 100) = 0;
            *(undefined1 *)((int)piVar2 + 5) = 0;
            *(int *)(unaff_EDI + 0x60) = *(int *)(unaff_EDI + 0x60) + -1;
          }
        }
        piVar2 = piVar2 + -5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    iVar3 = 3;
    piVar2 = (int *)(unaff_EDI + 0x48);
    while (((char)piVar2[1] != '\0' || (*piVar2 == 0))) {
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -5;
      if (iVar3 < 0) {
        return;
      }
    }
    iVar3 = unaff_EDI + iVar3 * 0x14;
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x54))();
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = 1;
    *(undefined1 *)(unaff_EDI + 100) = 1;
    *(undefined4 *)(unaff_EDI + 0x5c) = 0x1e;
  }
  return;
}
