/* spd-match: far pct=17.53 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0071667a;
extern int DAT_0071667c;

void FUN_00656fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)ROUND((float)param_2 * *(float *)(param_1 + 0x1c));
  iVar1 = (int)DAT_0071667a;
  if ((iVar2 < DAT_0071667a) || (iVar1 = DAT_0071667c, DAT_0071667c < iVar2)) {
    iVar2 = iVar1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(*(int **)(param_1 + 0x3c),iVar2);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x28) = iVar2;
    *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x2c) * iVar2) / 1000;
  }
  return;
}
