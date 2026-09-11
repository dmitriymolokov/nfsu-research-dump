/* spd-match: far pct=37.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057C2A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006ba380;
extern unsigned char *PTR_FUN_006ba644;
void __fastcall FUN_0057c2a0(undefined4 * obj, int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  *obj = &PTR_FUN_006ba644;
  obj[4] = param_1;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  *obj = &PTR_FUN_006ba380;
  obj[3] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  obj[8] = *(undefined4 *)(param_1 + 0x80);
  obj[9] = uVar1;
  obj[10] = uVar2;
  obj[0xc] = 0;
  return;
}
