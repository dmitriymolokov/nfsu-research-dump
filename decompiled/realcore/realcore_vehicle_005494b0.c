/* spd-match: close pct=86.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005494B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064c660();
undefined4 __fastcall FUN_005494b0(int obj)

{

  undefined4 uVar1;
  
  if (*(int *)(obj + 0x68) == 0) {
    return 0;
  }
  uVar1 = FUN_0064c660(*(undefined4 *)(obj + 0x6c));
  return uVar1;
}
