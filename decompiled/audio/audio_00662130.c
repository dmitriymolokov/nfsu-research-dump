/* spd-match: far pct=7.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00662130 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

extern int DAT_006eb180;
extern int DAT_006eb188;
extern int DAT_006eb190;
extern int DAT_006eb198;
extern int _DAT_006eb140;
extern int _DAT_006eb150;
extern int _DAT_006eb154;
extern int _DAT_006eb158;
extern int _DAT_006eb15c;
extern int _DAT_006eb160;
extern int _DAT_006eb164;
extern int _DAT_006eb168;
extern int _DAT_006eb16c;
extern int _DAT_006eb170;
extern int _DAT_006eb174;
extern int _DAT_006eb178;
extern int _DAT_006eb17c;
extern unsigned int fRam006eb144;
extern unsigned int fRam006eb148;
extern unsigned int fRam006eb14c;
undefined8 __fastcall FUN_00662130(undefined4 val, undefined4 param_1, undefined4 param_2, uint param_3, int param_4, float *param_5, int *param_6, uint *param_7, int param_8, uint param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar5 = fRam006eb14c;
  fVar4 = fRam006eb148;
  fVar2 = fRam006eb144;
  fVar3 = _DAT_006eb140;
  uVar6 = *param_7;
  iVar12 = *param_6;
  for (; 7 < (int)param_3; param_3 = param_3 - 8) {
    (*(undefined4 *)&(DAT_006eb180)) = uVar6 >> 1;
    iVar1 = iVar12 * 4;
    _DAT_006eb150 = *(float *)(param_4 + iVar12 * 4);
    iVar9 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_006eb180 * 2,param_9);
    (*(undefined4 *)((char *)&(DAT_006eb180) + 4)) = (uint)DAT_006eb180 * 2 + param_9 >> 1;
    _DAT_006eb154 = *(float *)(param_4 + iVar9 * 4);
    iVar10 = iVar9 + param_8 + (uint)CARRY4((*(undefined4 *)((char *)&(DAT_006eb180) + 4)) * 2,param_9);
    (*(undefined4 *)&(DAT_006eb188)) = (*(undefined4 *)((char *)&(DAT_006eb180) + 4)) * 2 + param_9 >> 1;
    _DAT_006eb158 = *(float *)(param_4 + iVar10 * 4);
    iVar11 = iVar10 + param_8 + (uint)CARRY4((uint)DAT_006eb188 * 2,param_9);
    (*(undefined4 *)((char *)&(DAT_006eb188) + 4)) = (uint)DAT_006eb188 * 2 + param_9 >> 1;
    _DAT_006eb15c = *(float *)(param_4 + iVar11 * 4);
    iVar12 = iVar11 + param_8 + (uint)CARRY4((*(undefined4 *)((char *)&(DAT_006eb188) + 4)) * 2,param_9);
    (*(undefined4 *)&(DAT_006eb190)) = (*(undefined4 *)((char *)&(DAT_006eb188) + 4)) * 2 + param_9 >> 1;
    _DAT_006eb170 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_006eb160 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_006eb190 * 2,param_9);
    (*(undefined4 *)((char *)&(DAT_006eb190) + 4)) = (uint)DAT_006eb190 * 2 + param_9 >> 1;
    _DAT_006eb174 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_006eb164 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4((*(undefined4 *)((char *)&(DAT_006eb190) + 4)) * 2,param_9);
    (*(undefined4 *)&(DAT_006eb198)) = (*(undefined4 *)((char *)&(DAT_006eb190) + 4)) * 2 + param_9 >> 1;
    _DAT_006eb178 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_006eb168 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_006eb198 * 2,param_9);
    (*(undefined4 *)((char *)&(DAT_006eb198) + 4)) = (uint)DAT_006eb198 * 2 + param_9 >> 1;
    _DAT_006eb17c = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_006eb16c = *(float *)(param_4 + iVar12 * 4);
    uVar6 = (*(undefined4 *)((char *)&(DAT_006eb198) + 4)) * 2 + param_9;
    iVar12 = iVar12 + param_8 + (uint)CARRY4((*(undefined4 *)((char *)&(DAT_006eb198) + 4)) * 2,param_9);
    fVar13 = (*(float *)(param_4 + 4 + iVar9 * 4) - _DAT_006eb154) *
             (float)(*(undefined4 *)((char *)&(DAT_006eb180) + 4)) * fVar2 + _DAT_006eb154;
    fVar14 = (*(float *)(param_4 + 4 + iVar10 * 4) - _DAT_006eb158) *
             (float)(uint)DAT_006eb188 * fVar4 + _DAT_006eb158;
    fVar15 = (*(float *)(param_4 + 4 + iVar11 * 4) - _DAT_006eb15c) *
             (float)(*(undefined4 *)((char *)&(DAT_006eb188) + 4)) * fVar5 + _DAT_006eb15c;
    fVar16 = (_DAT_006eb170 - _DAT_006eb160) * (float)(uint)DAT_006eb190 * fVar3 + _DAT_006eb160;
    fVar17 = (_DAT_006eb174 - _DAT_006eb164) * (float)(*(undefined4 *)((char *)&(DAT_006eb190) + 4)) * fVar2 + _DAT_006eb164;
    fVar18 = (_DAT_006eb178 - _DAT_006eb168) * (float)(uint)DAT_006eb198 * fVar4 + _DAT_006eb168;
    fVar19 = (_DAT_006eb17c - _DAT_006eb16c) * (float)(*(undefined4 *)((char *)&(DAT_006eb198) + 4)) * fVar5 + _DAT_006eb16c;
    *param_5 = (*(float *)(param_4 + 4 + iVar1) - _DAT_006eb150) * (float)(uint)DAT_006eb180 * fVar3
               + _DAT_006eb150;
    param_5[1] = fVar13;
    param_5[2] = fVar14;
    param_5[3] = fVar15;
    param_5[4] = fVar16;
    param_5[5] = fVar17;
    param_5[6] = fVar18;
    param_5[7] = fVar19;
    param_5 = param_5 + 8;
  }
  for (; (param_3 & 7) != 0; param_3 = param_3 - 1) {
    uVar7 = uVar6 >> 1;
    iVar1 = iVar12 * 4;
    fVar2 = *(float *)(param_4 + iVar12 * 4);
    uVar8 = uVar7 * 2;
    uVar6 = uVar8 + param_9;
    iVar12 = iVar12 + param_8 + (uint)CARRY4(uVar8,param_9);
    *param_5 = fVar2 + (*(float *)(param_4 + 4 + iVar1) - fVar2) * (float)uVar7 * fVar3;
    param_5 = param_5 + 1;
  }
  *param_7 = uVar6;
  *param_6 = iVar12;
  return CONCAT44(param_2,val);
}
