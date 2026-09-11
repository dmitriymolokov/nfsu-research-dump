/* spd-match: far pct=4.24 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006df040;
extern int _DAT_006df050;
extern int _DAT_006df060;
extern int _DAT_006df070;
extern unsigned int fRam006df044;
extern unsigned int fRam006df048;
extern unsigned int fRam006df04c;
extern unsigned int fRam006df054;
extern unsigned int fRam006df058;
extern unsigned int fRam006df05c;
extern unsigned int fRam006df064;
extern unsigned int fRam006df068;
extern unsigned int fRam006df06c;
extern unsigned int fRam006df074;
extern unsigned int fRam006df078;
extern unsigned int fRam006df07c;

float * FUN_005eb5ae(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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
  fVar11 = param_6 * ((int)_DAT_006df060) + ((int)_DAT_006df070) + fVar15 * ((int)_DAT_006df050) + fVar16 * ((int)_DAT_006df040)
  ;
  fVar12 = param_6 * fRam006df064 + fRam006df074 + fVar15 * fRam006df054 + fVar16 * fRam006df044;
  fVar13 = param_6 * fRam006df068 + fRam006df078 + fVar15 * fRam006df058 + fVar16 * fRam006df048;
  fVar14 = param_6 * fRam006df06c + fRam006df07c + fVar15 * fRam006df05c + fVar16 * fRam006df04c;
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
