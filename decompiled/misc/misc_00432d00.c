/* spd-match: close pct=86.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432D00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00432d00(int obj)

{

  return (float10)*(float *)(obj + 0x540 + *(char *)(obj + 0x53e) * 4);
}
