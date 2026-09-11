/* spd-match: far pct=8.57 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_05/attempt1_baseline */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006a0cb4;

undefined4 * 
FUN_005d8ad5(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[1] = 0xd;
  *param_1 = &PTR_FUN_006a0cb4;
  param_1[6] = param_3;
  puVar2 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  return param_1;
}
