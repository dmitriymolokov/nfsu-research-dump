/* spd-match: far pct=7.00 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00442330 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_00442330(float * obj, float param_2, float param_3);
};
void ThisCallBox::FUN_00442330(float * obj, float param_2, float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar6 = obj[6];
  fVar1 = obj[1];
  fVar2 = obj[2];
  fVar3 = obj[0xd];
  fVar4 = obj[5];
  fVar5 = obj[0xb];
  *((float *)this) = obj[5] * param_2 + obj[6] * param_3 + *obj;
  ((float *)this)[1] = fVar6 * param_2 + -fVar4 * param_3 + fVar1;
  ((float *)this)[2] = fVar3 * param_2 + -fVar5 * param_3 + fVar2;
  return;
}
