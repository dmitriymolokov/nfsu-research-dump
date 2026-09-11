/* spd-match: far pct=5.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004828A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0073ad38;
extern int DAT_0073b4a4;
float10 __fastcall FUN_004828a0(int obj, undefined4 param_1, int param_2, undefined4 param_3, float param_4, float param_5, float param_6, float param_7)

{

  float10 fVar1;
  float10 fVar2;
  
  if (DAT_006cc7a4 == (float)(byte)(&DAT_0073b4a4)[obj] - (float)(byte)(&DAT_0073b4a4)[param_2])
  {
    if (DAT_006cc7a4 <= param_4) {
      if (param_4 <= DAT_006cc7a4) {
        return (float10)DAT_006cc7a4;
      }
      fVar1 = (float10)param_4 - (float10)DAT_0073ad38 * (float10)param_7;
      if (fVar1 < (float10)DAT_006cc7a4) {
        return (float10)DAT_006cc7a4;
      }
    }
    else {
      fVar1 = (float10)DAT_0073ad38 * (float10)param_7 + (float10)param_4;
      if ((float10)DAT_006cc7a4 < fVar1) {
        return (float10)DAT_006cc7a4;
      }
    }
  }
  else {
    fVar1 = -(float10)param_5;
    fVar2 = (float10)DAT_0073ad38 *
            (float10)((float)(byte)(&DAT_0073b4a4)[obj] - (float)(byte)(&DAT_0073b4a4)[param_2])
            * (float10)param_6 + (float10)param_4;
    if (fVar1 < fVar2) {
      fVar1 = (float10)(float)fVar2;
    }
    if ((float10)param_5 < fVar1) {
      fVar1 = (float10)param_5;
    }
  }
  return fVar1;
}
