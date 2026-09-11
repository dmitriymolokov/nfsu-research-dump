/* spd-match: far pct=2.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

extern int _DAT_006a3d40;
extern int _DAT_006a3d50;
extern int _DAT_006a3d60;
int _UNK_006a3d44;
int _UNK_006a3d48;
int _UNK_006a3d4c;
int _UNK_006a3d54;
int _UNK_006a3d58;
int _UNK_006a3d5c;
int _UNK_006a3d64;
int _UNK_006a3d68;
int _UNK_006a3d6c;

undefined8 * FUN_005e98ef(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = (uint)*param_3;
  uVar6 = (uint)((ulonglong)*param_3 >> 0x20);
  uVar7 = (uint)param_3[1];
  fVar8 = (float)(__int64)((ulonglong)param_3[1] >> 0x20);
  fVar1 = (float)(__int64)*param_2;
  fVar2 = (float)(__int64)((ulonglong)*param_2 >> 0x20);
  fVar3 = (float)(__int64)param_2[1];
  fVar4 = (float)(__int64)((ulonglong)param_2[1] >> 0x20);
  fVar9 = (float)(uVar5 ^ _UNK_006a3d68);
  fVar11 = (float)(uVar5 ^ _UNK_006a3d6c);
  fVar13 = (float)(uVar6 ^ _UNK_006a3d58);
  fVar14 = (float)(uVar6 ^ _UNK_006a3d5c);
  fVar10 = (float)(uVar7 ^ _UNK_006a3d48);
  fVar12 = (float)(uVar7 ^ _UNK_006a3d4c);
  *param_1 = CONCAT44(fVar8 * fVar2 + (float)(uVar5 ^ _UNK_006a3d64) * fVar3 +
                      (float)(uVar6 ^ _UNK_006a3d54) * fVar4 +
                      (float)(uVar7 ^ _UNK_006a3d44) * fVar1,
                      fVar8 * fVar1 + (float)(uVar5 ^ _DAT_006a3d60) * fVar4 +
                      (float)(uVar6 ^ _DAT_006a3d50) * fVar3 +
                      (float)(uVar7 ^ _DAT_006a3d40) * fVar2);
  param_1[1] = CONCAT44(fVar8 * fVar4 + fVar11 * fVar1 + fVar14 * fVar2 + fVar12 * fVar3,
                        fVar8 * fVar3 + fVar9 * fVar2 + fVar13 * fVar1 + fVar10 * fVar4);
  return param_1;
}
