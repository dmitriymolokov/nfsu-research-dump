/* spd-match: far pct=1.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);


float * FUN_005ecfae(float *param_1,float *param_2,undefined8 *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ghidra_m128 auVar14;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  fVar10 = (float)(__int64)*param_3;
  fVar15 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
  fVar18 = (float)(__int64)param_3[2];
  fVar20 = (float)(__int64)((ulonglong)param_3[2] >> 0x20);
  fVar6 = (float)(__int64)param_3[4];
  fVar7 = (float)(__int64)((ulonglong)param_3[4] >> 0x20);
  fVar8 = (float)(__int64)param_3[6];
  fVar9 = (float)(__int64)((ulonglong)param_3[6] >> 0x20);
  fVar11 = (float)(__int64)param_3[1];
  fVar16 = (float)(__int64)((ulonglong)param_3[1] >> 0x20);
  fVar28 = (float)(__int64)param_3[3];
  fVar32 = (float)(__int64)((ulonglong)param_3[3] >> 0x20);
  fVar12 = (float)(__int64)param_3[5];
  fVar17 = (float)(__int64)((ulonglong)param_3[5] >> 0x20);
  fVar19 = (float)(__int64)param_3[7];
  fVar21 = (float)(__int64)((ulonglong)param_3[7] >> 0x20);
  fVar22 = fVar11 * fVar17;
  fVar25 = fVar28 * fVar21;
  fVar29 = fVar12 * fVar16;
  fVar33 = fVar19 * fVar32;
  fVar36 = fVar7 * fVar11;
  fVar40 = fVar9 * fVar28;
  fVar44 = fVar15 * fVar12;
  fVar48 = fVar20 * fVar19;
  fVar37 = fVar15 * fVar17;
  fVar41 = fVar20 * fVar21;
  fVar45 = fVar7 * fVar16;
  fVar49 = fVar9 * fVar32;
  fVar23 = (fVar12 * fVar41 +
           ((fVar17 * fVar40 + (fVar7 * fVar33 - fVar7 * fVar25)) - fVar17 * fVar48)) -
           fVar12 * fVar49;
  fVar26 = (fVar19 * fVar37 +
           ((fVar21 * fVar36 + (fVar9 * fVar29 - fVar9 * fVar22)) - fVar21 * fVar44)) -
           fVar19 * fVar45;
  fVar30 = (fVar11 * fVar49 +
           ((fVar16 * fVar48 + (fVar15 * fVar25 - fVar15 * fVar33)) - fVar16 * fVar40)) -
           fVar11 * fVar41;
  fVar34 = (fVar28 * fVar45 +
           ((fVar32 * fVar44 + (fVar20 * fVar22 - fVar20 * fVar29)) - fVar32 * fVar36)) -
           fVar28 * fVar37;
  fVar38 = fVar10 * fVar7;
  fVar42 = fVar18 * fVar9;
  fVar46 = fVar6 * fVar15;
  fVar50 = fVar8 * fVar20;
  fVar39 = fVar10 * fVar17;
  fVar43 = fVar18 * fVar21;
  fVar47 = fVar6 * fVar16;
  fVar51 = fVar8 * fVar32;
  fVar1 = fVar10 * fVar23;
  fVar3 = fVar18 * fVar26;
  fVar4 = fVar6 * fVar30;
  fVar5 = fVar8 * fVar34;
  fVar24 = fVar10 * fVar12;
  fVar27 = fVar18 * fVar19;
  fVar31 = fVar6 * fVar11;
  fVar35 = fVar8 * fVar28;
  fVar13 = fVar4 + fVar1;
  fVar2 = fVar5 + fVar3 + fVar13;
  if (fVar2 == 0.0) {
    param_1 = (float *)0x0;
  }
  else {
    if (param_2 != (float *)0x0) {
      *param_2 = fVar2;
    }
    (*(float *)((unsigned char *)&(auVar14) + 4)) = fVar13;
    (*(float *)&(auVar14)) = fVar2;
    (*(float *)((unsigned char *)&(auVar14) + 8)) = fVar3 + fVar5;
    (*(float *)((unsigned char *)&(auVar14) + 12)) = fVar1 + fVar4;
    auVar14 = rcpss(ghidra_xmm_zero(),auVar14);
    fVar1 = (*(float *)&(auVar14));
    fVar1 = (fVar1 + fVar1) - fVar2 * fVar1 * fVar1;
    *param_1 = fVar1 * fVar23;
    param_1[1] = fVar1 * fVar26;
    param_1[2] = fVar1 * fVar30;
    param_1[3] = fVar1 * fVar34;
    param_1[4] = fVar1 * ((fVar17 * fVar27 +
                          fVar12 * fVar51 + ((fVar6 * fVar25 - fVar6 * fVar33) - fVar12 * fVar43)) -
                         fVar17 * fVar35);
    param_1[5] = fVar1 * ((fVar21 * fVar24 +
                          fVar19 * fVar47 + ((fVar8 * fVar22 - fVar8 * fVar29) - fVar19 * fVar39)) -
                         fVar21 * fVar31);
    param_1[6] = fVar1 * ((fVar16 * fVar35 +
                          fVar11 * fVar43 + ((fVar10 * fVar33 - fVar10 * fVar25) - fVar11 * fVar51))
                         - fVar16 * fVar27);
    param_1[7] = fVar1 * ((fVar32 * fVar31 +
                          fVar28 * fVar39 + ((fVar18 * fVar29 - fVar18 * fVar22) - fVar28 * fVar47))
                         - fVar32 * fVar24);
    param_1[8] = fVar1 * ((fVar7 * fVar43 +
                          (fVar17 * fVar50 - (fVar17 * fVar42 + (fVar6 * fVar41 - fVar6 * fVar49))))
                         - fVar7 * fVar51);
    param_1[9] = fVar1 * ((fVar9 * fVar39 +
                          (fVar21 * fVar46 - (fVar21 * fVar38 + (fVar8 * fVar37 - fVar8 * fVar45))))
                         - fVar9 * fVar47);
    param_1[10] = fVar1 * ((fVar15 * fVar51 +
                           (fVar16 * fVar42 -
                           (fVar16 * fVar50 + (fVar10 * fVar49 - fVar10 * fVar41)))) -
                          fVar15 * fVar43);
    param_1[0xb] = fVar1 * ((fVar20 * fVar47 +
                            (fVar32 * fVar38 -
                            (fVar32 * fVar46 + (fVar18 * fVar45 - fVar18 * fVar37)))) -
                           fVar20 * fVar39);
    *(ulonglong *)(param_1 + 0xc) =
         CONCAT44(fVar1 * (fVar9 * fVar31 +
                          (((fVar19 * fVar38 - (fVar8 * fVar36 - fVar8 * fVar44)) - fVar19 * fVar46)
                          - fVar9 * fVar24)),
                  fVar1 * (fVar7 * fVar35 +
                          (((fVar12 * fVar42 - (fVar6 * fVar40 - fVar6 * fVar48)) - fVar12 * fVar50)
                          - fVar7 * fVar27)));
    *(ulonglong *)(param_1 + 0xe) =
         CONCAT44(fVar1 * (fVar20 * fVar24 +
                          (((fVar28 * fVar46 - (fVar18 * fVar44 - fVar18 * fVar36)) -
                           fVar28 * fVar38) - fVar20 * fVar31)),
                  fVar1 * (fVar15 * fVar27 +
                          (((fVar11 * fVar50 - (fVar10 * fVar48 - fVar10 * fVar40)) -
                           fVar11 * fVar42) - fVar15 * fVar35)));
  }
  return param_1;
}
