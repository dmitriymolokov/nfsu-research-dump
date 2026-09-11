/* spd-match: far pct=1.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

void FUN_005ed863(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar1 = param_3[6];
  fVar21 = (float)(__int64)uVar1;
  fVar22 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
  fVar18 = *(float *)(param_3 + 6);
  fVar19 = *(float *)((int)param_3 + 0x34);
  fVar20 = *(float *)(param_3 + 7);
  fVar23 = (float)(__int64)param_3[7];
  fVar24 = (float)(__int64)((ulonglong)param_3[7] >> 0x20);
  fVar2 = param_2[3];
  fVar3 = param_2[2];
  fVar4 = param_2[1];
  fVar33 = (float)(__int64)param_3[4];
  fVar34 = (float)(__int64)((ulonglong)param_3[4] >> 0x20);
  fVar35 = (float)(__int64)param_3[5];
  fVar36 = (float)(__int64)((ulonglong)param_3[5] >> 0x20);
  fVar5 = *param_2;
  fVar29 = (float)(__int64)param_3[2];
  fVar30 = (float)(__int64)((ulonglong)param_3[2] >> 0x20);
  fVar31 = (float)(__int64)param_3[3];
  fVar32 = (float)(__int64)((ulonglong)param_3[3] >> 0x20);
  fVar6 = param_2[7];
  fVar7 = param_2[6];
  fVar25 = (float)(__int64)*param_3;
  fVar26 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
  fVar27 = (float)(__int64)param_3[1];
  fVar28 = (float)(__int64)((ulonglong)param_3[1] >> 0x20);
  fVar8 = param_2[5];
  fVar9 = param_2[4];
  fVar10 = param_2[0xb];
  fVar11 = param_2[10];
  fVar12 = param_2[9];
  fVar13 = param_2[8];
  fVar14 = param_2[0xf];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xd];
  fVar17 = param_2[0xc];
  *param_1 = CONCAT44(fVar9 * fVar25 + fVar8 * fVar29 + fVar7 * fVar33 + fVar6 * fVar21,
                      fVar5 * fVar25 + fVar4 * fVar29 + fVar3 * fVar33 + fVar2 * fVar21);
  param_1[1] = CONCAT44(fVar17 * fVar25 + fVar16 * fVar29 + fVar15 * fVar33 + fVar14 * fVar18,
                        fVar13 * fVar25 + fVar12 * fVar29 + fVar11 * fVar33 + fVar10 * fVar18);
  param_1[2] = CONCAT44(fVar9 * fVar26 + fVar8 * fVar30 + fVar7 * fVar34 + fVar6 * fVar22,
                        fVar5 * fVar26 + fVar4 * fVar30 + fVar3 * fVar34 + fVar2 * fVar22);
  param_1[3] = CONCAT44(fVar17 * fVar26 + fVar16 * fVar30 + fVar15 * fVar34 + fVar14 * fVar19,
                        fVar13 * fVar26 + fVar12 * fVar30 + fVar11 * fVar34 + fVar10 * fVar19);
  param_1[4] = CONCAT44(fVar9 * fVar27 + fVar8 * fVar31 + fVar7 * fVar35 + fVar6 * fVar23,
                        fVar5 * fVar27 + fVar4 * fVar31 + fVar3 * fVar35 + fVar2 * fVar23);
  param_1[5] = CONCAT44(fVar17 * fVar27 + fVar16 * fVar31 + fVar15 * fVar35 + fVar14 * fVar20,
                        fVar13 * fVar27 + fVar12 * fVar31 + fVar11 * fVar35 + fVar10 * fVar20);
  param_1[6] = CONCAT44(fVar9 * fVar28 + fVar8 * fVar32 + fVar7 * fVar36 + fVar6 * fVar24,
                        fVar5 * fVar28 + fVar4 * fVar32 + fVar3 * fVar36 + fVar2 * fVar24);
  param_1[7] = CONCAT44(fVar17 * fVar28 + fVar16 * fVar32 + fVar15 * fVar36 + fVar14 * fVar24,
                        fVar13 * fVar28 + fVar12 * fVar32 + fVar11 * fVar36 + fVar10 * fVar24);
  return;
}
