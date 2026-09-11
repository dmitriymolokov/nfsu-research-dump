/* spd-match: far pct=21.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FD380 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fdd40();
void __fastcall FUN_004fd380(int obj)

{

  if ((*(uint *)(obj + 0x58) & 1) != 0) {
    *(uint *)(obj + 0x58) = *(uint *)(obj + 0x58) & 0xfffffffe;
    if (*(int *)(obj + 0x5c) != 0) {
      _free(*(void **)(obj + 0x74));
      *(undefined4 *)(obj + 0x74) = 0;
      *(undefined4 *)(obj + 0x5c) = 0;
    }
    if (*(int *)(obj + 0x60) != 0) {
      _free(*(void **)(obj + 0x78));
      *(undefined4 *)(obj + 0x78) = 0;
      *(undefined4 *)(obj + 0x60) = 0;
    }
    FUN_004fdd40();
  }
  return;
}
