/* spd-match: far pct=41.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401BD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

bool __fastcall FUN_00401bd0(int * obj)

{

  return (int *)*obj == obj;
}
