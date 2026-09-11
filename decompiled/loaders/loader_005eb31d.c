/* spd-match: far pct=3.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

extern int _DAT_006df080;
extern unsigned int uRam006df084;
extern unsigned int uRam006df088;
extern unsigned int uRam006df08c;

void FUN_005eb31d(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = (float)(__int64)*param_3;
  fVar2 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
  fVar4 = (float)(__int64)param_3[1];
  fVar6 = (float)(__int64)((ulonglong)param_3[1] >> 0x20);
  fVar8 = (float)(__int64)*param_4;
  fVar9 = (float)(__int64)((ulonglong)*param_4 >> 0x20);
  fVar10 = (float)(__int64)param_4[1];
  fVar11 = (float)(__int64)((ulonglong)param_4[1] >> 0x20);
  fVar12 = (float)(__int64)*param_2;
  fVar13 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
  fVar14 = (float)(__int64)param_2[1];
  fVar15 = (float)(__int64)((ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)(fVar14 * (fVar6 * fVar8 - fVar1 * fVar11) +
                 fVar15 * (fVar1 * fVar10 - fVar4 * fVar8) +
                fVar12 * (fVar4 * fVar11 - fVar6 * fVar10)) ^ uRam006df084;
  uVar5 = (uint)(fVar15 * (fVar1 * fVar9 - fVar2 * fVar8) +
                 fVar12 * (fVar2 * fVar11 - fVar6 * fVar9) +
                fVar13 * (fVar6 * fVar8 - fVar1 * fVar11)) ^ uRam006df088;
  uVar7 = (uint)(fVar12 * (fVar2 * fVar10 - fVar4 * fVar9) +
                 fVar13 * (fVar4 * fVar8 - fVar1 * fVar10) +
                fVar14 * (fVar1 * fVar9 - fVar2 * fVar8)) ^ uRam006df08c;
  *param_1 = (uint)(fVar13 * (fVar4 * fVar11 - fVar6 * fVar10) +
                    fVar14 * (fVar6 * fVar9 - fVar2 * fVar11) +
                   fVar15 * (fVar2 * fVar10 - fVar4 * fVar9)) ^ _DAT_006df080;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  return;
}
