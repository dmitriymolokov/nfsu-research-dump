/* spd-match: far pct=8.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0052e380();
int __cdecl FUN_0052eb70();
int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern int DAT_006b6478;
extern int DAT_006cc7a4;
extern int _DAT_006b6474;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8cc;
extern int _DAT_006cc8d0;
extern int _DAT_006f7ea8;
extern void LAB_0052ed77(void);
int unaff_ESI;

void __fastcall FUN_0052ec60(undefined4 param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar7;
  int *unaff_ESI;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  
  if ((*(int *)(unaff_ESI[0x2f] + 4) == 1) || (*(int *)(unaff_ESI[0x2f] + 4) == 2)) {
    FUN_0052eb70(param_1);
  }
  iVar6 = unaff_ESI[0x33];
  if (*(int *)unaff_ESI[0x2f] < 2) {
    iVar5 = unaff_ESI[iVar6 + 0x24];
  }
  else {
    iVar5 = unaff_ESI[iVar6 + 0x20];
  }
  unaff_ESI[0x28] = iVar5;
  switch(*(int *)unaff_ESI[0x2f]) {
  case 1:
    fVar8 = (float10)FUN_00564b10();
    unaff_ESI[extraout_EDX * 2 + 0x1c] =
         (int)(float)(fVar8 * (float10)(float)unaff_ESI[extraout_EDX + 0x24]);
    fVar8 = (float10)FUN_00564b10();
    unaff_ESI[extraout_EDX_00 * 2 + 0x1d] =
         (int)(float)(fVar8 * (float10)(float)unaff_ESI[extraout_EDX_00 + 0x24]);
    goto LAB_0052ed77;
  case 2:
    unaff_ESI[iVar6 * 2 + 0x1c] = unaff_ESI[iVar6 + 0x24];
    iVar6 = unaff_ESI[0x33];
    iVar5 = unaff_ESI[iVar6 + 0x24];
    break;
  case 3:
    fVar8 = (float10)FUN_00564b10();
    unaff_ESI[extraout_EDX_01 * 2 + 0x1c] =
         (int)(float)(fVar8 * (float10)(float)unaff_ESI[extraout_EDX_01 + 0x20]);
    fVar8 = (float10)FUN_00564b10();
    unaff_ESI[extraout_EDX_02 * 2 + 0x1d] =
         (int)(float)(fVar8 * (float10)(float)unaff_ESI[extraout_EDX_02 + 0x20]);
    goto LAB_0052ed77;
  case 4:
    unaff_ESI[iVar6 * 2 + 0x1c] = unaff_ESI[iVar6 + 0x20];
    iVar6 = unaff_ESI[0x33];
    iVar5 = unaff_ESI[iVar6 + 0x20];
    break;
  default:
    unaff_ESI[0x15] = 0x7fff;
    return;
  }
  unaff_ESI[iVar6 * 2 + 0x1d] = iVar5;
LAB_0052ed77:
  iVar6 = unaff_ESI[0x2b];
  iVar5 = unaff_ESI[0x2f];
  iVar2 = unaff_ESI[0x33];
  fVar4 = (float)unaff_ESI[iVar2 * 2 + 0x1c] - *(float *)(iVar5 + 0x38 + iVar6 * 8);
  uVar7 = iVar6 + 1U & 3;
  fVar3 = (float)unaff_ESI[iVar2 * 2 + 0x1d] - *(float *)(iVar5 + 0x38 + uVar7 * 8);
  if (*(int *)(iVar5 + 0x28 + iVar6 * 4) == 0) {
    if (DAT_006cc7a4 <= fVar4) {
      unaff_ESI[iVar2 * 2 + 0x1c] =
           (int)(fVar4 / (*(float *)(iVar5 + 0x3c + iVar6 * 8) -
                         *(float *)(iVar5 + 0x38 + iVar6 * 8)));
    }
    else {
      unaff_ESI[iVar2 * 2 + 0x1c] = 0;
    }
    if (DAT_006cc7a4 <= fVar3) {
      unaff_ESI[unaff_ESI[0x33] * 2 + 0x1d] =
           (int)(fVar3 / (*(float *)(unaff_ESI[0x2f] + 0x3c + uVar7 * 8) -
                         *(float *)(unaff_ESI[0x2f] + 0x38 + uVar7 * 8)));
    }
    else {
      unaff_ESI[unaff_ESI[0x33] * 2 + 0x1d] = 0;
    }
  }
  else {
    if (DAT_006cc7a4 <= fVar4) {
      if (*(float *)(iVar5 + 0x3c + iVar6 * 8) < (float)unaff_ESI[iVar2 * 2 + 0x1c]) {
        unaff_ESI[iVar2 * 2 + 0x1c] = *(int *)(iVar5 + 0x3c + iVar6 * 8);
        unaff_ESI[0x15] = 0;
        return;
      }
      unaff_ESI[iVar2 * 2 + 0x1c] =
           (int)(*(float *)(iVar5 + 0x38 + iVar6 * 8) / (float)unaff_ESI[iVar2 * 2 + 0x1c]);
    }
    else {
      unaff_ESI[iVar2 * 2 + 0x1c] = 0;
    }
    if (fVar3 < DAT_006cc7a4) {
      pfVar1 = (float *)(unaff_ESI + unaff_ESI[0x33] * 2 + 0x1d);
      iVar6 = unaff_ESI[0x2f];
      if (*(float *)(iVar6 + 0x3c + uVar7 * 8) < (float)unaff_ESI[unaff_ESI[0x33] * 2 + 0x1d]) {
        *pfVar1 = *(float *)(iVar6 + 0x3c + uVar7 * 8);
        unaff_ESI[0x15] = 0;
        return;
      }
      *pfVar1 = *(float *)(iVar6 + 0x38 + uVar7 * 8) / *pfVar1;
    }
  }
  if (_DAT_006cc7bc < (float)unaff_ESI[unaff_ESI[0x33] * 2 + 0x1c]) {
    unaff_ESI[unaff_ESI[0x33] * 2 + 0x1c] = 0x3f800000;
  }
  if (_DAT_006cc7bc < (float)unaff_ESI[unaff_ESI[0x33] * 2 + 0x1d]) {
    unaff_ESI[unaff_ESI[0x33] * 2 + 0x1d] = 0x3f800000;
  }
  iVar5 = FUN_0052e380(*(undefined4 *)(unaff_ESI[0x2f] + 0x18 + unaff_ESI[0x2b] * 4),
                       *(undefined4 *)(unaff_ESI[0x2f] + 0x18 + uVar7 * 4),
                       unaff_ESI + unaff_ESI[0x33] * 2 + 0x1c,(short)unaff_ESI[0x2c]);
  iVar6 = unaff_ESI[0x81];
  unaff_ESI[0x15] = iVar5;
  fVar3 = _DAT_006cc8cc;
  if (*(int *)(iVar6 + 0x188) == 1) {
    iVar2 = unaff_ESI[0x33];
    uVar7 = iVar2 - 1U & 1;
    if (*(int *)(iVar6 + 0x158 + uVar7 * 4) < *(int *)(iVar6 + 0x158 + iVar2 * 4)) {
      fVar4 = ABS(*(float *)(iVar6 + (uVar7 + 0x40 + iVar2 * 2) * 4));
      if (DAT_006b6478 < fVar4) {
        fVar4 = DAT_006b6478;
      }
      if (_DAT_006b6474 < fVar4) {
        fVar4 = _DAT_006cc8d0 *
                ((fVar4 - _DAT_006b6474) / (DAT_006b6478 - _DAT_006b6474)) * _DAT_006f7ea8;
        unaff_ESI[7] = (int)fVar4;
        if (fVar4 <= fVar3) {
          iVar6 = FUN_00674898();
          unaff_ESI[8] = iVar6;
          unaff_ESI[6] = (int)(float)(extraout_ST0 - (float10)iVar6);
          if (iVar6 == 0x1ff) {
            unaff_ESI[6] = 0;
          }
          fVar8 = (float10)_DAT_006cc7bc;
          unaff_ESI[10] = 0x7fff;
          unaff_ESI[5] = 0;
          iVar6 = (**(code **)(*unaff_ESI + 8))((float)(fVar8 - extraout_ST1));
          unaff_ESI[0x15] = iVar6 * iVar5 >> 0xf;
          return;
        }
        unaff_ESI[0x15] = 0;
        return;
      }
    }
  }
  return;
}
