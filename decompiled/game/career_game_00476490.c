/* spd-match: far pct=42.86 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00476490 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006c8338;
void __fastcall FUN_00476490(undefined4 * obj)

{

  *obj = &PTR_LAB_006c8338;
  return;
}
