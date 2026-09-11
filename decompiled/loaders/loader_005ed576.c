/* spd-match: far pct=3.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

void FUN_005ed576(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((uint)param_3 & 0xf) == 0) {
    fVar3 = *(float *)(param_2 + 1);
    fVar1 = fVar3 * param_3[8];
    fVar2 = fVar3 * param_3[9];
    fVar3 = fVar3 * param_3[10];
    fVar6 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
    fVar4 = fVar6 * param_3[4];
    fVar5 = fVar6 * param_3[5];
    fVar6 = fVar6 * param_3[6];
    fVar9 = (float)(__int64)*param_2;
    fVar7 = fVar9 * *param_3;
    fVar8 = fVar9 * param_3[1];
    fVar9 = fVar9 * param_3[2];
  }
  else {
    fVar3 = *(float *)(param_2 + 1);
    fVar1 = (float)(__int64)*(undefined8 *)(param_3 + 8) * fVar3;
    fVar2 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar3;
    fVar3 = (float)(__int64)*(undefined8 *)(param_3 + 10) * fVar3;
    fVar6 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
    fVar4 = (float)(__int64)*(undefined8 *)(param_3 + 4) * fVar6;
    fVar5 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar6;
    fVar6 = (float)(__int64)*(undefined8 *)(param_3 + 6) * fVar6;
    fVar9 = (float)(__int64)*param_2;
    fVar7 = (float)(__int64)*(undefined8 *)param_3 * fVar9;
    fVar8 = (float)(__int64)((ulonglong)*(undefined8 *)param_3 >> 0x20) * fVar9;
    fVar9 = (float)(__int64)*(undefined8 *)(param_3 + 2) * fVar9;
  }
  *param_1 = CONCAT44(fVar8 + fVar5 + fVar2,fVar7 + fVar4 + fVar1);
  *(float *)(param_1 + 1) = fVar9 + fVar6 + fVar3;
  return;
}
