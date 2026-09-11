/* spd-match: far pct=25.42 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051C7F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

char __fastcall FUN_0051c7f0(int obj)

{
  int iVar1;
  char cVar2;

  char cVar3;
  
  iVar1 = *(int *)(obj + 0x104);
  if (iVar1 != 0) {
    cVar2 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x80))(0);
    cVar3 = cVar2 != '\0';
    cVar2 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x80))(1);
    if (cVar2 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    return cVar3;
  }
  return '\0';
}
