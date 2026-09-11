/* spd-match: far pct=7.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040DA30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0040da30(int obj, float *param_1, float *param_2)

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

  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  
  fVar1 = *(float *)(obj + 0x30);
  fVar5 = *(float *)(obj + 0x34);
  fVar2 = *(float *)(obj + 0x34);
  fVar6 = *(float *)(obj + 0x30);
  fVar3 = *(float *)(obj + 0x38);
  fVar4 = *(float *)(obj + 0x38);
  pfVar11 = (float *)(obj + 8);
  iVar12 = (int)param_2 - (int)param_1;
  iVar13 = 3;
  pfVar10 = param_1;
  do {
    fVar7 = *pfVar10 * pfVar11[-2];
    fVar8 = *(float *)(iVar12 + (int)pfVar10) * pfVar11[-2];
    fVar9 = fVar7;
    if (fVar7 < fVar8) {
      fVar9 = fVar8;
      fVar8 = fVar7;
    }
    fVar1 = fVar8 + fVar1;
    fVar6 = fVar6 + fVar9;
    fVar8 = *pfVar10 * pfVar11[-1];
    fVar9 = *(float *)(iVar12 + (int)pfVar10) * pfVar11[-1];
    fVar7 = fVar8;
    if (fVar8 < fVar9) {
      fVar7 = fVar9;
      fVar9 = fVar8;
    }
    fVar2 = fVar9 + fVar2;
    fVar5 = fVar7 + fVar5;
    fVar8 = *pfVar10 * *pfVar11;
    fVar9 = *(float *)(iVar12 + (int)pfVar10) * *pfVar11;
    fVar7 = fVar8;
    if (fVar8 < fVar9) {
      fVar7 = fVar9;
      fVar9 = fVar8;
    }
    fVar3 = fVar9 + fVar3;
    pfVar10 = pfVar10 + 1;
    fVar4 = fVar7 + fVar4;
    pfVar11 = pfVar11 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  *param_2 = fVar6;
  param_2[1] = fVar5;
  param_2[2] = fVar4;
  return;
}
