/* spd-match: far pct=10.50 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0077aadc;
extern int _DAT_006ccb20;
int unaff_ESI;

void FUN_00538690(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  float local_4;
  
  iVar4 = 0;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  if (0 < *(int *)(unaff_ESI + 0x50)) {
    piVar3 = (int *)(unaff_ESI + 0x3c);
    do {
      cVar1 = (**(code **)(**(int **)(unaff_ESI + 0x14 + *piVar3 * 4) + 0x34))();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x14 + *piVar3 * 4) + 0x88))();
        if (iVar2 == 0) {
          *(int *)(unaff_ESI + 0x68 + *(int *)(unaff_ESI + 0x84) * 4) = *piVar3;
          *(int *)(unaff_ESI + 0x84) = *(int *)(unaff_ESI + 0x84) + 1;
        }
        else {
          *(int *)(unaff_ESI + 0x54 + *(int *)(unaff_ESI + 0x88) * 4) = *piVar3;
          *(int *)(unaff_ESI + 0x88) = *(int *)(unaff_ESI + 0x88) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0x50));
  }
  if ((*(int *)(unaff_ESI + 0x88) != 0) && (DAT_0077aadc != '\0')) {
    iVar4 = 0;
    local_4 = 0.0;
    if (0 < *(int *)(unaff_ESI + 0x88)) {
      piVar3 = (int *)(unaff_ESI + 0x54);
      do {
        (**(code **)(**(int **)(unaff_ESI + 0x14 + *piVar3 * 4) + 0x58))(local_4);
        local_4 = local_4 + _DAT_006ccb20;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *(int *)(unaff_ESI + 0x88));
    }
  }
  return;
}
