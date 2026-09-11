/* spd-match: far pct=43.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0071666c;

undefined4 FUN_0065bd30(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x60 + DAT_0071666c + 0x44);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    
                    
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}
