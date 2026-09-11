/* spd-match: far pct=9.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006df000;
extern int _DAT_006df010;
extern int _DAT_006df020;
extern int _DAT_006df030;
extern unsigned int fRam006df004;
extern unsigned int fRam006df008;
extern unsigned int fRam006df00c;
extern unsigned int fRam006df014;
extern unsigned int fRam006df018;
extern unsigned int fRam006df01c;
extern unsigned int fRam006df024;
extern unsigned int fRam006df028;
extern unsigned int fRam006df02c;

float * FUN_005eb706(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                    float param_6)

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
  float fVar15;
  float fVar16;
  
  fVar15 = param_6 * param_6;
  fVar16 = param_6 * fVar15;
  fVar11 = param_6 * ((int)_DAT_006df020) + ((int)_DAT_006df030) + fVar15 * ((int)_DAT_006df010) + fVar16 * ((int)_DAT_006df000)
  ;
  fVar12 = param_6 * fRam006df024 + fVar15 * fRam006df014 + fVar16 * fRam006df004;
  fVar13 = param_6 * fRam006df028 + fVar15 * fRam006df018 + fVar16 * fRam006df008;
  fVar14 = param_6 * fRam006df02c + fVar15 * fRam006df01c + fVar16 * fRam006df00c;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  fVar1 = param_2[3];
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = param_5[3];
  *param_1 = *param_2 * fVar11 + *param_3 * fVar12 + *param_4 * fVar13 + *param_5 * fVar14;
  param_1[1] = fVar15 * fVar11 + fVar2 * fVar12 + fVar5 * fVar13 + fVar8 * fVar14;
  param_1[2] = fVar16 * fVar11 + fVar3 * fVar12 + fVar6 * fVar13 + fVar9 * fVar14;
  param_1[3] = fVar1 * fVar11 + fVar4 * fVar12 + fVar7 * fVar13 + fVar10 * fVar14;
  return param_1;
}
