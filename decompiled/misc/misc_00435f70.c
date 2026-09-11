/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00435F70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7ac;
float10 __fastcall FUN_00435f70(int obj)

{

  return (float10)*(float *)(obj + 0xc) * (float10)_DAT_006cc7ac;
}
