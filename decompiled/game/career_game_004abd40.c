/* spd-match: far pct=18.75 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABD40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438a60();
extern int DAT_006c64e4;
extern int DAT_006c64e8;
extern int DAT_006c64ec;
extern int DAT_006c64f0;
extern int DAT_006c64f4;
extern int DAT_006c64f8;
extern int DAT_006c64fc;
extern int DAT_006c6500;
extern int DAT_006c6504;
undefined * __fastcall FUN_004abd40(undefined4 val)

{
  char cVar1;

  switch(val) {
  case 0:
    break;
  case 1:
    cVar1 = FUN_00438a60();
    if (cVar1 == '\0') {
      return &DAT_006c64f8;
    }
    return &DAT_006c64fc;
  case 2:
    cVar1 = FUN_00438a60();
    if (cVar1 == '\0') {
      return &DAT_006c64f0;
    }
    return &DAT_006c64f4;
  case 3:
    cVar1 = FUN_00438a60();
    if (cVar1 == '\0') {
      return &DAT_006c64e8;
    }
    return &DAT_006c64ec;
  default:
    return &DAT_006c64e4;
  }
  cVar1 = FUN_00438a60();
  if (cVar1 == '\0') {
    return &DAT_006c6500;
  }
  return &DAT_006c6504;
}
