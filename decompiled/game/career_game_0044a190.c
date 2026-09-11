/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044A190 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044a080();
extern unsigned char *PTR_FUN_006c98b0;
void __fastcall FUN_0044a190(undefined4 * obj, undefined4 param_1)

{

  FUN_0044a080(param_1);
  obj[5] = 2;
  *obj = &PTR_FUN_006c98b0;
  return;
}
