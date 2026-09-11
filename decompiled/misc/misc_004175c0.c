/* spd-match: far pct=2.00 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004175C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_004175c0(int * obj, int param_2, float param_3, float param_4);
};
void ThisCallBox::FUN_004175c0(int * obj, int param_2, float param_3, float param_4)

{

  *obj = ((int)this);
  obj[1] = (int)param_3;
  obj[2] = (int)param_4;
  obj[4] = param_2;
  obj[3] = (int)((float)(((int)this) + -1) / (param_4 - param_3));
  return;
}
