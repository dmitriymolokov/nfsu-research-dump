/* spd-match: far pct=4.35 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00668FB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00668fb0(byte * obj, undefined4 param_1, byte *param_2)

{
  byte bVar1;

  byte bVar2;
  
  do {
    bVar2 = *obj;
    obj = obj + 1;
    if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
      bVar2 = bVar2 ^ 0x20;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
      bVar1 = bVar1 ^ 0x20;
    }
  } while ((bVar2 != 0) && (bVar2 == bVar1));
  return;
}
