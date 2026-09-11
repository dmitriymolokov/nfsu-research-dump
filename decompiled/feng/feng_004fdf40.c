/* spd-match: far pct=19.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FDF40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fdf40(float * obj, float *param_1, float *param_2)

{

  int iVar1;
  float *pfVar2;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_40[0] = obj[1] * param_1[4] +
                obj[2] * param_1[8] + obj[3] * param_1[0xc] + *param_1 * *obj;
  local_40[1] = param_1[9] * obj[2] +
                obj[1] * param_1[5] + param_1[1] * *obj + param_1[0xd] * obj[3];
  local_40[2] = obj[3] * param_1[0xe] +
                param_1[2] * *obj + param_1[6] * obj[1] + param_1[10] * obj[2];
  local_40[3] = *obj * param_1[3] +
                obj[2] * param_1[0xb] + param_1[0xf] * obj[3] + param_1[7] * obj[1];
  local_30 = obj[4] * *param_1 +
             obj[7] * param_1[0xc] + param_1[4] * obj[5] + obj[6] * param_1[8];
  local_2c = obj[7] * param_1[0xd] +
             obj[5] * param_1[5] + obj[4] * param_1[1] + obj[6] * param_1[9];
  local_28 = obj[4] * param_1[2] +
             param_1[6] * obj[5] + obj[6] * param_1[10] + obj[7] * param_1[0xe];
  local_24 = param_1[7] * obj[5] +
             obj[4] * param_1[3] + obj[6] * param_1[0xb] + param_1[0xf] * obj[7];
  local_20 = obj[8] * *param_1 +
             obj[0xb] * param_1[0xc] + obj[9] * param_1[4] + obj[10] * param_1[8];
  local_1c = obj[0xb] * param_1[0xd] +
             obj[9] * param_1[5] + obj[8] * param_1[1] + obj[10] * param_1[9];
  local_18 = obj[8] * param_1[2] +
             param_1[6] * obj[9] + obj[10] * param_1[10] + obj[0xb] * param_1[0xe];
  local_14 = param_1[7] * obj[9] +
             obj[8] * param_1[3] + obj[10] * param_1[0xb] + param_1[0xf] * obj[0xb];
  local_10 = obj[0xc] * *param_1 +
             obj[0xf] * param_1[0xc] + obj[0xd] * param_1[4] + obj[0xe] * param_1[8];
  local_c = obj[0xf] * param_1[0xd] +
            obj[0xd] * param_1[5] + obj[0xc] * param_1[1] + obj[0xe] * param_1[9];
  local_8 = obj[0xc] * param_1[2] +
            param_1[6] * obj[0xd] + obj[0xe] * param_1[10] + obj[0xf] * param_1[0xe];
  local_4 = param_1[7] * obj[0xd] +
            obj[0xc] * param_1[3] + obj[0xe] * param_1[0xb] + param_1[0xf] * obj[0xf];
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}
