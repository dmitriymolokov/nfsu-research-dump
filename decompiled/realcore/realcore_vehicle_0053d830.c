/* spd-match: far pct=30.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __fastcall FUN_0053d830(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))(0);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x80))(1);
  return (-(uint)(cVar1 != '\0') & 0xfffffffe) + 1;
}
