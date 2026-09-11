/* spd-match: far pct=10.53 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00435F80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0073ad34;
extern int _DAT_006cc7ac;
extern int _DAT_006cc8a8;
extern int _DAT_006cca38;
float10 __fastcall FUN_00435f80(int * obj)

{
  int iVar1;

  if (*obj == 3) {
    return (float10)(float)obj[3] * (float10)_DAT_006cc7ac -
           (float10)(DAT_0073ad34 - obj[2]) * (float10)_DAT_006cca38;
  }
  iVar1 = obj[1];
  if ((iVar1 != 0) && (iVar1 != 0x7fffffff)) {
    return -((float10)(DAT_0073ad34 - iVar1) * (float10)_DAT_006cca38);
  }
  return -(float10)_DAT_006cc8a8;
}
