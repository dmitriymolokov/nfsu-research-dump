/* spd-match: far pct=44.44 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040ED00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cca38;
float10 __fastcall FUN_0040ed00(int * obj)

{

  return (float10)*obj * (float10)_DAT_006cca38;
}
