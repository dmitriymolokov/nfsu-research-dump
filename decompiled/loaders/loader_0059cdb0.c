/* spd-match: far pct=9.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-c2198-0059cdb0/va_0059CDB0 */
#include "ghidra_compat.h"

int __cdecl FUN_005ac436();

void __fastcall
FUN_0059cdb0(int val,undefined4 param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  local_28 = param_4 * param_4;
  local_2c = param_4;
  local_24 = local_28 * param_4;
  local_30 = 0x3f800000;
  FUN_005ac436(local_20,&local_30,val * 0x40 + *(int *)(param_2 + 0x28));
  FUN_005ac436(param_3,&local_2c,param_5);
  return;
}
