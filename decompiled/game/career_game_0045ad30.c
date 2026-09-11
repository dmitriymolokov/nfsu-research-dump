/* spd-match: far pct=2.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045AD30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057b520();
bool __fastcall FUN_0045ad30(int obj, int *param_1)

{
  int iVar1;

  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 1) {
    iVar3 = *(int *)(obj + 0x38c);
    iVar1 = *(int *)(obj + 0x394);
    iVar2 = (**(code **)(**(int **)(obj + 0x3a8) + 8))(iVar1);
    if (iVar3 != 0) {
      if ((-1 < iVar1) && (iVar1 < 5)) {
        if ((*(char *)(iVar2 * 0x34 + 0x34 + iVar3) == '\0') &&
           (*(char *)(iVar2 * 0x34 + iVar3 + 0x35) == '\0')) {
          return false;
        }
        return true;
      }
      if ((10 < iVar1) && (iVar1 < 0x11)) {
        return *(char *)(iVar2 + 0x265 + iVar3) != '\0';
      }
    }
  }
  else if ((1 < iVar3) && (iVar3 < 4)) {
    iVar3 = FUN_0057b520();
    return iVar3 != 0;
  }
  return false;
}
