/* spd-match: far pct=2.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
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

undefined8 *
FUN_005ec402(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5,
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
  float fVar13;
  float fVar14;
  m375_xmm16 auVar11;
  m375_xmm16 auVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
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
      fVar6 = (float)(__int64)*param_3;
      fVar7 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
      fVar8 = (float)(__int64)*(undefined8 *)((int)param_3 + param_4);
      fVar9 = (float)(__int64)((ulonglong)*(undefined8 *)((int)param_3 + param_4) >> 0x20);
      uVar1 = *(undefined8 *)((int)param_3 + param_4 * 2);
      uVar2 = *(undefined8 *)(param_4 * 3 + (int)param_3);
      fVar16 = (float)(__int64)uVar1;
      fVar17 = (float)(__int64)((ulonglong)uVar1 >> 0x20);
      fVar18 = (float)(__int64)uVar2;
      fVar19 = (float)(__int64)((ulonglong)uVar2 >> 0x20);
      (*(undefined4 *)&(auVar11)) = fVar6 * local_e0 + fVar7 * local_a0;
      (*(undefined4 *)((char *)&(auVar11) + 4)) = fVar8 * fStack_dc + fVar9 * fStack_9c;
      (*(undefined4 *)((char *)&(auVar11) + 8)) = fVar16 * fStack_d8 + fVar17 * fStack_98;
      (*(undefined4 *)((char *)&(auVar11) + 12)) = fVar18 * fStack_d4 + fVar19 * fStack_94;
      (*(undefined4 *)((char *)&(auVar12) + 4)) = (*(undefined4 *)((char *)&(auVar11) + 4)) + fStack_1c;
      (*(undefined4 *)&(auVar12)) = (*(undefined4 *)&(auVar11)) + local_20;
      (*(undefined4 *)((char *)&(auVar12) + 8)) = (*(undefined4 *)((char *)&(auVar11) + 8)) + fStack_18;
      (*(undefined4 *)((char *)&(auVar12) + 12)) = (*(undefined4 *)((char *)&(auVar11) + 12)) + fStack_14;
      auVar12 = rcpps(auVar11,auVar12);
      fVar10 = (*(undefined4 *)&(auVar12));
      fVar13 = (*(undefined4 *)((char *)&(auVar12) + 4));
      fVar14 = (*(undefined4 *)((char *)&(auVar12) + 8));
      fVar15 = (*(undefined4 *)((char *)&(auVar12) + 12));
      fVar10 = (fVar10 + fVar10) - fVar10 * ((*(undefined4 *)&(auVar11)) + local_20) * fVar10;
      fVar13 = (fVar13 + fVar13) - fVar13 * ((*(undefined4 *)((char *)&(auVar11) + 4)) + fStack_1c) * fVar13;
      fVar14 = (fVar14 + fVar14) - fVar14 * ((*(undefined4 *)((char *)&(auVar11) + 8)) + fStack_18) * fVar14;
      fVar15 = (fVar15 + fVar15) - fVar15 * ((*(undefined4 *)((char *)&(auVar11) + 12)) + fStack_14) * fVar15;
      *puVar5 = CONCAT44((fVar6 * local_100 + fVar7 * local_c0 + local_40) * fVar10,
                         (fVar6 * local_110 + fVar7 * local_d0 + local_50) * fVar10);
      *(ulonglong *)((int)puVar5 + param_2) =
           CONCAT44((fVar8 * fStack_fc + fVar9 * fStack_bc + fStack_3c) * fVar13,
                    (fVar8 * fStack_10c + fVar9 * fStack_cc + fStack_4c) * fVar13);
      *(ulonglong *)((int)puVar5 + param_2 * 2) =
           CONCAT44((fVar16 * fStack_f8 + fVar17 * fStack_b8 + fStack_38) * fVar14,
                    (fVar16 * fStack_108 + fVar17 * fStack_c8 + fStack_48) * fVar14);
      *(ulonglong *)(param_2 * 3 + (int)puVar5) =
           CONCAT44((fVar18 * fStack_f4 + fVar19 * fStack_b4 + fStack_34) * fVar15,
                    (fVar18 * fStack_104 + fVar19 * fStack_c4 + fStack_44) * fVar15);
      param_3 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar5 = (undefined8 *)((int)puVar5 + param_2 * 4);
    }
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_005ec402(puVar5, param_3, param_5, 0, 0, 0);
    param_3 = (undefined8 *)((int)param_3 + param_4);
    puVar5 = (undefined8 *)((int)puVar5 + param_2);
  }
  return param_1;
}
