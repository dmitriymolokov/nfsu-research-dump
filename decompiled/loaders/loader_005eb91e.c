/* spd-match: far pct=5.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

extern int _DAT_00709484;

undefined8 *
FUN_005eb91e(undefined8 *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  m375_xmm16 auVar3;
  float fVar6;
  float fVar7;
  m375_xmm16 auVar4;
  m375_xmm16 auVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM6_Dc;
  float in_XMM6_Dd;
  
  fVar12 = param_2[3];
  fVar1 = *(float *)(param_3 + 1);
  fVar2 = *(float *)(param_4 + 1);
  fVar8 = (float)(__int64)*param_3;
  fVar9 = (float)(__int64)((ulonglong)*param_3 >> 0x20);
  fVar14 = fVar9 * param_2[1];
  fVar10 = (float)(__int64)*param_4;
  fVar6 = *param_2 * fVar10;
  fVar11 = (float)(__int64)((ulonglong)*param_4 >> 0x20);
  fVar7 = param_2[1] * fVar11;
  fVar13 = fVar12 * 0.0 + fVar14;
  (*(undefined4 *)&(auVar5)) = param_2[2] * fVar2 + fVar6;
  (*(undefined4 *)((char *)&(auVar5) + 4)) = fVar12 * 0.0 + fVar7;
  (*(undefined4 *)((char *)&(auVar5) + 8)) = fVar6 + in_XMM6_Dc;
  (*(undefined4 *)((char *)&(auVar5) + 12)) = fVar7 + in_XMM6_Dd;
  fVar6 = fVar1 * param_2[2] + fVar8 * *param_2 + fVar14;
  (*(m375_ov12 *)((char *)&(auVar4) + 4)) = (*(m375_ov12 *)((char *)&(auVar5) + 4));
  (*(undefined4 *)&(auVar4)) = (*(undefined4 *)&(auVar5)) + fVar7;
  fVar7 = fVar6 - (*(undefined4 *)&(auVar4));
  if (fVar7 == _DAT_00709484) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    (*(undefined4 *)((char *)&(auVar3) + 4)) = fVar14;
    (*(undefined4 *)&(auVar3)) = fVar7;
    (*(undefined4 *)((char *)&(auVar3) + 8)) = fVar13;
    (*(undefined4 *)((char *)&(auVar3) + 12)) = fVar13;
    auVar5 = rcpss(auVar4,auVar3);
    fVar13 = (*(undefined4 *)&(auVar5));
    fVar12 = (fVar6 + fVar12) * ((fVar13 + fVar13) - fVar7 * fVar13 * fVar13);
    *param_1 = CONCAT44(fVar9 + fVar12 * (fVar11 - fVar9),fVar8 + fVar12 * (fVar10 - fVar8));
    *(float *)(param_1 + 1) = fVar1 + fVar12 * (fVar2 - fVar1);
  }
  return param_1;
}
