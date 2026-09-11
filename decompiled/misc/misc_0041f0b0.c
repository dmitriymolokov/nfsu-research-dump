/* spd-match: far pct=46.15 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0041F0B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_0041f0b0(int * obj, int *param_2);
};
void ThisCallBox::FUN_0041f0b0(int * obj, int *param_2)

{

  *obj = *((int *)this) - *param_2;
  return;
}
