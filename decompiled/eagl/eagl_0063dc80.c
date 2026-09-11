/* spd-match: far pct=50.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0063DC80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0063dc80(char * obj, char *param_1)

{

  int iVar1;
  int iVar2;
  
  iVar1 = _tolower((int)*param_1);
  iVar2 = _tolower((int)*obj);
  iVar1 = iVar1 - iVar2;
  for (; (iVar1 == 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    obj = obj + 1;
    iVar1 = _tolower((int)param_1[1]);
    iVar2 = _tolower((int)*obj);
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}
