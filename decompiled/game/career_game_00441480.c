/* spd-match: far pct=3.97 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00441480(undefined4 * obj, int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 == 0x34130) {
    *obj = 0;
    obj[1] = 0;
    return 1;
  }
  if (iVar1 == 0x34131) {
    obj[2] = 0;
    obj[3] = 0;
    return 1;
  }
  if (iVar1 == 0x34132) {
    obj[4] = 0;
    obj[5] = 0;
    return 1;
  }
  if (iVar1 == 0x34133) {
    obj[6] = 0;
    obj[7] = 0;
    return 1;
  }
  if (iVar1 == 0x34134) {
    obj[0xc] = 0;
    obj[0xd] = 0;
    obj[0xe] = 0;
    obj[0x10] = 0;
    obj[0x11] = 0;
    obj[0x12] = 0;
    return 1;
  }
  return 0;
}
