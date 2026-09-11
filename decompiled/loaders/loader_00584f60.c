/* spd-match: far pct=10.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584F60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006b5b4c;
extern int _DAT_006b5b50;
void __fastcall FUN_00584f60(float * obj, int param_1, float *param_2, float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;

  float local_20;
  float local_1c;
  float local_18;
  
  local_1c = obj[1];
  local_20 = *obj;
  local_18 = obj[2];
  fVar1 = SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
  if (_DAT_006b5b4c < fVar1) {
    fVar1 = _DAT_006b5b4c / fVar1;
    local_20 = local_20 * fVar1;
    local_1c = local_1c * fVar1;
    local_18 = local_18 * fVar1;
  }
  *(float *)(param_1 + 0x70) = local_20 + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0x74) = local_1c + *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x78) = local_18 + *(float *)(param_1 + 0x78);
  fVar1 = local_18 * param_2[1] - local_1c * param_2[2];
  fVar3 = local_20 * param_2[2] - local_18 * *param_2;
  local_18 = local_1c * *param_2 - local_20 * param_2[1];
  fVar2 = SQRT(fVar1 * fVar1 + local_18 * local_18 + fVar3 * fVar3);
  if (_DAT_006b5b50 < fVar2) {
    fVar2 = _DAT_006b5b50 / fVar2;
    fVar1 = fVar1 * fVar2;
    fVar3 = fVar3 * fVar2;
    local_18 = local_18 * fVar2;
  }
  *(float *)(param_1 + 0x80) = fVar1 * param_3 + *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x84) = fVar3 * param_3 + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = local_18 * param_3 + *(float *)(param_1 + 0x88);
  return;
}
