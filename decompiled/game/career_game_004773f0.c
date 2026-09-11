/* spd-match: far pct=3.03 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004773F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
extern int _DAT_006cca50;
extern int _DAT_006ffdcc;
extern int _DAT_006ffdd0;
extern int _DAT_006ffdd4;
extern int _DAT_006ffddc;
extern int _DAT_006ffde0;
extern int _DAT_00735fa4;
extern int _DAT_00735fa8;
float10 __fastcall FUN_004773f0(float * obj, float param_1, float param_2, float param_3, float param_4, float param_5, int param_6, float param_7)

{
  float fVar1;

  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *obj;
  *obj = (float)ABS((float10)fVar1);
  fVar2 = ABS((float10)fVar1) + (float10)_DAT_006cc7bc;
  if (param_6 == 0) {
    fVar3 = (float10)param_4 + (float10)param_5;
  }
  else {
    fVar3 = (float10)param_5 * (float10)param_7 + (float10)param_4;
  }
  if ((_DAT_006ffddc < param_2) &&
     (ABS((float10)param_1) < (float10)_DAT_006ffde0 * (float10)_DAT_006cca50)) {
    return fVar2;
  }
  fVar3 = fVar3 * (((float10)_DAT_006ffdcc - (float10)_DAT_00735fa4) *
                   (((float10)param_3 - (float10)_DAT_00735fa8) /
                   ((float10)_DAT_006ffdd0 - (float10)_DAT_00735fa8)) + (float10)_DAT_00735fa4) *
                  ABS((float10)param_1);
  if ((float10)_DAT_006ffdd4 < fVar3) {
    fVar3 = (float10)_DAT_006ffdd4;
  }
  return fVar3 + fVar2;
}
