/* spd-match: far pct=42.86 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00425080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006caa58;
void __fastcall FUN_00425080(undefined4 * obj)

{

  *obj = &PTR_FUN_006caa58;
  return;
}
