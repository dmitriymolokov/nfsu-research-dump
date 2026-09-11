/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E0CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00748f78;
extern int DAT_00748f7c;
undefined4 __fastcall FUN_004e0cb0(uint val, undefined4 param_1, int param_2)

{
  int iVar1;

  int iVar2;
  
  if ((val & 1) == 0) {
    if ((val & 2) == 0) {
      if ((val & 4) == 0) {
        iVar2 = (-(uint)((val & 8) != 0) & 4) - 1;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if (param_2 != 0) {
    iVar1 = DAT_00748f7c;
    if ((param_2 == 1) && (iVar1 = iVar2, DAT_00748f78 == iVar2)) {
      return 0;
    }
    DAT_00748f7c = iVar1;
    return 1;
  }
  DAT_00748f78 = iVar2;
  return 1;
}
