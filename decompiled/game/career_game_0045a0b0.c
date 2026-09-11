/* spd-match: far pct=3.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045A0B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006b7530;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
extern int _DAT_006cca64;
extern int _DAT_006ccb7c;
undefined2 __fastcall FUN_0045a0b0(float * obj, float *param_1, float *param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  if ((ABS(param_6) < _DAT_006cc8bc == (ABS(param_6) == _DAT_006cc8bc)) ||
     (fVar1 = ABS(*param_2), fVar2 = _DAT_006cca64,
     fVar1 < _DAT_006cc8bc == (fVar1 == _DAT_006cc8bc))) {
    fVar2 = param_5 / ((*param_2 + param_6) * _DAT_006cc7dc);
  }
  if (ABS(fVar2) < _DAT_006cc8bc == (ABS(fVar2) == _DAT_006cc8bc)) {
    fVar1 = (*obj - *param_1) * (_DAT_006cc7bc / fVar2);
    fVar2 = (obj[1] - param_1[1]) * (_DAT_006cc7bc / fVar2);
    fVar4 = param_1[1] * param_1[1] + *param_1 * *param_1;
    fVar3 = DAT_006cc7a4;
    fVar5 = DAT_006cc7a4;
    if (_DAT_006ccb7c < ABS(fVar4)) {
      fVar4 = (fVar2 * param_1[1] + fVar1 * *param_1) / fVar4;
      fVar3 = fVar4 * param_1[1];
      fVar5 = fVar4 * *param_1;
    }
    fVar1 = fVar1 - fVar5;
    fVar2 = fVar2 - fVar3;
    fVar2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if ((_DAT_006b7530 <= fVar2) &&
       (fVar2 = ABS(fVar2 - _DAT_006b7530), fVar2 < _DAT_006cc8bc == (fVar2 == _DAT_006cc8bc))) {
      return 0;
    }
  }
  else {
    *param_2 = param_6;
  }
  return 1;
}
