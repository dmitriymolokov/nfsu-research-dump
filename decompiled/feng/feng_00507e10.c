/* spd-match: far pct=4.17 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00507E10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059e5c0();
extern int DAT_00735728;
extern int DAT_00735ec1;
extern int DAT_00745e40;
extern int DAT_007677ac;
bool __fastcall FUN_00507e10(int obj, int param_1)

{
  byte bVar1;
  char cVar2;

  if (((DAT_00735ec1 != '\0') || (DAT_00735728 != 0)) || (obj == 0)) {
    return false;
  }
  bVar1 = *(byte *)(obj + 0x11);
  cVar2 = FUN_0059e5c0();
  if ((cVar2 == '\0') && ((DAT_00745e40 != 2 || (DAT_007677ac == 0)))) {
    return *(int *)(param_1 + 0x88 + (uint)bVar1 * 4) == 0;
  }
  return false;
}
