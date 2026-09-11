/* spd-match: far pct=8.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00429AC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc90c;
float10 __fastcall FUN_00429ac0(int obj)

{
  float fVar1;

  float10 fVar2;
  
  fVar1 = DAT_006cc7a4;
  if (*(char *)(obj + 0x350) != '\0') {
    fVar1 = _DAT_006cc90c;
  }
  fVar2 = (float10)fVar1;
  if (*(char *)(obj + 0x351) != '\0') {
    fVar2 = fVar2 + (float10)_DAT_006cc90c;
  }
  if (*(char *)(obj + 0x352) != '\0') {
    fVar2 = fVar2 + (float10)_DAT_006cc90c;
  }
  if (*(char *)(obj + 0x353) != '\0') {
    fVar2 = fVar2 + (float10)_DAT_006cc90c;
  }
  return fVar2;
}
