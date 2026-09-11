/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436FC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00436fc0(uint * obj, undefined4 param_1, float *param_2, uint param_3, int param_4)

{

  *param_2 = (float)(*obj ^ param_3) - (float)param_4;
  return;
}
