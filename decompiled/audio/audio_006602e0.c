/* spd-match: far pct=2.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int FUN_006602e0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (*(code *)*puVar1)(puVar1,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x1a)),
     0 < iVar2)) {
    iVar5 = 0;
    if (3 < param_2) {
      iVar2 = 3;
      pfVar3 = (float *)(param_4 + 4);
      pfVar4 = (float *)(param_3 + 0xc);
      do {
        iVar2 = iVar2 + 4;
        iVar5 = iVar5 + 4;
        pfVar3[-1] = pfVar4[-3] * *(float *)(param_1 + 0x1c);
        *pfVar3 = *(float *)((int)pfVar3 + (param_3 - param_4)) * *(float *)(param_1 + 0x1c);
        pfVar3[1] = pfVar4[-1] * *(float *)(param_1 + 0x1c);
        pfVar3[2] = *(float *)(param_1 + 0x1c) * *pfVar4;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (iVar2 < param_2);
    }
    iVar2 = param_2;
    if (iVar5 < param_2) {
      param_2 = param_2 - iVar5;
      pfVar3 = (float *)(param_4 + iVar5 * 4);
      do {
        param_2 = param_2 + -1;
        *pfVar3 = *(float *)((int)pfVar3 + (param_3 - param_4)) * *(float *)(param_1 + 0x1c);
        pfVar3 = pfVar3 + 1;
      } while (param_2 != 0);
    }
  }
  return iVar2;
}
