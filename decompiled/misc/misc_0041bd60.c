/* spd-match: far pct=11.54 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041BD60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0041bd60(int obj)

{
  int *piVar1;

  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(obj + 0x10);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
