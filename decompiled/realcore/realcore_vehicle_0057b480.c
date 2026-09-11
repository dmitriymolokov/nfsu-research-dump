/* spd-match: far pct=3.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057B480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
float10 __fastcall FUN_0057b480(int val, int param_1, int param_2)

{

  float10 fVar1;
  
  param_1 = *(char *)(param_1 + 0x388) * 0x38 + 8 + param_1;
  if ((val < 0) || (4 < val)) {
    if ((val < 0xb) || (0x10 < val)) {
      fVar1 = (float10)DAT_006cc7a4;
    }
    else {
      fVar1 = (float10)*(float *)(param_2 + -0x14 + val * 4);
    }
  }
  else {
    fVar1 = (float10)*(float *)(param_2 + 0x14);
  }
  if ((-1 < val) && (val < 5)) {
    return fVar1 - (float10)*(float *)(param_1 + 0x14);
  }
  if ((10 < val) && (val < 0x11)) {
    return fVar1 - (float10)*(float *)(param_1 + -0x14 + val * 4);
  }
  return fVar1 - (float10)DAT_006cc7a4;
}
