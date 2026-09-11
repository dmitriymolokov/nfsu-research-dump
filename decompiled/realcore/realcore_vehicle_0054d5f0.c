/* spd-match: far pct=2.04 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054D5F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0054d5f0(char * obj)

{
  char cVar1;

  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  if (*obj == '-') {
    iVar2 = -1;
    obj = obj + 1;
  }
  cVar1 = *obj;
  while (((cVar1 != '\0' && ('/' < cVar1)) && (cVar1 < ':'))) {
    obj = obj + 1;
    iVar3 = cVar1 + -0x30 + iVar3 * 10;
    cVar1 = *obj;
  }
  return iVar2 * iVar3;
}
