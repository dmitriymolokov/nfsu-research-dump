/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FCB10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ee5e0();
extern unsigned char *PTR_LAB_006c2c4c;
void __fastcall FUN_004fcb10(undefined4 * obj)

{

  *obj = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  return;
}
