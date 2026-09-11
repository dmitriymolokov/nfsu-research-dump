/* spd-match: close pct=96.77 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.3-r2/va_00567D30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00567d30(char * obj, char *param_2)

{
  char cVar1;
  char cVar2;

  do {
    cVar1 = *param_2;
    cVar2 = *obj;
    param_2 = param_2 + 1;
    obj = obj + 1;
    if ((cVar1 == '\0') || (cVar2 == '\0')) break;
  } while (cVar1 == cVar2);
  return (int)cVar1 - (int)cVar2;
}
