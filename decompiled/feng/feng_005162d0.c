/* Decompiled from Speed.exe @ 005162d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_005162d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,int param_6,uint param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  uint local_e0;
  float *local_dc;
  float *local_d8;
  uint local_d4;
  uint local_d0;
  float *local_bc;
  
  local_d0 = param_7 - 1;
  local_d8 = (float *)(local_d0 * 0x10);
  bVar12 = param_8 <= *(float *)((int)local_d8 + param_4);
  if (bVar12) {
    uVar1 = *(undefined4 *)((int)local_d8 + 4 + param_4);
    uVar2 = *(undefined4 *)((int)local_d8 + 8 + param_4);
    *param_1 = *(undefined4 *)((int)local_d8 + param_4);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    uVar1 = *(undefined4 *)(param_5 + local_d0 * 8);
    param_2[1] = *(undefined4 *)(param_5 + 4 + local_d0 * 8);
    *param_2 = uVar1;
    uVar1 = *(undefined4 *)((int)local_d8 + 4 + param_6);
    uVar2 = *(undefined4 *)((int)local_d8 + 8 + param_6);
    uVar3 = *(undefined4 *)((int)local_d8 + 0xc + param_6);
    *param_3 = *(undefined4 *)((int)local_d8 + param_6);
    param_3[1] = uVar1;
    param_3[3] = uVar3;
    param_3[2] = uVar2;
  }
  local_e0 = (uint)bVar12;
  local_d4 = 0;
  if (3 < (int)param_7) {
    local_bc = (float *)(local_d0 * 8);
    pfVar23 = (float *)(param_3 + local_e0 * 4);
    pfVar17 = (float *)(param_1 + local_e0 * 4);
    pfVar18 = (float *)(param_6 + 0x1c);
    iVar20 = param_6 - param_4;
    local_dc = (float *)(param_5 + 0xc);
    pfVar21 = (float *)(param_4 + 0x18);
    local_d0 = 3;
    uVar14 = local_d0;
    do {
      local_d0 = uVar14;
      if (pfVar21[-6] < param_8) {
        if (bVar12) {
          fVar4 = pfVar21[-5];
          fVar5 = *(float *)((int)local_d8 + 4 + param_4);
          fVar6 = pfVar21[-4];
          fVar7 = *(float *)((int)local_d8 + 8 + param_4);
          *pfVar17 = pfVar21[-6] - *(float *)((int)local_d8 + param_4);
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - *(float *)((int)local_d8 + param_4)) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = *(float *)((int)local_d8 + 4 + param_4);
          fVar5 = *(float *)((int)local_d8 + 8 + param_4);
          *pfVar17 = *(float *)((int)local_d8 + param_4) + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[-2];
          fVar5 = *(float *)((int)local_bc + 4 + param_5);
          fVar6 = *(float *)((int)local_bc + 4 + param_5);
          param_2[local_e0 * 2] =
               (local_dc[-3] - *(float *)((int)local_bc + param_5)) * fVar13 +
               *(float *)((int)local_bc + param_5);
          param_2[local_e0 * 2 + 1] = fVar6 + (fVar4 - fVar5) * fVar13;
          fVar4 = pfVar18[-7];
          fVar5 = *(float *)((int)local_d8 + param_6);
          fVar6 = pfVar18[-6];
          pfVar17 = pfVar17 + 4;
          fVar7 = *(float *)((int)local_d8 + 4 + param_6);
          fVar8 = pfVar18[-4];
          fVar9 = *(float *)((int)local_d8 + 0xc + param_6);
          bVar12 = false;
          fVar15 = *(float *)((int)local_d8 + param_6);
          fVar10 = *(float *)((int)local_d8 + 4 + param_6);
          fVar11 = *(float *)((int)local_d8 + 0xc + param_6);
          pfVar23[2] = *(float *)((int)local_d8 + 8 + param_6) +
                       (pfVar18[-5] - *(float *)((int)local_d8 + 8 + param_6)) * fVar13;
          local_e0 = local_e0 + 1;
          *pfVar23 = (fVar4 - fVar5) * fVar13 + fVar15;
          pfVar23[3] = fVar11 + fVar13 * (fVar8 - fVar9);
          pfVar23[1] = fVar10 + (fVar6 - fVar7) * fVar13;
          pfVar23 = pfVar23 + 4;
        }
      }
      else {
        pfVar16 = pfVar17;
        pfVar22 = pfVar23;
        if (!bVar12) {
          fVar4 = pfVar21[-5];
          fVar5 = *(float *)((int)local_d8 + 4 + param_4);
          fVar6 = pfVar21[-4];
          fVar7 = *(float *)((int)local_d8 + 8 + param_4);
          *pfVar17 = pfVar21[-6] - *(float *)((int)local_d8 + param_4);
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - *(float *)((int)local_d8 + param_4)) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = *(float *)((int)local_d8 + 4 + param_4);
          fVar5 = *(float *)((int)local_d8 + 8 + param_4);
          *pfVar17 = *pfVar17 + *(float *)((int)local_d8 + param_4);
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[-2];
          fVar5 = *(float *)((int)local_bc + 4 + param_5);
          fVar6 = *(float *)((int)local_bc + 4 + param_5);
          param_2[local_e0 * 2] =
               (local_dc[-3] - *(float *)((int)local_bc + param_5)) * fVar13 +
               *(float *)((int)local_bc + param_5);
          param_2[local_e0 * 2 + 1] = fVar6 + (fVar4 - fVar5) * fVar13;
          fVar4 = pfVar18[-7];
          fVar5 = *(float *)((int)local_d8 + param_6);
          fVar6 = pfVar18[-6];
          fVar7 = *(float *)((int)local_d8 + 4 + param_6);
          fVar8 = pfVar18[-4];
          fVar9 = *(float *)((int)local_d8 + 0xc + param_6);
          bVar12 = true;
          fVar15 = *(float *)((int)local_d8 + param_6);
          fVar10 = *(float *)((int)local_d8 + 4 + param_6);
          fVar11 = *(float *)((int)local_d8 + 0xc + param_6);
          pfVar23[2] = *(float *)((int)local_d8 + 8 + param_6) +
                       (pfVar18[-5] - *(float *)((int)local_d8 + 8 + param_6)) * fVar13;
          local_e0 = local_e0 + 1;
          *pfVar23 = (fVar4 - fVar5) * fVar13 + fVar15;
          pfVar23[3] = fVar11 + fVar13 * (fVar8 - fVar9);
          pfVar23[1] = fVar10 + (fVar6 - fVar7) * fVar13;
          pfVar16 = pfVar17 + 4;
          pfVar22 = pfVar23 + 4;
        }
        fVar4 = pfVar21[-5];
        fVar5 = pfVar21[-4];
        *pfVar16 = pfVar21[-6];
        pfVar16[1] = fVar4;
        local_e0 = local_e0 + 1;
        pfVar17 = pfVar16 + 4;
        pfVar16[2] = fVar5;
        fVar4 = local_dc[-2];
        pfVar23 = pfVar22 + 4;
        param_2[local_e0 * 2 + -2] = local_dc[-3];
        param_2[local_e0 * 2 + -1] = fVar4;
        fVar4 = pfVar18[-6];
        fVar5 = pfVar18[-5];
        fVar6 = pfVar18[-7];
        pfVar22[3] = pfVar18[-4];
        *pfVar22 = fVar6;
        pfVar22[1] = fVar4;
        pfVar22[2] = fVar5;
      }
      if (pfVar21[-2] < param_8) {
        if (bVar12) {
          fVar4 = pfVar21[-1];
          fVar5 = pfVar21[-5];
          fVar6 = *pfVar21;
          fVar7 = pfVar21[-4];
          *pfVar17 = pfVar21[-2] - pfVar21[-6];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar10 = (param_8 - pfVar21[-6]) / *pfVar17;
          *pfVar17 = fVar10 * *pfVar17;
          pfVar17[1] = fVar10 * pfVar17[1];
          pfVar17[2] = fVar10 * pfVar17[2];
          fVar4 = pfVar21[-5];
          fVar5 = pfVar21[-4];
          *pfVar17 = pfVar21[-6] + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = *local_dc;
          fVar5 = local_dc[-2];
          fVar6 = local_dc[-2];
          param_2[local_e0 * 2] = (local_dc[-1] - local_dc[-3]) * fVar10 + local_dc[-3];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar10 + fVar6;
          fVar4 = pfVar18[-3];
          fVar5 = pfVar18[-7];
          fVar6 = pfVar18[-2];
          fVar7 = pfVar18[-6];
          bVar12 = false;
          fVar8 = pfVar18[-7];
          fVar9 = pfVar18[-6];
          fVar15 = fVar10 * (*pfVar18 - pfVar18[-4]) + pfVar18[-4];
          pfVar23[2] = (*(float *)(iVar20 + (int)pfVar21) - pfVar18[-5]) * fVar10 + pfVar18[-5];
          *pfVar23 = (fVar4 - fVar5) * fVar10 + fVar8;
          pfVar23[1] = (fVar6 - fVar7) * fVar10 + fVar9;
          goto LAB_005169c6;
        }
      }
      else {
        pfVar16 = pfVar23;
        if (!bVar12) {
          fVar4 = pfVar21[-1];
          fVar5 = pfVar21[-5];
          fVar6 = *pfVar21;
          fVar7 = pfVar21[-4];
          *pfVar17 = pfVar21[-2] - pfVar21[-6];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - pfVar21[-6]) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = pfVar21[-5];
          fVar5 = pfVar21[-4];
          *pfVar17 = pfVar21[-6] + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = *local_dc;
          fVar5 = local_dc[-2];
          fVar6 = local_dc[-2];
          param_2[local_e0 * 2] = (local_dc[-1] - local_dc[-3]) * fVar13 + local_dc[-3];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar13 + fVar6;
          fVar4 = pfVar18[-3];
          fVar5 = pfVar18[-7];
          fVar6 = pfVar18[-2];
          fVar7 = pfVar18[-6];
          fVar8 = *pfVar18;
          fVar9 = pfVar18[-4];
          local_e0 = local_e0 + 1;
          pfVar17 = pfVar17 + 4;
          pfVar16 = pfVar23 + 4;
          bVar12 = true;
          fVar15 = pfVar18[-7];
          fVar10 = pfVar18[-6];
          fVar11 = pfVar18[-4];
          pfVar23[2] = (*(float *)(iVar20 + (int)pfVar21) - pfVar18[-5]) * fVar13 + pfVar18[-5];
          *pfVar23 = (fVar4 - fVar5) * fVar13 + fVar15;
          pfVar23[3] = fVar13 * (fVar8 - fVar9) + fVar11;
          pfVar23[1] = (fVar6 - fVar7) * fVar13 + fVar10;
        }
        fVar4 = pfVar21[-1];
        fVar5 = *pfVar21;
        *pfVar17 = pfVar21[-2];
        pfVar17[1] = fVar4;
        pfVar17[2] = fVar5;
        fVar4 = *local_dc;
        param_2[local_e0 * 2] = local_dc[-1];
        param_2[local_e0 * 2 + 1] = fVar4;
        fVar4 = pfVar18[-2];
        fVar5 = *(float *)(iVar20 + (int)pfVar21);
        fVar15 = *pfVar18;
        *pfVar16 = pfVar18[-3];
        pfVar16[1] = fVar4;
        pfVar16[2] = fVar5;
        pfVar23 = pfVar16;
LAB_005169c6:
        local_e0 = local_e0 + 1;
        pfVar23[3] = fVar15;
        pfVar17 = pfVar17 + 4;
        pfVar23 = pfVar23 + 4;
      }
      if (pfVar21[2] < param_8) {
        if (bVar12) {
          fVar4 = pfVar21[3];
          fVar5 = pfVar21[-1];
          fVar6 = pfVar21[4];
          fVar7 = *pfVar21;
          *pfVar17 = pfVar21[2] - pfVar21[-2];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar10 = (param_8 - pfVar21[-2]) / *pfVar17;
          *pfVar17 = fVar10 * *pfVar17;
          pfVar17[1] = fVar10 * pfVar17[1];
          pfVar17[2] = fVar10 * pfVar17[2];
          fVar4 = pfVar21[-1];
          fVar5 = *pfVar21;
          *pfVar17 = *pfVar17 + pfVar21[-2];
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[2];
          fVar5 = *local_dc;
          fVar6 = *local_dc;
          param_2[local_e0 * 2] = (local_dc[1] - local_dc[-1]) * fVar10 + local_dc[-1];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar10 + fVar6;
          fVar4 = pfVar18[1];
          fVar5 = pfVar18[-3];
          fVar6 = pfVar18[2];
          fVar7 = pfVar18[-2];
          bVar12 = false;
          fVar8 = pfVar18[-3];
          fVar9 = pfVar18[-2];
          fVar15 = fVar10 * (pfVar18[4] - *pfVar18) + *pfVar18;
          pfVar23[2] = (pfVar18[3] - *(float *)(iVar20 + (int)pfVar21)) * fVar10 +
                       *(float *)(iVar20 + (int)pfVar21);
          *pfVar23 = (fVar4 - fVar5) * fVar10 + fVar8;
          pfVar23[1] = (fVar6 - fVar7) * fVar10 + fVar9;
          goto LAB_00516c7a;
        }
      }
      else {
        pfVar16 = pfVar23;
        if (!bVar12) {
          fVar4 = pfVar21[3];
          fVar5 = pfVar21[-1];
          fVar6 = pfVar21[4];
          fVar7 = *pfVar21;
          *pfVar17 = pfVar21[2] - pfVar21[-2];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - pfVar21[-2]) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = pfVar21[-1];
          fVar5 = *pfVar21;
          *pfVar17 = *pfVar17 + pfVar21[-2];
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[2];
          fVar5 = *local_dc;
          fVar6 = *local_dc;
          param_2[local_e0 * 2] = (local_dc[1] - local_dc[-1]) * fVar13 + local_dc[-1];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar13 + fVar6;
          fVar4 = pfVar18[1];
          fVar5 = pfVar18[-3];
          fVar6 = pfVar18[2];
          fVar7 = pfVar18[-2];
          fVar8 = pfVar18[4];
          fVar9 = *pfVar18;
          local_e0 = local_e0 + 1;
          pfVar17 = pfVar17 + 4;
          pfVar16 = pfVar23 + 4;
          bVar12 = true;
          fVar15 = pfVar18[-3];
          fVar10 = pfVar18[-2];
          fVar11 = *pfVar18;
          pfVar23[2] = (pfVar18[3] - *(float *)(iVar20 + (int)pfVar21)) * fVar13 +
                       *(float *)(iVar20 + (int)pfVar21);
          *pfVar23 = (fVar4 - fVar5) * fVar13 + fVar15;
          pfVar23[3] = fVar13 * (fVar8 - fVar9) + fVar11;
          pfVar23[1] = (fVar6 - fVar7) * fVar13 + fVar10;
        }
        fVar4 = pfVar21[3];
        fVar5 = pfVar21[4];
        *pfVar17 = pfVar21[2];
        pfVar17[1] = fVar4;
        pfVar17[2] = fVar5;
        fVar4 = local_dc[2];
        param_2[local_e0 * 2] = local_dc[1];
        param_2[local_e0 * 2 + 1] = fVar4;
        fVar15 = pfVar18[4];
        fVar4 = pfVar18[2];
        fVar5 = pfVar18[3];
        *pfVar16 = pfVar18[1];
        pfVar16[1] = fVar4;
        pfVar16[2] = fVar5;
        pfVar23 = pfVar16;
LAB_00516c7a:
        local_e0 = local_e0 + 1;
        pfVar23[3] = fVar15;
        pfVar17 = pfVar17 + 4;
        pfVar23 = pfVar23 + 4;
      }
      if (pfVar21[6] < param_8) {
        if (bVar12) {
          fVar4 = pfVar21[7];
          fVar5 = pfVar21[3];
          fVar6 = pfVar21[8];
          fVar7 = pfVar21[4];
          *pfVar17 = pfVar21[6] - pfVar21[2];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar10 = (param_8 - pfVar21[2]) / *pfVar17;
          *pfVar17 = fVar10 * *pfVar17;
          pfVar17[1] = fVar10 * pfVar17[1];
          pfVar17[2] = fVar10 * pfVar17[2];
          fVar4 = pfVar21[3];
          fVar5 = pfVar21[4];
          *pfVar17 = pfVar21[2] + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[4];
          fVar5 = local_dc[2];
          fVar6 = local_dc[2];
          param_2[local_e0 * 2] = (local_dc[3] - local_dc[1]) * fVar10 + local_dc[1];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar10 + fVar6;
          fVar4 = pfVar18[5];
          fVar5 = pfVar18[1];
          fVar6 = pfVar18[6];
          fVar7 = pfVar18[2];
          bVar12 = false;
          fVar8 = pfVar18[1];
          fVar9 = pfVar18[2];
          fVar15 = fVar10 * (pfVar18[8] - pfVar18[4]) + pfVar18[4];
          pfVar23[2] = (pfVar18[7] - pfVar18[3]) * fVar10 + pfVar18[3];
          *pfVar23 = (fVar4 - fVar5) * fVar10 + fVar8;
          pfVar23[1] = (fVar6 - fVar7) * fVar10 + fVar9;
          goto LAB_00516f32;
        }
      }
      else {
        pfVar16 = pfVar23;
        if (!bVar12) {
          fVar4 = pfVar21[7];
          fVar5 = pfVar21[3];
          fVar6 = pfVar21[8];
          fVar7 = pfVar21[4];
          *pfVar17 = pfVar21[6] - pfVar21[2];
          pfVar17[2] = fVar6 - fVar7;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - pfVar21[2]) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = pfVar21[3];
          fVar5 = pfVar21[4];
          *pfVar17 = pfVar21[2] + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = local_dc[4];
          fVar5 = local_dc[2];
          fVar6 = local_dc[2];
          param_2[local_e0 * 2] = (local_dc[3] - local_dc[1]) * fVar13 + local_dc[1];
          param_2[local_e0 * 2 + 1] = (fVar4 - fVar5) * fVar13 + fVar6;
          fVar4 = pfVar18[5];
          fVar5 = pfVar18[1];
          fVar6 = pfVar18[6];
          fVar7 = pfVar18[2];
          fVar8 = pfVar18[8];
          fVar9 = pfVar18[4];
          local_e0 = local_e0 + 1;
          pfVar17 = pfVar17 + 4;
          pfVar16 = pfVar23 + 4;
          bVar12 = true;
          fVar15 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[4];
          pfVar23[2] = (pfVar18[7] - pfVar18[3]) * fVar13 + pfVar18[3];
          *pfVar23 = (fVar4 - fVar5) * fVar13 + fVar15;
          pfVar23[3] = fVar13 * (fVar8 - fVar9) + fVar11;
          pfVar23[1] = (fVar6 - fVar7) * fVar13 + fVar10;
        }
        fVar4 = pfVar21[7];
        fVar5 = pfVar21[8];
        *pfVar17 = pfVar21[6];
        pfVar17[1] = fVar4;
        pfVar17[2] = fVar5;
        fVar4 = local_dc[4];
        param_2[local_e0 * 2] = local_dc[3];
        param_2[local_e0 * 2 + 1] = fVar4;
        fVar15 = pfVar18[8];
        fVar4 = pfVar18[6];
        fVar5 = pfVar18[7];
        *pfVar16 = pfVar18[5];
        pfVar16[1] = fVar4;
        pfVar16[2] = fVar5;
        pfVar23 = pfVar16;
LAB_00516f32:
        local_e0 = local_e0 + 1;
        pfVar23[3] = fVar15;
        pfVar17 = pfVar17 + 4;
        pfVar23 = pfVar23 + 4;
      }
      local_bc = (float *)((0xc - param_5) + (int)local_dc);
      local_d8 = (float *)((0x18 - param_4) + (int)pfVar21);
      local_dc = local_dc + 8;
      local_d4 = local_d4 + 4;
      pfVar21 = pfVar21 + 0x10;
      pfVar18 = pfVar18 + 0x10;
      uVar14 = local_d0 + 4;
    } while (local_d0 + 4 < param_7);
  }
  if (local_d4 < param_7) {
    pfVar18 = (float *)(param_3 + local_e0 * 4);
    pfVar17 = (float *)(param_1 + local_e0 * 4);
    local_d8 = (float *)(local_d4 * 0x10 + 0xc + param_6);
    local_dc = (float *)(local_d4 * 0x10 + 8 + param_4);
    iVar20 = param_6 - param_4;
    iVar19 = local_d0 << 4;
    local_d0 = local_d0 << 3;
    local_bc = pfVar18;
    do {
      if (local_dc[-2] < param_8) {
        if (bVar12) {
          fVar4 = local_dc[-1];
          fVar5 = *(float *)(iVar19 + 4 + param_4);
          fVar6 = *(float *)(iVar19 + 8 + param_4);
          fVar7 = *local_dc;
          *pfVar17 = local_dc[-2] - *(float *)(iVar19 + param_4);
          pfVar17[2] = fVar7 - fVar6;
          pfVar17[1] = fVar4 - fVar5;
          fVar10 = (param_8 - *(float *)(iVar19 + param_4)) / *pfVar17;
          *pfVar17 = fVar10 * *pfVar17;
          pfVar17[1] = fVar10 * pfVar17[1];
          pfVar17[2] = fVar10 * pfVar17[2];
          fVar4 = *(float *)(iVar19 + 4 + param_4);
          fVar5 = *(float *)(iVar19 + 8 + param_4);
          *pfVar17 = *(float *)(iVar19 + param_4) + *pfVar17;
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = *(float *)(param_5 + 4 + local_d4 * 8);
          fVar5 = *(float *)(local_d0 + 4 + param_5);
          fVar6 = *(float *)(local_d0 + 4 + param_5);
          param_2[local_e0 * 2] =
               (*(float *)(param_5 + local_d4 * 8) - *(float *)(local_d0 + param_5)) * fVar10 +
               *(float *)(local_d0 + param_5);
          param_2[local_e0 * 2 + 1] = fVar6 + (fVar4 - fVar5) * fVar10;
          fVar4 = local_d8[-3];
          fVar5 = *(float *)(iVar19 + param_6);
          fVar6 = local_d8[-2];
          fVar7 = *(float *)(iVar19 + 4 + param_6);
          bVar12 = false;
          fVar8 = *(float *)(iVar19 + param_6);
          fVar9 = *(float *)(iVar19 + 4 + param_6);
          fVar15 = *(float *)(iVar19 + 0xc + param_6) +
                   fVar10 * (*local_d8 - *(float *)(iVar19 + 0xc + param_6));
          local_bc[2] = *(float *)(iVar19 + 8 + param_6) +
                        (*(float *)((int)local_dc + iVar20) - *(float *)(iVar19 + 8 + param_6)) *
                        fVar10;
          *local_bc = (fVar4 - fVar5) * fVar10 + fVar8;
          local_bc[1] = fVar9 + (fVar6 - fVar7) * fVar10;
          goto LAB_00517336;
        }
      }
      else {
        if (!bVar12) {
          fVar4 = local_dc[-1];
          fVar5 = *(float *)(iVar19 + 4 + param_4);
          fVar6 = *(float *)(iVar19 + 8 + param_4);
          fVar7 = *local_dc;
          *pfVar17 = local_dc[-2] - *(float *)(iVar19 + param_4);
          pfVar17[2] = fVar7 - fVar6;
          pfVar17[1] = fVar4 - fVar5;
          fVar13 = (param_8 - *(float *)(iVar19 + param_4)) / *pfVar17;
          *pfVar17 = fVar13 * *pfVar17;
          pfVar17[1] = fVar13 * pfVar17[1];
          pfVar17[2] = fVar13 * pfVar17[2];
          fVar4 = *(float *)(iVar19 + 4 + param_4);
          fVar5 = *(float *)(iVar19 + 8 + param_4);
          *pfVar17 = *pfVar17 + *(float *)(iVar19 + param_4);
          pfVar17[1] = fVar4 + pfVar17[1];
          pfVar17[2] = fVar5 + pfVar17[2];
          fVar4 = *(float *)(param_5 + 4 + local_d4 * 8);
          fVar5 = *(float *)(local_d0 + 4 + param_5);
          fVar6 = *(float *)(local_d0 + 4 + param_5);
          param_2[local_e0 * 2] =
               (*(float *)(param_5 + local_d4 * 8) - *(float *)(local_d0 + param_5)) * fVar13 +
               *(float *)(local_d0 + param_5);
          param_2[local_e0 * 2 + 1] = fVar6 + (fVar4 - fVar5) * fVar13;
          fVar4 = local_d8[-3];
          fVar5 = *(float *)(iVar19 + param_6);
          fVar6 = local_d8[-2];
          fVar7 = *(float *)(iVar19 + 4 + param_6);
          pfVar17 = pfVar17 + 4;
          fVar8 = *(float *)(iVar19 + 0xc + param_6);
          bVar12 = true;
          fVar9 = *local_d8;
          fVar15 = *(float *)(iVar19 + param_6);
          fVar10 = *(float *)(iVar19 + 4 + param_6);
          fVar11 = *(float *)(iVar19 + 0xc + param_6);
          local_bc[2] = *(float *)(iVar19 + 8 + param_6) +
                        (*(float *)((int)local_dc + iVar20) - *(float *)(iVar19 + 8 + param_6)) *
                        fVar13;
          *local_bc = (fVar4 - fVar5) * fVar13 + fVar15;
          local_bc[3] = fVar11 + fVar13 * (fVar9 - fVar8);
          local_bc[1] = fVar10 + (fVar6 - fVar7) * fVar13;
          local_e0 = local_e0 + 1;
          pfVar18 = local_bc + 4;
        }
        local_bc = pfVar18;
        fVar4 = local_dc[-1];
        fVar5 = *local_dc;
        *pfVar17 = local_dc[-2];
        pfVar17[1] = fVar4;
        pfVar17[2] = fVar5;
        uVar1 = *(undefined4 *)(param_5 + 4 + local_d4 * 8);
        param_2[local_e0 * 2] = *(undefined4 *)(param_5 + local_d4 * 8);
        param_2[local_e0 * 2 + 1] = uVar1;
        fVar4 = local_d8[-2];
        fVar5 = *(float *)((int)local_dc + iVar20);
        fVar15 = *local_d8;
        *local_bc = local_d8[-3];
        local_bc[1] = fVar4;
        local_bc[2] = fVar5;
LAB_00517336:
        local_bc[3] = fVar15;
        pfVar17 = pfVar17 + 4;
        local_e0 = local_e0 + 1;
        pfVar18 = local_bc + 4;
        local_bc = pfVar18;
      }
      local_d0 = local_d4 * 8;
      iVar19 = (-8 - param_4) + (int)local_dc;
      local_d4 = local_d4 + 1;
      local_dc = local_dc + 4;
      local_d8 = local_d8 + 4;
    } while (local_d4 < param_7);
  }
  return local_e0;
}

