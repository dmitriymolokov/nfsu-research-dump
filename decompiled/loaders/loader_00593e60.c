/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00593E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_00593e60(int obj, float param_2);
};
void ThisCallBox::FUN_00593e60(int obj, float param_2)

{

  *((float *)this) = ((param_2 * *(float *)(obj + 0x10) + *(float *)(obj + 0x14)) * param_2 +
             *(float *)(obj + 0x18)) * param_2 + *(float *)(obj + 0x1c);
  ((float *)this)[1] = ((param_2 * *(float *)(obj + 0x40) + *(float *)(obj + 0x44)) * param_2 +
               *(float *)(obj + 0x48)) * param_2 + *(float *)(obj + 0x4c);
  ((float *)this)[2] = ((param_2 * *(float *)(obj + 0x70) + *(float *)(obj + 0x74)) * param_2 +
               *(float *)(obj + 0x78)) * param_2 + *(float *)(obj + 0x7c);
  return;
}
