/* spd-match: far pct=10.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00538E20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00538e20(int obj)

{

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(obj + 0x14);
  iVar2 = 5;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x24))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
