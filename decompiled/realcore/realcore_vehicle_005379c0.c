/* spd-match: far pct=9.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005379C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005379c0(int obj)

{

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(obj + 0x14);
  iVar2 = 5;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x28))();
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
