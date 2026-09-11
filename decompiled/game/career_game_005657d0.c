/* spd-match: far pct=50.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005657D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __fastcall FUN_005657d0(int obj)

{
  undefined4 *puVar1;

  int iVar2;
  
  FUN_0063f190(obj + 0x3c);
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(obj + 4); puVar1 != (undefined4 *)(obj + 4);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + puVar1[2];
  }
  FUN_0063f1a0(obj + 0x3c);
  return iVar2;
}
