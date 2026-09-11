/* spd-match: far pct=10.24 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004423B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007372b0;
extern int DAT_007372b4;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc920;
extern int _DAT_006ccc30;

struct ThisCallBox {
  float10 FUN_004423b0(float * obj, float param_2);
};
float10 ThisCallBox::FUN_004423b0(float * obj, float param_2)

{
  float fVar1;

  float10 fVar2;
  
  fVar1 = SQRT((*obj - *((float *)this)) * (*obj - *((float *)this)) +
               (obj[1] - ((float *)this)[1]) * (obj[1] - ((float *)this)[1]));
  fVar2 = (float10)obj[0xe];
  if (DAT_007372b4 != 0) {
    fVar2 = (float10)DAT_007372b0 - fVar2;
  }
  fVar2 = fVar2 - (float10)param_2;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if ((float10)DAT_007372b0 * (float10)_DAT_006cc920 <= fVar2) {
      if ((float10)DAT_007372b0 * (float10)_DAT_006cc7dc < fVar2) {
        fVar2 = fVar2 - (float10)DAT_007372b0;
      }
    }
    else {
      fVar2 = fVar2 + (float10)DAT_007372b0;
    }
  }
  fVar2 = ABS(fVar2) - (float10)_DAT_006ccc30;
  if (fVar2 < (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  return fVar2;
}
