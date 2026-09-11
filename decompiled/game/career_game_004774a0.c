/* spd-match: far pct=6.63 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_10/buckets/p10_774a0/attempt2_surgical_c2440 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *);

int __cdecl FUN_00401cd0(...);
int __cdecl FUN_0040bd40(...);
int __cdecl FUN_0042a0c0(...);
int __cdecl FUN_00464ed0(...);
int __cdecl FUN_00465430(...);
int __cdecl FUN_0046aa40(...);
int __cdecl FUN_0046e5b0(...);
int __cdecl FUN_00477100(...);
int __cdecl FUN_004773f0(...);
int __cdecl FUN_004789d0(...);
int __cdecl FUN_00479160(...);
int __cdecl FUN_00479640(...);
int __cdecl FUN_00479e20(...);
int __cdecl FUN_0047a090(...);
int __cdecl FUN_00564a80(...);
int __cdecl FUN_00587e90(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b7104;
extern int DAT_006b7110;
extern int DAT_006cc7a4;
extern int DAT_006ffdf0;
extern int DAT_0072cc0c;
extern int DAT_0072cc44;
extern int DAT_0072cc58;
extern int DAT_0072cc64;
extern int DAT_0072cc70;
extern int DAT_0072cc78;
extern int DAT_0073457c;
extern int DAT_00735fa0;
extern int DAT_00735fb0;
extern int DAT_00735fb8;
extern int DAT_00735fbc;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_00736200;
extern int DAT_0073ad34;
extern int DAT_00779ae0;
extern int DAT_0078a336;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int _DAT_006b70fc;
extern int _DAT_006b7100;
extern int _DAT_006b7108;
extern int _DAT_006b710c;
extern int _DAT_006b7114;
extern int _DAT_006b7118;
extern int _DAT_006b711c;
extern int _DAT_006b7120;
extern int _DAT_006b72dc;
extern int _DAT_006cc7b4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7c8;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8b0;
extern int _DAT_006cc90c;
extern int _DAT_006cc95c;
extern int _DAT_006cc960;
extern int _DAT_006cc964;
extern int _DAT_006cc9f0;
extern int _DAT_006cc9f8;
extern int _DAT_006cca38;
extern int _DAT_006cca94;
extern int _DAT_006ccbd8;
extern int _DAT_006ccc58;
extern int _DAT_006ccddc;
extern int _DAT_006f0738;
extern int _DAT_006ffdd8;
extern int _DAT_0070002c;
extern int _DAT_0072cc48;
extern int _DAT_0072cc54;
extern int _DAT_0072cc5c;
extern int _DAT_0072cc6c;
extern int _DAT_0072cc74;
extern int _DAT_00779ae4;
extern int _DAT_00779ae8;
extern void LAB_00477500(...);
extern void LAB_004776da(...);
extern void LAB_00477d56(...);
extern void LAB_00478023(...);

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif

struct ThisCallBox {
  float10 FUN_004774a0(float param_2);
};
float10 ThisCallBox::FUN_004774a0(float param_2) {
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  byte bVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  int iStack_50;
  int iStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  LARGE_INTEGER LStack_20;
  LARGE_INTEGER local_18 [2];
  
  if ((((DAT_00735fb0 == 0) ||
       (iVar13 = *(int *)(*(int *)(((int)this) + 0x5c) + 0x14), *(int *)(iVar13 + 4) != 1)) ||
      (*(char *)(iVar13 + 0x734) != '\0')) || (*DAT_0073619c != 4)) {
    if (DAT_00735fb8 != 0) {
      DAT_00735fb8 = 99;
      goto LAB_00477500;
    }
  }
  else {
    DAT_00735fbc = 1;
LAB_00477500:
    FUN_0047a090(((int)this),param_2);
  }
  QueryPerformanceCounter(local_18);
  if (DAT_00736200 != 0) goto LAB_00477d56;
  FUN_00479160(*(undefined4 *)(*(int *)(((int)this) + 0x5c) + 0x404));
  FUN_00477100();
  if (*(int *)(*(int *)(((int)this) + 0x5c) + 0x3d8) != 1) {
    iVar13 = *(int *)(((int)this) + 4);
    if ((*(float *)(iVar13 + 0x1dc) <= *(float *)(iVar13 + 0x1e4)) ||
       (*(float *)(iVar13 + 0x1dc) <= *(float *)(iVar13 + 0x1e0))) {
      if (*(float *)(iVar13 + 0x1dc) < _DAT_006cc7dc) {
        *(undefined4 *)(iVar13 + 0x1dc) = 0;
      }
    }
    else {
      if (*(float *)(iVar13 + 0x1e4) < _DAT_006cc7dc) {
        *(undefined4 *)(iVar13 + 0x1e4) = 0;
      }
      if (*(float *)(*(int *)(((int)this) + 4) + 0x1e0) < _DAT_006cc7dc) {
        *(undefined4 *)(*(int *)(((int)this) + 4) + 0x1e0) = 0;
      }
    }
  }
  (**(code **)(**(int **)(((int)this) + 0x24) + 4))(*(undefined2 *)(*(int *)(((int)this) + 4) + 0x1d0));
  *(undefined4 *)(*(int *)(iStack_4c + 0x48) + 0x78) =
       *(undefined4 *)(*(int *)(iStack_4c + 4) + 0x1dc);
  iVar9 = (**(code **)(**(int **)(iStack_4c + 4) + 0x28))();
  iVar13 = *(int *)(iStack_4c + 0x4c);
  if ((1 < iVar9) && (iVar9 <= *(int *)(*(int *)(iVar13 + 0x18) + 0x18) + 1)) {
    if (*(int *)(iVar13 + 0x54) == 1) {
      *(undefined4 *)(iVar13 + 0x50) = 0;
    }
    *(int *)(iVar13 + 0x54) = iVar9;
  }
  cVar8 = FUN_00465430();
  if ((cVar8 != '\0') && (*(int *)(*(int *)(iStack_4c + 0x48) + 0x84) == 0)) {
    *(float *)(*(int *)(iStack_4c + 0x48) + 0x88) = (float)DAT_0073ad34 * _DAT_006cca38;
  }
  uVar10 = FUN_00465430();
  *(uint *)(*(int *)(iStack_4c + 0x48) + 0x84) = uVar10 & 0xff;
  iVar13 = **(int **)(iStack_4c + 4);
  uVar11 = (**(code **)(iVar13 + 0x24))();
  uVar11 = FUN_0046e5b0(uVar11);
  (**(code **)(iVar13 + 0x2c))(uVar11);
  (**(code **)(**(int **)(iStack_50 + 4) + 0x30))
            (*(undefined4 *)(*(int *)(iStack_50 + 0x4c) + 0x54));
  iVar13 = *(int *)(*(int *)(((int)this) + 0x5c) + 0x38);
  if (iVar13 == 0) {
LAB_004776da:
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x130) = 1;
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x134) = 1;
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 1;
    *(undefined1 *)(*(int *)(((int)this) + 0x50) + 0x30) = 1;
  }
  else if (iVar13 == 1) {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x130) = 0;
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x134) = 0;
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 0;
    *(undefined1 *)(*(int *)(((int)this) + 0x50) + 0x30) = 0;
  }
  else if (iVar13 == 2) goto LAB_004776da;
  if (*(int *)(*(int *)(((int)this) + 0x5c) + 0x3cc) == 0) {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 0;
  }
  if ((*DAT_0073619c == 4) &&
     ((_DAT_006cc7b4 < *(float *)(*(int *)(((int)this) + 4) + 0x1dc) ||
      ((*(int *)(*(int *)(((int)this) + 0x58) + 0x38c) == 4 &&
       (_DAT_006b711c < ABS(*(float *)(*(int *)(((int)this) + 0x58) + 0x58)))))))) {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x130) = 0;
  }
  fStack_40 = *(float *)(((int)this) + 0x78);
  iVar13 = *(int *)(((int)this) + 0x58);
  if ((*(int *)(iVar13 + 0x3c0) == 0) &&
     (((DAT_0078a344 != '\0' || (DAT_007361a8 != 0)) ||
      ((DAT_00735fa0 == 0 && ((DAT_0078a345 == '\0' && (DAT_007361a4 == 0)))))))) {
    fStack_40 = _DAT_006ffdd8 * fStack_40;
  }
  *(undefined4 *)(iVar13 + 0x2f0) = 0;
  *(undefined4 *)(iVar13 + 0x2f4) = 0;
  *(undefined4 *)(iVar13 + 0x2f8) = 0;
  *(undefined4 *)(iVar13 + 0x2fc) = 0;
  fVar5 = *(float *)(*(int *)(((int)this) + 0x58) + 0x390) * _DAT_006cc9f0;
  if (*(float *)(*(int *)(((int)this) + 4) + 0x1e0) < _DAT_006cc7dc) {
    fStack_44 = _DAT_006b70fc * param_2 + *(float *)(((int)this) + 0x7c);
    if (_DAT_006cc7bc < fStack_44) {
      fStack_44 = 1.0;
    }
  }
  else {
    fStack_44 = *(float *)(((int)this) + 0x7c) - _DAT_006b7100 * param_2;
    if (fStack_44 < DAT_006b7104) {
      fStack_44 = DAT_006b7104;
    }
  }
  iVar13 = 0x38;
  uVar11 = (unsigned int)&DAT_006ffdf0;
  *(float *)(((int)this) + 0x7c) = fStack_44;
  bVar12 = 0;
  local_18[0].s.LowPart = (unsigned int)&DAT_006ffdf0;
  do {
    if ((*DAT_0073619c == 4) || ((*(char *)(((int)this) + 0x68) != '\0' && (iVar13 < 0x40)))) {
      iVar9 = *(int *)(((int)this) + 4);
      if ((*(float *)(iVar9 + 0x1dc) <= _DAT_006cc95c) ||
         (((*(float *)(iVar9 + 0x1e4) <= _DAT_006cc7dc || (_DAT_006cca94 <= fVar5)) ||
          (iVar13 < 0x40)))) {
        fVar1 = *(float *)(*(int *)(((int)this) + 0x54) + 0x27c);
        if (iVar13 < 0x40) {
          fVar1 = _DAT_006cc7bc - fVar1;
        }
        *(float *)(*(int *)(iVar13 + ((int)this)) + 0x170) = (fVar1 + fVar1) * *(float *)(iVar9 + 0x1e4)
        ;
      }
      else {
        *(float *)(*(int *)(iVar13 + ((int)this)) + 0x170) = fVar5 * _DAT_006cc964;
      }
    }
    else {
      *(undefined4 *)(*(int *)(iVar13 + ((int)this)) + 0x170) = 0;
    }
    fVar1 = *(float *)(uVar11 + iVar13) * *(float *)(*(int *)(((int)this) + 4) + 0x1e0);
    if (*(int *)(*(int *)(((int)this) + 0x58) + 0x3c0) == 0) {
      if (_DAT_006cc960 < fVar1) {
        fVar1 = fVar1 + _DAT_006cc7dc;
      }
      *(float *)(*(int *)(iVar13 + ((int)this)) + 0x174) = fVar1;
    }
    else {
      if (_DAT_006cc960 < fVar1) {
        fVar4 = DAT_006cc7a4;
        if (_DAT_006b72dc <= *(float *)(*(int *)(((int)this) + 0x58) + 0x390)) {
          fVar15 = (float10)FUN_00464ed0();
          fVar4 = (float)fVar15;
        }
        if ((_DAT_006b7108 < ABS(fVar4)) && (fVar5 < _DAT_006b710c)) {
          fVar1 = fVar1 + _DAT_006cc7dc;
        }
      }
      *(float *)(*(int *)(iVar13 + ((int)this)) + 0x174) = fVar1;
    }
    if ((((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) ||
        ((DAT_00735fa0 == 0 && ((DAT_0078a345 == '\0' && (DAT_007361a4 == 0)))))) && (0x3f < iVar13)
       ) {
      LStack_20.s.LowPart = *(DWORD *)(*(int *)(((int)this) + 0x20) + 0x38);
      iVar9 = *(int *)(((int)this) + 0x58);
      uVar11 = *(undefined4 *)(iVar9 + 0x3c0);
      uVar2 = *(undefined4 *)(iVar9 + 0x394);
      uVar3 = *(undefined4 *)(*(int *)(iVar13 + ((int)this)) + 0x174);
      if (_DAT_006b72dc <= *(float *)(iVar9 + 0x390)) {
        fVar15 = (float10)FUN_00464ed0();
        fStack_34 = (float)fVar15;
      }
      else {
        fStack_34 = 0.0;
      }
      iVar9 = *(int *)(((int)this) + 0x54);
      fVar15 = (float10)FUN_0042a0c0();
      fVar15 = (float10)FUN_004773f0(fStack_34,uVar3,uVar2,*(undefined4 *)(iVar9 + 0x280),
                                     *(undefined4 *)(iVar9 + 0x284),uVar11,(float)fVar15);
      fStack_40 = (float)(((fVar15 - (float10)_DAT_006cc7bc) * (float10)fStack_44 +
                          (float10)_DAT_006cc7bc) * (float10)fStack_40);
      uVar11 = local_18[0].s.LowPart;
    }
    *(float *)(*(int *)(iVar13 + ((int)this)) + 0x178) = fStack_40;
    if ((1 << (bVar12 & 0x1f) & (int)*(char *)(*(int *)(((int)this) + 0x5c) + 0x86c)) == 0) {
      *(undefined4 *)(*(int *)(iVar13 + ((int)this)) + 0x16c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(iVar13 + ((int)this)) + 0x16c) = 0x3f800000;
    }
    if ((((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) &&
        (*(int *)(*(int *)(((int)this) + 0x48) + 0x84) != 0)) &&
       (fVar1 = *(float *)(*(int *)(((int)this) + 0x48) + 0x88) + _DAT_0070002c,
       (float)DAT_0073ad34 * _DAT_006cca38 < fVar1 != ((float)DAT_0073ad34 * _DAT_006cca38 == fVar1)
       )) {
      *(float *)(*(int *)(iVar13 + ((int)this)) + 0x178) =
           _DAT_006b7120 * *(float *)(*(int *)(iVar13 + ((int)this)) + 0x178);
    }
    bVar12 = bVar12 + 1;
    iVar13 = iVar13 + 4;
  } while (iVar13 < 0x48);
  FUN_00479640(((int)this));
  (*(undefined4 *)&(local_18[0])) = *(float *)(*(int *)(((int)this) + 0x5c) + 0x484);
  if (((float)(*(undefined4 *)&(local_18[0])) != DAT_006cc7a4) &&
     (*(char *)(*(int *)(((int)this) + 0x5c) + 0x86c) == '\0')) {
    FUN_00479160((*(undefined4 *)&(local_18[0])));
  }
  *(undefined4 *)(*(int *)(((int)this) + 0x50) + 0x10) = *(undefined4 *)(*(int *)(((int)this) + 4) + 0x1dc);
  *(float *)(*(int *)(((int)this) + 0x50) + 0x14) =
       (float)*(int *)(*(int *)(((int)this) + 0x58) + 0x38c) * _DAT_006cc90c;
  if (*(int *)(*(int *)(((int)this) + 0x58) + 0x3c0) == 0) {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x1e0) =
         *(undefined4 *)(*(int *)(((int)this) + 0x54) + 0x288);
  }
  else {
    fStack_38 = *(float *)(*(int *)(((int)this) + 0x54) + 0x28c);
    if (fStack_38 == DAT_006cc7a4) {
      iVar13 = *(int *)(((int)this) + 0x20);
      if (_DAT_006b72dc <= *(float *)(*(int *)(((int)this) + 0x58) + 0x390)) {
        fVar15 = (float10)FUN_00464ed0();
      }
      else {
        fVar15 = (float10)DAT_006cc7a4;
      }
      if ((fVar15 * (float10)*(float *)(iVar13 + 0x88) < (float10)DAT_006cc7a4) &&
         ((float10)_DAT_006cc7b8 < ABS(fVar15))) {
        fStack_38 = DAT_006b7110;
      }
    }
    *(float *)(*(int *)(((int)this) + 0x20) + 0x1e0) = fStack_38;
  }
  iVar13 = *(int *)(((int)this) + 0x5c);
  fVar5 = _DAT_006cc7bc;
  if ((iVar13 != 0) && (*(int *)(iVar13 + 0x868) != 0)) {
    fVar5 = DAT_006cc7a4;
    if (DAT_0078a336 != '\0') {
      (*(undefined4 *)&(local_18[0])) = ZEXT24(*(ushort *)(*(int *)(iVar13 + 0x868) + 0x34));
      fVar5 = (float)(*(undefined4 *)&(local_18[0])) * _DAT_006cc7c8;
    }
    fVar5 = _DAT_006cc7bc - fVar5 * _DAT_006ccc58;
  }
  if (*(int *)(*(int *)(((int)this) + 0x48) + 0x84) == 0) {
    if (*(char *)(iVar13 + 0x86c) == '\0') {
      *(float *)(*(int *)(((int)this) + 0x20) + 0x1e4) =
           fVar5 * *(float *)(*(int *)(((int)this) + 0x54) + 0x290);
    }
    else {
      *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x1e4) = 0x42700000;
    }
  }
  else {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x1e4) = 0;
  }
LAB_00477d56:
  iVar13 = FUN_00674898();
  fStack_38 = (float)(iVar13 + 1);
  fVar5 = (float)(int)fStack_38;
  piVar14 = (int *)(unsigned int)(DAT_0073619c);
  (*(undefined4 *)&(local_18[0])) = fStack_38;
  if (0 < (int)fStack_38) {
    do {
      if ((DAT_00735fbc != 0) || (*piVar14 != 4)) {
        iVar13 = *(int *)(((int)this) + 0x20);
        _DAT_00779ae4 = *(float *)(iVar13 + 0x24);
        _DAT_00779ae8 = *(float *)(iVar13 + 0x28);
        DAT_00779ae0 = *(float *)(iVar13 + 0x20);
        FUN_00401cd0();
      }
      _DAT_006f0738 = param_2 / fVar5;
      QueryPerformanceCounter(&LStack_20);
      FUN_0046aa40(((int)this) + 8,param_2 / fVar5);
      FUN_0040bd40();
      fVar1 = DAT_00779ae0;
      piVar14 = (int *)(unsigned int)(DAT_0073619c);
      if (*DAT_0073619c == 4) {
        if (((DAT_00735fbc == 0) ||
            (iVar13 = *(int *)(*(int *)(((int)this) + 0x5c) + 0x14), *(int *)(iVar13 + 4) != 1)) ||
           (*(char *)(iVar13 + 0x734) != '\0')) {
          DAT_0072cc58 = 1.0;
          DAT_0072cc0c = 1.0;
          DAT_0072cc44 = 1.0;
          _DAT_0072cc48 = (float)DAT_0073ad34 * _DAT_006cca38;
          DAT_0072cc70 = 1.0;
          _DAT_0072cc54 = 0.0;
          _DAT_0072cc6c = 0.0;
          _DAT_0072cc5c = 0.0;
        }
        else {
          fVar4 = *(float *)(*(int *)(((int)this) + 0x58) + 0x390) * _DAT_006cc9f0;
          if (_DAT_006cc95c <= fVar4) {
            iVar13 = *(int *)(((int)this) + 0x20);
            fVar6 = DAT_00779ae0 - *(float *)(iVar13 + 0x20);
            fVar7 = _DAT_00779ae4 - *(float *)(iVar13 + 0x24);
            _DAT_00779ae8 = _DAT_00779ae8 - *(float *)(iVar13 + 0x28);
            _DAT_0072cc74 =
                 SQRT(fVar6 * fVar6 + fVar7 * fVar7 + _DAT_00779ae8 * _DAT_00779ae8) + _DAT_0072cc74
            ;
            if (DAT_0072cc58 < DAT_006cc7a4) goto LAB_00478023;
          }
          else {
            DAT_0072cc58 = -1.0;
            DAT_0072cc0c = -1.0;
            DAT_0072cc44 = -1.0;
            _DAT_0072cc48 = (float)DAT_0073ad34 * _DAT_006cca38;
            DAT_0072cc70 = -1.0;
            _DAT_0072cc54 = 0.0;
            _DAT_0072cc6c = 0.0;
            _DAT_0072cc5c = 0.0;
            _DAT_0072cc74 = 0.0;
LAB_00478023:
            if (_DAT_006cc8b0 < fVar4) {
              _DAT_0072cc5c = 30.0;
              DAT_0072cc58 = (float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0072cc48;
            }
          }
          if ((DAT_0072cc0c < DAT_006cc7a4) && (_DAT_006cc9f8 < fVar4)) {
            _DAT_0072cc6c = 30.0;
            DAT_0072cc0c = (float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0072cc48;
          }
          if ((DAT_0072cc44 < DAT_006cc7a4) && (_DAT_006ccbd8 < _DAT_0072cc74)) {
            _DAT_0072cc54 = 30.0;
            DAT_0072cc44 = (float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0072cc48;
            DAT_0072cc78 = fVar4;
          }
          if ((DAT_0072cc70 < DAT_006cc7a4) && (_DAT_006ccddc < _DAT_0072cc74)) {
            DAT_0072cc70 = (float)DAT_0073ad34 * _DAT_006cca38 - _DAT_0072cc48;
            DAT_0072cc64 = fVar4;
          }
          fVar4 = *(float *)(*(int *)(((int)this) + 0x20) + 0x28);
          iVar13 = *(int *)(((int)this) + 0x20);
          _DAT_00779ae8 = fVar4;
          *(float *)(iVar13 + 0x24) = _DAT_00779ae4;
          *(float *)(iVar13 + 0x20) = fVar1;
          *(float *)(iVar13 + 0x28) = fVar4;
        }
      }
      else {
        if (1 < *DAT_0073619c) {
          (*(undefined4 *)&(local_18[0])) = DAT_0073ad34 - *(int *)(((int)this) + 100);
          if ((float)*(int *)(((int)this) + 0x60) * _DAT_006cca38 <
              (float)(int)(*(undefined4 *)&(local_18[0])) * _DAT_006cca38) {
            *(undefined1 *)(((int)this) + 0x68) = 1;
          }
          if (*(float *)(*(int *)(((int)this) + 4) + 0x1dc) <= _DAT_006cc7dc) {
            *(undefined1 *)(((int)this) + 0x69) = 1;
            *(undefined1 *)(((int)this) + 0x68) = 1;
          }
          else if ((*(char *)(((int)this) + 0x69) != '\0') && (*(int *)(((int)this) + 0x6c) != 0)) {
            FUN_00564a80(_DAT_006b7118 - _DAT_006b7114);
            uVar11 = FUN_00674898();
            *(undefined4 *)(((int)this) + 0x60) = uVar11;
            uVar11 = FUN_00674898();
            *(undefined4 *)(((int)this) + 100) = uVar11;
            *(undefined1 *)(((int)this) + 0x68) = 0;
            *(int *)(((int)this) + 0x6c) = *(int *)(((int)this) + 0x6c) + -1;
            *(undefined1 *)(((int)this) + 0x69) = 0;
          }
        }
        if (*(char *)(((int)this) + 0x68) != '\0') {
          iVar13 = *(int *)(((int)this) + 0x20);
          *(undefined4 *)(iVar13 + 0x70) = 0;
          *(undefined4 *)(iVar13 + 0x74) = 0;
          *(undefined4 *)(iVar13 + 0x78) = 0;
        }
      }
      fStack_38 = (float)((int)fStack_38 - 1);
    } while (fStack_38 != 0.0);
  }
  if (((DAT_00735fbc != 0) &&
      (iVar13 = *(int *)(*(int *)(((int)this) + 0x5c) + 0x14), *(int *)(iVar13 + 4) == 1)) &&
     (*(char *)(iVar13 + 0x734) == '\0')) {
    if (DAT_006cc7a4 < _DAT_0072cc5c) {
      _DAT_0072cc5c = _DAT_0072cc5c - DAT_0073457c;
    }
    if (DAT_006cc7a4 < _DAT_0072cc6c) {
      _DAT_0072cc6c = _DAT_0072cc6c - DAT_0073457c;
    }
    if (DAT_006cc7a4 < _DAT_0072cc54) {
      _DAT_0072cc54 = _DAT_0072cc54 - DAT_0073457c;
    }
  }
  FUN_004789d0(param_2);
  iVar13 = *(int *)(((int)this) + 0x5c);
  if (((*(int *)(*(int *)(iVar13 + 0x14) + 4) != 3) && (*(char *)(iVar13 + 0x8a8) == '\0')) &&
     (*(char *)(iVar13 + 0x4d0) != '\0')) {
    iVar13 = 0x38;
    do {
      FUN_00587e90(param_2,*(undefined4 *)(((int)this) + 0x5c));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x48);
  }
  FUN_00479e20(param_2);
  return (float10)param_2;
}
