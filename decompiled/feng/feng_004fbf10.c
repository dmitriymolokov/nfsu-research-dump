/* spd-match: far pct=15.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FBF10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fc100();
int __cdecl FUN_004fc9a0();
void __fastcall FUN_004fbf10(uint val, int param_1)

{
  char cVar1;

  int iVar2;
  
  iVar2 = (val & 0xff) * 0x38 + *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(iVar2 + 2);
  if (cVar1 == '\0') {
    FUN_004fc9a0();
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    FUN_004fc100(iVar2);
    return;
  }
  return;
}
