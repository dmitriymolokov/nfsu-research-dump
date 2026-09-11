/* spd-match: far pct=6.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004617d0();
extern unsigned char *DAT_007361f8;

void FUN_004218a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_007361f8 != 0) && (iVar3 = 0, 0 < *(int *)(DAT_007361f8 + 0x18))) {
    iVar4 = 0x28;
    iVar2 = DAT_007361f8;
    do {
      if ((*(int *)(*(int *)(iVar4 + iVar2) + 0x24) == 1) &&
         (iVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + iVar2) + 0x30) + 0xc))(),
         iVar2 = DAT_007361f8, iVar1 == param_1)) {
        FUN_004617d0();
        iVar2 = DAT_007361f8;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(iVar2 + 0x18));
  }
  return;
}
