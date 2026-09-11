/* spd-match: far pct=42.86 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00534720 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006be7c4;
void __fastcall FUN_00534720(undefined4 * obj)

{

  *obj = &PTR_LAB_006be7c4;
  return;
}
