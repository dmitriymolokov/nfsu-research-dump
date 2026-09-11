/* spd-match: far pct=2.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif


void FUN_005eaa2f(int param_1,int param_2,float *param_3,undefined8 *param_4,int param_5,int param_6
                 ,int *param_7,int *param_8,uint param_9,int param_10,float *param_11,int param_12)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  m375_xmm16 auVar6;
  int iVar7;
  m375_xmm16 *pauVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  m375_xmm16 auVar25;
  m375_xmm16 auVar26;
  m375_xmm16 auVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *local_4b0;
  undefined4 *local_4ac;
  undefined4 *local_4a8;
  int local_4a4;
  float local_470;
  float fStack_46c;
  float fStack_468;
  float local_420 [263];
  
  local_4a8 = (undefined4 *)((int)param_3 + param_10);
  local_4ac = (undefined4 *)((int)param_4 + param_10);
  uVar12 = param_6 - param_10;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if (param_9 == 1) {
    if (param_5 != 0) {
      local_4b0 = (float *)(param_4 + 1);
      local_4a4 = param_5;
      do {
        fVar2 = *param_3;
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar3 = param_3[1];
        fVar4 = param_3[2];
        pfVar10 = (float *)*param_7;
        fVar19 = *pfVar10;
        fVar30 = pfVar10[1];
        fVar32 = pfVar10[2];
        fVar16 = *param_11;
        fVar18 = fVar29;
        fVar21 = fVar31;
        fVar23 = fVar33;
        while (-1 < (int)fVar16) {
          iVar7 = (int)*param_11 >> 1;
          fVar16 = *param_11 - (float)(iVar7 * 2);
          iVar7 = iVar7 * 0x40;
          pfVar10 = (float *)(param_1 + iVar7);
          (*(undefined4 *)&(auVar26)) = pfVar10[8] * fVar4 + pfVar10[0xc];
          (*(undefined4 *)((char *)&(auVar26) + 4)) = pfVar10[9] * fVar4 + pfVar10[0xd];
          (*(undefined4 *)((char *)&(auVar26) + 8)) = pfVar10[10] * fVar4 + pfVar10[0xe];
          (*(undefined4 *)((char *)&(auVar26) + 12)) = pfVar10[0xb] * fVar4 + pfVar10[0xf];
          fVar17 = *pfVar10 * fVar2 + pfVar10[4] * fVar3 + (*(undefined4 *)&(auVar26));
          fVar20 = pfVar10[1] * fVar2 + pfVar10[5] * fVar3 + (*(undefined4 *)((char *)&(auVar26) + 4));
          fVar22 = pfVar10[2] * fVar2 + pfVar10[6] * fVar3 + (*(undefined4 *)((char *)&(auVar26) + 8));
          fVar24 = pfVar10[3] * fVar2 + pfVar10[7] * fVar3 + (*(undefined4 *)((char *)&(auVar26) + 12));
          (*(undefined4 *)((char *)&(auVar6) + 4)) = fVar20;
          (*(undefined4 *)&(auVar6)) = fVar17;
          (*(undefined4 *)((char *)&(auVar6) + 8)) = fVar22;
          (*(undefined4 *)((char *)&(auVar6) + 12)) = fVar24;
          auVar27 = rcpps(auVar26,auVar6);
          fVar28 = (*(undefined4 *)((char *)&(auVar27) + 12));
          fVar24 = (fVar28 + fVar28) - fVar28 * fVar24 * fVar28;
          fVar29 = fVar29 + fVar17 * fVar16 * fVar24;
          fVar31 = fVar31 + fVar20 * fVar16 * fVar24;
          fVar33 = fVar33 + fVar22 * fVar16 * fVar24;
          pfVar10 = (float *)(iVar7 + param_2);
          param_11 = param_11 + 1;
          fVar18 = fVar18 + (fVar19 * *pfVar10 + fVar30 * pfVar10[4] + fVar32 * pfVar10[8]) * fVar16
          ;
          fVar21 = fVar21 + (fVar19 * pfVar10[1] + fVar30 * pfVar10[5] + fVar32 * pfVar10[9]) *
                            fVar16;
          fVar23 = fVar23 + (fVar19 * pfVar10[2] + fVar30 * pfVar10[6] + fVar32 * pfVar10[10]) *
                            fVar16;
          fVar16 = *param_11;
        }
        if (param_12 == 0) {
          *param_4 = CONCAT44(fVar31,fVar29);
          *local_4b0 = fVar33;
          puVar5 = (undefined8 *)*param_8;
          *puVar5 = CONCAT44(fVar21,fVar18);
          *(float *)(puVar5 + 1) = fVar23;
          puVar13 = local_4a8;
          puVar15 = local_4ac;
          for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
        }
        else {
          puVar13 = local_4a8;
          puVar15 = local_4ac;
          for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          *param_4 = CONCAT44(fVar31,fVar29);
          *local_4b0 = fVar33;
          puVar5 = (undefined8 *)*param_8;
          *puVar5 = CONCAT44(fVar21,fVar18);
          *(float *)(puVar5 + 1) = fVar23;
        }
        *param_8 = *param_8 + param_6;
        local_4ac = (undefined4 *)((int)local_4ac + param_6);
        local_4a8 = (undefined4 *)((int)local_4a8 + param_6);
        param_4 = (undefined8 *)((int)param_4 + param_6);
        local_4b0 = (float *)((int)local_4b0 + param_6);
        param_3 = (float *)((int)param_3 + param_6);
        *param_7 = *param_7 + param_6;
        param_11 = param_11 + 1;
        local_4a4 = local_4a4 + -1;
      } while (local_4a4 != 0);
    }
  }
  else if (param_5 != 0) {
    local_4b0 = (float *)(param_4 + 1);
    local_470 = 0.0;
    fStack_46c = 0.0;
    fStack_468 = 0.0;
    local_4a4 = param_5;
    do {
      fVar2 = *param_3;
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      if (param_9 != 0) {
        local_420[0] = 0.0;
        local_420[1] = 0.0;
        local_420[2] = 0.0;
        local_420[3] = 0.0;
        pfVar10 = local_420;
        pfVar14 = local_420 + 4;
        for (uVar11 = param_9 * 0x10 - 0xd >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pfVar14 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar14 = pfVar14 + 1;
        }
      }
      fVar19 = *param_11;
      fVar30 = local_470;
      fVar32 = fStack_46c;
      fVar16 = fStack_468;
      while (-1 < (int)fVar19) {
        iVar7 = (int)*param_11 >> 1;
        fVar19 = *param_11 - (float)(iVar7 * 2);
        iVar7 = iVar7 * 0x40;
        pfVar10 = (float *)(param_1 + iVar7);
        (*(undefined4 *)&(auVar25)) = pfVar10[8] * fVar4 + pfVar10[0xc];
        (*(undefined4 *)((char *)&(auVar25) + 4)) = pfVar10[9] * fVar4 + pfVar10[0xd];
        (*(undefined4 *)((char *)&(auVar25) + 8)) = pfVar10[10] * fVar4 + pfVar10[0xe];
        (*(undefined4 *)((char *)&(auVar25) + 12)) = pfVar10[0xb] * fVar4 + pfVar10[0xf];
        fVar29 = *pfVar10 * fVar2 + pfVar10[4] * fVar3 + (*(undefined4 *)&(auVar25));
        fVar31 = pfVar10[1] * fVar2 + pfVar10[5] * fVar3 + (*(undefined4 *)((char *)&(auVar25) + 4));
        fVar33 = pfVar10[2] * fVar2 + pfVar10[6] * fVar3 + (*(undefined4 *)((char *)&(auVar25) + 8));
        fVar18 = pfVar10[3] * fVar2 + pfVar10[7] * fVar3 + (*(undefined4 *)((char *)&(auVar25) + 12));
        (*(undefined4 *)((char *)&(auVar27) + 4)) = fVar31;
        (*(undefined4 *)&(auVar27)) = fVar29;
        (*(undefined4 *)((char *)&(auVar27) + 8)) = fVar33;
        (*(undefined4 *)((char *)&(auVar27) + 12)) = fVar18;
        auVar27 = rcpps(auVar25,auVar27);
        fVar21 = (*(undefined4 *)((char *)&(auVar27) + 12));
        fVar18 = (fVar21 + fVar21) - fVar21 * fVar18 * fVar21;
        pauVar8 = (m375_xmm16 *)(iVar7 + param_2);
        uVar11 = 0;
        fVar30 = fVar30 + fVar29 * fVar19 * fVar18;
        fVar32 = fVar32 + fVar31 * fVar19 * fVar18;
        fVar16 = fVar16 + fVar33 * fVar19 * fVar18;
        if (param_9 != 0) {
          fVar29 = (*(float *)&pauVar8[2]);
          fVar31 = (*(float *)((char *)&pauVar8[2] + 4));
          fVar33 = (*(float *)((char *)&pauVar8[2] + 8));
          fVar18 = (*(float *)((char *)&pauVar8[2] + 0xc));
          auVar27 = *pauVar8;
          fVar21 = (*(float *)&pauVar8[1]);
          fVar23 = (*(float *)((char *)&pauVar8[1] + 4));
          fVar17 = (*(float *)((char *)&pauVar8[1] + 8));
          fVar20 = (*(float *)((char *)&pauVar8[1] + 0xc));
          pfVar10 = local_420;
          do {
            pfVar14 = (float *)param_7[uVar11];
            fVar22 = pfVar14[2];
            fVar24 = pfVar14[1];
            fVar28 = *pfVar14;
            *pfVar10 = *pfVar10 +
                       (fVar28 * (*(undefined4 *)&(auVar27)) + fVar24 * fVar21 + fVar22 * fVar29) * fVar19;
            pfVar10[1] = pfVar10[1] +
                         (fVar28 * (*(undefined4 *)((char *)&(auVar27) + 4)) + fVar24 * fVar23 + fVar22 * fVar31) * fVar19;
            pfVar10[2] = pfVar10[2] +
                         (fVar28 * (*(undefined4 *)((char *)&(auVar27) + 8)) + fVar24 * fVar17 + fVar22 * fVar33) * fVar19;
            pfVar10[3] = pfVar10[3] +
                         (fVar28 * (*(undefined4 *)((char *)&(auVar27) + 12)) + fVar24 * fVar20 + fVar22 * fVar18) * fVar19;
            uVar11 = uVar11 + 1;
            pfVar10 = pfVar10 + 4;
          } while (uVar11 < param_9);
        }
        param_11 = param_11 + 1;
        fVar19 = *param_11;
      }
      if (param_12 == 0) {
        *param_4 = CONCAT44(fVar32,fVar30);
        *local_4b0 = fVar16;
        if (param_9 != 0) {
          pauVar8 = (m375_xmm16 *)local_420;
          piVar9 = param_8;
          uVar11 = param_9;
          do {
            puVar5 = (undefined8 *)*piVar9;
            auVar27 = *pauVar8;
            *puVar5 = (*(undefined8 *)&(auVar27));
            *(int *)(puVar5 + 1) = (*(undefined4 *)((char *)&(auVar27) + 8));
            *piVar9 = *piVar9 + param_6;
            piVar1 = (int *)((int)piVar9 + ((int)param_7 - (int)param_8));
            *piVar1 = *piVar1 + param_6;
            pauVar8 = pauVar8 + 1;
            piVar9 = piVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar13 = local_4a8;
        puVar15 = local_4ac;
        for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
      }
      else {
        puVar13 = local_4a8;
        puVar15 = local_4ac;
        for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        *param_4 = CONCAT44(fVar32,fVar30);
        *local_4b0 = fVar16;
        if (param_9 != 0) {
          pauVar8 = (m375_xmm16 *)local_420;
          piVar9 = param_8;
          uVar11 = param_9;
          do {
            puVar5 = (undefined8 *)*piVar9;
            auVar27 = *pauVar8;
            *puVar5 = (*(undefined8 *)&(auVar27));
            *(int *)(puVar5 + 1) = (*(undefined4 *)((char *)&(auVar27) + 8));
            *piVar9 = *piVar9 + param_6;
            piVar1 = (int *)(((int)param_7 - (int)param_8) + (int)piVar9);
            *piVar1 = *piVar1 + param_6;
            pauVar8 = pauVar8 + 1;
            piVar9 = piVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      local_4ac = (undefined4 *)((int)local_4ac + param_6);
      local_4a8 = (undefined4 *)((int)local_4a8 + param_6);
      param_4 = (undefined8 *)((int)param_4 + param_6);
      local_4b0 = (float *)((int)local_4b0 + param_6);
      param_11 = param_11 + 1;
      param_3 = (float *)((int)param_3 + param_6);
      local_4a4 = local_4a4 + -1;
    } while (local_4a4 != 0);
  }
  return;
}
