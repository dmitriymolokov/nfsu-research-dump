/* spd-match: far pct=3.77 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_08/attempt4_recipe_c2520_full */
#include "ghidra_compat.h"

int __cdecl FUN_005e9c6c();

undefined8 *
FUN_005ec274(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  
  uVar4 = -(uint)(10 < param_6) & param_6 & 0xfffffffc;
  iVar3 = param_6 - uVar4;
  uVar4 = uVar4 >> 2;
  puVar5 = param_1;
  if (uVar4 != 0) {
    FUN_005e9c6c(param_5);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar1 = *(undefined8 *)((int)param_3 + param_4 * 2);
      fVar6 = (float)(__int64)*param_3;
      fVar7 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
      fVar8 = (float)(__int64)*(undefined8 *)((int)param_3 + param_4);
      fVar9 = (float)(__int64)((ulonglong)*(undefined8 *)((int)param_3 + param_4) >> 0x20);
      uVar2 = *(undefined8 *)(param_4 * 3 + (int)param_3);
      fVar10 = (float)(__int64)uVar1;
      fVar11 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      fVar12 = (float)(__int64)uVar2;
      fVar13 = (float)(__int64)((ulonglong)uVar2 >> 0x20);
      *puVar5 = CONCAT44(fVar6 * local_100 + fVar7 * local_c0 + local_40,
                         fVar6 * local_110 + fVar7 * local_d0 + local_50);
      puVar5[0x10] = CONCAT44(fVar6 * local_e0 + fVar7 * local_a0 + local_20,
                              fVar6 * local_f0 + fVar7 * local_b0 + local_30);
      *(ulonglong *)((int)puVar5 + param_2) =
           CONCAT44(fVar8 * fStack_fc + fVar9 * fStack_bc + fStack_3c,
                    fVar8 * fStack_10c + fVar9 * fStack_cc + fStack_4c);
      *(ulonglong *)(param_2 + 8 + (int)puVar5) =
           CONCAT44(fVar8 * fStack_dc + fVar9 * fStack_9c + fStack_1c,
                    fVar8 * fStack_ec + fVar9 * fStack_ac + fStack_2c);
      *(ulonglong *)((int)puVar5 + param_2 * 2) =
           CONCAT44(fVar10 * fStack_f8 + fVar11 * fStack_b8 + fStack_38,
                    fVar10 * fStack_108 + fVar11 * fStack_c8 + fStack_48);
      *(ulonglong *)((int)puVar5 + param_2 * 2 + 8) =
           CONCAT44(fVar10 * fStack_d8 + fVar11 * fStack_98 + fStack_18,
                    fVar10 * fStack_e8 + fVar11 * fStack_a8 + fStack_28);
      *(ulonglong *)(param_2 * 3 + (int)puVar5) =
           CONCAT44(fVar12 * fStack_f4 + fVar13 * fStack_b4 + fStack_34,
                    fVar12 * fStack_104 + fVar13 * fStack_c4 + fStack_44);
      *(ulonglong *)(param_2 * 3 + 8 + (int)puVar5) =
           CONCAT44(fVar12 * fStack_d4 + fVar13 * fStack_94 + fStack_14,
                    fVar12 * fStack_e4 + fVar13 * fStack_a4 + fStack_24);
      param_3 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar5 = (undefined8 *)((int)puVar5 + param_2 * 4);
    }
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_005ec274(puVar5,param_3,param_5,0,0,0);
    param_3 = (undefined8 *)((int)param_3 + param_4);
    puVar5 = (undefined8 *)((int)puVar5 + param_2);
  }
  return param_1;
}
