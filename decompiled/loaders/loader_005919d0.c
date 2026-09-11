/* spd-match: far pct=7.87 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_005919D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7ac;

struct ThisCallBox {
  void FUN_005919d0(float * obj, float param_2, float param_3);
};
void ThisCallBox::FUN_005919d0(float * obj, float param_2, float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = *obj;
  param_2 = param_2 - *((float *)this);
  fVar3 = (fVar1 - param_2) - param_2;
  fVar2 = (param_2 * _DAT_006cc7ac - fVar1) - fVar1;
  *((float *)this) = ((fVar3 * param_3 + fVar2) * param_3 + fVar1) * param_3 + *((float *)this);
  *obj = (fVar2 + fVar2 + fVar3 * _DAT_006cc7ac * param_3) * param_3 + fVar1;
  return;
}
