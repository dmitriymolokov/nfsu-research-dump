/* spd-match: far pct=8.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00456960 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7dc;
extern int _DAT_007000ac;
float10 __fastcall FUN_00456960(int obj, float param_1)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x20);
  return -((((float10)*(float *)(iVar1 + 0xfc) + (float10)*(float *)(iVar1 + 0xdc)) *
            (float10)_DAT_006cc7dc *
           ((float10)_DAT_007000ac * (float10)*(float *)(iVar1 + 0x110) +
           ((float10)*(float *)(iVar1 + 0x268) + (float10)*(float *)(iVar1 + 0x264)) *
           ABS((float10)param_1) * (float10)_DAT_006cc7dc)) / (float10)*(float *)(iVar1 + 0x110));
}
