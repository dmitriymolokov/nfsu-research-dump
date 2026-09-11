/* spd-match: far pct=14.89 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00451590 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00451590(float * obj, undefined4 param_1, int *param_2)

{

  return ((float10)obj[10] - (float10)(float)param_2[(char)param_2[0xe2] * 0xe + 4]) -
         (((float10)*(float *)(*param_2 + 0x60) - (float10)*obj) * (float10)obj[4] -
         ((float10)*(float *)(*param_2 + 100) - (float10)obj[1]) * (float10)obj[3]);
}
