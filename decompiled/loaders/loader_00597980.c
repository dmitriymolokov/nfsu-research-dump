/* spd-match: far pct=13.84 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00597920(...);
int __cdecl FUN_00597c90(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;

struct ThisCallBox {
  float10 FUN_00597980(float *param_2, float *param_3);
};
float10 ThisCallBox::FUN_00597980(float *param_2, float *param_3) {
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_38 = 1.0;
  if (*(char *)((int)((int *)this) + 0x4c2) == '\0') {
    if ((float)((int *)this)[0x57] == DAT_006cc7a4) {
      FUN_00597c90(((int *)this));
    }
    else {
      iVar2 = ((int *)this)[0x56];
      fVar3 = *(float *)(iVar2 + 0xb0) + *param_3;
      fVar5 = *(float *)(iVar2 + 0xb4) + param_3[1];
      fVar4 = *(float *)(iVar2 + 0xb8) + param_3[2];
      fVar1 = fVar5 * param_2[2] - fVar4 * param_2[1];
      fVar4 = fVar4 * *param_2 - fVar3 * param_2[2];
      fVar3 = fVar3 * param_2[1] - fVar5 * *param_2;
      local_38 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar3 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
      if (local_38 < fVar3) {
        local_38 = fVar3;
      }
      if (local_38 < (float)((int *)this)[0x57]) {
        return (float10)_DAT_006cc7bc;
      }
      local_38 = (float)((int *)this)[0x57] / local_38;
      local_18 = -local_38;
      local_20 = local_18 * *param_2;
      local_1c = local_18 * param_2[1];
      local_18 = local_18 * param_2[2];
      local_30 = -*(float *)(iVar2 + 0xb0);
      local_2c = -*(float *)(iVar2 + 0xb4);
      local_28 = -*(float *)(iVar2 + 0xb8);
      FUN_00597c90(((int *)this));
      ((int *)this)[0x57] = 0;
      (**(code **)(*((int *)this) + 0x4c))(&local_20,&local_30);
      FUN_00597920(((int *)this));
    }
  }
  if ((float)((int *)this)[0x58] != DAT_006cc7a4) {
    fVar3 = (ABS(*param_2) + ABS(param_2[1]) + ABS(param_2[2])) * local_38;
    if ((float)((int *)this)[0x58] <= fVar3) {
      fVar1 = (float)((int *)this)[0x58];
      ((int *)this)[0x58] = -0x40800000;
      return (float10)-((local_38 / fVar3) * fVar1);
    }
    ((int *)this)[0x58] = (int)((float)((int *)this)[0x58] - fVar3 * _DAT_006cc7dc);
  }
  return (float10)local_38;
}
