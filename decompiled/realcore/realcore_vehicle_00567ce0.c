/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00567CE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00567ce0(char * obj, char *param_1)

{
  char cVar1;

  char *pcVar2;
  
  cVar1 = *param_1;
  *obj = cVar1;
  if (cVar1 != '\0') {
    pcVar2 = obj;
    do {
      cVar1 = pcVar2[(int)(param_1 + (1 - (int)obj))];
      pcVar2 = pcVar2 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}
