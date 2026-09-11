/* spd-match: far pct=66.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B690 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0054b690(int obj)

{

  if (*(int *)(obj + 0x68) == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(obj + 0x78) = 0;
  *(undefined4 *)(obj + 0x7c) = 0;
  *(undefined4 *)(obj + 0x80) = 0;
  *(undefined1 *)(obj + 0x84) = 0;
  *(undefined4 *)(obj + 0x53c) = *(undefined4 *)(obj + 0x538);
  *(undefined4 *)(obj + 0x538) = 10;
  return 0;
}
