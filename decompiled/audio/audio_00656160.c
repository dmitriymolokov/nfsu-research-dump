/* spd-match: far pct=10.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006aaaec;
extern int _DAT_006cc7a8;
extern int _DAT_006cc7ac;
extern int _DAT_006cc7c0;
extern int _DAT_006cc8fc;
extern int _DAT_006cc908;
extern int _DAT_006cc954;
extern int _DAT_006cca94;
extern int _DAT_006ccb8c;
extern int _DAT_006ccb94;
extern int _DAT_006ccbb4;
extern int _DAT_006cccc0;
extern int _DAT_006cce50;
extern int _DAT_006cce54;
extern int _DAT_006cce58;

void FUN_00656160(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (param_2 - param_1) * ((int)_DAT_006aaaec);
  *param_4 = (param_1 + fVar1) * *param_3 + *param_4;
  param_4[1] = (fVar1 + fVar1 + param_1) * param_3[1] + param_4[1];
  param_4[2] = (((int)_DAT_006cc7ac) * fVar1 + param_1) * param_3[2] + param_4[2];
  param_4[3] = (((int)_DAT_006cc908) * fVar1 + param_1) * param_3[3] + param_4[3];
  param_4[4] = (((int)_DAT_006cc954) * fVar1 + param_1) * param_3[4] + param_4[4];
  param_4[5] = (((int)_DAT_006cc7a8) * fVar1 + param_1) * param_3[5] + param_4[5];
  param_4[6] = (((int)_DAT_006ccb94) * fVar1 + param_1) * param_3[6] + param_4[6];
  param_4[7] = (((int)_DAT_006cc7c0) * fVar1 + param_1) * param_3[7] + param_4[7];
  param_4[8] = (((int)_DAT_006cccc0) * fVar1 + param_1) * param_3[8] + param_4[8];
  param_4[9] = (((int)_DAT_006cca94) * fVar1 + param_1) * param_3[9] + param_4[9];
  param_4[10] = (((int)_DAT_006cce58) * fVar1 + param_1) * param_3[10] + param_4[10];
  param_4[0xb] = (((int)_DAT_006ccbb4) * fVar1 + param_1) * param_3[0xb] + param_4[0xb];
  param_4[0xc] = (((int)_DAT_006cce54) * fVar1 + param_1) * param_3[0xc] + param_4[0xc];
  param_4[0xd] = (((int)_DAT_006cce50) * fVar1 + param_1) * param_3[0xd] + param_4[0xd];
  param_4[0xe] = (((int)_DAT_006ccb8c) * fVar1 + param_1) * param_3[0xe] + param_4[0xe];
  param_4[0xf] = (fVar1 * ((int)_DAT_006cc8fc) + param_1) * param_3[0xf] + param_4[0xf];
  return;
}
