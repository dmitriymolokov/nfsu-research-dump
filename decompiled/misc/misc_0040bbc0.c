/* spd-match: far pct=74.32 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.3/va_0040BBC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
/* M4.1.3: drop phantom param_1 (phantom_param; sync only on uplift). */
#include "ghidra_compat.h"

void __fastcall FUN_0040bbc0(undefined4 * obj, undefined4 *param_2)

{

  *obj = 0x3f800000;
  obj[1] = 0;
  obj[2] = 0;
  obj[3] = 0;
  obj[4] = 0;
  obj[5] = 0x3f800000;
  obj[6] = 0;
  obj[7] = 0;
  obj[8] = 0;
  obj[9] = 0;
  obj[10] = 0x3f800000;
  obj[0xb] = 0;
  obj[0xc] = *param_2;
  obj[0xd] = param_2[1];
  obj[0xe] = param_2[2];
  obj[0xf] = 0x3f800000;
  return;
}
