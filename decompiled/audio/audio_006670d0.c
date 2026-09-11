/* spd-match: far pct=6.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006670D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
void __fastcall FUN_006670d0(byte * obj)

{
  byte bVar1;

  int *unaff_ESI;
  
  *unaff_ESI = 0;
  bVar1 = *obj;
  while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
    obj = obj + 1;
    *unaff_ESI = (bVar1 & 0xf) + *unaff_ESI * 10;
    bVar1 = *obj;
  }
  return;
}
