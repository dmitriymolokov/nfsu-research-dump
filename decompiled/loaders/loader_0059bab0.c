/* spd-match: far pct=6.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059BAB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc83c;
extern int _DAT_006cc93c;
float10 __fastcall FUN_0059bab0(int * obj)

{

  float10 fVar1;
  
  fVar1 = (float10)_DAT_006cc93c;
  if (*obj != 0) {
    fVar1 = (float10)((uint)*(byte *)(obj[2] + 0x6a + obj[1]) << 0x10) *
            (float10)_DAT_006cc83c;
  }
  return fVar1;
}
