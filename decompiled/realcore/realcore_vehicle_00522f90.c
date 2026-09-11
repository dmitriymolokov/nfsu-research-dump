/* spd-match: far pct=12.63 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00522F90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
void __fastcall FUN_00522f90(int obj, int param_1, int param_2)

{

  if ((0x52 < param_2) && (*(int *)(param_1 + (param_2 + -0x53 + (obj + 0x36) * 3) * 4) != 0)) {
    *(undefined1 *)(param_2 + -0x53 + (obj + 0x1db) * 3 + param_1) = 1;
    FUN_00532640();
    FUN_00532670(0x3f800000,0,300,0);
    *(undefined4 *)((param_2 + -0x53 + (obj + -1) * 3) * 0x7c + param_1 + 800) = 0x3f800000;
  }
  return;
}
