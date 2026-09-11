/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00546180 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
float10 __fastcall FUN_00546180(int val)

{

  int iVar1;
  float10 extraout_ST0;
  
  if (val == 0) {
    return (float10)DAT_006cc7a4;
  }
  if (val == 2) {
    FUN_00674898();
  }
  iVar1 = FUN_00674898();
  return extraout_ST0 - (float10)iVar1;
}
