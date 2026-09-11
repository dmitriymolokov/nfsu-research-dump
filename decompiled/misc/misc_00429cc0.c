/* spd-match: far pct=70.73 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00429CC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00429cc0(int obj)

{

  return (float10)*(float *)(obj + 0x80) * (float10)*(float *)(obj + 0x90) +
         (float10)*(float *)(obj + 0x84) * (float10)*(float *)(obj + 0x94) +
         (float10)*(float *)(obj + 0x88) * (float10)*(float *)(obj + 0x98);
}
