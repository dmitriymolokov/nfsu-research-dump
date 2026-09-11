/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FDD00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fdd00(int obj, int param_1)

{

  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(obj + 0x10);
    do {
      puVar1[-4] = 0xffffffff;
      puVar1[-3] = 0x3f800000;
      puVar1[-2] = 0x3f800000;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0x3f800000;
      puVar1[7] = 0x3f800000;
      puVar1[3] = 0;
      puVar1 = puVar1 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}
