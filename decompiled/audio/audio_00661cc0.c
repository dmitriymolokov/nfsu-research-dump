/* spd-match: far pct=5.45 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/batches/p0_11/h3_audio_recipe */
#include "ghidra_compat.h"

extern unsigned char *DAT_006eb0c0;
extern unsigned char *DAT_006eb0c8;
extern int DAT_006eb0e0;
extern int DAT_006eb100;
extern unsigned char *DAT_006eb110;
extern int _DAT_006eb070;
extern int _DAT_006eb080;
extern int _DAT_006eb084;
extern int _DAT_006eb088;
extern int _DAT_006eb08c;
extern int _DAT_006eb090;
extern int _DAT_006eb094;
extern int _DAT_006eb098;
extern int _DAT_006eb09c;
extern int _DAT_006eb0a0;
extern int _DAT_006eb0a4;
extern int _DAT_006eb0a8;
extern int _DAT_006eb0ac;
extern int _DAT_006eb0b0;
extern int _DAT_006eb0b4;
extern int _DAT_006eb0b8;
extern int _DAT_006eb0bc;
extern int _DAT_006eb0d0;
extern int _DAT_006eb0f0;
extern unsigned int fRam006eb074;
extern unsigned int fRam006eb078;
extern unsigned int fRam006eb07c;
extern unsigned int fRam006eb0d4;
extern unsigned int fRam006eb0d8;
extern unsigned int fRam006eb0dc;
extern unsigned int fRam006eb0e4;
extern unsigned int fRam006eb0e8;
extern unsigned int fRam006eb0ec;
extern unsigned int fRam006eb0f4;
extern unsigned int fRam006eb0f8;
extern unsigned int fRam006eb0fc;
extern unsigned int fRam006eb104;
extern unsigned int fRam006eb108;
extern unsigned int fRam006eb10c;

