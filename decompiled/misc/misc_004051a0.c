/* spd-match: close pct=85.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004051A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0067101f();
extern int DAT_006cc568;
extern int DAT_0078ee40;
undefined * __fastcall FUN_004051a0(int obj)

{

  if (*(int *)(obj + 0x38) != 0) {
    FUN_0067101f(&DAT_0078ee40,"line %d in %s",*(undefined4 *)(*(int *)(obj + 0x3c) + 0x44),
                 *(undefined4 *)(*(int *)(obj + 0x3c) + 0x50));
    return &DAT_0078ee40;
  }
  FUN_0067101f(&DAT_0078ee40,&DAT_006cc568,*(undefined4 *)(obj + 8));
  return &DAT_0078ee40;
}
