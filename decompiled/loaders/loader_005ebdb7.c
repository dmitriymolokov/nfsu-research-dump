/* spd-match: far pct=4.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


void FUN_005ebdb7(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 auVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar4 < 1.4210855e-14) {
    fVar4 = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
  }
  else {
    auVar6 = rsqrtss(ZEXT416(0x28800000),ZEXT416((uint)fVar4));
    fVar5 = (*(float *)&auVar6);
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    *param_1 = fVar4 * fVar1;
    param_1[1] = fVar4 * fVar2;
    fVar4 = fVar4 * fVar3;
  }
  param_1[2] = fVar4;
  return;
}