undefined8
FUN_00661cc0(uint param_1,int param_2,float *param_3,int *param_4,uint *param_5,int param_6,
            uint param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack_28;
  
  DAT_006eb110 = &iStack_28;
  uVar3 = *param_5;
  iVar4 = *param_4;
  for (; 3 < (int)param_1; param_1 = param_1 - 4) {
    (*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 0)) = uVar3 >> 1;
    (*(float *)&_DAT_006eb080) = *(float *)(param_2 + -4 + iVar4 * 4);
    (*(float *)&_DAT_006eb090) = *(float *)(param_2 + iVar4 * 4);
    (*(float *)&_DAT_006eb0a0) = *(float *)(param_2 + 4 + iVar4 * 4);
    (*(float *)&_DAT_006eb0b0) = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_006eb0c0 * 2,param_7);
    (*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 4)) = (uint)DAT_006eb0c0 * 2 + param_7 >> 1;
    (*(float *)&_DAT_006eb084) = *(float *)(param_2 + -4 + iVar4 * 4);
    (*(float *)&_DAT_006eb094) = *(float *)(param_2 + iVar4 * 4);
    (*(float *)&_DAT_006eb0a4) = *(float *)(param_2 + 4 + iVar4 * 4);
    (*(float *)&_DAT_006eb0b4) = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 4)) * 2,param_7);
    (*(unsigned int *)((unsigned char *)&DAT_006eb0c8 + 0)) = (*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 4)) * 2 + param_7 >> 1;
    (*(float *)&_DAT_006eb088) = *(float *)(param_2 + -4 + iVar4 * 4);
    (*(float *)&_DAT_006eb098) = *(float *)(param_2 + iVar4 * 4);
    (*(float *)&_DAT_006eb0a8) = *(float *)(param_2 + 4 + iVar4 * 4);
    (*(float *)&_DAT_006eb0b8) = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_006eb0c8 * 2,param_7);
    (*(unsigned int *)((unsigned char *)&DAT_006eb0c8 + 4)) = (uint)DAT_006eb0c8 * 2 + param_7 >> 1;
    (*(float *)&_DAT_006eb08c) = *(float *)(param_2 + -4 + iVar4 * 4);
    (*(float *)&_DAT_006eb09c) = *(float *)(param_2 + iVar4 * 4);
    uVar3 = (*(unsigned int *)((unsigned char *)&DAT_006eb0c8 + 4)) * 2 + param_7;
    (*(float *)&_DAT_006eb0ac) = *(float *)(param_2 + 4 + iVar4 * 4);
    (*(float *)&_DAT_006eb0bc) = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((*(unsigned int *)((unsigned char *)&DAT_006eb0c8 + 4)) * 2,param_7);
    fVar17 = (float)(uint)DAT_006eb0c0 * (*(float *)&_DAT_006eb070);
    fVar19 = (float)(*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 4)) * (*(float *)&fRam006eb074);
    fVar21 = (float)(uint)DAT_006eb0c8 * (*(float *)&fRam006eb078);
    fVar23 = (float)(*(unsigned int *)((unsigned char *)&DAT_006eb0c8 + 4)) * (*(float *)&fRam006eb07c);
    fVar8 = (*(float *)&fRam006eb0e4) * (*(float *)&_DAT_006eb0a4) + (*(float *)&_DAT_006eb084);
    fVar9 = (*(float *)&fRam006eb0e8) * (*(float *)&_DAT_006eb0a8) + (*(float *)&_DAT_006eb088);
    fVar10 = (*(float *)&fRam006eb0ec) * (*(float *)&_DAT_006eb0ac) + (*(float *)&_DAT_006eb08c);
    fVar11 = ((*(float *)&fRam006eb104) * (*(float *)&_DAT_006eb094) + (*(float *)&_DAT_006eb0b4)) * (*(float *)&fRam006eb0d4);
    fVar13 = ((*(float *)&fRam006eb108) * (*(float *)&_DAT_006eb098) + (*(float *)&_DAT_006eb0b8)) * (*(float *)&fRam006eb0d8);
    fVar15 = ((*(float *)&fRam006eb10c) * (*(float *)&_DAT_006eb09c) + (*(float *)&_DAT_006eb0bc)) * (*(float *)&fRam006eb0dc);
    fVar12 = ((*(float *)&_DAT_006eb0a4) - (*(float *)&_DAT_006eb084)) * (*(float *)&fRam006eb0d4);
    fVar14 = ((*(float *)&_DAT_006eb0a8) - (*(float *)&_DAT_006eb088)) * (*(float *)&fRam006eb0d8);
    fVar16 = ((*(float *)&_DAT_006eb0ac) - (*(float *)&_DAT_006eb08c)) * (*(float *)&fRam006eb0dc);
    fVar18 = fVar17 * fVar17;
    fVar20 = fVar19 * fVar19;
    fVar22 = fVar21 * fVar21;
    fVar24 = fVar23 * fVar23;
    fVar5 = (*(float *)&_DAT_006eb094) +
            ((((*(float *)&_DAT_006eb094) - (*(float *)&_DAT_006eb0a4)) * (*(float *)&fRam006eb0f4) - (*(float *)&_DAT_006eb084)) + (*(float *)&_DAT_006eb0b4)) *
            (*(float *)&fRam006eb0d4) * fVar20 * fVar20;
    fVar6 = (*(float *)&_DAT_006eb098) +
            ((((*(float *)&_DAT_006eb098) - (*(float *)&_DAT_006eb0a8)) * (*(float *)&fRam006eb0f8) - (*(float *)&_DAT_006eb088)) + (*(float *)&_DAT_006eb0b8)) *
            (*(float *)&fRam006eb0d8) * fVar22 * fVar22;
    fVar7 = (*(float *)&_DAT_006eb09c) +
            ((((*(float *)&_DAT_006eb09c) - (*(float *)&_DAT_006eb0ac)) * (*(float *)&fRam006eb0fc) - (*(float *)&_DAT_006eb08c)) + (*(float *)&_DAT_006eb0bc)) *
            (*(float *)&fRam006eb0dc) * fVar24 * fVar24;
    *param_3 = (*(float *)&_DAT_006eb090) +
               ((((*(float *)&_DAT_006eb090) - (*(float *)&_DAT_006eb0a0)) * (*(float *)&_DAT_006eb0f0) - (*(float *)&_DAT_006eb080)) + (*(float *)&_DAT_006eb0b0)) *
               (*(float *)&_DAT_006eb0d0) * fVar18 * fVar18 +
               ((*(float *)&_DAT_006eb0a0) - (*(float *)&_DAT_006eb080)) * (*(float *)&_DAT_006eb0d0) * fVar17 +
               (((*(float *)&DAT_006eb0e0) * (*(float *)&_DAT_006eb0a0) + (*(float *)&_DAT_006eb080)) -
               ((*(float *)&DAT_006eb100) * (*(float *)&_DAT_006eb090) + (*(float *)&_DAT_006eb0b0)) * (*(float *)&_DAT_006eb0d0)) * fVar18;
    param_3[1] = fVar5 + fVar12 * fVar19 + (fVar8 - fVar11) * fVar20;
    param_3[2] = fVar6 + fVar14 * fVar21 + (fVar9 - fVar13) * fVar22;
    param_3[3] = fVar7 + fVar16 * fVar23 + (fVar10 - fVar15) * fVar24;
    param_3 = param_3 + 4;
  }
  for (; piVar2 = DAT_006eb110, (param_1 & 3) != 0; param_1 = param_1 - 1) {
    (*(unsigned int *)((unsigned char *)&DAT_006eb0c0 + 0)) = uVar3 >> 1;
    fVar5 = *(float *)(param_2 + -4 + iVar4 * 4);
    fVar6 = *(float *)(param_2 + iVar4 * 4);
    uVar3 = (uint)DAT_006eb0c0 * 2 + param_7;
    fVar7 = *(float *)(param_2 + 4 + iVar4 * 4);
    fVar8 = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_006eb0c0 * 2,param_7);
    fVar9 = (float)(uint)DAT_006eb0c0 * (*(float *)&_DAT_006eb070);
    fVar10 = fVar9 * fVar9;
    *param_3 = fVar6 + (((fVar6 - fVar7) * (*(float *)&_DAT_006eb0f0) - fVar5) + fVar8) * (*(float *)&_DAT_006eb0d0) *
                       fVar10 * fVar10 +
               (fVar7 - fVar5) * (*(float *)&_DAT_006eb0d0) * fVar9 +
               (((*(float *)&DAT_006eb0e0) * fVar7 + fVar5) - ((*(float *)&DAT_006eb100) * fVar6 + fVar8) * (*(float *)&_DAT_006eb0d0)) *
               fVar10;
    param_3 = param_3 + 1;
  }
  piVar1 = *(int **)(*DAT_006eb110 + 0x14);
  **(uint **)(*DAT_006eb110 + 0x18) = uVar3;
  *piVar1 = iVar4;
  return CONCAT44(piVar2[6],piVar2[8]);
}
