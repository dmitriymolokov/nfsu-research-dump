/* spd-match: far pct=1.50 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

float10 FUN_005eb9cc(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (((uint)param_1 & 0xf) == 0) {
    local_30 = *param_1;
    fStack_2c = param_1[1];
    fStack_28 = param_1[2];
    fStack_24 = param_1[3];
    uVar12 = *(undefined8 *)(param_1 + 4);
    uVar15 = *(undefined8 *)(param_1 + 6);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    uVar9 = *(undefined8 *)(param_1 + 0xe);
    fVar1 = param_1[8];
    fVar2 = param_1[9];
    fVar3 = param_1[10];
    fVar4 = param_1[0xb];
  }
  else {
    local_30 = *param_1;
    fStack_2c = param_1[1];
    fStack_28 = param_1[2];
    fStack_24 = (float)(__int64)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    uVar12 = *(undefined8 *)(param_1 + 4);
    uVar15 = *(undefined8 *)(param_1 + 6);
    fVar1 = (float)(__int64)*(undefined8 *)(param_1 + 8);
    fVar2 = (float)(__int64)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
    fVar3 = (float)(__int64)*(undefined8 *)(param_1 + 10);
    fVar4 = (float)(__int64)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    uVar9 = *(undefined8 *)(param_1 + 0xe);
  }
  fVar5 = (float)(__int64)uVar6;
  fVar7 = (float)(__int64)((ulonglong)uVar6 >> 0x20);
  fVar8 = (float)(__int64)uVar9;
  fVar10 = (float)(__int64)((ulonglong)uVar9 >> 0x20);
  fVar11 = (float)(__int64)uVar12;
  fVar13 = (float)(__int64)((ulonglong)uVar12 >> 0x20);
  fVar14 = (float)(__int64)uVar15;
  fVar16 = (float)(__int64)((ulonglong)uVar15 >> 0x20);
  return (float10)(((fVar13 * (fVar3 * fVar10 - fVar4 * fVar8) +
                     fVar14 * (fVar4 * fVar7 - fVar2 * fVar10) +
                    fVar16 * (fVar2 * fVar8 - fVar3 * fVar7)) * local_30 +
                   (fVar16 * (fVar1 * fVar7 - fVar2 * fVar5) +
                    fVar11 * (fVar2 * fVar10 - fVar4 * fVar7) +
                   fVar13 * (fVar4 * fVar5 - fVar1 * fVar10)) * fStack_28) -
                  ((fVar14 * (fVar4 * fVar5 - fVar1 * fVar10) +
                    fVar16 * (fVar1 * fVar8 - fVar3 * fVar5) +
                   fVar11 * (fVar3 * fVar10 - fVar4 * fVar8)) * fStack_2c +
                  (fVar11 * (fVar2 * fVar8 - fVar3 * fVar7) +
                   fVar13 * (fVar3 * fVar5 - fVar1 * fVar8) +
                  fVar14 * (fVar1 * fVar7 - fVar2 * fVar5)) * fStack_24));
}
