/* spd-match: far pct=2.94 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

void FUN_005eb251(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  if (((uint)param_3 & 0xf) == 0) {
    fVar11 = param_3[8] * fVar7 + param_3[0xc] * fVar8;
    fVar12 = param_3[9] * fVar7 + param_3[0xd] * fVar8;
    fVar13 = param_3[10] * fVar7 + param_3[0xe] * fVar8;
    fVar14 = param_3[0xb] * fVar7 + param_3[0xf] * fVar8;
    fVar7 = param_3[4];
    fVar8 = param_3[5];
    fVar9 = param_3[6];
    fVar10 = param_3[7];
    fVar3 = *param_3;
    fVar4 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[3];
  }
  else {
    fVar11 = (float)(__int64)*(undefined8 *)(param_3 + 8) * fVar7 +
             (float)(__int64)*(undefined8 *)(param_3 + 0xc) * fVar8;
    fVar12 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar7 +
             (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20) * fVar8;
    fVar13 = (float)(__int64)*(undefined8 *)(param_3 + 10) * fVar7 +
             (float)(__int64)*(undefined8 *)(param_3 + 0xe) * fVar8;
    fVar14 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 10) >> 0x20) * fVar7 +
             (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 0xe) >> 0x20) * fVar8;
    fVar7 = (float)(__int64)*(undefined8 *)(param_3 + 4);
    fVar8 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    fVar9 = (float)(__int64)*(undefined8 *)(param_3 + 6);
    fVar10 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 6) >> 0x20);
    fVar3 = (float)(__int64)*(undefined8 *)param_3;
    fVar4 = (float)(__int64)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar5 = (float)(__int64)*(undefined8 *)(param_3 + 2);
    fVar6 = (float)(__int64)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  }
  *param_1 = fVar3 * fVar1 + fVar7 * fVar2 + fVar11;
  param_1[1] = fVar4 * fVar1 + fVar8 * fVar2 + fVar12;
  param_1[2] = fVar5 * fVar1 + fVar9 * fVar2 + fVar13;
  param_1[3] = fVar6 * fVar1 + fVar10 * fVar2 + fVar14;
  return;
}
