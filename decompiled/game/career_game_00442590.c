/* spd-match: far pct=3.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442590 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc83c;
float10 __fastcall FUN_00442590(float * obj, int param_1)

{

  float10 fVar1;
  
  if (((param_1 < 0xb) || (0x10 < param_1)) && ((param_1 < 0 || (4 < param_1)))) {
    fVar1 = (float10)((int)*(short *)((int)obj + param_1 * 2 + 0x3c) << 8) *
            (float10)(unsigned int)(_DAT_006cc83c);
    return (((float10)obj[5] * (float10)(unsigned int)(DAT_006cc7a4) +
            (float10)obj[6] * fVar1 + (float10)*obj) - (float10)*obj) * (float10)obj[4]
           - (((float10)obj[6] * (float10)(unsigned int)(DAT_006cc7a4) +
              (float10)(float)((float10)-obj[5] * fVar1 + (float10)obj[1])) -
             (float10)obj[1]) * (float10)obj[3];
  }
  return (float10)((int)*(short *)((int)obj + param_1 * 2 + 0x3c) << 8) * (float10)(unsigned int)(_DAT_006cc83c);
}
