/* spd-match: far pct=4.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A4900 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc974;
void __fastcall FUN_004a4900(float * obj, float *param_1, float *param_2, undefined4 param_3, float param_4)

{
  float fVar1;
  float fVar2;

  *param_1 = (*param_2 - *obj) * param_4 + *obj;
  param_1[1] = (param_2[1] - obj[1]) * param_4 + obj[1];
  param_1[2] = (param_2[2] - obj[2]) * param_4 + obj[2];
  fVar1 = *param_1;
  param_1[3] = (param_2[3] - obj[3]) * param_4 + obj[3];
  fVar2 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar1) && (fVar2 = fVar1, _DAT_006cc974 < fVar1)) {
    fVar2 = _DAT_006cc974;
  }
  fVar1 = param_1[1];
  *param_1 = fVar2;
  fVar2 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar1) && (fVar2 = fVar1, _DAT_006cc974 < fVar1)) {
    fVar2 = _DAT_006cc974;
  }
  fVar1 = param_1[2];
  param_1[1] = fVar2;
  fVar2 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar1) && (fVar2 = fVar1, _DAT_006cc974 < fVar1)) {
    fVar2 = _DAT_006cc974;
  }
  fVar1 = param_1[3];
  param_1[2] = fVar2;
  fVar2 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar1) && (fVar2 = fVar1, _DAT_006cc974 < fVar1)) {
    param_1[3] = 255.0;
    return;
  }
  param_1[3] = fVar2;
  return;
}
