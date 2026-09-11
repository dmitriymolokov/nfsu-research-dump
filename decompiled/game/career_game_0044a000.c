/* spd-match: far pct=2.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044A000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0044a000(int * obj, int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1[2];
  iVar4 = param_1[3];
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if (iVar3 == 1) {
    if (iVar2 != 0) {
      return;
    }
  }
  else {
    if ((iVar3 < 2) || (3 < iVar3)) {
      if (iVar3 != 0) {
        return;
      }
      *obj = 0;
      obj[2] = 0;
      *(undefined1 *)(obj + 3) = 0;
      obj[1] = 0;
      return;
    }
    if (iVar2 == 0) {
      return;
    }
  }
  *obj = iVar3;
  *(char *)(obj + 3) = (char)iVar4;
  obj[2] = iVar1;
  obj[1] = iVar2;
  return;
}
