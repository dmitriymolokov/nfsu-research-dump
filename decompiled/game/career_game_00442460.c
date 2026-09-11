/* spd-match: far pct=13.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007372b0;
extern int DAT_007372b4;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc920;
float10 __fastcall FUN_00442460(int obj, float param_1)

{

  float10 fVar1;
  
  fVar1 = (float10)*(float *)(obj + 0x38);
  if (DAT_007372b4 != 0) {
    fVar1 = (float10)DAT_007372b0 - fVar1;
  }
  fVar1 = fVar1 - (float10)param_1;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if (fVar1 < (float10)DAT_007372b0 * (float10)_DAT_006cc920) {
      return fVar1 + (float10)DAT_007372b0;
    }
    if ((float10)DAT_007372b0 * (float10)_DAT_006cc7dc < fVar1) {
      fVar1 = fVar1 - (float10)DAT_007372b0;
    }
  }
  return fVar1;
}
