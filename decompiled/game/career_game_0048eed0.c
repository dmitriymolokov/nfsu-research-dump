/* spd-match: far pct=4.95 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EED0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004407b0();
int __cdecl FUN_0048ee20();
extern int _DAT_006cc7dc;
extern int _DAT_006ccb8c;
void __fastcall FUN_0048eed0(float * obj, undefined4 param_1, float *param_2, float *param_3, float *param_4)

{

  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  
  local_30 = (*param_4 - *obj) * _DAT_006cc7dc;
  local_2c = (param_4[1] - obj[1]) * _DAT_006cc7dc;
  local_28 = (param_4[2] - obj[2]) * _DAT_006cc7dc;
  local_34 = SQRT(local_30 * local_30 + local_28 * local_28 + local_2c * local_2c);
  if (_DAT_006ccb8c < local_34) {
    local_34 = 15.0;
    local_30 = local_30 * _DAT_006ccb8c;
    local_2c = local_2c * _DAT_006ccb8c;
    local_28 = local_28 * _DAT_006ccb8c;
  }
  local_30 = local_30 + *obj;
  local_2c = local_2c + obj[1];
  local_28 = local_28 + obj[2];
  FUN_004407b0(&local_30,local_34,0);
  FUN_0048ee20(param_1,param_4,0);
  local_18 = param_2[2] - param_3[2];
  local_30 = (*param_2 - *param_3) * _DAT_006cc7dc;
  local_2c = (param_2[1] - param_3[1]) * _DAT_006cc7dc;
  local_28 = local_18 * _DAT_006cc7dc;
  local_34 = SQRT(local_30 * local_30 + local_28 * local_28 + local_2c * local_2c);
  if (_DAT_006ccb8c < local_34) {
    local_34 = 15.0;
    local_30 = local_30 * _DAT_006ccb8c;
    local_2c = local_2c * _DAT_006ccb8c;
    local_28 = local_28 * _DAT_006ccb8c;
  }
  local_30 = local_30 + *param_3;
  local_2c = local_2c + param_3[1];
  local_28 = local_28 + param_3[2];
  FUN_004407b0(&local_30,local_34,0);
  FUN_0048ee20(param_1,param_2,0);
  return;
}
