/* spd-match: far pct=38.46 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058D3F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058d190();
int __cdecl FUN_0058d2c0();
undefined4 __fastcall FUN_0058d3f0(int val, int *param_1)

{

  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (val != 0)) {
    if (*param_1 == 0x504d4f43) {
      uVar1 = FUN_0058d2c0();
      return uVar1;
    }
    if (*param_1 == 0x5a4c444a) {
      uVar1 = FUN_0058d190();
      return uVar1;
    }
  }
  return 0;
}
