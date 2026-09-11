/* spd-match: far pct=68.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046AC10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
undefined4 __fastcall FUN_0046ac10(int obj)

{

  if ((*(char *)(obj + 0x1d0) != '\0') && (DAT_006cc7a4 < *(float *)(obj + 0x1d4))) {
    return 1;
  }
  return 0;
}
