/* spd-match: far pct=6.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059CEA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0059cea0(int obj, float *param_1, int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float fVar14;

  float *pfVar15;
  float fVar16;
  float *pfVar17;
  uint uVar18;
  
  iVar1 = param_2 + 2;
  pfVar13 = *(float **)(obj + 0x24);
  uVar18 = (uint)*(ushort *)(obj + 0x1e);
  iVar2 = param_2 + 3;
  iVar3 = param_2 + 1;
  if (param_2 < -1) {
    fVar7 = (float)-param_2;
    fVar5 = (pfVar13[1] - pfVar13[5]) * fVar7 + pfVar13[1];
    fVar6 = (pfVar13[2] - pfVar13[6]) * fVar7 + pfVar13[2];
    fVar16 = (pfVar13[3] - pfVar13[7]) * fVar7 + pfVar13[3];
    *param_1 = (*pfVar13 - pfVar13[4]) * fVar7 + *pfVar13;
  }
  else if ((int)uVar18 < param_2) {
    pfVar15 = pfVar13 + uVar18 * 4 + -4;
    pfVar17 = pfVar13 + (uVar18 - 2) * 4;
    fVar7 = (float)(int)((param_2 - uVar18) + 1);
    fVar5 = (pfVar15[1] - pfVar17[1]) * fVar7 + pfVar15[1];
    fVar6 = (pfVar15[2] - pfVar17[2]) * fVar7 + pfVar15[2];
    fVar16 = (pfVar15[3] - pfVar17[3]) * fVar7 + pfVar15[3];
    *param_1 = (*pfVar15 - *pfVar17) * fVar7 + *pfVar15;
  }
  else {
    fVar5 = pfVar13[param_2 * 4 + 1];
    pfVar15 = pfVar13 + param_2 * 4;
    fVar6 = pfVar15[2];
    fVar16 = pfVar15[3];
    *param_1 = *pfVar15;
  }
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[3] = fVar16;
  if (iVar3 < -1) {
    fVar7 = (float)-iVar3;
    fVar5 = (pfVar13[1] - pfVar13[5]) * fVar7 + pfVar13[1];
    fVar6 = (pfVar13[2] - pfVar13[6]) * fVar7 + pfVar13[2];
    fVar16 = (pfVar13[3] - pfVar13[7]) * fVar7 + pfVar13[3];
    param_1[4] = (*pfVar13 - pfVar13[4]) * fVar7 + *pfVar13;
  }
  else if ((int)uVar18 < iVar3) {
    pfVar15 = pfVar13 + uVar18 * 4 + -4;
    iVar4 = uVar18 - 2;
    fVar7 = (float)(int)((iVar3 - uVar18) + 1);
    fVar5 = (pfVar15[1] - pfVar13[iVar4 * 4 + 1]) * fVar7 + pfVar15[1];
    fVar6 = (pfVar15[2] - pfVar13[iVar4 * 4 + 2]) * fVar7 + pfVar15[2];
    fVar16 = (pfVar15[3] - pfVar13[iVar4 * 4 + 3]) * fVar7 + pfVar15[3];
    param_1[4] = (pfVar13[uVar18 * 4 + -4] - pfVar13[iVar4 * 4]) * fVar7 + *pfVar15;
  }
  else {
    fVar16 = pfVar13[iVar3 * 4 + 3];
    fVar5 = pfVar13[iVar3 * 4 + 1];
    fVar6 = pfVar13[iVar3 * 4 + 2];
    param_1[4] = pfVar13[iVar3 * 4];
  }
  param_1[5] = fVar5;
  param_1[6] = fVar6;
  param_1[7] = fVar16;
  if (iVar1 < -1) {
    fVar7 = (float)-iVar1;
    fVar5 = (pfVar13[1] - pfVar13[5]) * fVar7 + pfVar13[1];
    fVar6 = (pfVar13[2] - pfVar13[6]) * fVar7 + pfVar13[2];
    fVar16 = (pfVar13[3] - pfVar13[7]) * fVar7 + pfVar13[3];
    param_1[8] = (*pfVar13 - pfVar13[4]) * fVar7 + *pfVar13;
  }
  else if ((int)uVar18 < iVar1) {
    pfVar15 = pfVar13 + uVar18 * 4 + -4;
    iVar3 = uVar18 - 2;
    fVar7 = (float)(int)((iVar1 - uVar18) + 1);
    fVar5 = (pfVar15[1] - pfVar13[iVar3 * 4 + 1]) * fVar7 + pfVar15[1];
    fVar6 = (pfVar15[2] - pfVar13[iVar3 * 4 + 2]) * fVar7 + pfVar15[2];
    fVar16 = (pfVar15[3] - pfVar13[iVar3 * 4 + 3]) * fVar7 + pfVar15[3];
    param_1[8] = (pfVar13[uVar18 * 4 + -4] - pfVar13[iVar3 * 4]) * fVar7 + *pfVar15;
  }
  else {
    fVar16 = pfVar13[iVar1 * 4 + 3];
    fVar5 = pfVar13[iVar1 * 4 + 1];
    fVar6 = pfVar13[iVar1 * 4 + 2];
    param_1[8] = pfVar13[iVar1 * 4];
  }
  param_1[9] = fVar5;
  param_1[10] = fVar6;
  param_1[0xb] = fVar16;
  if (iVar2 < -1) {
    fVar5 = *pfVar13;
    fVar6 = pfVar13[4];
    fVar16 = pfVar13[5];
    fVar7 = pfVar13[1];
    fVar8 = pfVar13[6];
    fVar9 = pfVar13[2];
    fVar14 = (float)-iVar2;
    fVar10 = pfVar13[1];
    fVar11 = pfVar13[2];
    fVar12 = *pfVar13;
    param_1[0xf] = (pfVar13[3] - pfVar13[7]) * fVar14 + pfVar13[3];
    param_1[0xc] = (fVar5 - fVar6) * fVar14 + fVar12;
    param_1[0xd] = (fVar7 - fVar16) * fVar14 + fVar10;
    param_1[0xe] = (fVar9 - fVar8) * fVar14 + fVar11;
    return;
  }
  if ((int)uVar18 < iVar2) {
    fVar5 = pfVar13[uVar18 * 4 + -4];
    pfVar15 = pfVar13 + uVar18 * 4 + -4;
    iVar1 = uVar18 - 2;
    fVar6 = pfVar13[iVar1 * 4];
    fVar16 = pfVar15[1];
    fVar7 = pfVar13[iVar1 * 4 + 1];
    fVar8 = pfVar15[2];
    fVar9 = pfVar13[iVar1 * 4 + 2];
    fVar14 = (float)(int)((iVar2 - uVar18) + 1);
    fVar10 = pfVar15[1];
    fVar11 = pfVar15[2];
    fVar12 = *pfVar15;
    param_1[0xf] = (pfVar15[3] - pfVar13[iVar1 * 4 + 3]) * fVar14 + pfVar15[3];
    param_1[0xc] = (fVar5 - fVar6) * fVar14 + fVar12;
    param_1[0xd] = (fVar16 - fVar7) * fVar14 + fVar10;
    param_1[0xe] = (fVar8 - fVar9) * fVar14 + fVar11;
    return;
  }
  fVar5 = pfVar13[iVar2 * 4 + 1];
  fVar16 = pfVar13[iVar2 * 4 + 3];
  fVar6 = pfVar13[iVar2 * 4 + 2];
  param_1[0xc] = pfVar13[iVar2 * 4];
  param_1[0xf] = fVar16;
  param_1[0xd] = fVar5;
  param_1[0xe] = fVar6;
  return;
}
