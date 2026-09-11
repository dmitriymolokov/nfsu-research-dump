/* spd-match: far pct=46.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F3D30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006c1ea8;
void __fastcall FUN_004f3d30(undefined4 * obj)

{
  undefined4 *puVar1;

  puVar1 = obj + 1;
  *obj = &PTR_FUN_006c1ea8;
  *puVar1 = puVar1;
  obj[2] = puVar1;
  return;
}
