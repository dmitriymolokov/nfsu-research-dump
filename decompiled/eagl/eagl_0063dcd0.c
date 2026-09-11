/* spd-match: far pct=5.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0063DCD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063dc30();
int unaff_EDI;
ulonglong __fastcall FUN_0063dcd0(int val)

{

  uint uVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  if (val < 5) {
    uVar1 = FUN_0063dc30();
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_0063dc30();
  return CONCAT44(uVar2,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(unaff_EDI + -4 + val),
                                                   *(undefined1 *)(unaff_EDI + -3 + val)),
                                          *(undefined1 *)(unaff_EDI + -2 + val)),
                                 *(undefined1 *)(unaff_EDI + -1 + val)));
}
