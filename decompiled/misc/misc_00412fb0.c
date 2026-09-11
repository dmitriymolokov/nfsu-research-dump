/* spd-match: far pct=2.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00412FB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_00412fb0(int * obj, int *param_1)

{

  if ((param_1 == (int *)0x0) || (obj = (int *)*param_1, *obj != 0x4d525453)) {
    return (uint)obj & 0xffffff00;
  }
  if ((obj[0x12] == 0) && (param_1[2] == 0)) {
    return 1;
  }
  return 0;
}
