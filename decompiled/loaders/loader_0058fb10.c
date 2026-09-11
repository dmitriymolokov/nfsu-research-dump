/* spd-match: far pct=4.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058FB10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040be70();
int __cdecl FUN_0040bef0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006cc8bc;
void __fastcall FUN_0058fb10(int obj, undefined4 param_1, int param_2, undefined4 param_3, int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;

  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  float *pfVar21;
  undefined1 *puVar22;
  uint uVar23;
  float **ppfVar24;
  int iVar25;
  float *pfVar26;
  undefined4 *puVar27;
  float *local_22c;
  int local_228;
  int local_224;
  undefined1 *local_220;
  int local_21c;
  int local_218;
  undefined1 *local_210;
  int local_20c;
  float local_208 [5];
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined1 auStack_1e4 [4];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float *local_1c4 [4];
  int local_1b4;
  float local_1b0 [16];
  float local_170 [16];
  undefined4 local_130;
  float local_12c [5];
  float local_118 [3];
  float local_10c [11];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0 [8];
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac [17];
  undefined1 local_9b;
  float local_90 [35];
  
  local_208[0] = *(float *)(obj + 0x68) - *(float *)(obj + 0x70);
  local_210 = (undefined1 *)(param_2 + 0x83);
  local_208[1] = *(float *)(obj + 0x6c) - *(float *)(obj + 0x74);
  pfVar21 = (float *)(param_2 + 0x54);
  pfVar26 = local_12c;
  local_208[2] = *(float *)(obj + 0x68) + *(float *)(obj + 0x70);
  local_208[3] = local_208[1];
  local_208[4] = local_208[2];
  local_1f4 = *(float *)(obj + 0x6c) + *(float *)(obj + 0x74);
  iVar15 = 0;
  pfVar18 = (float *)(param_2 + 0x14);
  local_1f0 = local_208[0];
  local_1ec = local_1f4;
  do {
    local_170[iVar15 * 2] = pfVar18[-1];
    local_170[iVar15 * 2 + 1] = *pfVar18;
    pfVar26[-1] = pfVar21[-1];
    *pfVar26 = *pfVar21;
    pfVar26[1] = pfVar21[1];
    auStack_1e4[iVar15 + -4] = *local_210;
    iVar15 = iVar15 + 1;
    local_210 = local_210 + 4;
    pfVar21 = pfVar21 + 3;
    pfVar18 = pfVar18 + 4;
    pfVar26 = pfVar26 + 4;
  } while (iVar15 < 4);
  local_210 = (undefined1 *)0x4;
  local_21c = 0;
  local_224 = 0x18;
  do {
    uVar23 = 0;
    puVar17 = (undefined1 *)((int)local_210 - 1);
    local_220 = (undefined1 *)0x0;
    if (3 < (int)local_210) {
      local_20c = (int)puVar17 * 0x10;
      local_22c = local_90;
      local_1c4[2] = (float *)(0x30 - (int)local_118);
      pfVar21 = local_170 + 5;
      pfVar26 = local_118;
      local_1c4[3] = (float *)(3 - (int)&local_1e8);
      do {
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (pfVar21[-4] - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-5] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar15 = 0;
          }
          else {
            iVar15 = -1;
          }
        }
        else {
          iVar15 = 1;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (local_170[(int)puVar17 * 2 + 1] - *(float *)((int)local_208 + local_21c + 4)) +
                (local_170[(int)puVar17 * 2] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar16 = 0;
          }
          else {
            iVar16 = -1;
          }
        }
        else {
          iVar16 = 1;
        }
        if (iVar16 != -1) {
          fVar2 = local_170[(int)puVar17 * 2 + 1];
          fVar12 = *(float *)((int)&local_130 + local_20c);
          local_1b0[uVar23 * 2] = local_170[(int)puVar17 * 2];
          *local_22c = fVar12;
          local_1b0[uVar23 * 2 + 1] = fVar2;
          local_22c[1] = *(float *)((int)local_12c + local_20c);
          uVar14 = auStack_1e4[(int)(puVar17 + -4)];
          local_22c[2] = *(float *)((int)local_12c + local_20c + 4);
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          local_22c = local_22c + 4;
          uVar23 = uVar23 + 1;
        }
        if ((iVar15 != -1) != (iVar16 != -1)) {
          fVar2 = local_170[(int)puVar17 * 2];
          fVar12 = pfVar21[-5];
          fVar5 = *(float *)((int)local_208 + local_224 + 4) -
                  *(float *)((int)local_208 + local_21c + 4);
          fVar3 = local_170[(int)puVar17 * 2 + 1];
          fVar4 = pfVar21[-4];
          fVar6 = *(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c);
          fVar13 = ((pfVar21[-4] - *(float *)((int)local_208 + local_21c + 4)) * fVar6 -
                   (pfVar21[-5] - *(float *)((int)local_208 + local_21c)) * fVar5) /
                   ((fVar2 - fVar12) * fVar5 - (fVar3 - fVar4) * fVar6);
          fVar5 = pfVar21[-5];
          fVar6 = pfVar21[-4];
          local_1e0 = (*(float *)((int)&local_130 + local_20c) - pfVar26[-6]) * fVar13 + pfVar26[-6]
          ;
          local_1dc = (*(float *)((int)local_12c + local_20c) - pfVar26[-5]) * fVar13 + pfVar26[-5];
          fVar7 = *(float *)((int)local_12c + local_20c + 4);
          fVar8 = pfVar26[-4];
          *local_22c = local_1e0;
          local_22c[1] = local_1dc;
          local_1d8 = (fVar7 - fVar8) * fVar13 + pfVar26[-4];
          local_22c[2] = local_1d8;
          local_1b0[uVar23 * 2] = (fVar2 - fVar12) * fVar13 + fVar5;
          local_1b0[uVar23 * 2 + 1] = (fVar3 - fVar4) * fVar13 + fVar6;
          uVar14 = FUN_00674898();
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (pfVar21[-2] - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-3] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar15 = 0;
          }
          else {
            iVar15 = -1;
          }
        }
        else {
          iVar15 = 1;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (pfVar21[-4] - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-5] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar16 = 0;
          }
          else {
            iVar16 = -1;
          }
        }
        else {
          iVar16 = 1;
        }
        if (iVar16 != -1) {
          fVar2 = pfVar26[-6];
          fVar12 = pfVar21[-5];
          local_1b0[uVar23 * 2 + 1] = pfVar21[-4];
          *local_22c = fVar2;
          fVar2 = pfVar26[-5];
          local_1b0[uVar23 * 2] = fVar12;
          uVar14 = auStack_1e4[(int)(local_220 + -4)];
          local_22c[1] = fVar2;
          fVar2 = pfVar26[-4];
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          local_22c[2] = fVar2;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        if ((iVar15 != -1) != (iVar16 != -1)) {
          fVar2 = pfVar21[-5];
          fVar12 = pfVar21[-3];
          fVar5 = *(float *)((int)local_208 + local_224 + 4) -
                  *(float *)((int)local_208 + local_21c + 4);
          fVar3 = pfVar21[-4];
          fVar4 = pfVar21[-2];
          fVar6 = *(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c);
          fVar8 = ((pfVar21[-2] - *(float *)((int)local_208 + local_21c + 4)) * fVar6 -
                  (pfVar21[-3] - *(float *)((int)local_208 + local_21c)) * fVar5) /
                  ((fVar2 - fVar12) * fVar5 - (fVar3 - fVar4) * fVar6);
          fVar5 = pfVar21[-3];
          fVar6 = pfVar21[-2];
          local_1e0 = (pfVar26[-6] - pfVar26[-2]) * fVar8 + pfVar26[-2];
          fVar7 = pfVar26[-5];
          *local_22c = local_1e0;
          local_1dc = (fVar7 - pfVar26[-1]) * fVar8 + pfVar26[-1];
          fVar7 = pfVar26[-4];
          local_22c[1] = local_1dc;
          local_1d8 = (fVar7 - *pfVar26) * fVar8 + *pfVar26;
          local_22c[2] = local_1d8;
          local_1b0[uVar23 * 2] = (fVar2 - fVar12) * fVar8 + fVar5;
          local_1b0[uVar23 * 2 + 1] = (fVar3 - fVar4) * fVar8 + fVar6;
          uVar14 = FUN_00674898();
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (*pfVar21 - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-1] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar15 = 0;
          }
          else {
            iVar15 = -1;
          }
        }
        else {
          iVar15 = 1;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (pfVar21[-2] - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-3] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar16 = 0;
          }
          else {
            iVar16 = -1;
          }
        }
        else {
          iVar16 = 1;
        }
        if (iVar16 != -1) {
          fVar2 = pfVar26[-2];
          fVar12 = pfVar21[-2];
          local_1b0[uVar23 * 2] = pfVar21[-3];
          local_1b0[uVar23 * 2 + 1] = fVar12;
          local_22c[2] = *pfVar26;
          uVar14 = auStack_1e4[(int)(local_220 + -3)];
          *local_22c = fVar2;
          fVar2 = pfVar26[-1];
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          local_22c[1] = fVar2;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        if ((iVar15 != -1) != (iVar16 != -1)) {
          fVar2 = pfVar21[-3];
          fVar12 = pfVar21[-1];
          fVar5 = *(float *)((int)local_208 + local_224 + 4) -
                  *(float *)((int)local_208 + local_21c + 4);
          fVar3 = pfVar21[-2];
          fVar4 = *pfVar21;
          fVar6 = *(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c);
          fVar8 = ((*pfVar21 - *(float *)((int)local_208 + local_21c + 4)) * fVar6 -
                  (pfVar21[-1] - *(float *)((int)local_208 + local_21c)) * fVar5) /
                  (fVar5 * (fVar2 - fVar12) - fVar6 * (fVar3 - fVar4));
          fVar5 = pfVar21[-1];
          fVar6 = *pfVar21;
          local_1e0 = (pfVar26[-2] - pfVar26[2]) * fVar8 + pfVar26[2];
          fVar7 = pfVar26[-1];
          *local_22c = local_1e0;
          local_1dc = (fVar7 - pfVar26[3]) * fVar8 + pfVar26[3];
          fVar7 = *pfVar26;
          local_22c[1] = local_1dc;
          local_1d8 = (fVar7 - pfVar26[4]) * fVar8 + pfVar26[4];
          local_22c[2] = local_1d8;
          local_1b0[uVar23 * 2] = fVar8 * (fVar2 - fVar12) + fVar5;
          local_1b0[uVar23 * 2 + 1] = fVar8 * (fVar3 - fVar4) + fVar6;
          uVar14 = FUN_00674898();
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (pfVar21[2] - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[1] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar15 = 0;
          }
          else {
            iVar15 = -1;
          }
        }
        else {
          iVar15 = 1;
        }
        fVar2 = -(*(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c)) *
                (*pfVar21 - *(float *)((int)local_208 + local_21c + 4)) +
                (pfVar21[-1] - *(float *)((int)local_208 + local_21c)) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar16 = 0;
          }
          else {
            iVar16 = -1;
          }
        }
        else {
          iVar16 = 1;
        }
        if (iVar16 != -1) {
          fVar2 = pfVar26[2];
          fVar12 = *pfVar21;
          local_1b0[uVar23 * 2] = pfVar21[-1];
          *local_22c = fVar2;
          fVar2 = pfVar26[3];
          local_1b0[uVar23 * 2 + 1] = fVar12;
          uVar14 = auStack_1e4[(int)(local_220 + -2)];
          local_22c[1] = fVar2;
          fVar2 = pfVar26[4];
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          local_22c[2] = fVar2;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        if ((iVar15 != -1) != (iVar16 != -1)) {
          fVar2 = pfVar21[-1];
          fVar12 = pfVar21[1];
          fVar5 = *(float *)((int)local_208 + local_224 + 4) -
                  *(float *)((int)local_208 + local_21c + 4);
          fVar3 = *pfVar21;
          fVar4 = pfVar21[2];
          fVar6 = *(float *)((int)local_208 + local_224) - *(float *)((int)local_208 + local_21c);
          fVar8 = ((pfVar21[2] - *(float *)((int)local_208 + local_21c + 4)) * fVar6 -
                  (pfVar21[1] - *(float *)((int)local_208 + local_21c)) * fVar5) /
                  (fVar5 * (fVar2 - fVar12) - fVar6 * (fVar3 - fVar4));
          fVar5 = pfVar21[1];
          fVar6 = pfVar21[2];
          local_1e0 = (pfVar26[2] - pfVar26[6]) * fVar8 + pfVar26[6];
          fVar7 = pfVar26[3];
          *local_22c = local_1e0;
          local_1dc = (fVar7 - pfVar26[7]) * fVar8 + pfVar26[7];
          fVar7 = pfVar26[4];
          local_22c[1] = local_1dc;
          local_1d8 = (fVar7 - pfVar26[8]) * fVar8 + pfVar26[8];
          local_22c[2] = local_1d8;
          local_1b0[uVar23 * 2] = (fVar2 - fVar12) * fVar8 + fVar5;
          local_1b0[uVar23 * 2 + 1] = (fVar3 - fVar4) * fVar8 + fVar6;
          uVar14 = FUN_00674898();
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          uVar23 = uVar23 + 1;
          local_22c = local_22c + 4;
        }
        local_20c = (int)local_1c4[2] + (int)pfVar26;
        puVar22 = local_220 + 4;
        puVar17 = auStack_1e4 + (int)(local_220 + (int)local_1c4[3] + -4);
        pfVar21 = pfVar21 + 8;
        pfVar26 = pfVar26 + 0x10;
        local_220 = puVar22;
      } while ((int)(auStack_1e4 + (int)(puVar22 + (int)local_1c4[3] + -4)) < (int)local_210);
    }
    if ((int)local_220 < (int)local_210) {
      pfVar21 = (float *)((int)local_208 + local_224);
      local_22c = (float *)((int)local_220 << 4);
      local_228 = (int)puVar17 << 4;
      pfVar26 = (float *)((int)local_208 + local_21c);
      pfVar18 = local_90 + uVar23 * 4;
      do {
        pfVar1 = local_170 + (int)local_220 * 2;
        fVar2 = -(*pfVar21 - *pfVar26) *
                (local_170[(int)local_220 * 2 + 1] - *(float *)((int)local_208 + local_21c + 4)) +
                (*pfVar1 - *pfVar26) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar15 = 0;
          }
          else {
            iVar15 = -1;
          }
        }
        else {
          iVar15 = 1;
        }
        fVar2 = -(*pfVar21 - *pfVar26) *
                (local_170[(int)puVar17 * 2 + 1] - *(float *)((int)local_208 + local_21c + 4)) +
                (local_170[(int)puVar17 * 2] - *pfVar26) *
                (*(float *)((int)local_208 + local_224 + 4) -
                *(float *)((int)local_208 + local_21c + 4));
        if (fVar2 <= DAT_006cc7a4) {
          if (DAT_006cc7a4 <= fVar2) {
            iVar16 = 0;
          }
          else {
            iVar16 = -1;
          }
        }
        else {
          iVar16 = 1;
        }
        if (iVar16 != -1) {
          fVar12 = local_170[(int)puVar17 * 2];
          local_1b0[uVar23 * 2 + 1] = local_170[(int)puVar17 * 2 + 1];
          fVar2 = *(float *)((int)local_12c + local_228);
          local_1b0[uVar23 * 2] = fVar12;
          fVar12 = *(float *)((int)&local_130 + local_228);
          pfVar18[1] = fVar2;
          fVar2 = *(float *)((int)local_12c + local_228 + 4);
          *(undefined1 *)((int)local_1c4 + uVar23) = auStack_1e4[(int)(puVar17 + -4)];
          pfVar18[2] = fVar2;
          *pfVar18 = fVar12;
          uVar23 = uVar23 + 1;
          pfVar18 = pfVar18 + 4;
        }
        if ((iVar15 != -1) != (iVar16 != -1)) {
          fVar2 = local_170[(int)puVar17 * 2];
          fVar12 = *pfVar1;
          fVar5 = *(float *)((int)local_208 + local_224 + 4) -
                  *(float *)((int)local_208 + local_21c + 4);
          fVar3 = local_170[(int)puVar17 * 2 + 1];
          bVar9 = auStack_1e4[(int)(puVar17 + -4)];
          fVar4 = local_170[(int)local_220 * 2 + 1];
          fVar13 = ((local_170[(int)local_220 * 2 + 1] - *(float *)((int)local_208 + local_21c + 4))
                    * (*pfVar21 - *pfVar26) - (*pfVar1 - *pfVar26) * fVar5) /
                   (fVar5 * (fVar2 - fVar12) - (*pfVar21 - *pfVar26) * (fVar3 - fVar4));
          fVar5 = *pfVar1;
          fVar6 = local_170[(int)local_220 * 2 + 1];
          local_1e0 = (*(float *)((int)&local_130 + local_228) -
                      *(float *)((int)&local_130 + (int)local_22c)) * fVar13 +
                      *(float *)((int)&local_130 + (int)local_22c);
          local_1dc = (*(float *)((int)local_12c + local_228) -
                      *(float *)((int)local_12c + (int)local_22c)) * fVar13 +
                      *(float *)((int)local_12c + (int)local_22c);
          fVar7 = *(float *)((int)local_12c + local_228 + 4);
          fVar8 = *(float *)((int)local_12c + (int)local_22c + 4);
          *pfVar18 = local_1e0;
          local_1d8 = (fVar7 - fVar8) * fVar13 + *(float *)((int)local_12c + (int)local_22c + 4);
          pfVar18[1] = local_1dc;
          pfVar18[2] = local_1d8;
          local_1b0[uVar23 * 2] = (fVar2 - fVar12) * fVar13 + fVar5;
          bVar10 = auStack_1e4[(int)(local_220 + -4)];
          local_1b0[uVar23 * 2 + 1] = fVar13 * (fVar3 - fVar4) + fVar6;
          local_1c4[2] = (float *)((uint)bVar9 - (uint)bVar10);
          uVar14 = FUN_00674898();
          *(undefined1 *)((int)local_1c4 + uVar23) = uVar14;
          uVar23 = uVar23 + 1;
          pfVar18 = pfVar18 + 4;
        }
        local_228 = (int)local_22c;
        local_22c = (float *)((int)local_22c + 0x10);
        puVar22 = local_220 + 1;
        puVar17 = local_220;
        local_220 = puVar22;
      } while ((int)puVar22 < (int)local_210);
    }
    pfVar21 = local_1b0;
    pfVar26 = local_170;
    for (iVar15 = uVar23 * 2; iVar15 != 0; iVar15 = iVar15 + -1) {
      *pfVar26 = *pfVar21;
      pfVar21 = pfVar21 + 1;
      pfVar26 = pfVar26 + 1;
    }
    local_224 = local_21c;
    pfVar21 = local_90;
    pfVar26 = (float *)&local_130;
    for (iVar15 = (uVar23 & 0xfffffff) << 2; iVar15 != 0; iVar15 = iVar15 + -1) {
      *pfVar26 = *pfVar21;
      pfVar21 = pfVar21 + 1;
      pfVar26 = pfVar26 + 1;
    }
    for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(undefined1 *)pfVar26 = *(undefined1 *)pfVar21;
      pfVar21 = (float *)((int)pfVar21 + 1);
      pfVar26 = (float *)((int)pfVar26 + 1);
    }
    ppfVar24 = local_1c4;
    puVar27 = &local_1e8;
    for (uVar19 = uVar23 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar27 = *ppfVar24;
      ppfVar24 = ppfVar24 + 1;
      puVar27 = puVar27 + 1;
    }
    for (uVar19 = uVar23 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar27 = *(undefined1 *)ppfVar24;
      ppfVar24 = (float **)((int)ppfVar24 + 1);
      puVar27 = (undefined4 *)((int)puVar27 + 1);
    }
    local_21c = local_21c + 8;
    local_210 = (undefined1 *)uVar23;
  } while (local_21c < 0x20);
  iVar15 = 0;
  iVar16 = 1;
  local_228 = 0;
  if (1 < (int)uVar23) {
    iVar25 = 0;
    iVar20 = 8;
    do {
      if ((*(float *)((int)local_1b0 + iVar20 + 4) < *(float *)((int)local_1b0 + iVar25 + 4)) ||
         ((fVar2 = ABS(*(float *)((int)local_1b0 + iVar20 + 4) -
                       *(float *)((int)local_1b0 + iVar25 + 4)),
          fVar2 < _DAT_006cc8bc != (fVar2 == _DAT_006cc8bc) &&
          (*(float *)((int)local_1b0 + iVar20) < *(float *)((int)local_1b0 + iVar25))))) {
        iVar25 = iVar20;
        iVar15 = iVar16;
      }
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 8;
      local_228 = iVar15;
    } while (iVar16 < (int)uVar23);
  }
  local_218 = 1;
  if (1 < (int)(uVar23 - 1)) {
    local_1c4[3] = local_90 + local_228 * 4 + 1;
    local_1c4[2] = local_90 + local_228 * 4;
    uVar14 = *(undefined1 *)((int)local_1c4 + local_228);
    local_1b4 = (int)&local_130 + (1 - param_2);
    local_1e8 = (int)&local_130 + (2 - param_2);
    do {
      FUN_0040be70();
      local_12c[3] = local_1b0[local_228 * 2];
      local_12c[4] = local_1b0[local_228 * 2 + 1];
      local_118[0] = (float)param_4;
      local_e0 = *local_1c4[2];
      local_dc = *local_1c4[3];
      local_d8 = local_90[local_228 * 4 + 2];
      local_af = *(undefined1 *)(param_2 + 0x81);
      local_210 = local_ac;
      local_b0 = *(undefined1 *)(param_2 + 0x80);
      local_ae = *(undefined1 *)(param_2 + 0x82);
      pfVar21 = local_10c;
      local_ad = uVar14;
      local_9b = 1;
      pfVar26 = local_d0;
      local_21c = 3;
      puVar17 = (undefined1 *)(param_2 + 0x85);
      do {
        iVar15 = local_218;
        if ((int)uVar23 <= local_218) {
          iVar15 = uVar23 - 1;
        }
        iVar16 = iVar15 + local_228;
        if ((int)uVar23 <= iVar16) {
          iVar16 = iVar16 - uVar23;
        }
        pfVar21[-1] = local_1b0[iVar16 * 2];
        *pfVar21 = local_1b0[iVar16 * 2 + 1];
        pfVar21[1] = (float)param_4;
        pfVar26[-1] = local_90[iVar16 * 4];
        fVar2 = local_90[iVar16 * 4 + 2];
        *pfVar26 = local_90[iVar16 * 4 + 1];
        uVar11 = puVar17[-1];
        pfVar26[1] = fVar2;
        *local_210 = uVar11;
        puVar17[(int)&local_130 - param_2] = *puVar17;
        puVar17[local_1b4] = puVar17[1];
        puVar17[local_1e8] = *(undefined1 *)((int)local_1c4 + iVar16);
        local_210 = local_210 + 4;
        local_218 = local_218 + 1;
        pfVar21 = pfVar21 + 4;
        pfVar26 = pfVar26 + 3;
        puVar17 = puVar17 + 4;
        local_21c = local_21c + -1;
      } while (local_21c != 0);
      FUN_0040bef0();
      local_218 = iVar15;
    } while (iVar15 < (int)(uVar23 - 1));
  }
  return;
}
