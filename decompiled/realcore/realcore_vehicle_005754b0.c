/* spd-match: far pct=5.91 flags=/O2 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_07/attempt3_thiscall */
#include "ghidra_compat.h"

int __cdecl FUN_m375_thunk_helper(...);

int __cdecl FUN_004278d0(...);
int __cdecl FUN_00427a30(...);
int __cdecl FUN_00465150(...);
int __cdecl FUN_00564b10(...);
int __cdecl FUN_005673e0(...);
int __cdecl FUN_00583ea0(...);
int __cdecl FUN_00674898(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc79c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
extern int _DAT_006cc988;
extern int _DAT_006ccb7c;
extern int _DAT_006ccd88;

struct ThisCallBox {
  float10 FUN_005754b0(float param_2);
};
float10 ThisCallBox::FUN_005754b0(float param_2) {
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  float *pfVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float *local_4c;
  int local_44;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar6 = *(int *)(((int)this) + 8);
  iVar14 = *(int *)(iVar6 + 0x20);
  fVar1 = *(float *)(iVar14 + 0xa0);
  fVar7 = -fVar1 + *(float *)(iVar14 + 0x10);
  fVar8 = param_2 * *(float *)(((int)this) + 0x18);
  FUN_00674898();
  fVar15 = (float10)FUN_00564b10();
  fVar2 = (float)fVar15;
  FUN_00674898();
  fVar15 = (float10)FUN_00564b10();
  fVar16 = (float10)*(ushort *)(*(int *)(iVar6 + 0x30) + 0x1d0) * (float10)_DAT_006cc980;
  if ((float10)_DAT_006cc97c < fVar16) {
    fVar16 = fVar16 - (float10)_DAT_006cc978;
  }
  fVar17 = (float10)fVar7 * (float10)_DAT_006cc79c;
  local_1c = fVar2;
  if ((fVar17 <= fVar16) || (fVar16 <= -fVar17)) {
    fVar9 = --fVar1;
    fVar16 = (float10)fVar7 / fVar16;
    fVar1 = (float)(-fVar15 * fVar16 + (float10)(fVar2 * fVar9 + *(float *)(((int)this) + 0xc)));
    fVar2 = (float)((float10)fVar2 * fVar16 +
                   (float10)(fVar9 * (float)fVar15 + *(float *)(((int)this) + 0x10)));
    FUN_00674898();
    fVar15 = (float10)FUN_00564b10();
    FUN_00674898();
    fVar17 = (float10)FUN_00564b10();
    fVar18 = (float10)*(float *)(((int)this) + 0xc) - (float10)fVar1;
    fVar19 = (float10)*(float *)(((int)this) + 0x10) - (float10)fVar2;
    *(float *)(((int)this) + 0xc) = fVar1 + (float)(fVar18 * (float10)(float)fVar15 - fVar19 * fVar17);
    *(float *)(((int)this) + 0x10) = fVar2 + (float)(fVar19 * (float10)(float)fVar15 + fVar18 * fVar17);
    *(float *)(((int)this) + 0x14) = (float)((float10)fVar8 / fVar16) + *(float *)(((int)this) + 0x14);
  }
  else {
    *(float *)(((int)this) + 0xc) = fVar2 * fVar8 + *(float *)(((int)this) + 0xc);
    *(float *)(((int)this) + 0x10) = *(float *)(((int)this) + 0x10) + (float)fVar15 * fVar8;
  }
  fVar1 = *(float *)(*(int *)(((int)this) + 4) + 0x1dc);
  fVar15 = (float10)FUN_00583ea0(*(undefined4 *)(((int)this) + 0x18));
  fVar2 = *(float *)(*(int *)(((int)this) + 4) + 0x1e4);
  fVar16 = (float10)FUN_00583ea0(*(undefined4 *)(((int)this) + 0x18));
  fVar16 = ((float10)(float)(fVar15 * (float10)fVar1 * (float10)param_2) -
           fVar16 * (float10)fVar2 * (float10)param_2) + (float10)*(float *)(((int)this) + 0x18);
  fVar15 = (float10)DAT_006cc7a4;
  *(float *)(((int)this) + 0x18) = (float)fVar16;
  if (fVar15 <= fVar16) {
    if ((float10)_DAT_006cc988 < fVar16) {
      *(undefined4 *)(((int)this) + 0x18) = 0x41c4b127;
    }
  }
  else {
    *(undefined4 *)(((int)this) + 0x18) = 0;
  }
  iVar6 = *(int *)(((int)this) + 8);
  fVar1 = *(float *)(iVar6 + 100);
  fVar7 = *(float *)(iVar6 + 0x60);
  fVar2 = *(float *)(iVar6 + 0x68);
  uVar3 = *(undefined4 *)(((int)this) + 0x10);
  local_18 = *(float *)(iVar6 + 0x68);
  *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(((int)this) + 0xc);
  *(float *)(iVar6 + 0x68) = local_18;
  *(undefined4 *)(iVar6 + 100) = uVar3;
  FUN_004278d0();
  local_20 = *(float *)(iVar6 + 0x60) - fVar7;
  local_1c = *(float *)(iVar6 + 100) - fVar1;
  local_18 = *(float *)(iVar6 + 0x68) - fVar2;
  fVar7 = DAT_006cc7a4;
  fVar8 = DAT_006cc7a4;
  fVar9 = DAT_006cc7a4;
  if (_DAT_006ccb7c < ABS(*(float *)(((int)this) + 0x18))) {
    FUN_005673e0(*(undefined4 *)(((int)this) + 0x18));
    fVar7 = local_18;
    fVar8 = local_20;
    fVar9 = local_1c;
  }
  *(float *)(iVar6 + 0x70) = fVar8;
  *(float *)(iVar6 + 0x74) = fVar9;
  *(float *)(iVar6 + 0x78) = fVar7;
  sVar5 = *(short *)(iVar6 + 0x3b4);
  *(undefined1 *)(iVar6 + 0x460) = 0;
  *(float *)(iVar6 + 0x3d4) = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
  *(undefined4 *)(iVar6 + 0x3d0) = *(undefined4 *)(((int)this) + 0x18);
  sVar10 = FUN_00674898();
  *(short *)(iVar6 + 0x3b4) = sVar10;
  local_44 = 4;
  *(undefined4 *)(iVar6 + 0xd0) = 0;
  *(undefined4 *)(iVar6 + 0xd4) = 0;
  puVar13 = (undefined4 *)(iVar6 + 0x374);
  *(float *)(iVar6 + 0xd8) = ((float)(int)(short)(sVar10 - sVar5) * _DAT_006ccd88) / param_2;
  *(undefined2 *)(iVar6 + 0x3b6) = *(undefined2 *)(*(int *)(*(int *)(((int)this) + 8) + 0x30) + 0x1d0);
  pcVar12 = (char *)(iVar6 + 0x350);
  local_4c = (float *)(iVar14 + 0x20);
  pfVar11 = (float *)(iVar6 + 0x300);
  do {
    fVar7 = (_DAT_006cc7bc / *local_4c) * *(float *)(((int)this) + 0x18);
    pfVar11[0x10] = 0.0;
    pfVar11[-4] = fVar7;
    *pfVar11 = fVar7 * param_2 + *pfVar11;
    cVar4 = *pcVar12;
    *pcVar12 = '\x01';
    if (cVar4 == '\0') {
      *(int *)(iVar6 + 0x3cc) = *(int *)(iVar6 + 0x3cc) + 1;
    }
    pfVar11[0x15] = 1.4013e-45;
    if ((int)pfVar11[0x19] < 1) {
      pfVar11[0x19] = 1.4013e-45;
    }
    *puVar13 = 0;
    puVar13[1] = 0;
    pfVar11[0x25] = 0.0;
    pfVar11[4] = 0.0;
    *(undefined4 *)(iVar6 + 0x330) = 0;
    *(undefined4 *)(iVar6 + 0x334) = 0;
    *(undefined4 *)(iVar6 + 0x338) = 0;
    *(undefined4 *)(iVar6 + 0x33c) = 0;
    local_4c = local_4c + 0xc;
    pfVar11 = pfVar11 + 1;
    pcVar12 = pcVar12 + 1;
    puVar13 = puVar13 + 2;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  iVar14 = 0;
  do {
    FUN_00465150((undefined4 *)(iVar6 + 0x40));
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  FUN_m375_thunk_helper(&local_20,*(undefined4 *)(iVar6 + 0x40),iVar6 + 0x90);
  *(float *)(iVar6 + 0x50) = *(float *)(iVar6 + 0x60) - fVar1;
  *(float *)(iVar6 + 0x58) = *(float *)(iVar6 + 0x68) - fStack_24;
  *(float *)(iVar6 + 0x54) = *(float *)(iVar6 + 100) - fVar2;
  FUN_00427a30();
  return (float10)param_2;
}
