/* spd-match: far pct=3.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_00441c10();
int __cdecl FUN_00567600();
extern int DAT_0077b130;
extern int _DAT_006cc7dc;
extern int _DAT_006cca08;
extern int _DAT_006cccec;
int unaff_EDI;

void FUN_004407b0(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *unaff_EDI;
  float local_290 [160];
  float local_10;
  float local_c;
  int local_8;
  
  pfVar1 = param_1;
  *unaff_EDI = 3.4028235e+38;
  unaff_EDI[1] = 3.4028235e+38;
  unaff_EDI[2] = -3.4028235e+38;
  unaff_EDI[3] = -3.4028235e+38;
  FUN_00567600(param_2);
  pfVar6 = unaff_EDI + 4;
  pfVar5 = unaff_EDI + 6;
  if ((((*unaff_EDI < unaff_EDI[4]) || (unaff_EDI[2] < *pfVar5 == (unaff_EDI[2] == *pfVar5))) ||
      (unaff_EDI[1] < unaff_EDI[5])) ||
     (unaff_EDI[3] < unaff_EDI[7] == (unaff_EDI[3] == unaff_EDI[7]))) {
    param_1 = (float *)(unsigned int)(unaff_EDI[0xa8]);
    if (0 < (int)param_1) {
      pfVar3 = unaff_EDI + 8;
      do {
        *(char *)((int)*pfVar3 + 8) = *(char *)((int)*pfVar3 + 8) + -1;
        pfVar3 = pfVar3 + 1;
        param_1 = (float *)(unsigned int)(((int)param_1 + -1));
      } while (param_1 != (float *)0x0);
    }
    param_2 = param_2 + _DAT_006cc7dc;
    unaff_EDI[0xa8] = 0.0;
    unaff_EDI[0xa9] = 0.0;
    unaff_EDI[0xaa] = 0.0;
    unaff_EDI[0xab] = 0.0;
    unaff_EDI[0xac] = 0.0;
    if (param_3 == (float *)0x0) {
      *pfVar6 = 3.4028235e+38;
      unaff_EDI[5] = 3.4028235e+38;
      *pfVar5 = -3.4028235e+38;
      unaff_EDI[7] = -3.4028235e+38;
      FUN_00567600(param_2);
      pfVar5 = extraout_EDX_00;
    }
    else {
      param_1 = (float *)0x3e19999a;
      local_8 = 0;
      do {
        *pfVar6 = 3.4028235e+38;
        unaff_EDI[5] = 3.4028235e+38;
        *pfVar5 = -3.4028235e+38;
        pfVar5[1] = -3.4028235e+38;
        FUN_00567600(param_2);
        local_10 = (float)(unsigned int)(param_1) * *param_3 + *pfVar1;
        local_c = (float)(unsigned int)(param_1) * param_3[1] + pfVar1[1];
        FUN_00567600(param_2);
        pfVar5 = extraout_EDX;
        if (SQRT((unaff_EDI[5] - extraout_EDX[1]) * (unaff_EDI[5] - extraout_EDX[1]) +
                 (*pfVar6 - *extraout_EDX) * (*pfVar6 - *extraout_EDX)) < _DAT_006cccec) break;
        param_1 = (float *)(unsigned int)(((float)(unsigned int)(param_1) * _DAT_006cca08));
        if (local_8 == 3) {
          param_1 = (float *)0x0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 5);
    }
    fVar2 = (float)FUN_00441c10(&DAT_0077b130,local_290,0xa0,pfVar5);
    fVar4 = 0.0;
    iVar7 = 0;
    if (0 < (int)fVar2) {
      pfVar6 = unaff_EDI + 8;
      do {
        if ((*(byte *)((int)local_290[iVar7] + 10) & 10) == 0) {
          *pfVar6 = local_290[iVar7];
          fVar4 = (float)((int)fVar4 + 1);
          pfVar6 = pfVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)fVar2);
    }
    unaff_EDI[0xa9] = fVar4;
    if ((fVar4 != fVar2) && (iVar7 = 0, 0 < (int)fVar2)) {
      pfVar6 = unaff_EDI + (int)fVar4 + 8;
      do {
        if ((*(byte *)((int)local_290[iVar7] + 10) & 2) != 0) {
          *pfVar6 = local_290[iVar7];
          fVar4 = (float)((int)fVar4 + 1);
          pfVar6 = pfVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)fVar2);
    }
    unaff_EDI[0xaa] = (float)((int)fVar4 - (int)unaff_EDI[0xa9]);
    if ((fVar4 != fVar2) && (iVar7 = 0, 0 < (int)fVar2)) {
      pfVar6 = unaff_EDI + (int)fVar4 + 8;
      do {
        if ((*(byte *)((int)local_290[iVar7] + 10) & 8) != 0) {
          *pfVar6 = local_290[iVar7];
          fVar4 = (float)((int)fVar4 + 1);
          pfVar6 = pfVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)fVar2);
    }
    unaff_EDI[0xab] = (float)(((int)fVar4 - (int)unaff_EDI[0xa9]) - (int)unaff_EDI[0xaa]);
    unaff_EDI[0xa8] = fVar2;
  }
  return;
}
