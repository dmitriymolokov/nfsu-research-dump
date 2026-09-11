/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_006329F0 */
#include "ghidra_compat.h"

int __cdecl FUN_006327a0(...);

void __fastcall FUN_006329f0(undefined4* self, int dummy_edx, undefined4 *param_2)
{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  local_20 = *param_2;
  local_18 = param_2[1];
  local_1c = 0;
  local_14 = 0x3f800000;
  FUN_006327a0(self + 0x48,&local_20,local_10);
  *param_2 = local_10[0];
  param_2[1] = local_8;
  return;
}
