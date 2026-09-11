/* spd-match: far pct=5.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00514C80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc920;
extern void LAB_005155fb(void);
extern void LAB_00515959(void);
extern void LAB_00515cbd(void);
extern void LAB_00516197(void);
uint __fastcall FUN_00514c80(undefined4 * obj, undefined4 param_1, int param_2, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5, undefined4 *param_6, undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  int iVar17;

  int iVar18;
  float fVar19;
  float *pfVar20;
  undefined4 *puVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  float *pfVar28;
  float *pfVar29;
  int iVar30;
  bool bVar31;
  float *local_148;
  uint local_144;
  undefined4 *local_128;
  float *local_120;
  undefined4 *local_11c;
  float *local_118;
  uint local_114;
  uint local_104;
  uint local_f4;
  int local_cc;
  undefined4 *local_c4;
  float *local_6c;
  int local_5c;
  int local_48;
  int local_44;
  
  local_c4 = param_6;
  local_5c = -(int)param_3;
  local_44 = -(int)param_6;
  local_128 = param_7;
  local_6c = (float *)(param_2 + 0x40);
  pfVar28 = (float *)(param_2 + 8);
  local_11c = param_5;
  local_f4 = 4;
  local_48 = 0;
  do {
    puVar27 = param_4;
    puVar26 = param_3;
    puVar21 = obj;
    iVar17 = local_44;
    if (local_f4 == 0) {
      return 0;
    }
    fVar1 = pfVar28[-2];
    fVar2 = pfVar28[-1];
    fVar14 = *pfVar28;
    fVar15 = *local_6c;
    local_118 = (float *)(local_f4 - 1);
    local_120 = (float *)((int)local_118 * 0x10);
    bVar31 = _DAT_006cc920 <
             fVar1 * (float)puVar26[(int)local_118 * 4] +
             fVar2 * (float)puVar26[(int)local_118 * 4 + 1] +
             fVar14 * (float)puVar26[(int)local_118 * 4 + 2] + fVar15;
    if (bVar31) {
      uVar3 = puVar26[(int)local_118 * 4 + 1];
      uVar4 = puVar26[(int)local_118 * 4 + 2];
      *local_c4 = puVar26[(int)local_118 * 4];
      local_c4[1] = uVar3;
      local_c4[2] = uVar4;
      uVar3 = puVar27[(int)local_118 * 2 + 1];
      *local_128 = puVar27[(int)local_118 * 2];
      local_128[1] = uVar3;
      uVar3 = local_11c[(int)local_118 * 4 + 1];
      uVar4 = local_11c[(int)local_118 * 4 + 2];
      uVar5 = local_11c[(int)local_118 * 4 + 3];
      *puVar21 = local_11c[(int)local_118 * 4];
      puVar21[1] = uVar3;
      puVar21[3] = uVar5;
      puVar21[2] = uVar4;
    }
    local_144 = (uint)bVar31;
    local_114 = 0;
    if (3 < (int)local_f4) {
      local_cc = (int)local_118 * 8;
      pfVar24 = (float *)(puVar21 + local_144 * 4);
      pfVar23 = (float *)(local_c4 + local_144 * 4);
      iVar18 = (int)local_11c - (int)puVar26;
      local_148 = (float *)(puVar27 + 3);
      pfVar20 = (float *)(local_11c + 7);
      pfVar25 = (float *)(puVar26 + 6);
      local_104 = 3;
      do {
        if (fVar1 * pfVar25[-6] + fVar2 * pfVar25[-5] + fVar14 * pfVar25[-4] + fVar15 <=
            _DAT_006cc920) {
          if (bVar31) {
            fVar6 = *(float *)((int)local_120 + 4 + (int)puVar26);
            fVar7 = pfVar25[-5];
            fVar8 = *(float *)((int)local_120 + 8 + (int)puVar26);
            fVar9 = pfVar25[-4];
            *pfVar23 = pfVar25[-6] - *(float *)((int)local_120 + (int)puVar26);
            pfVar23[2] = fVar9 - fVar8;
            pfVar23[1] = fVar7 - fVar6;
            fVar16 = -((fVar1 * *(float *)((int)local_120 + (int)puVar26) +
                        fVar2 * *(float *)((int)local_120 + 4 + (int)puVar26) +
                        fVar14 * *(float *)((int)local_120 + 8 + (int)puVar26) + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar16 * *pfVar23;
            pfVar23[1] = fVar16 * pfVar23[1];
            pfVar23[2] = fVar16 * pfVar23[2];
            fVar6 = *(float *)((int)local_120 + 4 + (int)puVar26);
            fVar7 = *(float *)((int)local_120 + 8 + (int)puVar26);
            *pfVar23 = *(float *)((int)local_120 + (int)puVar26) + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[-2];
            fVar7 = *(float *)(local_cc + 4 + (int)puVar27);
            pfVar23 = pfVar23 + 4;
            fVar8 = *(float *)(local_cc + 4 + (int)puVar27);
            local_128[local_144 * 2] =
                 (local_148[-3] - *(float *)(local_cc + (int)puVar27)) * fVar16 +
                 *(float *)(local_cc + (int)puVar27);
            bVar31 = false;
            local_128[local_144 * 2 + 1] = fVar8 + (fVar6 - fVar7) * fVar16;
            fVar6 = pfVar20[-7];
            fVar7 = *(float *)((int)local_120 + (int)local_11c);
            fVar8 = pfVar20[-6];
            fVar9 = *(float *)((int)local_120 + 4 + (int)local_11c);
            fVar10 = pfVar20[-4];
            fVar11 = *(float *)((int)local_120 + 0xc + (int)local_11c);
            fVar19 = *(float *)((int)local_120 + (int)local_11c);
            fVar12 = *(float *)((int)local_120 + 4 + (int)local_11c);
            fVar13 = *(float *)((int)local_120 + 0xc + (int)local_11c);
            pfVar24[2] = *(float *)((int)local_120 + 8 + (int)local_11c) +
                         (pfVar20[-5] - *(float *)((int)local_120 + 8 + (int)local_11c)) * fVar16;
            local_144 = local_144 + 1;
            *pfVar24 = (fVar6 - fVar7) * fVar16 + fVar19;
            pfVar24[3] = fVar13 + fVar16 * (fVar10 - fVar11);
            pfVar24[1] = fVar12 + (fVar8 - fVar9) * fVar16;
            pfVar24 = pfVar24 + 4;
          }
        }
        else {
          pfVar22 = pfVar23;
          pfVar29 = pfVar24;
          if (!bVar31) {
            fVar6 = *(float *)((int)local_120 + 4 + (int)puVar26);
            fVar7 = pfVar25[-5];
            fVar8 = *(float *)((int)local_120 + 8 + (int)puVar26);
            fVar9 = pfVar25[-4];
            *pfVar23 = pfVar25[-6] - *(float *)((int)local_120 + (int)puVar26);
            pfVar23[2] = fVar9 - fVar8;
            pfVar23[1] = fVar7 - fVar6;
            fVar16 = -((fVar1 * *(float *)((int)local_120 + (int)puVar26) +
                        fVar2 * *(float *)((int)local_120 + 4 + (int)puVar26) +
                        fVar14 * *(float *)((int)local_120 + 8 + (int)puVar26) + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar16 * *pfVar23;
            pfVar23[1] = fVar16 * pfVar23[1];
            pfVar23[2] = fVar16 * pfVar23[2];
            fVar6 = *(float *)((int)local_120 + 4 + (int)puVar26);
            fVar7 = *(float *)((int)local_120 + 8 + (int)puVar26);
            *pfVar23 = *(float *)((int)local_120 + (int)puVar26) + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[-2];
            fVar7 = *(float *)(local_cc + 4 + (int)puVar27);
            fVar8 = *(float *)(local_cc + 4 + (int)puVar27);
            local_128[local_144 * 2] =
                 (local_148[-3] - *(float *)(local_cc + (int)puVar27)) * fVar16 +
                 *(float *)(local_cc + (int)puVar27);
            bVar31 = true;
            local_128[local_144 * 2 + 1] = fVar8 + (fVar6 - fVar7) * fVar16;
            fVar6 = pfVar20[-7];
            fVar7 = *(float *)((int)local_120 + (int)local_11c);
            fVar8 = pfVar20[-6];
            fVar9 = *(float *)((int)local_120 + 4 + (int)local_11c);
            fVar10 = pfVar20[-4];
            fVar11 = *(float *)((int)local_120 + 0xc + (int)local_11c);
            fVar19 = *(float *)((int)local_120 + (int)local_11c);
            fVar12 = *(float *)((int)local_120 + 4 + (int)local_11c);
            fVar13 = *(float *)((int)local_120 + 0xc + (int)local_11c);
            pfVar24[2] = *(float *)((int)local_120 + 8 + (int)local_11c) +
                         (pfVar20[-5] - *(float *)((int)local_120 + 8 + (int)local_11c)) * fVar16;
            local_144 = local_144 + 1;
            *pfVar24 = (fVar6 - fVar7) * fVar16 + fVar19;
            pfVar24[3] = fVar13 + fVar16 * (fVar10 - fVar11);
            pfVar24[1] = fVar12 + (fVar8 - fVar9) * fVar16;
            pfVar22 = pfVar23 + 4;
            pfVar29 = pfVar24 + 4;
          }
          fVar6 = pfVar25[-5];
          fVar7 = pfVar25[-4];
          *pfVar22 = pfVar25[-6];
          pfVar22[1] = fVar6;
          local_144 = local_144 + 1;
          pfVar23 = pfVar22 + 4;
          pfVar22[2] = fVar7;
          fVar6 = local_148[-2];
          pfVar24 = pfVar29 + 4;
          local_128[local_144 * 2 + -2] = local_148[-3];
          local_128[local_144 * 2 + -1] = fVar6;
          fVar6 = pfVar20[-6];
          fVar7 = pfVar20[-5];
          fVar8 = pfVar20[-7];
          pfVar29[3] = pfVar20[-4];
          *pfVar29 = fVar8;
          pfVar29[1] = fVar6;
          pfVar29[2] = fVar7;
        }
        if (fVar2 * pfVar25[-1] + fVar14 * *pfVar25 + fVar1 * pfVar25[-2] + fVar15 <= _DAT_006cc920)
        {
          if (bVar31) {
            fVar6 = pfVar25[-1];
            fVar7 = pfVar25[-5];
            fVar8 = *pfVar25;
            fVar9 = pfVar25[-4];
            *pfVar23 = pfVar25[-2] - pfVar25[-6];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar12 = -((fVar1 * pfVar25[-6] + fVar2 * pfVar25[-5] + fVar14 * pfVar25[-4] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar12 * *pfVar23;
            pfVar23[1] = fVar12 * pfVar23[1];
            pfVar23[2] = fVar12 * pfVar23[2];
            fVar6 = pfVar25[-5];
            fVar7 = pfVar25[-4];
            *pfVar23 = pfVar25[-6] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = *local_148;
            fVar7 = local_148[-2];
            fVar8 = local_148[-2];
            local_128[local_144 * 2] = (local_148[-1] - local_148[-3]) * fVar12 + local_148[-3];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar12 + fVar8;
            fVar6 = pfVar20[-3];
            fVar7 = pfVar20[-7];
            fVar8 = pfVar20[-2];
            bVar31 = false;
            fVar9 = pfVar20[-6];
            fVar10 = pfVar20[-7];
            fVar11 = pfVar20[-6];
            fVar19 = fVar12 * (*pfVar20 - pfVar20[-4]) + pfVar20[-4];
            pfVar24[2] = (*(float *)((int)pfVar25 + iVar18) - pfVar20[-5]) * fVar12 + pfVar20[-5];
            *pfVar24 = (fVar6 - fVar7) * fVar12 + fVar10;
            pfVar24[1] = (fVar8 - fVar9) * fVar12 + fVar11;
            goto LAB_005155fb;
          }
        }
        else {
          pfVar22 = pfVar24;
          if (!bVar31) {
            fVar6 = pfVar25[-1];
            fVar7 = pfVar25[-5];
            fVar8 = *pfVar25;
            fVar9 = pfVar25[-4];
            *pfVar23 = pfVar25[-2] - pfVar25[-6];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar16 = -((fVar1 * pfVar25[-6] + fVar2 * pfVar25[-5] + fVar14 * pfVar25[-4] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar16 * *pfVar23;
            pfVar23[1] = fVar16 * pfVar23[1];
            pfVar23[2] = fVar16 * pfVar23[2];
            fVar6 = pfVar25[-5];
            fVar7 = pfVar25[-4];
            *pfVar23 = pfVar25[-6] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = *local_148;
            fVar7 = local_148[-2];
            fVar8 = local_148[-2];
            local_128[local_144 * 2] = (local_148[-1] - local_148[-3]) * fVar16 + local_148[-3];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar16 + fVar8;
            fVar6 = pfVar20[-3];
            fVar7 = pfVar20[-7];
            fVar8 = pfVar20[-2];
            local_144 = local_144 + 1;
            fVar9 = pfVar20[-6];
            pfVar23 = pfVar23 + 4;
            fVar10 = *pfVar20;
            pfVar22 = pfVar24 + 4;
            fVar11 = pfVar20[-4];
            bVar31 = true;
            fVar19 = pfVar20[-7];
            fVar12 = pfVar20[-6];
            fVar13 = pfVar20[-4];
            pfVar24[2] = (*(float *)((int)pfVar25 + iVar18) - pfVar20[-5]) * fVar16 + pfVar20[-5];
            *pfVar24 = (fVar6 - fVar7) * fVar16 + fVar19;
            pfVar24[3] = fVar16 * (fVar10 - fVar11) + fVar13;
            pfVar24[1] = (fVar8 - fVar9) * fVar16 + fVar12;
          }
          fVar6 = pfVar25[-1];
          fVar7 = *pfVar25;
          *pfVar23 = pfVar25[-2];
          pfVar23[1] = fVar6;
          pfVar23[2] = fVar7;
          fVar6 = *local_148;
          local_128[local_144 * 2] = local_148[-1];
          local_128[local_144 * 2 + 1] = fVar6;
          fVar6 = pfVar20[-2];
          fVar7 = *(float *)((int)pfVar25 + iVar18);
          fVar19 = *pfVar20;
          *pfVar22 = pfVar20[-3];
          pfVar22[1] = fVar6;
          pfVar22[2] = fVar7;
          pfVar24 = pfVar22;
LAB_005155fb:
          local_144 = local_144 + 1;
          pfVar24[3] = fVar19;
          pfVar23 = pfVar23 + 4;
          pfVar24 = pfVar24 + 4;
        }
        if (fVar1 * pfVar25[2] + fVar2 * pfVar25[3] + fVar14 * pfVar25[4] + fVar15 <= _DAT_006cc920)
        {
          if (bVar31) {
            fVar6 = pfVar25[3];
            fVar7 = pfVar25[-1];
            fVar8 = pfVar25[4];
            fVar9 = *pfVar25;
            *pfVar23 = pfVar25[2] - pfVar25[-2];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar12 = -((fVar2 * pfVar25[-1] + fVar14 * *pfVar25 + fVar1 * pfVar25[-2] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar12 * *pfVar23;
            pfVar23[1] = fVar12 * pfVar23[1];
            pfVar23[2] = fVar12 * pfVar23[2];
            fVar6 = pfVar25[-1];
            fVar7 = *pfVar25;
            *pfVar23 = pfVar25[-2] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[2];
            fVar7 = *local_148;
            fVar8 = *local_148;
            local_128[local_144 * 2] = (local_148[1] - local_148[-1]) * fVar12 + local_148[-1];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar12 + fVar8;
            fVar6 = pfVar20[1];
            fVar7 = pfVar20[-3];
            fVar8 = pfVar20[2];
            bVar31 = false;
            fVar9 = pfVar20[-2];
            fVar10 = pfVar20[-3];
            fVar11 = pfVar20[-2];
            fVar19 = fVar12 * (pfVar20[4] - *pfVar20) + *pfVar20;
            pfVar24[2] = (pfVar20[3] - *(float *)((int)pfVar25 + iVar18)) * fVar12 +
                         *(float *)((int)pfVar25 + iVar18);
            *pfVar24 = (fVar6 - fVar7) * fVar12 + fVar10;
            pfVar24[1] = (fVar8 - fVar9) * fVar12 + fVar11;
            goto LAB_00515959;
          }
        }
        else {
          pfVar22 = pfVar24;
          if (!bVar31) {
            fVar6 = pfVar25[3];
            fVar7 = pfVar25[-1];
            fVar8 = pfVar25[4];
            fVar9 = *pfVar25;
            *pfVar23 = pfVar25[2] - pfVar25[-2];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar16 = -((fVar2 * pfVar25[-1] + fVar14 * *pfVar25 + fVar1 * pfVar25[-2] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar16 * *pfVar23;
            pfVar23[1] = fVar16 * pfVar23[1];
            pfVar23[2] = fVar16 * pfVar23[2];
            fVar6 = pfVar25[-1];
            fVar7 = *pfVar25;
            *pfVar23 = pfVar25[-2] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[2];
            fVar7 = *local_148;
            fVar8 = *local_148;
            local_128[local_144 * 2] = (local_148[1] - local_148[-1]) * fVar16 + local_148[-1];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar16 + fVar8;
            fVar6 = pfVar20[1];
            fVar7 = pfVar20[-3];
            fVar8 = pfVar20[2];
            local_144 = local_144 + 1;
            fVar9 = pfVar20[-2];
            pfVar23 = pfVar23 + 4;
            fVar10 = pfVar20[4];
            pfVar22 = pfVar24 + 4;
            fVar11 = *pfVar20;
            bVar31 = true;
            fVar19 = pfVar20[-3];
            fVar12 = pfVar20[-2];
            fVar13 = *pfVar20;
            pfVar24[2] = (pfVar20[3] - *(float *)((int)pfVar25 + iVar18)) * fVar16 +
                         *(float *)((int)pfVar25 + iVar18);
            *pfVar24 = (fVar6 - fVar7) * fVar16 + fVar19;
            pfVar24[3] = fVar16 * (fVar10 - fVar11) + fVar13;
            pfVar24[1] = (fVar8 - fVar9) * fVar16 + fVar12;
          }
          fVar6 = pfVar25[3];
          fVar7 = pfVar25[4];
          *pfVar23 = pfVar25[2];
          pfVar23[1] = fVar6;
          pfVar23[2] = fVar7;
          fVar6 = local_148[2];
          local_128[local_144 * 2] = local_148[1];
          local_128[local_144 * 2 + 1] = fVar6;
          fVar19 = pfVar20[4];
          fVar6 = pfVar20[2];
          fVar7 = pfVar20[3];
          *pfVar22 = pfVar20[1];
          pfVar22[1] = fVar6;
          pfVar22[2] = fVar7;
          pfVar24 = pfVar22;
LAB_00515959:
          local_144 = local_144 + 1;
          pfVar24[3] = fVar19;
          pfVar23 = pfVar23 + 4;
          pfVar24 = pfVar24 + 4;
        }
        if (fVar1 * pfVar25[6] + fVar2 * pfVar25[7] + fVar14 * pfVar25[8] + fVar15 <= _DAT_006cc920)
        {
          if (bVar31) {
            fVar6 = pfVar25[7];
            fVar7 = pfVar25[3];
            fVar8 = pfVar25[8];
            fVar9 = pfVar25[4];
            *pfVar23 = pfVar25[6] - pfVar25[2];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar12 = -((fVar1 * pfVar25[2] + fVar2 * pfVar25[3] + fVar14 * pfVar25[4] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar12 * *pfVar23;
            pfVar23[1] = fVar12 * pfVar23[1];
            pfVar23[2] = fVar12 * pfVar23[2];
            fVar6 = pfVar25[3];
            fVar7 = pfVar25[4];
            *pfVar23 = pfVar25[2] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[4];
            fVar7 = local_148[2];
            fVar8 = local_148[2];
            local_128[local_144 * 2] = (local_148[3] - local_148[1]) * fVar12 + local_148[1];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar12 + fVar8;
            fVar6 = pfVar20[5];
            fVar7 = pfVar20[1];
            fVar8 = pfVar20[6];
            bVar31 = false;
            fVar9 = pfVar20[2];
            fVar10 = pfVar20[1];
            fVar11 = pfVar20[2];
            fVar19 = fVar12 * (pfVar20[8] - pfVar20[4]) + pfVar20[4];
            pfVar24[2] = (pfVar20[7] - pfVar20[3]) * fVar12 + pfVar20[3];
            *pfVar24 = (fVar6 - fVar7) * fVar12 + fVar10;
            pfVar24[1] = (fVar8 - fVar9) * fVar12 + fVar11;
            goto LAB_00515cbd;
          }
        }
        else {
          pfVar22 = pfVar24;
          if (!bVar31) {
            fVar6 = pfVar25[7];
            fVar7 = pfVar25[3];
            fVar8 = pfVar25[8];
            fVar9 = pfVar25[4];
            *pfVar23 = pfVar25[6] - pfVar25[2];
            pfVar23[2] = fVar8 - fVar9;
            pfVar23[1] = fVar6 - fVar7;
            fVar16 = -((fVar1 * pfVar25[2] + fVar2 * pfVar25[3] + fVar14 * pfVar25[4] + fVar15) /
                      (fVar2 * pfVar23[1] + fVar14 * pfVar23[2] + fVar1 * *pfVar23));
            *pfVar23 = fVar16 * *pfVar23;
            pfVar23[1] = fVar16 * pfVar23[1];
            pfVar23[2] = fVar16 * pfVar23[2];
            fVar6 = pfVar25[3];
            fVar7 = pfVar25[4];
            *pfVar23 = pfVar25[2] + *pfVar23;
            pfVar23[1] = fVar6 + pfVar23[1];
            pfVar23[2] = fVar7 + pfVar23[2];
            fVar6 = local_148[4];
            fVar7 = local_148[2];
            fVar8 = local_148[2];
            local_128[local_144 * 2] = (local_148[3] - local_148[1]) * fVar16 + local_148[1];
            local_128[local_144 * 2 + 1] = (fVar6 - fVar7) * fVar16 + fVar8;
            fVar6 = pfVar20[5];
            fVar7 = pfVar20[1];
            fVar8 = pfVar20[6];
            local_144 = local_144 + 1;
            fVar9 = pfVar20[2];
            pfVar23 = pfVar23 + 4;
            fVar10 = pfVar20[8];
            pfVar22 = pfVar24 + 4;
            fVar11 = pfVar20[4];
            bVar31 = true;
            fVar19 = pfVar20[1];
            fVar12 = pfVar20[2];
            fVar13 = pfVar20[4];
            pfVar24[2] = (pfVar20[7] - pfVar20[3]) * fVar16 + pfVar20[3];
            *pfVar24 = (fVar6 - fVar7) * fVar16 + fVar19;
            pfVar24[3] = fVar16 * (fVar10 - fVar11) + fVar13;
            pfVar24[1] = (fVar8 - fVar9) * fVar16 + fVar12;
          }
          fVar6 = pfVar25[7];
          fVar7 = pfVar25[8];
          *pfVar23 = pfVar25[6];
          pfVar23[1] = fVar6;
          pfVar23[2] = fVar7;
          fVar6 = local_148[4];
          local_128[local_144 * 2] = local_148[3];
          local_128[local_144 * 2 + 1] = fVar6;
          fVar19 = pfVar20[8];
          fVar6 = pfVar20[6];
          fVar7 = pfVar20[7];
          *pfVar22 = pfVar20[5];
          pfVar22[1] = fVar6;
          pfVar22[2] = fVar7;
          pfVar24 = pfVar22;
LAB_00515cbd:
          local_144 = local_144 + 1;
          pfVar24[3] = fVar19;
          pfVar23 = pfVar23 + 4;
          pfVar24 = pfVar24 + 4;
        }
        local_118 = (float *)local_104;
        local_cc = (0xc - (int)puVar27) + (int)local_148;
        local_120 = (float *)((0x18 - (int)puVar26) + (int)pfVar25);
        local_148 = local_148 + 8;
        local_114 = local_114 + 4;
        local_104 = local_104 + 4;
        pfVar25 = pfVar25 + 0x10;
        pfVar20 = pfVar20 + 0x10;
      } while (local_104 < local_f4);
    }
    if (local_114 < local_f4) {
      local_104 = (int)local_118 << 3;
      pfVar25 = (float *)(puVar21 + local_144 * 4);
      pfVar24 = (float *)(local_c4 + local_144 * 4);
      local_120 = (float *)(local_11c + local_114 * 4 + 3);
      iVar18 = (int)local_118 << 4;
      iVar30 = (int)local_11c - (int)puVar26;
      pfVar20 = (float *)(puVar26 + local_114 * 4 + 2);
      local_118 = pfVar25;
      do {
        if (fVar1 * pfVar20[-2] + fVar14 * *pfVar20 + fVar2 * pfVar20[-1] + fVar15 <= _DAT_006cc920)
        {
          if (bVar31) {
            fVar6 = *(float *)(iVar18 + 4 + (int)puVar26);
            fVar7 = pfVar20[-1];
            fVar8 = *(float *)(iVar18 + 8 + (int)puVar26);
            fVar9 = *pfVar20;
            *pfVar24 = pfVar20[-2] - *(float *)(iVar18 + (int)puVar26);
            pfVar24[2] = fVar9 - fVar8;
            pfVar24[1] = fVar7 - fVar6;
            fVar12 = -((fVar1 * *(float *)(iVar18 + (int)puVar26) +
                        fVar2 * *(float *)(iVar18 + 4 + (int)puVar26) +
                        fVar14 * *(float *)(iVar18 + 8 + (int)puVar26) + fVar15) /
                      (fVar2 * pfVar24[1] + fVar14 * pfVar24[2] + fVar1 * *pfVar24));
            *pfVar24 = fVar12 * *pfVar24;
            pfVar24[1] = fVar12 * pfVar24[1];
            pfVar24[2] = fVar12 * pfVar24[2];
            fVar6 = *(float *)(iVar18 + 4 + (int)puVar26);
            fVar7 = *(float *)(iVar18 + 8 + (int)puVar26);
            *pfVar24 = *(float *)(iVar18 + (int)puVar26) + *pfVar24;
            pfVar24[1] = fVar6 + pfVar24[1];
            pfVar24[2] = fVar7 + pfVar24[2];
            fVar6 = (float)puVar27[local_114 * 2 + 1];
            fVar7 = *(float *)(local_104 + 4 + (int)puVar27);
            fVar8 = *(float *)(local_104 + 4 + (int)puVar27);
            local_128[local_144 * 2] =
                 ((float)puVar27[local_114 * 2] - *(float *)(local_104 + (int)puVar27)) * fVar12 +
                 *(float *)(local_104 + (int)puVar27);
            bVar31 = false;
            local_128[local_144 * 2 + 1] = fVar8 + (fVar6 - fVar7) * fVar12;
            fVar6 = local_120[-3];
            fVar7 = *(float *)(iVar18 + (int)local_11c);
            fVar8 = local_120[-2];
            fVar9 = *(float *)(iVar18 + 4 + (int)local_11c);
            fVar10 = *(float *)(iVar18 + (int)local_11c);
            fVar11 = *(float *)(iVar18 + 4 + (int)local_11c);
            fVar19 = *(float *)(iVar18 + 0xc + (int)local_11c) +
                     fVar12 * (*local_120 - *(float *)(iVar18 + 0xc + (int)local_11c));
            local_118[2] = *(float *)(iVar18 + 8 + (int)local_11c) +
                           (*(float *)((int)pfVar20 + iVar30) -
                           *(float *)(iVar18 + 8 + (int)local_11c)) * fVar12;
            *local_118 = (fVar6 - fVar7) * fVar12 + fVar10;
            local_118[1] = fVar11 + (fVar8 - fVar9) * fVar12;
            goto LAB_00516197;
          }
        }
        else {
          if (!bVar31) {
            fVar6 = *(float *)(iVar18 + 4 + (int)puVar26);
            fVar7 = pfVar20[-1];
            fVar8 = *(float *)(iVar18 + 8 + (int)puVar26);
            fVar9 = *pfVar20;
            *pfVar24 = pfVar20[-2] - *(float *)(iVar18 + (int)puVar26);
            pfVar24[2] = fVar9 - fVar8;
            pfVar24[1] = fVar7 - fVar6;
            fVar16 = -((fVar1 * *(float *)(iVar18 + (int)puVar26) +
                        fVar2 * *(float *)(iVar18 + 4 + (int)puVar26) +
                        fVar14 * *(float *)(iVar18 + 8 + (int)puVar26) + fVar15) /
                      (fVar2 * pfVar24[1] + fVar14 * pfVar24[2] + fVar1 * *pfVar24));
            *pfVar24 = fVar16 * *pfVar24;
            pfVar24[1] = fVar16 * pfVar24[1];
            pfVar24[2] = fVar16 * pfVar24[2];
            fVar6 = *(float *)(iVar18 + 4 + (int)puVar26);
            fVar7 = *(float *)(iVar18 + 8 + (int)puVar26);
            *pfVar24 = *(float *)(iVar18 + (int)puVar26) + *pfVar24;
            pfVar24[1] = fVar6 + pfVar24[1];
            pfVar24[2] = fVar7 + pfVar24[2];
            fVar6 = (float)puVar27[local_114 * 2 + 1];
            fVar7 = *(float *)(local_104 + 4 + (int)puVar27);
            fVar8 = *(float *)(local_104 + 4 + (int)puVar27);
            local_128[local_144 * 2] =
                 ((float)puVar27[local_114 * 2] - *(float *)(local_104 + (int)puVar27)) * fVar16 +
                 *(float *)(local_104 + (int)puVar27);
            pfVar24 = pfVar24 + 4;
            bVar31 = true;
            local_128[local_144 * 2 + 1] = fVar8 + (fVar6 - fVar7) * fVar16;
            fVar6 = local_120[-3];
            fVar7 = *(float *)(iVar18 + (int)local_11c);
            fVar8 = local_120[-2];
            fVar9 = *(float *)(iVar18 + 4 + (int)local_11c);
            fVar10 = *(float *)(iVar18 + 0xc + (int)local_11c);
            fVar11 = *local_120;
            fVar19 = *(float *)(iVar18 + (int)local_11c);
            fVar12 = *(float *)(iVar18 + 4 + (int)local_11c);
            fVar13 = *(float *)(iVar18 + 0xc + (int)local_11c);
            local_118[2] = *(float *)(iVar18 + 8 + (int)local_11c) +
                           (*(float *)((int)pfVar20 + iVar30) -
                           *(float *)(iVar18 + 8 + (int)local_11c)) * fVar16;
            local_118[3] = fVar13 + fVar16 * (fVar11 - fVar10);
            *local_118 = (fVar6 - fVar7) * fVar16 + fVar19;
            local_144 = local_144 + 1;
            local_118[1] = fVar12 + (fVar8 - fVar9) * fVar16;
            pfVar25 = local_118 + 4;
          }
          local_118 = pfVar25;
          fVar6 = pfVar20[-1];
          fVar7 = *pfVar20;
          *pfVar24 = pfVar20[-2];
          pfVar24[1] = fVar6;
          pfVar24[2] = fVar7;
          uVar3 = puVar27[local_114 * 2 + 1];
          local_128[local_144 * 2] = puVar27[local_114 * 2];
          local_128[local_144 * 2 + 1] = uVar3;
          fVar6 = local_120[-2];
          fVar7 = *(float *)((int)pfVar20 + iVar30);
          fVar19 = *local_120;
          *local_118 = local_120[-3];
          local_118[1] = fVar6;
          local_118[2] = fVar7;
LAB_00516197:
          local_118[3] = fVar19;
          pfVar24 = pfVar24 + 4;
          local_144 = local_144 + 1;
          pfVar25 = local_118 + 4;
          local_118 = pfVar25;
        }
        local_104 = local_114 * 8;
        iVar18 = local_5c + -8 + (int)pfVar20;
        local_114 = local_114 + 1;
        pfVar20 = pfVar20 + 4;
        local_120 = local_120 + 4;
      } while (local_114 < local_f4);
    }
    local_44 = local_5c;
    local_5c = iVar17;
    local_f4 = local_144;
    local_48 = local_48 + 1;
    local_6c = local_6c + 1;
    pfVar28 = pfVar28 + 4;
    obj = local_11c;
    param_3 = local_c4;
    param_4 = local_128;
    local_128 = puVar27;
    local_11c = puVar21;
    local_c4 = puVar26;
    if (3 < local_48) {
      return local_144;
    }
  } while( true );
}
