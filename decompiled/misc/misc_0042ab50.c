/* spd-match: close pct=80.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042AB50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00735fb0;
extern int DAT_00735fb8;
undefined4 __fastcall FUN_0042ab50(int * obj)

{

  if (((*obj == 1099) && (DAT_00735fb0 != 0)) && (DAT_00735fb8 == 4)) {
    return 1;
  }
  return 0;
}
