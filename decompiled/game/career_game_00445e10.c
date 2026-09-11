/* spd-match: far pct=11.69 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00445E10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898(...);

struct ThisCallBox {
  undefined4 FUN_00445e10(float * obj, float param_2);
};
undefined4 ThisCallBox::FUN_00445e10(float * obj, float param_2)

{

  undefined4 uVar1;
  
  if ((*obj - *(float *)(((int)this) + 0xa0)) * *(float *)(((int)this) + 0xb0) +
      (obj[1] - *(float *)(((int)this) + 0xa4)) * *(float *)(((int)this) + 0xb4) +
      (obj[2] - *(float *)(((int)this) + 0xa8)) * *(float *)(((int)this) + 0xb8) < -param_2) {
    return 0;
  }
  uVar1 = FUN_00674898();
  return uVar1;
}
