/* spd-match: far pct=63.39 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00473CF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7dc;
void __fastcall FUN_00473cf0(int obj, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)

{

  *(undefined4 *)(obj + 0x14) = 8;
  *(float *)(obj + 0x20) = (param_1 + param_4) * _DAT_006cc7dc;
  *(float *)(obj + 0x24) = (param_2 + param_5) * _DAT_006cc7dc;
  *(float *)(obj + 0x28) = (param_3 + param_6) * _DAT_006cc7dc;
  *(float *)(obj + 0x30) = (param_4 - param_1) * _DAT_006cc7dc;
  *(float *)(obj + 0x34) = (param_5 - param_2) * _DAT_006cc7dc;
  *(float *)(obj + 0x38) = (param_6 - param_3) * _DAT_006cc7dc;
  return;
}
