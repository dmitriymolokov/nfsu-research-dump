/* spd-match: far pct=6.18 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00473480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int DAT_006cc7a4;
extern int DAT_00735fd8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
extern int _DAT_006cc90c;
extern int _DAT_006cc984;
extern int _DAT_006ccce4;

struct ThisCallBox {
  void FUN_00473480(float * obj, int param_2, undefined4 param_3);
};
void ThisCallBox::FUN_00473480(float * obj, int param_2, undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;

  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float local_70;
  float local_6c;
  float local_68;
  
  *(undefined4 *)(((int)this) + 0x1e0) = 0;
  *(undefined4 *)(((int)this) + 0x1e4) = 0;
  *(undefined4 *)(((int)this) + 0x1e8) = 0;
  *(undefined4 *)(((int)this) + 0x1f0) = 0;
  *(undefined4 *)(((int)this) + 500) = 0;
  *(undefined4 *)(((int)this) + 0x1f8) = 0;
  *(undefined4 *)(((int)this) + 0x1d4) = param_3;
  if (ABS(*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x60)) <= _DAT_006cc8bc) {
    if (ABS(*(float *)(param_2 + 0x54) - *(float *)(param_2 + 100)) <= _DAT_006cc8bc) {
      if (ABS(*(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x68)) <= _DAT_006cc8bc) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
    }
    else {
      bVar8 = 0;
    }
  }
  else {
    bVar8 = 0;
  }
  iVar13 = 0;
  *(uint *)(((int)this) + 0x14) = 4 - (uint)bVar8;
  if (0 < (int)(4 - (uint)bVar8)) {
    pfVar10 = (float *)(((int)this) + 0x38);
    pfVar9 = (float *)(param_2 + 0x38);
    do {
      fVar1 = pfVar9[-2];
      fVar2 = *obj;
      fVar3 = pfVar9[-1];
      fVar4 = obj[1];
      fVar5 = *pfVar9;
      fVar6 = obj[2];
      pfVar10[1] = 0.0;
      pfVar10[-2] = fVar1 - fVar2;
      pfVar10[-1] = fVar3 - fVar4;
      *pfVar10 = fVar5 - fVar6;
      *(short *)(pfVar10 + -3) = (short)iVar13;
      iVar13 = iVar13 + 1;
      *(float *)(((int)this) + 0x1e0) = (fVar1 - fVar2) + *(float *)(((int)this) + 0x1e0);
      *(float *)(((int)this) + 0x1e4) = (fVar3 - fVar4) + *(float *)(((int)this) + 0x1e4);
      *(float *)(((int)this) + 0x1e8) = (fVar5 - fVar6) + *(float *)(((int)this) + 0x1e8);
      pfVar10 = pfVar10 + 0xc;
      pfVar9 = pfVar9 + 4;
    } while (iVar13 < *(int *)(((int)this) + 0x14));
  }
  iVar13 = 0;
  *(undefined4 *)(((int)this) + 0x1f0) = *(undefined4 *)(((int)this) + 0x1e0);
  *(undefined4 *)(((int)this) + 500) = *(undefined4 *)(((int)this) + 0x1e4);
  *(undefined4 *)(((int)this) + 0x1f8) = *(undefined4 *)(((int)this) + 0x1e8);
  fVar1 = ((int)_DAT_006cc7bc) / (float)*(int *)(((int)this) + 0x14);
  *(float *)(((int)this) + 0x1e0) = fVar1 * *(float *)(((int)this) + 0x1e0);
  *(float *)(((int)this) + 0x1e4) = fVar1 * *(float *)(((int)this) + 0x1e4);
  *(float *)(((int)this) + 0x1e8) = fVar1 * *(float *)(((int)this) + 0x1e8);
  if (DAT_006cc7a4 < *(float *)(((int)this) + 0x1d4)) {
    fVar4 = -*(float *)(((int)this) + 0x1d4);
    *(undefined1 *)(((int)this) + 0x1d0) = 1;
    fVar1 = *(float *)(param_2 + 0x70);
    DAT_00735fd8 = 0;
    fVar2 = *(float *)(param_2 + 0x74);
    fVar3 = *(float *)(param_2 + 0x78);
    if (0 < *(int *)(((int)this) + 0x14)) {
      pfVar10 = (float *)(((int)this) + 0x38);
      do {
        fVar5 = pfVar10[-2] + fVar4 * fVar1;
        fVar6 = pfVar10[-1] + fVar2 * fVar4;
        fVar7 = fVar3 * fVar4 + *pfVar10;
        pfVar9 = (float *)((iVar13 + 1 + *(int *)(((int)this) + 0x14)) * 0x30 + ((int)this));
        pfVar9[3] = 0.0;
        pfVar10 = pfVar10 + 0xc;
        *pfVar9 = fVar5;
        pfVar9[1] = fVar6;
        pfVar9[2] = fVar7;
        *(short *)((*(int *)(((int)this) + 0x14) + iVar13) * 0x30 + 0x2c + ((int)this)) =
             *(short *)(((int)this) + 0x14) + (short)iVar13;
        iVar13 = iVar13 + 1;
        *(float *)(((int)this) + 0x1f0) = fVar5 + *(float *)(((int)this) + 0x1f0);
        *(float *)(((int)this) + 500) = fVar6 + *(float *)(((int)this) + 500);
        *(float *)(((int)this) + 0x1f8) = fVar7 + *(float *)(((int)this) + 0x1f8);
      } while (iVar13 < *(int *)(((int)this) + 0x14));
    }
    *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x14) << 1;
  }
  iVar13 = 0;
  bVar14 = DAT_00735fd8 != 0;
  fVar1 = ((int)_DAT_006cc7bc) / (float)*(int *)(((int)this) + 0x14);
  *(float *)(((int)this) + 0x1f0) = fVar1 * *(float *)(((int)this) + 0x1f0);
  *(float *)(((int)this) + 500) = fVar1 * *(float *)(((int)this) + 500);
  *(float *)(((int)this) + 0x1f8) = fVar1 * *(float *)(((int)this) + 0x1f8);
  if (bVar14) {
    if (*(int *)(((int)this) + 0x14) == 3) {
      local_70 = *(float *)(param_2 + 0x40) * ((int)_DAT_006cc984) +
                 *(float *)(param_2 + 0x30) * ((int)_DAT_006cc984);
      local_6c = *(float *)(param_2 + 0x44) * ((int)_DAT_006cc984) +
                 *(float *)(param_2 + 0x34) * ((int)_DAT_006cc984);
      local_68 = *(float *)(param_2 + 0x48) * ((int)_DAT_006cc984) +
                 *(float *)(param_2 + 0x38) * ((int)_DAT_006cc984);
      fVar1 = *(float *)(param_2 + 0x50) * ((int)_DAT_006ccce4);
      fVar2 = *(float *)(param_2 + 0x54) * ((int)_DAT_006ccce4);
      fVar3 = *(float *)(param_2 + 0x58) * ((int)_DAT_006ccce4);
    }
    else {
      local_70 = *(float *)(param_2 + 0x50) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x40) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x30) * ((int)_DAT_006cc90c);
      local_6c = *(float *)(param_2 + 0x54) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x44) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x34) * ((int)_DAT_006cc90c);
      local_68 = *(float *)(param_2 + 0x58) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x38) * ((int)_DAT_006cc90c) +
                 *(float *)(param_2 + 0x48) * ((int)_DAT_006cc90c);
      fVar1 = *(float *)(param_2 + 0x60) * ((int)_DAT_006cc90c);
      fVar2 = *(float *)(param_2 + 100) * ((int)_DAT_006cc90c);
      fVar3 = *(float *)(param_2 + 0x68) * ((int)_DAT_006cc90c);
    }
    pfVar10 = (float *)((*(int *)(((int)this) + 0x14) * 3 + 3) * 0x10 + ((int)this));
    pfVar10[3] = 0.0;
    pfVar10[2] = fVar3 + local_68;
    *pfVar10 = fVar1 + local_70;
    pfVar10[1] = fVar2 + local_6c;
    *(undefined2 *)(*(int *)(((int)this) + 0x14) * 0x30 + 0x2c + ((int)this)) =
         *(undefined2 *)(((int)this) + 0x14);
    if (0 < *(int *)(((int)this) + 0x14)) {
      pfVar10 = (float *)(((int)this) + 0x38);
      do {
        iVar11 = (*(int *)(((int)this) + 0x14) * 3 + 3) * 0x10;
        iVar12 = iVar11 + ((int)this);
        fVar1 = *(float *)(iVar11 + ((int)this)) * ((int)_DAT_006cc7dc);
        fVar2 = *(float *)(iVar12 + 4) * ((int)_DAT_006cc7dc);
        fVar3 = *(float *)(iVar12 + 8) * ((int)_DAT_006cc7dc);
        fVar4 = pfVar10[-2] * ((int)_DAT_006cc7dc);
        fVar5 = pfVar10[-1] * ((int)_DAT_006cc7dc);
        fVar6 = *pfVar10 * ((int)_DAT_006cc7dc);
        pfVar9 = (float *)((*(int *)(((int)this) + 0x14) + 2 + iVar13) * 0x30 + ((int)this));
        pfVar9[3] = 0.0;
        pfVar9[2] = fVar6 + fVar3;
        *pfVar9 = fVar4 + fVar1;
        pfVar9[1] = fVar5 + fVar2;
        *(short *)((*(int *)(((int)this) + 0x14) + iVar13) * 0x30 + 0x5c + ((int)this)) =
             *(short *)(((int)this) + 0x14) + (short)iVar13 + 1;
        iVar13 = iVar13 + 1;
        pfVar10 = pfVar10 + 0xc;
      } while (iVar13 < *(int *)(((int)this) + 0x14));
    }
    *(uint *)(((int)this) + 0x14) = (uint)(*(int *)(((int)this) + 0x14) != 3) * 2 + 7;
  }
  return;
}
