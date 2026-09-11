/* spd-match: far pct=3.80 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00567D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00567d50(int obj, char *param_1, char *param_2)

{
  char cVar1;
  char cVar2;

  int iVar3;
  
  do {
    iVar3 = obj + -1;
    if (((obj == 0) || (cVar1 = *param_1, cVar1 == '\0')) || (cVar2 = *param_2, cVar2 == '\0'))
    break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    obj = iVar3;
  } while (cVar1 == cVar2);
  if (iVar3 < 0) {
    return 0;
  }
  if (*param_1 != '\0') {
    return 1;
  }
  if (*param_2 != '\0') {
    return -1;
  }
  return (int)param_1[-1] - (int)param_2[-1];
}
