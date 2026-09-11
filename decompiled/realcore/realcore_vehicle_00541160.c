/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00541160 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00743c10;
extern unsigned char *DAT_00743c14;
undefined4 __fastcall FUN_00541160(undefined4 * obj)

{
  undefined4 *puVar1;

  if (obj == (undefined4 *)0x0) {
    return 0;
  }
  *DAT_00743c14 = obj;
  puVar1 = obj;
  obj[1] = DAT_00743c14;
  DAT_00743c14 = puVar1;
  *obj = &DAT_00743c10;
  return 1;
}
