/* spd-match: far pct=15.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045DB00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
float10 __fastcall FUN_0045db00(int obj)

{

  if (*(byte *)(obj + 0x2e) != 0) {
    return ((float10)*(float *)(obj + 0x30) * (float10)*(byte *)(obj + 0x2e)) /
           ((float10)*(float *)(obj + 8) * (float10)*(float *)(obj + 0x78));
  }
  return (float10)DAT_006cc7a4;
}
