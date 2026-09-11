/* spd-match: far pct=3.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00459F70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0045a0b0();
int __cdecl FUN_00567310();
extern int _DAT_006ccb7c;
void __fastcall FUN_00459f70(float * obj, undefined4 param_1, float param_2)

{

  int unaff_ESI;
  float *unaff_EDI;
  
  param_2 = ABS(*(float *)(unaff_ESI + 0x3d0)) * param_2;
  if (_DAT_006ccb7c < ABS(*unaff_EDI)) {
    FUN_00567310(*unaff_EDI,param_2,*obj - *(float *)(unaff_ESI + 0x60),
                 obj[1] - *(float *)(unaff_ESI + 100));
  }
  FUN_0045a0b0(param_1,unaff_ESI,param_2,*(undefined4 *)(unaff_ESI + 0x3d4));
  return;
}
