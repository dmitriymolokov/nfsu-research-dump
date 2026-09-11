/* spd-match: far pct=10.53 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0057A350 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void *PTR_FUN_006ba5a0;
extern void *PTR_FUN_006ba644;

struct ThisCallBox {
  void FUN_0057a350(undefined4 * obj, undefined4 param_2);
};
void ThisCallBox::FUN_0057a350(undefined4 * obj, undefined4 param_2)

{

  *obj = (unsigned int)&PTR_FUN_006ba644;
  obj[4] = ((int)this);
  *(int *)(((int)this) + 0xd8) = *(int *)(((int)this) + 0xd8) + 1;
  obj[3] = 0;
  *obj = (unsigned int)&PTR_FUN_006ba5a0;
  obj[5] = param_2;
  return;
}
