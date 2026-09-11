/* spd-match: far pct=40.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007372b0;
extern int DAT_007372b4;
float10 __fastcall FUN_00442570(int obj)

{

  float10 fVar1;
  
  fVar1 = (float10)*(float *)(obj + 0x38);
  if (DAT_007372b4 != 0) {
    fVar1 = (float10)DAT_007372b0 - fVar1;
  }
  return fVar1;
}
