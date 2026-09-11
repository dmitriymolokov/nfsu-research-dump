/* spd-match: far pct=3.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_08/attempt4_recipe_c2520_full */
#include "ghidra_compat.h"

int __cdecl FUN_005e9c6c();

undefined8 *
FUN_005ec568(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5,
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
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  uVar4 = -(uint)(10 < param_6) & param_6 & 0xfffffffc;
  iVar3 = param_6 - uVar4;
  uVar4 = uVar4 >> 2;
  puVar5 = param_1;
  if (uVar4 != 0) {
    FUN_005e9c6c(param_5);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      fVar6 = (float)(__int64)*param_3;
      fVar7 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
      fVar8 = (float)(__int64)*(undefined8 *)((int)param_3 + param_4);
      fVar9 = (float)(__int64)((ulonglong)*(undefined8 *)((int)param_3 + param_4) >> 0x20);
      uVar1 = *(undefined8 *)((int)param_3 + param_4 * 2);
      uVar2 = *(undefined8 *)(param_4 * 3 + (int)param_3);
      fVar10 = (float)(__int64)uVar1;
      fVar11 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      fVar12 = (float)(__int64)uVar2;
      fVar13 = (float)(__int64)((ulonglong)uVar2 >> 0x20);
      *puVar5 = CONCAT44(fVar6 * local_100 + fVar7 * local_c0,fVar6 * local_110 + fVar7 * local_d0);
      *(ulonglong *)((int)puVar5 + param_2) =
           CONCAT44(fVar8 * fStack_fc + fVar9 * fStack_bc,fVar8 * fStack_10c + fVar9 * fStack_cc);
      *(ulonglong *)((int)puVar5 + param_2 * 2) =
           CONCAT44(fVar10 * fStack_f8 + fVar11 * fStack_b8,fVar10 * fStack_108 + fVar11 * fStack_c8
                   );
      *(ulonglong *)(param_2 * 3 + (int)puVar5) =
           CONCAT44(fVar12 * fStack_f4 + fVar13 * fStack_b4,fVar12 * fStack_104 + fVar13 * fStack_c4
                   );
      param_3 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar5 = (undefined8 *)((int)puVar5 + param_2 * 4);
    }
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_005ec568(puVar5,param_3,param_5,0,0,0);
    param_3 = (undefined8 *)((int)param_3 + param_4);
    puVar5 = (undefined8 *)((int)puVar5 + param_2);
  }
  return param_1;
}
