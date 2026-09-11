/* spd-match: far pct=2.82 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0046d700();
int __cdecl FUN_0046e940();
extern int DAT_006cc7a4;
extern int DAT_0073457c;
extern int DAT_0073ad34;
extern int _DAT_006cc908;
extern int _DAT_006cc960;
extern int _DAT_006cc9f8;
extern int _DAT_006cca38;
extern int _DAT_006cca94;
extern int _DAT_006ccb70;
extern int _DAT_006ccb74;
extern int _DAT_006ccb78;
extern int _DAT_00700074;
extern void LAB_0046e64c(void);
extern void LAB_0046e708(void);
int unaff_ESI;

int FUN_0046e5b0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  int unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  float local_8;
  
  if (param_1 != -1) {
    if (param_1 == -2) {
      fVar1 = ((int)(DAT_0073457c)) + *(float *)(unaff_ESI + 0x50);
      *(float *)(unaff_ESI + 0x50) = fVar1;
      if (*(int *)(unaff_ESI + 0x44) != 3) {
        return -2;
      }
      iVar2 = *(int *)(unaff_ESI + 0x20);
      fVar4 = **(float **)(iVar2 + 0x18);
      fVar5 = (*(float **)(iVar2 + 0x18))[2];
      fVar8 = *(float *)(iVar2 + 0x14) * _DAT_006ccb78;
      iVar11 = *(int *)(unaff_ESI + 0x3c);
      if (iVar11 < 3) {
        fVar9 = DAT_006cc7a4;
        if (*(float *)(iVar2 + 0x78) < _DAT_006cc960) {
          fVar9 = fVar4 + _DAT_006cc9f8;
        }
      }
      else {
        fVar9 = (*(float *)(*(int *)(unaff_ESI + 0x18) + 0x20 + iVar11 * 4) /
                *(float *)(*(int *)(unaff_ESI + 0x18) + 0x1c + iVar11 * 4)) * _DAT_00700074 * fVar5;
      }
      iVar2 = *(int *)(unaff_ESI + 0x38);
      iVar3 = *(int *)(unaff_ESI + 0x54);
      if (iVar3 == iVar2) {
        if ((_DAT_006cca94 < fVar1) ||
           ((*(int *)(unaff_ESI + 0x40) < iVar11 && (fVar5 - _DAT_006ccb74 < fVar8)))) {
          return -1;
        }
      }
      else {
        *(int *)(unaff_ESI + 0x40) = iVar11;
        if (iVar3 < iVar2) {
          *(undefined4 *)(unaff_ESI + 0x50) = 0;
          if (fVar9 < fVar8) {
            *(int *)(unaff_ESI + 0x54) = iVar11;
            *(int *)(unaff_ESI + 0x38) = iVar11;
            return -2;
          }
          *(int *)(unaff_ESI + 0x38) = iVar11 + -1;
          return -2;
        }
        if (iVar2 < iVar3) {
          *(int *)(unaff_ESI + 0x38) = iVar11 + 1;
          *(undefined4 *)(unaff_ESI + 0x50) = 0;
          return -2;
        }
      }
      if (fVar4 + _DAT_006cc9f8 <= fVar8) {
        return -2;
      }
      if (iVar11 < 3) {
        return -2;
      }
      *(int *)(unaff_ESI + 0x38) = iVar11 + -1;
      return -1;
    }
    if (*(int *)(unaff_ESI + 0x60) == 3) {
      iVar2 = *(int *)(unaff_ESI + 0x3c);
      if (param_1 != iVar2) {
        if (*(int *)(unaff_ESI + 0x44) != 1) {
          *(undefined4 *)(unaff_ESI + 0x48) = 0;
          *(float *)(unaff_ESI + 0x5c) = (float)DAT_0073ad34 * _DAT_006cca38;
          return iVar2;
        }
        if (*(int *)(unaff_ESI + 0x48) != 0) {
          return param_1;
        }
        *(undefined4 *)(unaff_ESI + 0x48) = 1;
        *(int *)(unaff_ESI + 0x38) = param_1;
        if (param_1 <= iVar2) {
          return param_1;
        }
        if (iVar2 < 1) {
          return param_1;
        }
        FUN_0046e940(*(undefined4 *)(unaff_ESI + 0x6c));
        return param_1;
      }
    }
    iVar2 = *(int *)(unaff_ESI + 0x3c);
    if (param_1 == iVar2) {
      return param_1;
    }
    if (param_1 == *(int *)(unaff_ESI + 0x38)) {
      return param_1;
    }
    *(int *)(unaff_ESI + 0x38) = param_1;
    if (param_1 <= iVar2) {
      return param_1;
    }
    if (iVar2 < 1) {
      return param_1;
    }
    FUN_0046e940(*(float *)(*(int *)(unaff_ESI + 0x20) + 0x14) * _DAT_006ccb78);
    return param_1;
  }
  iVar2 = *(int *)(unaff_ESI + 0x3c);
  iVar11 = *(int *)(unaff_ESI + 0x20);
  fVar1 = *(float *)(iVar11 + 0x14);
  *(undefined4 *)(unaff_ESI + 0x54) = 1;
  fVar1 = fVar1 * _DAT_006ccb78;
  if (iVar2 < 2) {
    *(undefined4 *)(unaff_ESI + 0x38) = 2;
    goto LAB_0046e708;
  }
  if (*(int *)(unaff_ESI + 0x44) != 3) goto LAB_0046e708;
  fVar12 = (float10)FUN_0046d700(iVar2);
  local_8 = *(float *)(unaff_ESI + 0x7c) + *(float *)(unaff_ESI + 0xa4 + iVar2 * 4);
  fVar13 = (float10)DAT_006cc7a4;
  if (iVar2 == 2) {
LAB_0046e64c:
    if (_DAT_006cc960 <= *(float *)(iVar11 + 0x78)) {
      local_8 = 0.0;
    }
    else {
      local_8 = **(float **)(iVar11 + 0x18) + _DAT_006cc9f8;
    }
  }
  else {
    iVar3 = *(int *)(unaff_ESI + 0x18);
    fVar13 = (float10)FUN_0046d700(iVar2 + -1);
    fVar13 = ((float10)*(float *)(iVar3 + 0x20 + iVar2 * 4) /
             (float10)*(float *)(iVar3 + 0x1c + iVar2 * 4)) * fVar13 - (float10)_DAT_006ccb70;
    if (iVar2 < 3) goto LAB_0046e64c;
  }
  if ((fVar1 < (float)fVar12) || (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x18) + 1 <= iVar2)) {
    if ((fVar1 < local_8 != (fVar1 == local_8)) &&
       ((float10)fVar1 < fVar13 != ((float10)fVar1 == fVar13))) {
      *(int *)(unaff_ESI + 0x38) = iVar2 + -1;
    }
  }
  else {
    bVar6 = true;
    piVar10 = (int *)(unaff_ESI + 0x24);
    iVar11 = 4;
    do {
      if ((*(char *)(*piVar10 + 0x155) == '\0') || (_DAT_006cc908 <= *(float *)(*piVar10 + 0x160)))
      {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar6 = (bool)(bVar6 & bVar7);
      piVar10 = piVar10 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (bVar6) {
      *(int *)(unaff_ESI + 0x38) = iVar2 + 1;
    }
  }
LAB_0046e708:
  if (((*(int *)(unaff_ESI + 0x44) == 3) && (iVar2 < *(int *)(unaff_ESI + 0x38))) && (0 < iVar2)) {
    FUN_0046e940(fVar1);
    return -1;
  }
  return -1;
}
