/* spd-match: far pct=44.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007363bc;
extern int DAT_007363cc;

void FUN_00410910(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ((int)DAT_007363bc) + ((int)DAT_007363cc) * 0x18;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  DAT_007363cc = ((int)DAT_007363cc) + 1;
  return;
}
