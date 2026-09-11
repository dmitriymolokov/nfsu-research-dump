/* spd-match: far pct=6.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006cc7b4;
extern int _DAT_006ccab0;
extern int _DAT_006ccab4;

undefined4 __fastcall FUN_0046e540(undefined4 param_1,int param_2)

{
  if ((*(float *)(*(int *)(param_2 + 0x20) + 0x78) < _DAT_006cc7b4) &&
     (*(float *)(param_2 + 0x4c) <=
      **(float **)(*(int *)(param_2 + 0x20) + 0x18) * ((int)_DAT_006ccab4) + _DAT_006ccab0)) {
    return 1;
  }
  return 0;
}
