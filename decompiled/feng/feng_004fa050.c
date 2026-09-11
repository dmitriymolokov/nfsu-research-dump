/* spd-match: far pct=23.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA050 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004fa050(uint val)

{

  if ((val & 1) != 0) {
    return 0;
  }
  if ((val & 2) != 0) {
    return 1;
  }
  if ((val & 4) != 0) {
    return 2;
  }
  return (-(uint)((val & 8) != 0) & 4) - 1;
}
