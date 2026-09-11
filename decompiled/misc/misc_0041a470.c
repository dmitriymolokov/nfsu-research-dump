/* spd-match: far pct=22.03 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.1/va_0041A470 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0041a470(int val, int param_2, int param_3, int param_4, int edi)

{
  if (((*(int *)(param_2 + 0x2ba0 + val * 0xc) == edi) &&
      (*(int *)(param_2 + (val * 3 + 0xae9) * 4) == param_3)) &&
     (*(int *)(param_2 + val * 0xc + 0x2ba8) == param_4)) {
    return 1;
  }
  return 0;
}
