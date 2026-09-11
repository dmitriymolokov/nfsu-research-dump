/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_05/attempt1_baseline */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006a0cd4;

undefined4 *  FUN_005d8db3(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xe;
  *param_1 = &PTR_FUN_006a0cd4;
  puVar2 = param_1 + 4;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0xc] = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  return param_1;
}
