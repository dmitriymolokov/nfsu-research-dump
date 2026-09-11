/* spd-match: far pct=20.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005851A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7dc;
float10 __fastcall FUN_005851a0(int obj)

{

  return ((float10)*(float *)(obj + 0x80) * (float10)*(float *)(obj + 0xc0) +
         (float10)*(float *)(obj + 0x84) * (float10)*(float *)(obj + 0xc4) +
         (float10)*(float *)(obj + 0x88) * (float10)*(float *)(obj + 200)) *
         (float10)(unsigned int)(_DAT_006cc7dc) +
         ((float10)*(float *)(obj + 0x70) * (float10)*(float *)(obj + 0xa0) +
         (float10)*(float *)(obj + 0x74) * (float10)*(float *)(obj + 0xa4) +
         (float10)*(float *)(obj + 0x78) * (float10)*(float *)(obj + 0xa8)) *
         (float10)(unsigned int)(_DAT_006cc7dc);
}
