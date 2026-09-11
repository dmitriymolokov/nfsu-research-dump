/* spd-match: far pct=75.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424DC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00424dc0(int obj)

{

  return *(undefined4 *)(obj + 0x3c);
}
