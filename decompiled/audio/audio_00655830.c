/* spd-match: far pct=12.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007160d8;
extern int DAT_007160dc;
extern int DAT_007160de;
extern int DAT_007160e0;
extern int DAT_007163dc;

void FUN_00655830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_007163dc)[param_1];
  if (param_2 == *(char *)(iVar1 + 0x42)) {
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - param_3;
    iVar2 = DAT_007160d8;
    if (*(int *)(iVar1 + 0x58) != 0) {
      (&DAT_007160dc)[((int)DAT_007160d8) * 4] = 0;
      (&DAT_007160de)[iVar2 * 4] = (short)param_1;
      (&DAT_007160e0)[iVar2 * 2] = param_3;
      DAT_007160d8 = ((int)DAT_007160d8) + 1;
    }
  }
  return;
}
