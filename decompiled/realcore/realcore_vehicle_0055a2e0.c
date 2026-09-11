/* spd-match: far pct=5.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055A2E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004eb950();
undefined4 __fastcall FUN_0055a2e0(int obj)

{

  if (*(char *)(*(int *)(obj + 0x40) + 0xdc) == '\0') {
    FUN_004eb950(0,0x18ed8cac,0x9c7511d8,0x8c35f7e5,0x4e2e9a00,0,0x639,0);
    return 0;
  }
  return 1;
}
