/* spd-match: far pct=8.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

byte __fastcall FUN_004fa080(int val)

{

  if (val == 0) {
    return 1;
  }
  if (val == 1) {
    return 2;
  }
  if (val == 2) {
    return 4;
  }
  return (val != 3) - 1U & 8;
}
