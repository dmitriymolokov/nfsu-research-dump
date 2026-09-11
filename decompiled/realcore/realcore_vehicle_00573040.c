/* spd-match: far pct=26.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00573040 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00573040(undefined1 * obj)

{
  undefined1 *puVar1;

  puVar1 = obj + 0x2c;
  *(undefined1 **)puVar1 = puVar1;
  *(undefined1 **)(obj + 0x30) = puVar1;
  *obj = 0;
  obj[1] = 0;
  obj[2] = 0;
  *(undefined4 *)(obj + 4) = 0;
  obj[8] = 0;
  obj[9] = 0;
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 0x14) = 0;
  *(undefined4 *)(obj + 0x18) = 0xffffffff;
  *(undefined4 *)(obj + 0x1c) = 0;
  *(undefined4 *)(obj + 0x20) = 0;
  *(undefined4 *)(obj + 0x24) = 0;
  *(undefined4 *)(obj + 0x28) = 0;
  return;
}
