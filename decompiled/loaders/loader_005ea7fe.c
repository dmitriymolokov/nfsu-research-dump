/* spd-match: far pct=2.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

int __cdecl FUN_005e9c6c();
int __cdecl FUN_005ed64b();

undefined8 *
FUN_005ea7fe(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  m375_xmm16 auVar18;
  m375_xmm16 auVar19;
  float fVar22;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar8 = -(uint)(0xc < param_6) & param_6 & 0xfffffffc;
  iVar7 = param_6 - uVar8;
  uVar8 = uVar8 >> 2;
  puVar9 = param_1;
  if (uVar8 != 0) {
    FUN_005e9c6c(param_5);
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      fVar14 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
      fVar6 = (float)(__int64)*param_3;
      uVar5 = *(undefined8 *)((int)param_3 + param_4 * 2);
      fVar10 = (float)(__int64)uVar5;
      fVar11 = (float)(__int64)((ulonglong)uVar5 >> 0x20);
      fVar12 = (float)(__int64)*(undefined8 *)((int)param_3 + param_4);
      fVar13 = (float)(__int64)((ulonglong)*(undefined8 *)((int)param_3 + param_4) >> 0x20);
      uVar5 = *(undefined8 *)(param_4 * 3 + (int)param_3);
      fVar15 = (float)(__int64)uVar5;
      fVar16 = (float)(__int64)((ulonglong)uVar5 >> 0x20);
      fVar1 = *(float *)(param_4 * 3 + 8 + (int)param_3);
      fVar2 = *(float *)((int)param_3 + param_4 * 2 + 8);
      fVar3 = *(float *)(param_4 + 8 + (int)param_3);
      fVar4 = *(float *)(param_3 + 0xc);
      (*(undefined4 *)&(auVar18)) = fVar6 * local_e0 + fVar14 * local_a0 + fVar4 * local_60;
      (*(undefined4 *)((char *)&(auVar18) + 4)) = fVar12 * fStack_dc + fVar13 * fStack_9c + fVar3 * fStack_5c;
      (*(undefined4 *)((char *)&(auVar18) + 8)) = fVar10 * fStack_d8 + fVar11 * fStack_98 + fVar2 * fStack_58;
      (*(undefined4 *)((char *)&(auVar18) + 12)) = fVar15 * fStack_d4 + fVar16 * fStack_94 + fVar1 * fStack_54;
      (*(undefined4 *)((char *)&(auVar19) + 4)) = (*(undefined4 *)((char *)&(auVar18) + 4)) + fStack_1c;
      (*(undefined4 *)&(auVar19)) = (*(undefined4 *)&(auVar18)) + local_20;
      (*(undefined4 *)((char *)&(auVar19) + 8)) = (*(undefined4 *)((char *)&(auVar18) + 8)) + fStack_18;
      (*(undefined4 *)((char *)&(auVar19) + 12)) = (*(undefined4 *)((char *)&(auVar18) + 12)) + fStack_14;
      auVar19 = rcpps(auVar18,auVar19);
      fVar17 = (*(undefined4 *)&(auVar19));
      fVar20 = (*(undefined4 *)((char *)&(auVar19) + 4));
      fVar21 = (*(undefined4 *)((char *)&(auVar19) + 8));
      fVar22 = (*(undefined4 *)((char *)&(auVar19) + 12));
      fVar17 = (fVar17 + fVar17) - fVar17 * ((*(undefined4 *)&(auVar18)) + local_20) * fVar17;
      fVar20 = (fVar20 + fVar20) - fVar20 * ((*(undefined4 *)((char *)&(auVar18) + 4)) + fStack_1c) * fVar20;
      fVar21 = (fVar21 + fVar21) - fVar21 * ((*(undefined4 *)((char *)&(auVar18) + 8)) + fStack_18) * fVar21;
      fVar22 = (fVar22 + fVar22) - fVar22 * ((*(undefined4 *)((char *)&(auVar18) + 12)) + fStack_14) * fVar22;
      *puVar9 = CONCAT44((fVar6 * local_100 + fVar14 * local_c0 + fVar4 * local_80 + local_40) *
                         fVar17,(fVar6 * local_110 + fVar14 * local_d0 + fVar4 * local_90 + local_50
                                ) * fVar17);
      *(ulonglong *)((int)puVar9 + param_2) =
           CONCAT44((fVar12 * fStack_fc + fVar13 * fStack_bc + fVar3 * fStack_7c + fStack_3c) *
                    fVar20,(fVar12 * fStack_10c + fVar13 * fStack_cc + fVar3 * fStack_8c + fStack_4c
                           ) * fVar20);
      *(float *)(puVar9 + 0xc) =
           (fVar6 * local_f0 + fVar14 * local_b0 + fVar4 * local_70 + local_30) * fVar17;
      *(float *)(param_2 + 8 + (int)puVar9) =
           (fVar12 * fStack_ec + fVar13 * fStack_ac + fVar3 * fStack_6c + fStack_2c) * fVar20;
      *(ulonglong *)((int)puVar9 + param_2 * 2) =
           CONCAT44((fVar10 * fStack_f8 + fVar11 * fStack_b8 + fVar2 * fStack_78 + fStack_38) *
                    fVar21,(fVar10 * fStack_108 + fVar11 * fStack_c8 + fVar2 * fStack_88 + fStack_48
                           ) * fVar21);
      *(ulonglong *)(param_2 * 3 + (int)puVar9) =
           CONCAT44((fVar15 * fStack_f4 + fVar16 * fStack_b4 + fVar1 * fStack_74 + fStack_34) *
                    fVar22,(fVar15 * fStack_104 + fVar16 * fStack_c4 + fVar1 * fStack_84 + fStack_44
                           ) * fVar22);
      *(float *)((int)puVar9 + param_2 * 2 + 8) =
           (fVar10 * fStack_e8 + fVar11 * fStack_a8 + fVar2 * fStack_68 + fStack_28) * fVar21;
      *(float *)(param_2 * 3 + 8 + (int)puVar9) =
           (fVar15 * fStack_e4 + fVar16 * fStack_a4 + fVar1 * fStack_64 + fStack_24) * fVar22;
      param_3 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar9 = (undefined8 *)((int)puVar9 + param_2 * 4);
    }
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_005ed64b(puVar9,param_3,param_5);
    param_3 = (undefined8 *)((int)param_3 + param_4);
    puVar9 = (undefined8 *)((int)puVar9 + param_2);
  }
  return param_1;
}
