/* spd-match: far pct=2.74 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_06/attempt2_abs_int */
#include "ghidra_compat.h"

int FUN_0056d0c0(uint param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_7c;
  uint local_74;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  
  iVar9 = param_1 * 0x10;
  fVar8 = ((*(int *)0x0073c680) - *(float *)(((int *)0x0073c670) + iVar9)) * (*(int *)0x006b5e08);
  local_7c = 0;
  local_74 = 0;
  local_20 = fVar8;
  fVar6 = ((*(int *)0x0073c684) - *(float *)(((int *)0x0073c674) + iVar9)) * (*(int *)0x006b5e08);
  local_1c = fVar6;
  fVar7 = ((*(int *)0x0073c688) - *(float *)(((int *)0x0073c678) + iVar9)) * (*(int *)0x006b5e08);
  local_18 = fVar7;
  if (3 < (int)param_1) {
    pfVar11 = ((int *)0x0073c688);
    pfVar12 = (float *)((int *)0x0073cac8);
    uVar15 = 2;
    do {
      uVar13 = uVar15 - 1;
      if (uVar13 == param_1) {
        uVar13 = 0;
      }
      local_30[0] = (*(int *)0x006b5e08) * ((((int *)0x0073c680))[uVar13 * 4] - pfVar11[-2]);
      local_30[1] = (*(int *)0x006b5e08) * ((((int *)0x0073c684))[uVar13 * 4] - pfVar11[-1]);
      local_30[2] = (*(int *)0x006b5e08) * ((((int *)0x0073c688))[uVar13 * 4] - *pfVar11);
      fVar2 = pfVar11[-1];
      fVar3 = *pfVar11;
      pfVar12[-2] = pfVar11[-2] - fVar8;
      *pfVar12 = fVar3 - fVar7;
      pfVar12[-1] = fVar2 - fVar6;
      fVar2 = pfVar11[-1];
      fVar3 = *pfVar11;
      pfVar12[6] = pfVar11[-2] + local_30[0];
      pfVar12[8] = local_30[2] + fVar3;
      pfVar12[7] = local_30[1] + fVar2;
      uVar14 = uVar15 - 1 & 1;
      uVar10 = uVar14 ^ 1;
      pfVar12[2] = (local_30[0] - fVar8) * (*(int *)0x006b5e0c) + pfVar11[-2];
      pfVar12[3] = (local_30[1] - fVar6) * (*(int *)0x006b5e0c) + pfVar11[-1];
      pfVar12[4] = (local_30[2] - fVar7) * (*(int *)0x006b5e0c) + *pfVar11;
      uVar13 = uVar15;
      if (uVar15 == param_1) {
        uVar13 = 0;
      }
      fVar2 = (((int *)0x0073c684))[uVar13 * 4];
      fVar3 = pfVar11[3];
      fVar4 = (((int *)0x0073c688))[uVar13 * 4];
      pfVar1 = local_30 + uVar14 * 4;
      fVar5 = pfVar11[4];
      *pfVar1 = (((int *)0x0073c680))[uVar13 * 4] - pfVar11[2];
      local_30[uVar14 * 4 + 2] = fVar4 - fVar5;
      local_30[uVar14 * 4 + 1] = fVar2 - fVar3;
      *pfVar1 = (*(int *)0x006b5e08) * *pfVar1;
      local_30[uVar14 * 4 + 1] = (*(int *)0x006b5e08) * local_30[uVar14 * 4 + 1];
      local_30[uVar14 * 4 + 2] = (*(int *)0x006b5e08) * local_30[uVar14 * 4 + 2];
      fVar2 = local_30[uVar10 * 4 + 1];
      fVar3 = pfVar11[3];
      fVar4 = local_30[uVar10 * 4 + 2];
      fVar5 = pfVar11[4];
      pfVar12[10] = pfVar11[2] - local_30[uVar10 * 4];
      pfVar12[0xc] = fVar5 - fVar4;
      pfVar12[0xb] = fVar3 - fVar2;
      fVar2 = local_30[uVar14 * 4 + 1];
      fVar3 = pfVar11[3];
      fVar4 = local_30[uVar14 * 4 + 2];
      fVar5 = pfVar11[4];
      pfVar12[0x12] = pfVar11[2] + *pfVar1;
      pfVar12[0x14] = fVar4 + fVar5;
      pfVar12[0x13] = fVar2 + fVar3;
      fVar2 = local_30[uVar14 * 4 + 1];
      fVar3 = local_30[uVar10 * 4 + 1];
      fVar4 = local_30[uVar14 * 4 + 2];
      fVar5 = local_30[uVar10 * 4 + 2];
      uVar13 = uVar15 + 1;
      pfVar12[0xe] = (*pfVar1 - local_30[uVar10 * 4]) * (*(int *)0x006b5e0c) + pfVar11[2];
      pfVar12[0xf] = (fVar2 - fVar3) * (*(int *)0x006b5e0c) + pfVar11[3];
      pfVar12[0x10] = (fVar4 - fVar5) * (*(int *)0x006b5e0c) + pfVar11[4];
      if (uVar13 == param_1) {
        uVar13 = 0;
      }
      local_30[0] = (*(int *)0x006b5e08) * ((((int *)0x0073c680))[uVar13 * 4] - pfVar11[6]);
      local_30[1] = (*(int *)0x006b5e08) * ((((int *)0x0073c684))[uVar13 * 4] - pfVar11[7]);
      local_30[2] = (*(int *)0x006b5e08) * ((((int *)0x0073c688))[uVar13 * 4] - pfVar11[8]);
      fVar2 = pfVar11[7];
      fVar3 = pfVar11[8];
      pfVar12[0x16] = pfVar11[6] - fVar8;
      pfVar12[0x18] = fVar3 - fVar7;
      pfVar12[0x17] = fVar2 - fVar6;
      fVar2 = pfVar11[7];
      fVar3 = pfVar11[8];
      pfVar12[0x1e] = pfVar11[6] + local_30[0];
      pfVar12[0x20] = local_30[2] + fVar3;
      pfVar12[0x1f] = local_30[1] + fVar2;
      uVar10 = uVar14 ^ 1;
      uVar13 = uVar15 + 2;
      pfVar12[0x1a] = (local_30[0] - fVar8) * (*(int *)0x006b5e0c) + pfVar11[6];
      pfVar12[0x1b] = (local_30[1] - fVar6) * (*(int *)0x006b5e0c) + pfVar11[7];
      pfVar12[0x1c] = (local_30[2] - fVar7) * (*(int *)0x006b5e0c) + pfVar11[8];
      if (uVar13 == param_1) {
        uVar13 = 0;
      }
      pfVar1 = local_30 + uVar14 * 4;
      fVar2 = (((int *)0x0073c684))[uVar13 * 4];
      fVar3 = pfVar11[0xb];
      fVar4 = (((int *)0x0073c688))[uVar13 * 4];
      fVar5 = pfVar11[0xc];
      *pfVar1 = (((int *)0x0073c680))[uVar13 * 4] - pfVar11[10];
      local_30[uVar14 * 4 + 2] = fVar4 - fVar5;
      local_30[uVar14 * 4 + 1] = fVar2 - fVar3;
      *pfVar1 = (*(int *)0x006b5e08) * *pfVar1;
      local_30[uVar14 * 4 + 1] = (*(int *)0x006b5e08) * local_30[uVar14 * 4 + 1];
      local_30[uVar14 * 4 + 2] = (*(int *)0x006b5e08) * local_30[uVar14 * 4 + 2];
      fVar2 = local_30[uVar10 * 4 + 1];
      fVar3 = pfVar11[0xb];
      fVar4 = local_30[uVar10 * 4 + 2];
      fVar5 = pfVar11[0xc];
      pfVar12[0x22] = pfVar11[10] - local_30[uVar10 * 4];
      pfVar12[0x24] = fVar5 - fVar4;
      pfVar12[0x23] = fVar3 - fVar2;
      fVar2 = local_30[uVar14 * 4 + 1];
      fVar3 = pfVar11[0xb];
      fVar4 = local_30[uVar14 * 4 + 2];
      fVar5 = pfVar11[0xc];
      pfVar12[0x2a] = pfVar11[10] + *pfVar1;
      pfVar12[0x2c] = fVar4 + fVar5;
      pfVar12[0x2b] = fVar2 + fVar3;
      fVar2 = local_30[uVar14 * 4 + 1];
      fVar3 = local_30[uVar10 * 4 + 1];
      fVar4 = local_30[uVar14 * 4 + 2];
      fVar5 = local_30[uVar10 * 4 + 2];
      local_7c = local_7c + 0xc;
      local_74 = local_74 + 4;
      pfVar12[0x26] = (*pfVar1 - local_30[uVar10 * 4]) * (*(int *)0x006b5e0c) + pfVar11[10];
      iVar9 = uVar15 + 5;
      pfVar12[0x27] = (fVar2 - fVar3) * (*(int *)0x006b5e0c) + pfVar11[0xb];
      pfVar12[0x28] = (fVar4 - fVar5) * (*(int *)0x006b5e0c) + pfVar11[0xc];
      pfVar11 = pfVar11 + 0x10;
      pfVar12 = pfVar12 + 0x30;
      uVar15 = uVar15 + 4;
    } while (iVar9 < (int)param_1);
  }
  if ((int)param_1 <= (int)local_74) {
    return local_7c;
  }
  iVar9 = param_1 - local_74;
  pfVar11 = ((int *)0x0073c688) + local_74 * 4;
  pfVar12 = (float *)(((int *)0x0073cac8) + local_7c * 4);
  uVar15 = local_74;
  do {
    uVar15 = uVar15 + 1;
    uVar10 = local_74 & 1;
    uVar14 = uVar10 ^ 1;
    uVar13 = uVar15;
    if (uVar15 == param_1) {
      uVar13 = 0;
    }
    pfVar1 = local_30 + uVar10 * 4;
    fVar6 = (((int *)0x0073c684))[uVar13 * 4];
    fVar7 = pfVar11[-1];
    fVar8 = (((int *)0x0073c688))[uVar13 * 4];
    fVar2 = *pfVar11;
    *pfVar1 = (((int *)0x0073c680))[uVar13 * 4] - pfVar11[-2];
    local_30[uVar10 * 4 + 2] = fVar8 - fVar2;
    local_30[uVar10 * 4 + 1] = fVar6 - fVar7;
    *pfVar1 = (*(int *)0x006b5e08) * *pfVar1;
    local_30[uVar10 * 4 + 1] = (*(int *)0x006b5e08) * local_30[uVar10 * 4 + 1];
    local_30[uVar10 * 4 + 2] = (*(int *)0x006b5e08) * local_30[uVar10 * 4 + 2];
    fVar6 = local_30[uVar14 * 4 + 1];
    fVar7 = pfVar11[-1];
    fVar8 = local_30[uVar14 * 4 + 2];
    fVar2 = *pfVar11;
    pfVar12[-2] = pfVar11[-2] - local_30[uVar14 * 4];
    *pfVar12 = fVar2 - fVar8;
    pfVar12[-1] = fVar7 - fVar6;
    fVar6 = local_30[uVar10 * 4 + 1];
    fVar7 = pfVar11[-1];
    fVar8 = local_30[uVar10 * 4 + 2];
    fVar2 = *pfVar11;
    pfVar12[6] = pfVar11[-2] + *pfVar1;
    pfVar12[8] = fVar8 + fVar2;
    pfVar12[7] = fVar6 + fVar7;
    fVar6 = local_30[uVar10 * 4 + 1];
    fVar7 = local_30[uVar14 * 4 + 1];
    fVar8 = local_30[uVar10 * 4 + 2];
    fVar2 = local_30[uVar14 * 4 + 2];
    local_74 = local_74 + 1;
    pfVar12[2] = (*pfVar1 - local_30[uVar14 * 4]) * (*(int *)0x006b5e0c) + pfVar11[-2];
    pfVar12[3] = (fVar6 - fVar7) * (*(int *)0x006b5e0c) + pfVar11[-1];
    pfVar12[4] = (fVar8 - fVar2) * (*(int *)0x006b5e0c) + *pfVar11;
    pfVar11 = pfVar11 + 4;
    pfVar12 = pfVar12 + 0xc;
  } while ((int)local_74 < (int)param_1);
  return local_7c + iVar9 * 3;
}
