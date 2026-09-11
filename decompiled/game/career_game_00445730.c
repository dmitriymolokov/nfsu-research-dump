/* spd-match: far pct=5.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00445730 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565da0();
extern int DAT_006ca178;
undefined1 * __fastcall FUN_00445730(int val, undefined1 *param_1)

{

  if (val < 1) {
    *param_1 = 0x2d;
    param_1[1] = 0x2d;
    param_1[2] = 0;
    return param_1;
  }
  FUN_00565da0(&DAT_006ca178,(int)(char)((char)(val / 100) + '@'),val % 100);
  return param_1;
}
