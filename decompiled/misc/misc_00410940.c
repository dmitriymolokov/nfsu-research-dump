/* spd-match: far pct=0.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007363bc;
extern int DAT_007363c8;

void __fastcall FUN_00410940(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = ((int)DAT_007363bc) + ((int)DAT_007363c8) * 0x18;
  *(undefined4 *)(iVar1 + 4) = *param_1;
  *(undefined4 *)(iVar1 + 8) = param_1[1];
  *(undefined4 *)(iVar1 + 0xc) = param_1[2];
  DAT_007363c8 = ((int)DAT_007363c8) + 1;
  return;
}
