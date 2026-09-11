/* spd-match: far pct=18.97 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00452630 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567370();
extern int DAT_006b76b0;
extern int DAT_006cc7a4;
undefined4 __fastcall FUN_00452630(int * obj)

{

  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(*obj + 0x3cc) < 2) {
    FUN_00567370();
    if ((local_1c + local_20) * ((int)DAT_006cc7a4) + local_18 <= DAT_006b76b0) {
      return 500;
    }
  }
  return 0xffffffff;
}
