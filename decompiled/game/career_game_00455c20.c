/* spd-match: close pct=85.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00455C20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00455c20(char * obj)

{
  int iVar1;

  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*obj != '\0') {
    piVar2 = (int *)(obj + 4);
    iVar4 = 3;
    do {
      iVar3 = 0x28;
      do {
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
      } while (iVar3 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
