/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00547210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043b400();
int __cdecl FUN_005478d0();
int __cdecl FUN_005488d0();
extern int DAT_0073ddc4;
void __fastcall FUN_00547210(int val, undefined4 param_1)

{

  int *piVar1;
  
  FUN_005488d0(0x20);
  piVar1 = &DAT_0073ddc4;
  do {
    if (*piVar1 == val) break;
    piVar1 = piVar1 + 8;
  } while ((int)piVar1 < 0x73de24);
  FUN_0043b400(0,param_1);
  FUN_005478d0();
  return;
}
