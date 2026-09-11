/* spd-match: far pct=4.30 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E2310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8910();
int unaff_EDI;
void __fastcall FUN_004e2310(int val)

{
  int *piVar1;

  int *unaff_EDI;
  
  piVar1 = (int *)unaff_EDI[0x10];
  if (val == -0x6edfbf62) {
    if ((piVar1 != (int *)unaff_EDI[0x11]) && ((int *)unaff_EDI[0x11] != unaff_EDI + 0x11)) {
      unaff_EDI[0x10] = piVar1[1];
    }
  }
  else if (((val == -0x4a68e40f) && ((int *)unaff_EDI[0x10] != (int *)unaff_EDI[0x12])) &&
          ((int *)unaff_EDI[0x11] != unaff_EDI + 0x11)) {
    unaff_EDI[0x10] = *(int *)unaff_EDI[0x10];
  }
  if (piVar1 != (int *)unaff_EDI[0x10]) {
    FUN_004f8910();
                    
                    
    (**(code **)(*unaff_EDI + 0x10))();
    return;
  }
  return;
}
