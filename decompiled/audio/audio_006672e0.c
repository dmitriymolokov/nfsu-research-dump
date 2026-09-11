/* spd-match: far pct=6.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006672E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

char * __fastcall FUN_006672e0(char * obj, undefined1 *param_1, char *param_2)

{
  char *pcVar1;
  char cVar2;

  if (param_2 == (char *)0x0) {
    *param_1 = 0;

  }
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    *obj = cVar2;
    pcVar1 = param_2 + 1;
    obj = obj + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  *obj = '=';
  return obj + 1;
}
