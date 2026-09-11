/* spd-match: far pct=5.27 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

typedef void _func_void_void_ptr(...);
int __cdecl FUN_0040a880(...);
int __cdecl FUN_00456ce0(...);
int __cdecl FUN_00456d50(...);
int __cdecl FUN_00457520(...);
int __cdecl FUN_00458150(...);
int __cdecl FUN_00458220(...);
int __cdecl FUN_00458290(...);
int __cdecl FUN_00458750(...);
int __cdecl FUN_004596b0(...);
int __cdecl FUN_00459710(...);
int __cdecl FUN_0045a1e0(...);
int __cdecl FUN_0045a250(...);
int __cdecl FUN_0045a510(...);
int __cdecl FUN_0045a5b0(...);
int __cdecl FUN_005791c0(...);
int __cdecl FUN_0057a5f0(...);
int __cdecl FUN_00647b70(...);
extern int DAT_006b7544;
extern int DAT_006b7548;
extern int DAT_006b754c;
extern int DAT_006b7550;
extern int DAT_006b7554;
extern int DAT_006cc7a4;
extern int _DAT_006cc798;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8bc;
extern int _DAT_006ccb1c;
extern int _DAT_006ccb7c;
extern int _DAT_006ccc00;
extern void LAB_0045777e(...);
extern void LAB_0045a920(...);
extern void LAB_0068618c(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_004576b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, float param_6, float *param_7);
};
undefined4 ThisCallBox::FUN_004576b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, float param_6, float *param_7) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
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
  int iVar18;
  int iVar19;
  float *pfVar20;
  float10 fVar21;
  float fStack_10e0;
  int local_10d8;
  undefined4 uStack_10d4;
  float fStack_10d0;
  float fStack_10cc;
  float *local_10c8;
  float local_10c4;
  float fStack_10c0;
  float fStack_10bc;
  float fStack_10b8;
  float *pfStack_10b0;
  float fStack_10ac;
  float fStack_10a8;
  float fStack_1090;
  float fStack_108c;
  float fStack_1088;
  float fStack_1084;
  float fStack_1040;
  float fStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  float fStack_1030;
  float fStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  char local_1020 [448];
  char local_e60 [448];
  float afStack_ca0 [400];
  float afStack_660 [399];
  undefined4 uStack_24;
  int iStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  int iStack_14;
  
  iStack_14 = 0xffffffff;
  puStack_18 = (unsigned char *)(unsigned int)&LAB_0068618c;
  pvStack_1c = ExceptionList;
  uStack_24 = 0x4576d6;
  local_10c4 = 99999.0;
  ExceptionList = &pvStack_1c;
  iStack_20 = ((int)this);
  FUN_00458150(param_3);
  FUN_00458150(((int)this) + 0x10);
  iVar18 = FUN_00647b70();
  if (iVar18 == 6) {
    iVar18 = 0;
    iVar19 = FUN_00647b70();
    if (iVar19 == 6) {
      iVar18 = *(int *)(*(int *)(((int)this) + 0x1d4) + 0x90);
    }
    iVar18 = *(int *)(iVar18 + 0x24);
    if (((iVar18 == 3) || (iVar18 == 2)) || (iVar18 == 4)) {
      local_10d8 = 0;
      iVar18 = FUN_00647b70();
      if (iVar18 == 6) {
        local_10d8 = *(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x2c);
      }
      goto LAB_0045777e;
    }
  }
  local_10d8 = 0;
LAB_0045777e:
  if ((*(int *)(*(int *)(param_5 + 0x14) + 4) != 3) ||
     (fVar21 = (float10)(**(code **)(**(int **)(param_5 + 0x2c) + 0x28))(),
     fVar21 <= (float10)_DAT_006ccb1c)) {
    if (*(int *)(*(int *)(param_5 + 0x14) + 4) != 1) {
      FUN_00459710(*(undefined4 *)(param_5 + 0x3d0),param_5 + 0x60,param_5 + 0x70);
      FUN_0045a5b0(param_5 + 0x60,param_5 + 0x80);
    }
  }
  else {
    FUN_0045a1e0(local_1020);
  }
  iVar18 = FUN_00647b70();
  if ((iVar18 == 6) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x14) + 4) == 3)) {
    iVar18 = 0;
    iVar19 = FUN_00647b70();
    if (iVar19 == 6) {
      iVar18 = *(int *)(*(int *)(((int)this) + 0x1d4) + 0x90);
    }
    fVar21 = (float10)(**(code **)(**(int **)(iVar18 + 0x2c) + 0x28))();
    if (fVar21 <= (float10)_DAT_006ccb1c) {
      if ((local_10d8 != 0) &&
         ((*(int *)(local_10d8 + 0x3f8) == 0 ||
          (*(int *)(*(int *)(local_10d8 + 0x3f8) + 0x1f8) != 7)))) {
        FUN_0045a510(local_e60);
      }
    }
    else {
      FUN_0045a250(local_e60);
    }
  }
  uStack_10d4 = DAT_006b7544;
  fStack_10e0 = (float)DAT_006b7544;
  iVar18 = FUN_00647b70();
  if ((iVar18 == 6) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x14) + 4) == 1)) {
    fStack_10e0 = (float)DAT_006b754c;
  }
  if (*(int *)(param_5 + 0x24) == 4) {
    uStack_10d4 = 0x3f800000;
  }
  else {
    iVar18 = FUN_00647b70();
    if ((iVar18 == 6) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x14) + 4) == 3)) {
      fStack_10e0 = (float)DAT_006b7554;
    }
  }
  iVar18 = *(int *)(*(int *)(((int)this) + 0x1d4) + 0x1c);
  fStack_10cc = *(float *)(param_5 + 0x3d4);
  if (*(int *)(iVar18 + 0xe4) != 0) {
    FUN_005791c0();
  }
  fStack_10d0 = SQRT(*(float *)(iVar18 + 0x98) * *(float *)(iVar18 + 0x98) +
                     *(float *)(iVar18 + 0x94) * *(float *)(iVar18 + 0x94) +
                     *(float *)(iVar18 + 0x90) * *(float *)(iVar18 + 0x90));
  fVar1 = *(float *)(param_5 + 0x88);
  fVar2 = *(float *)(param_5 + 0x98);
  fVar3 = *(float *)(param_5 + 0x84);
  fVar4 = *(float *)(param_5 + 0x94);
  fVar5 = *(float *)(param_5 + 0x80);
  fVar6 = *(float *)(param_5 + 0x90);
  FUN_0057a5f0();
  if (*(float *)(param_5 + 0x3d0) < DAT_006cc7a4) {
    iVar18 = *(int *)(*(int *)(param_5 + 0x2c) + 0x3f8);
    if (iVar18 == 0) {
      iVar18 = 0x14;
    }
    else {
      iVar18 = *(int *)(iVar18 + 0x1f8);
    }
    if ((((iVar18 == 10) || (iVar18 == 0x14)) || (iVar18 == 0xe)) || (local_1020[0] == '\0')) {
      FUN_00456ce0(local_1020);
      fStack_10cc = ABS(fStack_10cc);
      uStack_10d4 = DAT_006b7548;
    }
  }
  fVar21 = (float10)FUN_00457520();
  if ((fVar21 < (float10)DAT_006cc7a4) &&
     ((((iVar18 = FUN_00647b70(), iVar18 == 6 &&
        (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x14) + 4) == 2)) ||
       ((iVar18 = FUN_00647b70(), iVar18 == 6 &&
        (*(int *)(*(int *)(*(int *)(*(int *)(((int)this) + 0x1d4) + 0x90) + 0x14) + 4) == 3)))) &&
      (local_10d8 != 0)))) {
    if (*(int *)(local_10d8 + 0x3f8) == 0) {
      iVar18 = 0x14;
    }
    else {
      iVar18 = *(int *)(*(int *)(local_10d8 + 0x3f8) + 0x1f8);
    }
    if (((iVar18 == 10) || (iVar18 == 0x14)) || ((iVar18 == 0xe || (local_e60[0] == '\0')))) {
      FUN_00456d50(local_e60);
      fStack_10d0 = ABS(fStack_10d0);
      fStack_10e0 = (float)DAT_006b7548;
    }
  }
  if (fStack_10cc <= _DAT_006cc8bc) {
    fStack_10cc = 0.001;
  }
  if (fStack_10d0 <= _DAT_006cc8bc) {
    fStack_10d0 = 0.001;
  }
  if (fStack_10cc < _DAT_006ccc00) {
    uStack_10d4 = DAT_006b7550;
  }
  if (fStack_10d0 < _DAT_006ccc00) {
    fStack_10e0 = (float)DAT_006b7550;
  }
  _eh_vector_constructor_iterator_
            (afStack_660,0x50,0x14,(_func_void_void_ptr *)&LAB_0045a920,FUN_0040a880);
  iStack_14 = 0;
  _eh_vector_constructor_iterator_
            (afStack_ca0,0x50,0x14,(_func_void_void_ptr *)&LAB_0045a920,FUN_0040a880);
  iStack_14 = CONCAT31(((unsigned int)(iStack_14) >> 8),1);
  FUN_00458220(param_2,local_1020,uStack_10d4);
  FUN_00458290(param_2,local_e60,afStack_ca0,fStack_10e0);
  fStack_10b8 = 0.0;
  iVar19 = FUN_00459710(*(undefined4 *)(param_5 + 0x3d0),(float *)(param_5 + 0x60),param_5 + 0x70);
  local_10d8 = FUN_004596b0(local_e60,((int)this));
  fStack_10ac = *(float *)(param_5 + 0x60);
  fStack_10a8 = *(float *)(param_5 + 100);
  iVar18 = *(int *)(*(int *)(((int)this) + 0x1d4) + 0x1c);
  if (*(int *)(iVar18 + 0xe4) != 0) {
    FUN_005791c0();
  }
  fStack_10bc = *(float *)(iVar18 + 0x44);
  fStack_10c0 = *(float *)(iVar18 + 0x40);
  fStack_1084 = afStack_660[iVar19 * 0x14 + 1];
  local_10c8 = afStack_660 + iVar19 * 0x14;
  fStack_1088 = *local_10c8;
  pfVar20 = afStack_ca0 + local_10d8 * 0x14;
  fStack_108c = afStack_ca0[local_10d8 * 0x14 + 1];
  fStack_1090 = *pfVar20;
  pfStack_10b0 = local_10c8;
  if (iVar19 < local_1020[0]) {
    do {
      if ((local_e60[0] <= local_10d8) || (fStack_10b8 < param_6 == (fStack_10b8 == param_6)))
      break;
      fVar12 = fStack_1088 - fStack_10ac;
      fVar14 = fStack_1084 - fStack_10a8;
      fVar8 = fStack_1090 - fStack_10c0;
      fVar9 = fStack_108c - fStack_10bc;
      fVar11 = SQRT(fVar12 * fVar12 + fVar14 * fVar14);
      fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
      fVar15 = fVar11 * (_DAT_006cc7bc / fStack_10cc);
      fStack_10e0 = (_DAT_006cc7bc / fStack_10d0) * fVar10;
      if (fVar15 < fStack_10e0) {
        fStack_10e0 = fVar15;
      }
      fStack_1030 = fStack_10c0 - fStack_10ac;
      fStack_102c = fStack_10bc - fStack_10a8;
      uStack_1028 = 0;
      uStack_1024 = 0;
      fVar16 = (_DAT_006cc7bc / fStack_10cc) * fVar11;
      fVar13 = _DAT_006cc7bc;
      fVar17 = DAT_006cc7a4;
      if (fVar16 != DAT_006cc7a4) {
        fVar16 = _DAT_006cc7bc / fVar16;
        fVar13 = fVar12 * fVar16;
        fVar17 = fVar16 * fVar14;
      }
      fVar16 = fVar10 * (_DAT_006cc7bc / fStack_10d0);
      fStack_1040 = _DAT_006cc7bc;
      fStack_103c = DAT_006cc7a4;
      if (fVar16 != DAT_006cc7a4) {
        fVar16 = _DAT_006cc7bc / fVar16;
        fStack_1040 = fVar8 * fVar16;
        fStack_103c = fVar16 * fVar9;
      }
      fStack_1040 = fStack_1040 - fVar13;
      fStack_103c = fStack_103c - fVar17;
      uStack_1038 = 0;
      uStack_1034 = 0;
      fVar21 = (float10)FUN_00458750(local_10c8,&fStack_1030,&fStack_1040);
      if (fVar21 < (float10)fStack_10e0 != (fVar21 == (float10)fStack_10e0)) {
        local_10c4 = (float)(fVar21 + (float10)fStack_10b8);
        break;
      }
      fVar13 = DAT_006cc7a4;
      fVar16 = DAT_006cc7a4;
      if (_DAT_006ccb7c < ABS(fVar11)) {
        fVar11 = (fStack_10e0 * fStack_10cc) / fVar11;
        fVar13 = fVar12 * fVar11;
        fVar16 = fVar14 * fVar11;
      }
      fStack_10ac = fVar13 + fStack_10ac;
      fStack_10a8 = fVar16 + fStack_10a8;
      fVar11 = fStack_10e0 * (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2);
      fStack_10cc = fStack_10cc + fVar11;
      fVar12 = DAT_006cc7a4;
      fVar14 = DAT_006cc7a4;
      if (_DAT_006ccb7c < ABS(fVar10)) {
        fVar10 = (fStack_10e0 * fStack_10d0) / fVar10;
        fVar12 = fVar8 * fVar10;
        fVar14 = fVar9 * fVar10;
      }
      fStack_10c0 = fVar12 + fStack_10c0;
      fStack_10bc = fVar14 + fStack_10bc;
      fStack_10d0 = fVar11 + fStack_10d0;
      if (ABS(fVar15 - fStack_10e0) < _DAT_006cc8bc == (ABS(fVar15 - fStack_10e0) == _DAT_006cc8bc))
      {
        fStack_108c = pfVar20[0x15];
        fStack_1090 = pfVar20[0x14];
        local_10d8 = local_10d8 + 1;
        pfVar20 = pfVar20 + 0x14;
      }
      else {
        fStack_1084 = pfStack_10b0[0x15];
        iVar19 = iVar19 + 1;
        fStack_1088 = pfStack_10b0[0x14];
        local_10c8 = pfStack_10b0 + 0x14;
        pfStack_10b0 = local_10c8;
      }
      fStack_10b8 = fStack_10e0 + fStack_10b8;
    } while (iVar19 < local_1020[0]);
  }
  bVar7 = local_10c4 < _DAT_006cc798;
  *param_7 = local_10c4;
  if ((bVar7) &&
     (ABS(local_10c4 - _DAT_006cc798) < _DAT_006cc8bc ==
      (ABS(local_10c4 - _DAT_006cc798) == _DAT_006cc8bc))) {
    iStack_14 = (uint)((unsigned int)(iStack_14) >> 8) << 8;
    _eh_vector_destructor_iterator_(afStack_ca0,0x50,0x14,FUN_0040a880);
    iStack_14 = 0xffffffff;
    _eh_vector_destructor_iterator_(afStack_660,0x50,0x14,FUN_0040a880);
    ExceptionList = pvStack_1c;
    return 1;
  }
  iStack_14 = (uint)((unsigned int)(iStack_14) >> 8) << 8;
  _eh_vector_destructor_iterator_(afStack_ca0,0x50,0x14,FUN_0040a880);
  iStack_14 = 0xffffffff;
  _eh_vector_destructor_iterator_(afStack_660,0x50,0x14,FUN_0040a880);
  ExceptionList = pvStack_1c;
  return 0;
}
