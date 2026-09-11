/* spd-match: far pct=23.33 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_005408B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_005408b0(float * obj, float param_2, float param_3, float param_4, float param_5);
};
void ThisCallBox::FUN_005408b0(float * obj, float param_2, float param_3, float param_4, float param_5)

{

  *obj = param_2 * *((float *)this) + param_3 * ((float *)this)[1] + param_4 * ((float *)this)[2];
  obj[1] = param_3;
  obj[2] = param_4;
  obj[3] = param_5;
  return;
}
