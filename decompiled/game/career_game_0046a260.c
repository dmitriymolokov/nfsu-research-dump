/* spd-match: far pct=6.73 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_19/attempt1_baseline */
#include "ghidra_compat.h"

void m375_vec3_mul(float *dst, float *src, void *mtx);

int __cdecl FUN_0046a370();
int __cdecl FUN_00565230();
int __cdecl FUN_00584f60();
extern int DAT_006b7280;
extern int _DAT_006b727c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc908;

void  FUN_0046a260(int param_1,float *param_2)

{
  float fVar1;
  undefined4 extraout_EDX;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x6c) + 0x148);
  local_68 = _DAT_006cc7bc;
  if (_DAT_006cc7bc / _DAT_006b727c < fVar1) {
    local_68 = (_DAT_006cc7bc / _DAT_006b727c) / fVar1;
  }
  local_70 = local_68 * *param_2;
  local_6c = param_2[1] * local_68;
  local_68 = param_2[2] * local_68;
  fVar1 = SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
  if (*(int *)(*(int *)(param_1 + 0x140) + 0x38) == 1) {
    local_78 = 0x3f800000;
  }
  else {
    local_78 = DAT_006b7280;
  }
  FUN_00584f60(local_78);
  FUN_0046a370(extraout_EDX,fVar1);
  if ((*(int *)(*(int *)(param_1 + 0x140) + 0x18) != 0) && (_DAT_006cc908 < fVar1)) {
    FUN_00565230();
    FUN_0046a260(local_60,&local_70,local_50);
  }
  return;
}
