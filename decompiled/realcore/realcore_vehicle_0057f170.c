/* spd-match: far pct=46.98 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057F170 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7e8;
extern int _DAT_006cc7ec;
extern int _DAT_006cc7f0;
extern int _DAT_006cc7f4;
extern int _DAT_006cc7f8;
extern int _DAT_006cc7fc;
extern int _DAT_006cc800;
extern int _DAT_006cc804;
extern int _DAT_006cc808;
extern int _DAT_006cc80c;
extern int _DAT_006cc810;
extern int _DAT_006cc814;
extern int _DAT_006cc818;
extern int _DAT_006cc81c;
extern int _DAT_006cc820;
extern int _DAT_006cc824;
extern int _DAT_006cc828;
extern int _DAT_006cc82c;
float10 __fastcall FUN_0057f170(undefined4 val)

{

  switch(val) {
  case 0:
    return (float10)_DAT_006cc82c;
  case 1:
    return (float10)_DAT_006cc828;
  case 2:
    return (float10)_DAT_006cc824;
  case 3:
  case 5:
    return (float10)_DAT_006cc820;
  case 4:
    return (float10)_DAT_006cc81c;
  case 6:
  case 0xe:
    return (float10)_DAT_006cc818;
  case 7:
    return (float10)_DAT_006cc814;
  case 8:
    return (float10)_DAT_006cc810;
  case 9:
    return (float10)_DAT_006cc80c;
  case 10:
    return (float10)_DAT_006cc808;
  case 0xb:
    return (float10)_DAT_006cc804;
  case 0xc:
    return (float10)_DAT_006cc800;
  case 0xd:
    return (float10)_DAT_006cc7fc;
  case 0xf:
    return (float10)_DAT_006cc7f8;
  case 0x10:
    return (float10)_DAT_006cc7f4;
  case 0x11:
    return (float10)_DAT_006cc7f0;
  case 0x12:
    return (float10)_DAT_006cc7ec;
  case 0x13:
    return (float10)_DAT_006cc7e8;
  default:
    return (float10)DAT_006cc7a4;
  }
}
