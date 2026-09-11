/* spd-match: far pct=9.77 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00673B8D */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0067a645();
int __cdecl FUN_0067a65c();
extern int DAT_00717ad0;
extern int _DAT_006ebcd0;
extern int _DAT_006ebcda;
extern void LAB_00673c1c(void);
float10 __fastcall FUN_00673b8d(uint val, int param_1, uint param_2)

{

  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((val & 0xfffff) != 0) || (fVar1 = _DAT_006ebcd0, param_1 != 0)) {
      fVar1 = (float10)FUN_0067a65c();
    }
LAB_00673c1c:
    if (DAT_00717ad0 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      val = FUN_0067a645();
      in_ST0 = extraout_ST0;
    }
    if (val < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_006ebcd0;
      if ((0x3ff00000 < val) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00673c1c;
      fVar1 = _DAT_006ebcda;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_006ebcda;
      }
    }
    if (DAT_00717ad0 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}
