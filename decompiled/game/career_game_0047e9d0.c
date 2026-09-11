/* spd-match: far pct=20.27 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047E9D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00737290;
extern int DAT_007796fc;
extern unsigned char *DAT_00779700;
extern unsigned char *PTR_FUN_006c8148;
extern unsigned char *PTR_LAB_006c8118;
void __fastcall FUN_0047e9d0(undefined4 * obj, undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  *obj = &PTR_LAB_006c8118;
  obj[5] = param_1;
  obj[3] = 0;
  obj[6] = 0;
  obj[4] = 0;
  puVar1 = obj + 1;
  *DAT_00779700 = puVar1;
  puVar3 = puVar1;
  obj[2] = DAT_00779700;
  DAT_00779700 = puVar3;
  *puVar1 = &DAT_007796fc;
  *obj = &PTR_FUN_006c8148;
  uVar2 = DAT_00737290;
  obj[8] = 0;
  obj[9] = uVar2;
  obj[7] = 0xffffffff;
  return;
}
