/* spd-match: far pct=3.28 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tp1 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_0042ab50(...);
int __cdecl FUN_0045e370(...);
int __cdecl FUN_0045e7b0(...);
int __cdecl FUN_0045fb30(...);
int __cdecl FUN_0045fc90(...);
int __cdecl FUN_00465530(...);
int __cdecl FUN_00468820(...);
int __cdecl FUN_00564db0(...);
int __cdecl FUN_0057f2b0(...);
int __cdecl FUN_00583ea0(...);
int __cdecl FUN_00583f20(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b73ac;
extern int DAT_006b73b8;
extern int DAT_006b73c0;
extern int DAT_006b73c4;
extern int DAT_006b73e0;
extern int DAT_006b73fc;
extern int DAT_006cc7a4;
extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0077a4a4;
extern int DAT_0078a344;
extern int _DAT_006b72dc;
extern int _DAT_006b73b4;
extern int _DAT_006b73bc;
extern int _DAT_006b7450;
extern int _DAT_006b7454;
extern int _DAT_006b7458;
extern int _DAT_006b7484;
extern int _DAT_006b7488;
extern int _DAT_006b748c;
extern int _DAT_006b7490;
extern int _DAT_006b7494;
extern int _DAT_006b7498;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc934;
extern int _DAT_006cc948;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
extern int _DAT_006cca00;
extern int _DAT_006cca18;
extern int _DAT_006cca38;
extern int _DAT_006cca50;
extern int _DAT_006ccab0;
extern int _DAT_006ccb3c;
extern int _DAT_006ccb80;
extern int _DAT_006ccc00;
extern int _DAT_006ccc08;
extern int _DAT_006ccd64;
extern int _DAT_006ccd70;
extern int _DAT_006ccd74;
extern int _DAT_006ccd78;
extern int _DAT_0070031c;
extern void *PTR_DAT_007060a8;
extern void LAB_0045ea72(...);
extern void LAB_0045ea79(...);
extern void LAB_0045ea9e(...);
extern void LAB_0045eb6a(...);
extern void LAB_0045f56f(...);
extern void LAB_0045f573(...);
extern void LAB_0045f96e(...);
extern void LAB_0045f9bf(...);

struct ThisCallBox {
  void FUN_0045e970(float param_2);
};
void ThisCallBox::FUN_0045e970(float param_2) {
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  float10 fVar18;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;
  float fStack_4;
  
  local_28 = 0;
  local_24 = 0;
  if (param_2 <= _DAT_006ccab0) {
    local_8 = 0.0001;
  }
  else {
    local_8 = param_2;
  }
  local_30 = *(float *)(((int *)this)[0x7c] + 0x3d4);
  local_c = (float)(uint)*(ushort *)(((int *)this) + 0x74);
  local_18 = (float)(int)local_c * ((int)_DAT_006cca00);
  if (_DAT_006ccb3c < local_18) {
    local_18 = local_18 - _DAT_006cc934;
  }
  if (*(float *)(((int *)this)[0x7c] + 0x3d0) < DAT_006cc7a4) {
    local_30 = -local_30;
  }
  FUN_0045fb30();
  iVar15 = ((int *)this)[0x7c];
  bVar17 = false;
  bVar7 = false;
  iVar13 = 0;
  pcVar14 = (char *)(iVar15 + 0x350);
  do {
    if (*pcVar14 != '\0') {
      if (iVar13 < 2) {
        bVar17 = true;
      }
      fVar2 = *(float *)(*(int *)(iVar15 + 0x40) + 0x1c0);
      if (fVar2 <= _DAT_006cca18) {
        if ((fVar2 < _DAT_006cc7b8) && (iVar13 != 1)) {
          bVar16 = iVar13 == 0;
          goto LAB_0045ea72;
        }
      }
      else if (iVar13 != 2) {
        bVar16 = iVar13 == 3;
LAB_0045ea72:
        if (!bVar16) goto LAB_0045ea79;
      }
      bVar7 = true;
    }
LAB_0045ea79:
    iVar13 = iVar13 + 1;
    pcVar14 = pcVar14 + 1;
  } while (iVar13 < 4);
  iVar13 = *(int *)(iVar15 + 0x28);
  if (iVar13 == 1) {
    local_2c = 1.4013e-45;
    bVar16 = false;
  }
  else if (iVar13 == 3) {
    local_2c = (float)((*(int *)(iVar15 + 0x24) != 4) - 1 & 4);
    if ((local_2c == 4.2039e-45) || (local_2c == 5.60519e-45)) goto LAB_0045ea9e;
    bVar16 = false;
  }
  else if (iVar13 == 4) {
    local_2c = 0.0;
    bVar16 = false;
  }
  else {
    local_2c = 4.2039e-45;
LAB_0045ea9e:
    bVar16 = true;
  }
  ((int *)this)[0x87] = (int)((float)((int *)this)[0x87] - param_2);
  if (DAT_006cc7a4 < (float)((int *)this)[0x87]) {
    local_2c = 7.00649e-45;
  }
  if ((char)((int *)this)[0x88] != '\0') {
    local_2c = 8.40779e-45;
  }
  FUN_0045e370(&local_1c,&local_34,&local_20);
  if (((int *)this)[0x89] == 1) {
    (**(code **)(*((int *)this) + 0x5c))();
LAB_0045eb6a:
    ((int *)this)[0x89] = 0;
  }
  else if (((int *)this)[0x89] == 2) {
    (**(code **)(*((int *)this) + 100))();
    goto LAB_0045eb6a;
  }
  if (bVar17) {
    iVar15 = ((int *)this)[0x8c];
    iVar13 = ((int *)this)[0x89];
    *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(iVar15 + 0x7c);
    fVar2 = local_1c - *(float *)(iVar15 + 0x80);
    bVar17 = iVar13 != 4;
    fVar3 = ((int)_DAT_006cc7dc) * fVar2;
    *(float *)(iVar15 + 0x7c) = local_1c;
    fVar5 = (fVar3 + *(float *)(iVar15 + 0x80)) * param_2;
    fVar3 = DAT_006cc7a4;
    if (bVar17) {
      fVar3 = fVar2 / param_2;
    }
    if (*(byte *)(iVar15 + 6) < *(byte *)(iVar15 + 5)) {
      *(byte *)(iVar15 + 6) = *(byte *)(iVar15 + 6) + 1;
    }
    fVar2 = param_2 + *(float *)(iVar15 + 8);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x10) + (uint)*(byte *)(iVar15 + 7) * 4);
    *(float *)(iVar15 + 8) = fVar2;
    *(float *)(iVar15 + 8) = fVar2 - *pfVar1;
    *pfVar1 = param_2;
    bVar12 = *(char *)(iVar15 + 7) + 1;
    *(byte *)(iVar15 + 7) = bVar12;
    *(float *)(iVar15 + 0xc) = *(float *)(iVar15 + 8) / (float)*(byte *)(iVar15 + 6);
    if (*(byte *)(iVar15 + 5) <= bVar12) {
      *(undefined1 *)(iVar15 + 7) = 0;
    }
    if (*(byte *)(iVar15 + 0x2e) < *(byte *)(iVar15 + 0x2d)) {
      *(byte *)(iVar15 + 0x2e) = *(byte *)(iVar15 + 0x2e) + 1;
    }
    fVar2 = fVar5 + *(float *)(iVar15 + 0x30);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x38) + (uint)*(byte *)(iVar15 + 0x2f) * 4);
    *(float *)(iVar15 + 0x30) = fVar2;
    *(float *)(iVar15 + 0x30) = fVar2 - *pfVar1;
    *pfVar1 = fVar5;
    bVar12 = *(char *)(iVar15 + 0x2f) + 1;
    *(byte *)(iVar15 + 0x2f) = bVar12;
    *(float *)(iVar15 + 0x34) = *(float *)(iVar15 + 0x30) / (float)*(byte *)(iVar15 + 0x2e);
    if (*(byte *)(iVar15 + 0x2d) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x2f) = 0;
    }
    if (*(byte *)(iVar15 + 0x56) < *(byte *)(iVar15 + 0x55)) {
      *(byte *)(iVar15 + 0x56) = *(byte *)(iVar15 + 0x56) + 1;
    }
    fVar2 = fVar3 + *(float *)(iVar15 + 0x58);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x60) + (uint)*(byte *)(iVar15 + 0x57) * 4);
    *(float *)(iVar15 + 0x58) = fVar2;
    *(float *)(iVar15 + 0x58) = fVar2 - *pfVar1;
    *pfVar1 = fVar3;
    bVar12 = *(char *)(iVar15 + 0x57) + 1;
    *(byte *)(iVar15 + 0x57) = bVar12;
    *(float *)(iVar15 + 0x5c) = *(float *)(iVar15 + 0x58) / (float)*(byte *)(iVar15 + 0x56);
    if (*(byte *)(iVar15 + 0x55) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x57) = 0;
    }
    iVar15 = ((int *)this)[0x8d];
    *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(iVar15 + 0x7c);
    fVar3 = _DAT_006cc7dc;
    fVar2 = local_20 - *(float *)(iVar15 + 0x80);
    *(float *)(iVar15 + 0x7c) = local_20;
    fVar5 = (fVar3 * fVar2 + *(float *)(iVar15 + 0x80)) * param_2;
    fVar3 = DAT_006cc7a4;
    if (bVar17) {
      fVar3 = fVar2 / param_2;
    }
    if (*(byte *)(iVar15 + 6) < *(byte *)(iVar15 + 5)) {
      *(byte *)(iVar15 + 6) = *(byte *)(iVar15 + 6) + 1;
    }
    fVar2 = param_2 + *(float *)(iVar15 + 8);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x10) + (uint)*(byte *)(iVar15 + 7) * 4);
    *(float *)(iVar15 + 8) = fVar2;
    *(float *)(iVar15 + 8) = fVar2 - *pfVar1;
    *pfVar1 = param_2;
    bVar12 = *(char *)(iVar15 + 7) + 1;
    *(byte *)(iVar15 + 7) = bVar12;
    *(float *)(iVar15 + 0xc) = *(float *)(iVar15 + 8) / (float)*(byte *)(iVar15 + 6);
    if (*(byte *)(iVar15 + 5) <= bVar12) {
      *(undefined1 *)(iVar15 + 7) = 0;
    }
    if (*(byte *)(iVar15 + 0x2e) < *(byte *)(iVar15 + 0x2d)) {
      *(byte *)(iVar15 + 0x2e) = *(byte *)(iVar15 + 0x2e) + 1;
    }
    fVar2 = fVar5 + *(float *)(iVar15 + 0x30);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x38) + (uint)*(byte *)(iVar15 + 0x2f) * 4);
    *(float *)(iVar15 + 0x30) = fVar2;
    *(float *)(iVar15 + 0x30) = fVar2 - *pfVar1;
    *pfVar1 = fVar5;
    bVar12 = *(char *)(iVar15 + 0x2f) + 1;
    *(byte *)(iVar15 + 0x2f) = bVar12;
    *(float *)(iVar15 + 0x34) = *(float *)(iVar15 + 0x30) / (float)*(byte *)(iVar15 + 0x2e);
    if (*(byte *)(iVar15 + 0x2d) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x2f) = 0;
    }
    if (*(byte *)(iVar15 + 0x56) < *(byte *)(iVar15 + 0x55)) {
      *(byte *)(iVar15 + 0x56) = *(byte *)(iVar15 + 0x56) + 1;
    }
    fVar2 = fVar3 + *(float *)(iVar15 + 0x58);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x60) + (uint)*(byte *)(iVar15 + 0x57) * 4);
    *(float *)(iVar15 + 0x58) = fVar2;
    *(float *)(iVar15 + 0x58) = fVar2 - *pfVar1;
    *pfVar1 = fVar3;
    bVar12 = *(char *)(iVar15 + 0x57) + 1;
    *(byte *)(iVar15 + 0x57) = bVar12;
    *(float *)(iVar15 + 0x5c) = *(float *)(iVar15 + 0x58) / (float)*(byte *)(iVar15 + 0x56);
    if (*(byte *)(iVar15 + 0x55) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x57) = 0;
    }
    iVar15 = ((int *)this)[0x8e];
    *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(iVar15 + 0x7c);
    fVar3 = _DAT_006cc7dc;
    fVar2 = local_34 - *(float *)(iVar15 + 0x80);
    *(float *)(iVar15 + 0x7c) = local_34;
    local_1c = (fVar3 * fVar2 + *(float *)(iVar15 + 0x80)) * param_2;
    fVar3 = DAT_006cc7a4;
    if (bVar17) {
      fVar3 = fVar2 / param_2;
    }
    if (*(byte *)(iVar15 + 6) < *(byte *)(iVar15 + 5)) {
      *(byte *)(iVar15 + 6) = *(byte *)(iVar15 + 6) + 1;
    }
    fVar2 = param_2 + *(float *)(iVar15 + 8);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x10) + (uint)*(byte *)(iVar15 + 7) * 4);
    *(float *)(iVar15 + 8) = fVar2;
    *(float *)(iVar15 + 8) = fVar2 - *pfVar1;
    *pfVar1 = param_2;
    bVar12 = *(char *)(iVar15 + 7) + 1;
    *(byte *)(iVar15 + 7) = bVar12;
    *(float *)(iVar15 + 0xc) = *(float *)(iVar15 + 8) / (float)*(byte *)(iVar15 + 6);
    if (*(byte *)(iVar15 + 5) <= bVar12) {
      *(undefined1 *)(iVar15 + 7) = 0;
    }
    if (*(byte *)(iVar15 + 0x2e) < *(byte *)(iVar15 + 0x2d)) {
      *(byte *)(iVar15 + 0x2e) = *(byte *)(iVar15 + 0x2e) + 1;
    }
    fVar2 = local_1c + *(float *)(iVar15 + 0x30);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x38) + (uint)*(byte *)(iVar15 + 0x2f) * 4);
    *(float *)(iVar15 + 0x30) = fVar2;
    *(float *)(iVar15 + 0x30) = fVar2 - *pfVar1;
    *pfVar1 = local_1c;
    bVar12 = *(char *)(iVar15 + 0x2f) + 1;
    *(byte *)(iVar15 + 0x2f) = bVar12;
    *(float *)(iVar15 + 0x34) = *(float *)(iVar15 + 0x30) / (float)*(byte *)(iVar15 + 0x2e);
    if (*(byte *)(iVar15 + 0x2d) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x2f) = 0;
    }
    if (*(byte *)(iVar15 + 0x56) < *(byte *)(iVar15 + 0x55)) {
      *(byte *)(iVar15 + 0x56) = *(byte *)(iVar15 + 0x56) + 1;
    }
    fVar2 = fVar3 + *(float *)(iVar15 + 0x58);
    pfVar1 = (float *)(*(int *)(iVar15 + 0x60) + (uint)*(byte *)(iVar15 + 0x57) * 4);
    *(float *)(iVar15 + 0x58) = fVar2;
    *(float *)(iVar15 + 0x58) = fVar2 - *pfVar1;
    *pfVar1 = fVar3;
    local_c = (float)(uint)*(byte *)(iVar15 + 0x56);
    bVar12 = *(char *)(iVar15 + 0x57) + 1;
    *(byte *)(iVar15 + 0x57) = bVar12;
    *(float *)(iVar15 + 0x5c) = *(float *)(iVar15 + 0x58) / (float)(int)local_c;
    if (*(byte *)(iVar15 + 0x55) <= bVar12) {
      *(undefined1 *)(iVar15 + 0x57) = 0;
    }
    if (!bVar17) {
      ((int *)this)[0x89] = 0;
    }
    iVar15 = ((int *)this)[0x8c];
    iVar13 = ((int *)this)[0x8e];
    fVar18 = (float10)FUN_00583f20(&PTR_DAT_007060a8,
                                   ABS(*(float *)(iVar15 + 0x7c) - *(float *)(iVar13 + 0x7c)));
    fVar2 = (float)fVar18;
    fVar3 = ((int)_DAT_006cc7bc) - fVar2;
    local_c = fVar2 * *(float *)(iVar15 + 0x7c) + fVar3 * *(float *)(iVar13 + 0x7c);
    fVar5 = DAT_006cc7a4;
    if (*(byte *)(iVar15 + 0x2e) != 0) {
      fVar5 = (*(float *)(iVar15 + 0x30) * (float)*(byte *)(iVar15 + 0x2e)) /
              (*(float *)(iVar15 + 8) * *(float *)(iVar15 + 0x78));
    }
    fVar6 = DAT_006cc7a4;
    if (*(byte *)(iVar13 + 0x2e) != 0) {
      fVar6 = (*(float *)(iVar13 + 0x30) * (float)*(byte *)(iVar13 + 0x2e)) /
              (*(float *)(iVar13 + 8) * *(float *)(iVar13 + 0x78));
    }
    fStack_10 = fVar5 * fVar2 + fVar6 * fVar3;
    local_20 = *(float *)(iVar15 + 0x5c) * fVar2 + *(float *)(iVar13 + 0x5c) * fVar3;
    local_1c = -DAT_0077a4a4;
    if (fStack_10 <= local_1c) {
      fStack_10 = local_1c;
    }
    if (DAT_0077a4a4 < fStack_10) {
      fStack_10 = DAT_0077a4a4;
    }
    fStack_14 = -DAT_006b73ac;
    if (fStack_14 < local_20) {
      fStack_14 = local_20;
    }
    if (DAT_006b73ac < fStack_14) {
      fStack_14 = DAT_006b73ac;
    }
    if ((bVar16) || (local_2c == 7.00649e-45)) {
      local_34 = *(float *)(((unsigned char *)&DAT_006b73fc) + (int)local_2c * 4);
      local_20 = *(float *)(((unsigned char *)&DAT_006b73e0) + (int)local_2c * 4);
      fVar2 = *(float *)(((unsigned char *)&DAT_006b73c4) + (int)local_2c * 4);
    }
    else {
      fVar2 = *(float *)(((int *)this)[0x7c] + 0x3d4);
      local_1c = fVar2;
      fVar18 = (float10)FUN_00583ea0(fVar2);
      local_1c = (float)fVar18;
      fVar18 = (float10)FUN_00583ea0(fVar2);
      local_20 = (float)fVar18;
      fVar18 = (float10)FUN_00583ea0(fVar2);
      local_34 = (float)fVar18;
      iVar15 = *(int *)(((int *)this)[0x7c] + 0x10);
      if (*(char *)(iVar15 + 0x424) == -1) {
        FUN_0057f2b0(1);
      }
      fVar2 = (float)(int)*(char *)(iVar15 + 0x424);
      fStack_4 = fVar2;
      fVar18 = (float10)FUN_00583ea0(fVar2);
      fStack_4 = (float)fVar18;
      fVar18 = (float10)FUN_00583ea0(fVar2);
      local_1c = fStack_4 * local_1c;
      local_34 = (float)(fVar18 * (float10)local_34);
      fVar18 = (float10)FUN_00583ea0(fVar2);
      local_20 = (float)(fVar18 * (float10)local_20);
      if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) ||
         (cVar9 = FUN_0042ab50(), fVar2 = local_1c, cVar9 != '\0')) {
        local_34 = ((int)_DAT_006b7454) * local_34;
        local_20 = ((int)_DAT_006b7458) * local_20;
        fVar2 = ((int)_DAT_006b7450) * local_1c;
      }
    }
    local_34 = (-(fVar2 * local_c) - fStack_14 * local_34) - fStack_10 * local_20;
    if (*(int *)(((int *)this)[0x7c] + 0x28) == 1) {
      iVar15 = (int)*(char *)(*(int *)(((int *)this)[0x7c] + 0x3c) + 0x1c);
      iVar13 = 0;
      if (0 < iVar15) {
        do {
          iVar11 = FUN_00468820(iVar13);
          iVar4 = *(int *)(*(int *)(iVar11 + 100) + 600);
          if ((((*(char *)(iVar4 + 0x15) == '\x03') &&
               (ABS(*(float *)(*(int *)(iVar4 + 0x60) + 0x78)) < _DAT_006cc7b8)) ||
              ((iVar4 = *(int *)(*(int *)(iVar11 + 100) + 0x25c), *(char *)(iVar4 + 0x15) == '\x03'
               && (ABS(*(float *)(*(int *)(iVar4 + 0x60) + 0x78)) < _DAT_006cc7b8)))) &&
             ((fStack_4 = (float)(((int)DAT_0073ad34) - *(int *)(iVar11 + 0xc)),
              (float)(int)fStack_4 * ((int)_DAT_006cca38) < _DAT_006b7494 &&
              (_DAT_006b7498 < *(float *)(iVar11 + 0x60))))) {
            local_34 = local_c * ((int)_DAT_006ccd64);
            break;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar15);
      }
    }
  }
  else {
    iVar15 = ((int *)this)[0x7c];
    fVar2 = DAT_006cc7a4;
    if (_DAT_006b72dc <= *(float *)(iVar15 + 0x3d0)) {
      sVar10 = FUN_00564db0(*(undefined4 *)(iVar15 + 0x70),*(undefined4 *)(iVar15 + 0x74));
      fStack_4 = (float)(uint)(ushort)(*(short *)(iVar15 + 0x3b4) - sVar10);
      fVar2 = (float)(int)fStack_4 * ((int)_DAT_006cc980);
      if (_DAT_006cc97c < fVar2) {
        fVar2 = fVar2 - _DAT_006cc978;
      }
    }
    fStack_10 = ((int)_DAT_006b73b4) * ((int)_DAT_006cca50);
    local_34 = -fVar2;
    if (-fVar2 <= ((int)_DAT_006b73b4) * ((int)_DAT_006ccd78)) {
      local_34 = ((int)_DAT_006b73b4) * ((int)_DAT_006ccd78);
    }
    if (fStack_10 < local_34) {
      local_34 = fStack_10;
    }
  }
  fVar2 = _DAT_006ccd74;
  if ((_DAT_006ccd74 < local_34) && (fVar2 = local_34, _DAT_006ccd70 < local_34)) {
    fVar2 = _DAT_006ccd70;
  }
  local_34 = fVar2;
  local_c = ABS((float)((int *)this)[0x80]) - *(float *)(((int *)this)[0x7c] + 0x3d4);
  local_1c = local_34;
  if (((int *)this)[0x89] == 3) {
    (**(code **)(*((int *)this) + 0x6c))();
    ((int *)this)[0x89] = 0;
  }
  iVar15 = ((int *)this)[0x8f];
  *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(iVar15 + 0x7c);
  fVar2 = local_c - *(float *)(iVar15 + 0x80);
  *(float *)(iVar15 + 0x7c) = local_c;
  fVar3 = (fVar2 * ((int)_DAT_006cc7dc) + *(float *)(iVar15 + 0x80)) * param_2;
  local_c = fVar2 / param_2;
  if (*(byte *)(iVar15 + 6) < *(byte *)(iVar15 + 5)) {
    *(byte *)(iVar15 + 6) = *(byte *)(iVar15 + 6) + 1;
  }
  fVar2 = param_2 + *(float *)(iVar15 + 8);
  pfVar1 = (float *)(*(int *)(iVar15 + 0x10) + (uint)*(byte *)(iVar15 + 7) * 4);
  *(float *)(iVar15 + 8) = fVar2;
  *(float *)(iVar15 + 8) = fVar2 - *pfVar1;
  *pfVar1 = param_2;
  bVar12 = *(char *)(iVar15 + 7) + 1;
  *(byte *)(iVar15 + 7) = bVar12;
  *(float *)(iVar15 + 0xc) = *(float *)(iVar15 + 8) / (float)*(byte *)(iVar15 + 6);
  if (*(byte *)(iVar15 + 5) <= bVar12) {
    *(undefined1 *)(iVar15 + 7) = 0;
  }
  if (*(byte *)(iVar15 + 0x2e) < *(byte *)(iVar15 + 0x2d)) {
    *(byte *)(iVar15 + 0x2e) = *(byte *)(iVar15 + 0x2e) + 1;
  }
  fVar2 = fVar3 + *(float *)(iVar15 + 0x30);
  pfVar1 = (float *)(*(int *)(iVar15 + 0x38) + (uint)*(byte *)(iVar15 + 0x2f) * 4);
  *(float *)(iVar15 + 0x30) = fVar2;
  *(float *)(iVar15 + 0x30) = fVar2 - *pfVar1;
  *pfVar1 = fVar3;
  bVar12 = *(char *)(iVar15 + 0x2f) + 1;
  *(byte *)(iVar15 + 0x2f) = bVar12;
  *(float *)(iVar15 + 0x34) = *(float *)(iVar15 + 0x30) / (float)*(byte *)(iVar15 + 0x2e);
  if (*(byte *)(iVar15 + 0x2d) <= bVar12) {
    *(undefined1 *)(iVar15 + 0x2f) = 0;
  }
  if (*(byte *)(iVar15 + 0x56) < *(byte *)(iVar15 + 0x55)) {
    *(byte *)(iVar15 + 0x56) = *(byte *)(iVar15 + 0x56) + 1;
  }
  fVar2 = local_c + *(float *)(iVar15 + 0x58);
  pfVar1 = (float *)(*(int *)(iVar15 + 0x60) + (uint)*(byte *)(iVar15 + 0x57) * 4);
  *(float *)(iVar15 + 0x58) = fVar2;
  *(float *)(iVar15 + 0x58) = fVar2 - *pfVar1;
  *pfVar1 = local_c;
  fStack_4 = (float)(uint)*(byte *)(iVar15 + 0x56);
  bVar12 = *(char *)(iVar15 + 0x57) + 1;
  *(byte *)(iVar15 + 0x57) = bVar12;
  *(float *)(iVar15 + 0x5c) = *(float *)(iVar15 + 0x58) / (float)(int)fStack_4;
  if (*(byte *)(iVar15 + 0x55) <= bVar12) {
    *(undefined1 *)(iVar15 + 0x57) = 0;
  }
  FUN_0045e7b0(param_2);
  iVar15 = ((int *)this)[0x88];
  if (bVar7) {
    if (ABS((float)((int *)this)[0x80]) < _DAT_006ccc00) {
      local_24 = 0x3f800000;
      local_28 = 0;
      goto LAB_0045f56f;
    }
    if ((float)((int *)this)[0x80] <= DAT_006cc7a4) {
      if (local_30 <= ((int)_DAT_006b7490) + _DAT_006ccc00) {
        if (local_30 < _DAT_006ccc00) {
          *(undefined1 *)(((int *)this) + 0x86) = 1;
        }
      }
      else {
        *(undefined1 *)(((int *)this) + 0x86) = 0;
      }
      if ((char)((int *)this)[0x86] == '\0') {
        (**(code **)(*((int *)this) + 0x68))();
        local_24 = 0x3f666666;
        local_28 = 0;
        goto LAB_0045f56f;
      }
      iVar13 = 0;
      local_34 = -local_1c;
    }
    else {
      if (-(((int)_DAT_006b7490) + _DAT_006ccc00) <= local_30) {
        if (_DAT_006ccc08 < local_30) {
          *(undefined1 *)(((int *)this) + 0x86) = 1;
        }
      }
      else {
        *(undefined1 *)(((int *)this) + 0x86) = 0;
      }
      if ((char)((int *)this)[0x86] == '\0') {
        (**(code **)(*((int *)this) + 0x68))();
        local_34 = -local_1c;
        local_28 = 0;
        local_24 = 0x3f666666;
        goto LAB_0045f56f;
      }
      iVar13 = -1;
    }
LAB_0045f573:
    FUN_0045fc90(&local_28,&local_24);
  }
  else {
    local_28 = 0;
    local_24 = 0;
    iVar13 = (**(code **)(**(int **)(((int *)this)[0x7c] + 0x34) + 0x10))();
    if (iVar13 == 2) {
      local_28 = ((int *)this)[0x7f];
    }
    (**(code **)(*((int *)this) + 0x68))();
LAB_0045f56f:
    iVar13 = -1;
    if ((char)iVar15 != '\0') goto LAB_0045f573;
  }
  fVar2 = local_30;
  local_1c = 45.0;
  if (bVar16) {
    fVar18 = (float10)FUN_00583ea0(local_30);
    fVar3 = (float)(fVar18 * (float10)((int)_DAT_006b7484));
    local_1c = DAT_006cc7a4;
    if (((float10)((int)DAT_006cc7a4) < fVar18 * (float10)((int)_DAT_006b7484)) &&
       (local_1c = fVar3, _DAT_006cc948 < fVar3)) {
      local_1c = _DAT_006cc948;
    }
  }
  fVar3 = local_34 / (local_1c * ((int)_DAT_006cca50));
  local_20 = local_18 / local_1c;
  local_2c = fVar3;
  if (((bVar16) && (local_2c = _DAT_006cc8a8, _DAT_006cc8a8 < fVar3)) &&
     (local_2c = fVar3, _DAT_006cc7bc < fVar3)) {
    local_2c = _DAT_006cc7bc;
  }
  local_c = local_2c - local_20;
  fVar18 = (float10)FUN_00583ea0(fVar2);
  fVar18 = fVar18 * (float10)((int)_DAT_006b7488);
  if (((DAT_006cc7a4 < local_20) && (local_2c < local_20)) ||
     ((local_20 < DAT_006cc7a4 && (local_20 < local_2c)))) {
    fVar18 = fVar18 * (float10)((int)_DAT_006b748c);
  }
  fVar2 = (float)(fVar18 * (float10)local_8);
  fVar18 = -(fVar18 * (float10)local_8);
  if (fVar18 < (float10)local_c) {
    fVar18 = (float10)local_c;
  }
  if ((float10)fVar2 < fVar18) {
    fVar18 = (float10)fVar2;
  }
  local_18 = (float)((fVar18 + (float10)local_20) * (float10)local_1c);
  if (bVar16) {
    local_18 = local_18 * *(float *)(*(int *)(((int *)this)[0x7c] + 0x20) + 0x270);
  }
  ((int *)this)[0x81] = (int)((float)((int *)this)[0x81] - param_2);
  fVar2 = (float)((int *)this)[0x81];
  if ((float)((int *)this)[0x81] <= DAT_006cc7a4) {
    fVar2 = DAT_006cc7a4;
  }
  ((int *)this)[0x81] = (int)fVar2;
  if ((char)((int *)this)[0x8a] == '\0') {
    if ((char)((int *)this)[0x83] == '\0') {
      ((int *)this)[0x77] = 0;
      ((int *)this)[0x79] = 0;
    }
    else {
      ((int *)this)[0x77] = local_28;
      ((int *)this)[0x79] = local_24;
    }
  }
  else {
    ((int *)this)[0x79] = 0x3f800000;
    iVar15 = *(int *)(((int *)this)[0x7c] + 0x24);
    iVar13 = 1;
    if (((iVar15 == 3) || (iVar15 == 2)) || (iVar15 == 4)) {
      (**(code **)(**(int **)(((int *)this)[0x7c] + 0x2c) + 0x58))();
    }
    ((int *)this)[0x77] = 0x3f800000;
  }
  iVar15 = *(int *)(((int *)this)[0x7c] + 0x3fc);
  if ((iVar15 == 0) || (iVar15 == 0x7fffffff)) {
LAB_0045f96e:
    if (*(char *)((int)((int *)this) + 0x229) == '\0') goto LAB_0045f9bf;
  }
  else {
    fStack_4 = (float)(((int)DAT_0073ad34) - iVar15);
    if ((float)*(int *)(((int *)this)[0x7c] + 0x3f8) * ((int)_DAT_006cca38) <
        (float)(int)fStack_4 * ((int)_DAT_006cca38)) {
      FUN_00465530();
      goto LAB_0045f96e;
    }
    if (*(char *)((int)((int *)this) + 0x229) == '\0') {
      *(undefined1 *)((int)((int *)this) + 0x229) = 1;
      goto LAB_0045f96e;
    }
  }
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) ||
     ((float)((int *)this)[0x80] < (float)((int *)this)[0x8b])) {
    *(undefined1 *)((int)((int *)this) + 0x229) = 0;
  }
  else {
    ((int *)this)[0x77] = ((int *)this)[0x7f];
    ((int *)this)[0x79] = 0;
  }
LAB_0045f9bf:
  ((int *)this)[0x8b] = ((int *)this)[0x80];
  ((int *)this)[0x84] = (int)((float)((int *)this)[0x84] - param_2);
  if (((float)((int *)this)[0x84] <= DAT_006cc7a4) || (ABS(local_30) <= _DAT_006ccb80)) {
    ((int *)this)[0x78] = 0;
  }
  else {
    ((int *)this)[0x79] = 0;
    ((int *)this)[0x78] = 0x3f800000;
    ((int *)this)[0x77] = 0;
  }
  iVar15 = FUN_00674898();
  *(short *)(((int *)this) + 0x74) =
       (short)((ulonglong)((longlong)iVar15 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar15 / 0x1680000) + (char)(iVar15 >> 0x1f)) >> 0xf);
  ((int *)this)[0x75] = iVar13;
  iVar15 = _DAT_006b73bc;
  if ((char)((int *)this)[0x88] != '\0') {
    ((int *)this)[0x79] = DAT_006b73b8;
    ((int *)this)[0x78] = iVar15;
    uVar8 = DAT_006b73c0;
    ((int *)this)[0x77] = 0;
    iVar15 = ((int *)this)[0x7c];
    *(undefined4 *)(iVar15 + 0x478) = uVar8;
    if (*(int *)(iVar15 + 0x28) == 1) {
      *(undefined4 *)(*(int *)(iVar15 + 0x34) + 0x78) = DAT_006b73c0;
    }
  }
  if (*(float *)(((int *)this)[0x7c] + 0x3b8) < _DAT_0070031c !=
      (*(float *)(((int *)this)[0x7c] + 0x3b8) == _DAT_0070031c)) {
    *(undefined2 *)(((int *)this) + 0x74) = 0;
  }
  return;
}
