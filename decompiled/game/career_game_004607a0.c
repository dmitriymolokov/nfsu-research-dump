/* spd-match: far pct=9.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004607A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00735fa0;
extern int DAT_007361a4;
extern int DAT_007361a8;
undefined4 __fastcall FUN_004607a0(int obj)

{

  if (((*(char *)(obj + 0x54) == '\0') && (DAT_007361a8 == 0)) &&
     ((DAT_00735fa0 != 0 || ((*(char *)(obj + 0x55) != '\0' || (DAT_007361a4 != 0)))))) {
    return 1;
  }
  return 0;
}
