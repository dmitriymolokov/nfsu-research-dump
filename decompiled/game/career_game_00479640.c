/* spd-match: far pct=5.89 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2113/batches/20260724T133058Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_004280a0();
int __cdecl FUN_00454f30();
int __cdecl FUN_00464ed0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern unsigned char *DAT_006f100c;
extern int DAT_006fff04;
extern int DAT_0073457c;
extern unsigned char *DAT_0073619c;
extern int _DAT_006b72dc;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc95c;
extern int _DAT_006cc960;
extern int _DAT_006cc9f0;
extern int _DAT_006ffeec;
extern int _DAT_006ffef0;
extern int _DAT_006ffef4;
extern int _DAT_006ffef8;
extern int _DAT_006ffefc;
extern int _DAT_006fff00;

void FUN_00479640(float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  float local_c;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)((int)param_1 + 0x5c);
  iVar3 = *(int *)(iVar2 + 0x24);
  if ((((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) ||
     ((cVar9 = FUN_004280a0(), cVar9 != '\0' ||
      (param_1 = 1.4013e-45, *(float *)(iVar2 + 0x3d0) <= DAT_006cc7a4)))) {
    param_1 = 0.0;
  }
  uVar11 = (uint)(_DAT_006cc960 <= *(float *)(*(int *)(iVar7 + 0x54) + 0x1c0));
  if (_DAT_006cc95c < *(float *)(*(int *)(iVar7 + 0x54) + 0x1c0)) {
    uVar11 = 2;
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (*(char *)(iVar2 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar1 = *(float *)(&DAT_006f100c + (uVar11 * 0x1b + (int)*(char *)(iVar2 + 0x424)) * 4);
  if (DAT_006cc7a4 < *(float *)(*(int *)(iVar7 + 0x4c) + 0x68)) {
    fVar4 = _DAT_006cc7bc / fVar1;
    fVar6 = fVar4 * *(float *)(*(int *)(iVar7 + 0x4c) + 0x68);
    if (_DAT_006cc7bc < fVar6) {
      fVar6 = _DAT_006cc7bc;
    }
    *(float *)(*(int *)(iVar7 + 0x38) + 0x178) =
         (fVar6 + (int)_DAT_006cc7bc) * *(float *)(*(int *)(iVar7 + 0x38) + 0x178);
    fVar6 = *(float *)(*(int *)(iVar7 + 0x4c) + 0x68) * fVar4;
    if (_DAT_006cc7bc < fVar6) {
      fVar6 = _DAT_006cc7bc;
    }
    *(float *)(*(int *)(iVar7 + 0x3c) + 0x178) =
         (fVar6 + (int)_DAT_006cc7bc) * *(float *)(*(int *)(iVar7 + 0x3c) + 0x178);
    fVar6 = *(float *)(*(int *)(iVar7 + 0x4c) + 0x68) * fVar4;
    if (_DAT_006cc7bc < fVar6) {
      fVar6 = _DAT_006cc7bc;
    }
    *(float *)(*(int *)(iVar7 + 0x40) + 0x178) =
         (fVar6 + (int)_DAT_006cc7bc) * *(float *)(*(int *)(iVar7 + 0x40) + 0x178);
    fVar4 = fVar4 * *(float *)(*(int *)(iVar7 + 0x4c) + 0x68);
    if (_DAT_006cc7bc < fVar4) {
      fVar4 = _DAT_006cc7bc;
    }
    *(float *)(*(int *)(iVar7 + 0x44) + 0x178) =
         (fVar4 + (int)_DAT_006cc7bc) * *(float *)(*(int *)(iVar7 + 0x44) + 0x178);
  }
  if (param_1 != 0.0) {
    iVar2 = *(int *)(iVar7 + 0x58);
    if (*(int *)(iVar2 + 0x3c8) == 0) {
      if ((*DAT_0073619c == 4) && (*(float *)(iVar2 + 0x390) * _DAT_006cc9f0 < _DAT_006fff00)) {
        iVar3 = *(int *)(iVar7 + 0x38);
        fVar6 = _DAT_006cc7bc / _DAT_006ffefc;
        local_c = 0.0;
        fVar4 = *(float *)(iVar3 + 0x158) * fVar6 * *(float *)(iVar3 + 0x160);
        fVar5 = *(float *)(iVar3 + 0x160);
        if (fVar4 <= *(float *)(iVar3 + 0x160)) {
          fVar5 = fVar4;
        }
        if (DAT_006cc7a4 < fVar5) {
          local_c = fVar5;
        }
        fVar8 = local_c;
        iVar3 = *(int *)(iVar7 + 0x3c);
        fVar5 = *(float *)(iVar3 + 0x158) * fVar6 * *(float *)(iVar3 + 0x160);
        fVar4 = *(float *)(iVar3 + 0x160);
        if (fVar5 <= *(float *)(iVar3 + 0x160)) {
          fVar4 = fVar5;
        }
        if (local_c < fVar4) {
          local_c = fVar4;
        }
        uVar11 = (uint)(fVar8 < fVar4);
        iVar3 = *(int *)(iVar7 + 0x40);
        fVar5 = *(float *)(iVar3 + 0x158) * fVar6 * *(float *)(iVar3 + 0x160);
        fVar4 = *(float *)(iVar3 + 0x160);
        if (fVar5 <= *(float *)(iVar3 + 0x160)) {
          fVar4 = fVar5;
        }
        if (local_c < fVar4) {
          uVar11 = 0;
          local_c = fVar4;
        }
        iVar3 = *(int *)(iVar7 + 0x44);
        param_1 = *(float *)(iVar3 + 0x158) * fVar6 * *(float *)(iVar3 + 0x160);
        fVar4 = *(float *)(iVar3 + 0x160);
        if (param_1 <= *(float *)(iVar3 + 0x160)) {
          fVar4 = param_1;
        }
        if (local_c < fVar4) {
          uVar11 = 3;
          local_c = fVar4;
        }
        if (_DAT_006cc7dc < local_c) {
          FUN_00454f30(&param_1,local_c);
          *(float *)(iVar2 + 0x3d0) = (_DAT_006cc7bc / fVar1) * param_1;
          param_1 = (float)(uVar11 & 1);
          uVar10 = FUN_00674898();
          *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3c8) = uVar10;
          *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3cc) = DAT_006fff04;
          *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3d4) = 0;
        }
      }
    }
    else {
      if (_DAT_006b72dc <= *(float *)(iVar2 + 0x390)) {
        fVar13 = (float10)FUN_00464ed0();
      }
      else {
        fVar13 = (float10)DAT_006cc7a4;
      }
      if (ABS(fVar13) <= (float10)_DAT_006ffef4) {
        if ((((_DAT_006ffef0 <= *(float *)(*(int *)(iVar7 + 0x38) + 0x160)) ||
             (_DAT_006ffef0 <= *(float *)(*(int *)(iVar7 + 0x3c) + 0x160))) ||
            (_DAT_006ffef0 <= *(float *)(*(int *)(iVar7 + 0x40) + 0x160))) ||
           (_DAT_006ffef0 <= *(float *)(*(int *)(iVar7 + 0x44) + 0x160))) {
          *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3d4) = 0;
          fVar1 = *(float *)(*(int *)(iVar7 + 0x58) + 0x3cc) - (int)DAT_0073457c;
          *(float *)(*(int *)(iVar7 + 0x58) + 0x3cc) = fVar1;
          uVar10 = DAT_006fff04;
          if (fVar1 < DAT_006cc7a4) {
            *(int *)(*(int *)(iVar7 + 0x58) + 0x3c8) = *(int *)(*(int *)(iVar7 + 0x58) + 0x3c8) + -1
            ;
            *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3cc) = uVar10;
          }
        }
        else {
          fVar1 = ((int)DAT_0073457c) + *(float *)(*(int *)(iVar7 + 0x58) + 0x3d4);
          *(float *)(*(int *)(iVar7 + 0x58) + 0x3d4) = fVar1;
          if (_DAT_006ffef8 < fVar1) {
            *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3c8) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar7 + 0x58) + 0x3c8) = 0;
      }
    }
    if (*(int *)(*(int *)(iVar7 + 0x58) + 0x3c8) != 0) {
      *(float *)(*(int *)(iVar7 + 0x38) + 0x178) =
           _DAT_006ffeec * *(float *)(*(int *)(iVar7 + 0x38) + 0x178);
      uVar11 = *(uint *)(*(int *)(iVar7 + 0x58) + 0x3c8) & 0x80000001;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
      }
      if (uVar11 == 1) {
        *(float *)(*(int *)(iVar7 + 0x38) + 0x178) =
             *(float *)(*(int *)(iVar7 + 0x58) + 0x3d0) * *(float *)(*(int *)(iVar7 + 0x38) + 0x178)
        ;
      }
      *(float *)(*(int *)(iVar7 + 0x3c) + 0x178) =
           _DAT_006ffeec * *(float *)(*(int *)(iVar7 + 0x3c) + 0x178);
      uVar11 = *(uint *)(*(int *)(iVar7 + 0x58) + 0x3c8) & 0x80000001;
      bVar12 = uVar11 == 0;
      if ((int)uVar11 < 0) {
        bVar12 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar12) {
        *(float *)(*(int *)(iVar7 + 0x3c) + 0x178) =
             *(float *)(*(int *)(iVar7 + 0x58) + 0x3d0) * *(float *)(*(int *)(iVar7 + 0x3c) + 0x178)
        ;
      }
      *(float *)(*(int *)(iVar7 + 0x40) + 0x178) =
           _DAT_006ffeec * *(float *)(*(int *)(iVar7 + 0x40) + 0x178);
      uVar11 = *(uint *)(*(int *)(iVar7 + 0x58) + 0x3c8) & 0x80000001;
      bVar12 = uVar11 == 0;
      if ((int)uVar11 < 0) {
        bVar12 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar12) {
        *(float *)(*(int *)(iVar7 + 0x40) + 0x178) =
             *(float *)(*(int *)(iVar7 + 0x58) + 0x3d0) * *(float *)(*(int *)(iVar7 + 0x40) + 0x178)
        ;
      }
      *(float *)(*(int *)(iVar7 + 0x44) + 0x178) =
           _DAT_006ffeec * *(float *)(*(int *)(iVar7 + 0x44) + 0x178);
      uVar11 = *(uint *)(*(int *)(iVar7 + 0x58) + 0x3c8) & 0x80000001;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
      }
      if (uVar11 == 1) {
        *(float *)(*(int *)(iVar7 + 0x44) + 0x178) =
             *(float *)(*(int *)(iVar7 + 0x58) + 0x3d0) * *(float *)(*(int *)(iVar7 + 0x44) + 0x178)
        ;
      }
    }
  }
  return;
}
