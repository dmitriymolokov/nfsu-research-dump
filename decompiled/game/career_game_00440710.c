/* spd-match: far pct=47.06 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00440710 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00440710(int obj)

{
  int iVar1;

  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(obj + 0x2a0);
  if (0 < iVar3) {
    piVar2 = (int *)(obj + 0x20);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  return;
}
