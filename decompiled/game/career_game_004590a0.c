/* spd-match: far pct=6.38 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004590A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00459710(...);
int __cdecl FUN_005673e0(...);
extern int DAT_006cc7a4;

struct ThisCallBox {
  int FUN_004590a0(int obj, float param_2, float *param_3);
};
int ThisCallBox::FUN_004590a0(int obj, float param_2, float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;

  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float afStack_64 [24];
  
  if (*((char *)this) == '\0') {
    return -1;
  }
  if (*((char *)this) == '\x01') {
    fVar1 = *(float *)(((char *)this) + 0x10);
    fVar2 = *(float *)(obj + 0x60);
    fVar3 = *(float *)(((char *)this) + 0x14);
    fVar4 = *(float *)(obj + 100);
    fVar5 = *(float *)(((char *)this) + 0x18);
    fVar6 = *(float *)(obj + 0x68);
    FUN_005673e0(param_2);
    fVar7 = *(float *)(obj + 100);
    fVar8 = *(float *)(obj + 0x68);
    *param_3 = (fVar1 - fVar2) + *(float *)(obj + 0x60);
    param_3[2] = fVar8 + (fVar5 - fVar6);
    param_3[1] = fVar7 + (fVar3 - fVar4);
    return 0;
  }
  pfVar13 = (float *)(obj + 0x60);
  iVar10 = FUN_00459710(*(undefined4 *)(obj + 0x3d0),pfVar13,obj + 0x70);
  iVar11 = (iVar10 + 1) * 0x10;
  fVar1 = *(float *)(((char *)this) + iVar11 + 4) - *(float *)(obj + 100);
  fVar2 = *(float *)(((char *)this) + iVar11 + 8) - *(float *)(obj + 0x68);
  fVar1 = SQRT((*(float *)(((char *)this) + iVar11) - *pfVar13) * (*(float *)(((char *)this) + iVar11) - *pfVar13)
               + fVar2 * fVar2 + fVar1 * fVar1);
  afStack_64[iVar10 + 1] = fVar1;
  iVar11 = iVar10;
  if (fVar1 < param_2) {
    cVar9 = *((char *)this);
    iVar11 = iVar10 + 1;
    if (iVar11 < cVar9) {
      pfVar12 = (float *)(((char *)this) + iVar11 * 0x10 + 0x18);
      do {
        fVar1 = SQRT((pfVar12[-2] - pfVar12[-6]) * (pfVar12[-2] - pfVar12[-6]) +
                     (pfVar12[-1] - pfVar12[-5]) * (pfVar12[-1] - pfVar12[-5]) +
                     (*pfVar12 - pfVar12[-4]) * (*pfVar12 - pfVar12[-4])) + afStack_64[iVar11];
        afStack_64[iVar11 + 1] = fVar1;
        if (param_2 <= fVar1) break;
        iVar11 = iVar11 + 1;
        pfVar12 = pfVar12 + 4;
      } while (iVar11 < cVar9);
    }
  }
  iVar14 = *((char *)this) + -1;
  if (iVar11 <= iVar14) {
    if (iVar10 < iVar11) {
      iVar10 = iVar11 + -1;
      pfVar13 = (float *)(((char *)this) + iVar11 * 0x10);
      fVar1 = afStack_64[iVar11];
    }
    else {
      iVar10 = -1;
      fVar1 = DAT_006cc7a4;
    }
    pfVar12 = (float *)(((char *)this) + (iVar11 + 1) * 0x10);
    fVar7 = (param_2 - fVar1) / (afStack_64[iVar11 + 1] - fVar1);
    fVar1 = pfVar12[1];
    fVar2 = pfVar13[1];
    fVar3 = pfVar12[2];
    fVar4 = pfVar13[2];
    fVar5 = pfVar13[1];
    fVar6 = pfVar13[2];
    *param_3 = (*pfVar12 - *pfVar13) * fVar7 + *pfVar13;
    param_3[1] = (fVar1 - fVar2) * fVar7 + fVar5;
    param_3[2] = (fVar3 - fVar4) * fVar7 + fVar6;
    return iVar10;
  }
  fVar1 = *(float *)(((char *)this) + iVar14 * 0x10 + 0x10);
  pfVar13 = (float *)(((char *)this) + iVar14 * 0x10);
  fVar2 = *pfVar13;
  fVar3 = pfVar13[5];
  fVar4 = pfVar13[1];
  fVar5 = pfVar13[6];
  fVar6 = pfVar13[2];
  FUN_005673e0(param_2 - afStack_64[*((char *)this)]);
  fVar7 = pfVar13[5];
  fVar8 = pfVar13[6];
  *param_3 = (fVar1 - fVar2) + pfVar13[4];
  param_3[2] = fVar8 + (fVar5 - fVar6);
  param_3[1] = fVar7 + (fVar3 - fVar4);
  return iVar14;
}
