/* spd-match: far pct=15.73 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F9ED0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004f9ed0(int * obj, undefined4 param_1, int param_2)

{
  int *piVar1;

  int iVar2;
  
  if (obj[2] != 0) {
    piVar1 = obj + 5;
    *piVar1 = *piVar1 + param_2;
    if (*piVar1 < 0) {
      obj[5] = 0;
    }
    iVar2 = obj[2] + -1;
    if (iVar2 < obj[5]) {
      obj[5] = iVar2;
    }
    iVar2 = obj[5];
    if (obj[6] < iVar2) {
      if (obj[7] <= iVar2) {
        obj[7] = iVar2 + 1;
        obj[6] = (iVar2 + 1) - obj[3];
      }
    }
    else {
      obj[6] = iVar2;
      obj[7] = obj[3] + iVar2;
    }
    obj[4] = iVar2 - obj[6];
    if (*obj <= iVar2 - obj[6]) {
      obj[4] = *obj + -1;
    }
  }
  return;
}
