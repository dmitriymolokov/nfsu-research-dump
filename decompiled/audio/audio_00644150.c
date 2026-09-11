/* spd-match: far pct=5.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int _UNK_006a92b4;

void FUN_00644150(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)*param_1 * (float10)_UNK_006a92b4);
  *param_2 = (float)fVar1;
  fVar1 = (float10)fcos((float10)*param_1 * (float10)_UNK_006a92b4);
  *param_3 = (float)fVar1;
  return;
}
