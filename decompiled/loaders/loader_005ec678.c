/* spd-match: far pct=2.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_005e9c6c();
int __cdecl FUN_005eb251();

undefined8 *
FUN_005ec678(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
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
  
  uVar7 = -(uint)(10 < param_6) & param_6 & 0xfffffffc;
  iVar6 = param_6 - uVar7;
  uVar7 = uVar7 >> 2;
  puVar8 = param_1;
  if (uVar7 != 0) {
    FUN_005e9c6c(param_5);
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      fVar13 = (float)(__int64)*param_3;
      fVar14 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
      fVar16 = (float)(__int64)*(undefined8 *)((int)param_3 + param_4);
      fVar17 = (float)(__int64)((ulonglong)*(undefined8 *)((int)param_3 + param_4) >> 0x20);
      uVar1 = *(undefined8 *)((int)param_3 + param_4 * 2);
      fVar19 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      fVar3 = (float)(__int64)uVar1;
      uVar1 = *(undefined8 *)(param_4 * 3 + (int)param_3);
      fVar11 = (float)(__int64)uVar1;
      fVar12 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      fVar15 = (float)(__int64)((ulonglong)param_3[0x10] >> 0x20);
      uVar1 = *(undefined8 *)(param_4 + 8 + (int)param_3);
      fVar18 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      uVar2 = *(undefined8 *)((int)param_3 + param_4 * 2 + 8);
      fVar9 = (float)(__int64)uVar2;
      fVar10 = (float)(__int64)((ulonglong)uVar2 >> 0x20);
      fVar4 = (float)(__int64)param_3[0x10];
      fVar5 = (float)(__int64)uVar1;
      uVar1 = *(undefined8 *)(param_4 * 3 + 8 + (int)param_3);
      fVar20 = (float)(__int64)uVar1;
      fVar21 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      *puVar8 = CONCAT44(fVar13 * local_100 + fVar14 * local_c0 + fVar4 * local_80 +
                         fVar15 * local_40,
                         fVar13 * local_110 + fVar14 * local_d0 + fVar4 * local_90 +
                         fVar15 * local_50);
      puVar8[0x10] = CONCAT44(fVar13 * local_e0 + fVar14 * local_a0 + fVar4 * local_60 +
                              fVar15 * local_20,
                              fVar13 * local_f0 + fVar14 * local_b0 + fVar4 * local_70 +
                              fVar15 * local_30);
      *(ulonglong *)((int)puVar8 + param_2) =
           CONCAT44(fVar16 * fStack_fc + fVar17 * fStack_bc + fVar5 * fStack_7c + fVar18 * fStack_3c
                    ,fVar16 * fStack_10c + fVar17 * fStack_cc + fVar5 * fStack_8c +
                     fVar18 * fStack_4c);
      *(ulonglong *)(param_2 + 8 + (int)puVar8) =
           CONCAT44(fVar16 * fStack_dc + fVar17 * fStack_9c + fVar5 * fStack_5c + fVar18 * fStack_1c
                    ,fVar16 * fStack_ec + fVar17 * fStack_ac + fVar5 * fStack_6c +
                     fVar18 * fStack_2c);
      *(ulonglong *)((int)puVar8 + param_2 * 2) =
           CONCAT44(fVar3 * fStack_f8 + fVar19 * fStack_b8 + fVar9 * fStack_78 + fVar10 * fStack_38,
                    fVar3 * fStack_108 + fVar19 * fStack_c8 + fVar9 * fStack_88 + fVar10 * fStack_48
                   );
      *(ulonglong *)((int)puVar8 + param_2 * 2 + 8) =
           CONCAT44(fVar3 * fStack_d8 + fVar19 * fStack_98 + fVar9 * fStack_58 + fVar10 * fStack_18,
                    fVar3 * fStack_e8 + fVar19 * fStack_a8 + fVar9 * fStack_68 + fVar10 * fStack_28)
      ;
      *(ulonglong *)(param_2 * 3 + (int)puVar8) =
           CONCAT44(fVar11 * fStack_f4 + fVar12 * fStack_b4 + fVar20 * fStack_74 +
                    fVar21 * fStack_34,
                    fVar11 * fStack_104 + fVar12 * fStack_c4 + fVar20 * fStack_84 +
                    fVar21 * fStack_44);
      *(ulonglong *)(param_2 * 3 + 8 + (int)puVar8) =
           CONCAT44(fVar11 * fStack_d4 + fVar12 * fStack_94 + fVar20 * fStack_54 +
                    fVar21 * fStack_14,
                    fVar11 * fStack_e4 + fVar12 * fStack_a4 + fVar20 * fStack_64 +
                    fVar21 * fStack_24);
      param_3 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar8 = (undefined8 *)((int)puVar8 + param_2 * 4);
    }
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_005eb251(puVar8,param_3,param_5);
    param_3 = (undefined8 *)((int)param_3 + param_4);
    puVar8 = (undefined8 *)((int)puVar8 + param_2);
  }
  return param_1;
}
