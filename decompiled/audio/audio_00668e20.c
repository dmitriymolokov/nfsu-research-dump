/* spd-match: far pct=33.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007177f8;
extern int DAT_007177fc;
extern int DAT_0071791c;

void FUN_00668e20(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    (&DAT_007177f8)[((int)DAT_0071791c) * 2] = param_1;
    (&DAT_007177fc)[((int)DAT_0071791c) * 2] = param_2;
    DAT_0071791c = ((int)DAT_0071791c) + 1;
  }
  return;
}
