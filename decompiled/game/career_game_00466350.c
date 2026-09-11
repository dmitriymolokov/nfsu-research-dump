/* spd-match: far pct=6.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_006ef300;
int unaff_EDI;

int FUN_00466350(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 100) + 600) + 0x54))();
  iVar2 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 100) + 0x25c) + 0x54))();
  if (*(float *)(&DAT_006ef300 + iVar1 * 0x94) < *(float *)(&DAT_006ef300 + iVar2 * 0x94)) {
    iVar1 = iVar2;
  }
  return iVar1;
}
