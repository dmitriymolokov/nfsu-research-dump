/* spd-match: far pct=26.09 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00443DB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc93c;
extern int _DAT_006cc9f8;
extern int _DAT_006ccabc;
float10 __fastcall FUN_00443db0(int obj, float param_1, float param_2)

{

  float10 fVar1;
  
  fVar1 = (float10)param_1 - (float10)param_2;
  if ((0 < *(int *)(obj + 8)) && (*(char *)(*(int *)(obj + 0xc) + 1) != '\0')) {
    if (fVar1 < (float10)_DAT_006ccabc) {
      return fVar1 + (float10)_DAT_006cc9f8;
    }
    if ((float10)_DAT_006cc93c < fVar1) {
      fVar1 = fVar1 - (float10)_DAT_006cc9f8;
    }
  }
  return fVar1;
}
