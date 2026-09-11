/* spd-match: far pct=18.52 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00434A10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int _DAT_006cc79c;
extern int _DAT_006cc93c;
extern int _DAT_006cc9f8;
extern int _DAT_006ccabc;
float10 __fastcall FUN_00434a10(int obj, float param_1)

{

  float10 fVar1;
  
  fVar1 = (float10)param_1 - (float10)*(float *)(obj + 0x540 + *(char *)(obj + 0x53f) * 4);
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if ((float10)_DAT_006ccabc <= fVar1) {
      if ((float10)_DAT_006cc93c < fVar1) {
        fVar1 = fVar1 - (float10)_DAT_006cc9f8;
      }
    }
    else {
      fVar1 = fVar1 + (float10)_DAT_006cc9f8;
    }
  }
  if (fVar1 < (float10)DAT_006cc7a4) {
    fVar1 = fVar1 + (float10)_DAT_006cc9f8;
  }
  return fVar1 * (float10)_DAT_006cc79c;
}
