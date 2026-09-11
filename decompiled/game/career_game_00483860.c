/* spd-match: far pct=15.62 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.5q/va_00483860 */
#include "ghidra_compat.h"

#pragma optimize("y", off)

int __cdecl FUN_0040b6a0(...);
int __cdecl FUN_00567370(...);
int __cdecl FUN_005abda2(...);

struct ThisCallBox {
  void FUN_00483860(float *obj, undefined4 param_2);
};
void ThisCallBox::FUN_00483860(float *obj, undefined4 param_2) {
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  local_60 = *obj - *((float *)this);
  local_5c = obj[1] - ((float *)this)[1];
  local_58 = obj[2] - ((float *)this)[2];
  FUN_00567370();
  FUN_0040b6a0();
  local_60 = 0.0f;
  local_5c = 0.0f;
  local_58 = 1.0f;
  FUN_005abda2(param_2,&local_60,local_50);
  return;
}
