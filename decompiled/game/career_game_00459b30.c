/* spd-match: far pct=3.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5e0();
int __cdecl FUN_00459710();
int __cdecl FUN_00459f70();
int __cdecl FUN_0045a000();
extern int DAT_006b752c;
extern int DAT_006cc7a4;
extern int _DAT_006b7528;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc8bc;
extern int _DAT_006cca64;
extern void LAB_00459efb(void);
extern void LAB_00459f5d(void);

float10 FUN_00459b30(char *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float10 fVar13;
  float10 fVar14;
  bool local_af;
  char local_ae;
  float *local_ac;
  float local_a4 [20];
  float afStack_54 [21];
  
  bVar4 = true;
  if (*param_1 == '\0') {
    return (float10)(unsigned int)(_DAT_006cc8a8);
  }
  local_af = *param_1 == '\x01';
  if (local_af) {
    local_a4[1] = *(float *)(unsigned int)((param_2 + 0x3d4));
    fVar6 = *(float *)(unsigned int)((param_2 + 0x60)) - *(float *)(unsigned int)((param_1 + 0x10));
    fVar12 = *(float *)(unsigned int)((param_2 + 100)) - *(float *)(unsigned int)((param_1 + 0x14));
    afStack_54[1] = SQRT(fVar6 * fVar6 + fVar12 * fVar12);
  }
  fVar6 = (float)FUN_00459710(*(undefined4 *)(param_2 + 0x3d0),param_2 + 0x60,param_2 + 0x70);
  local_a4[0] = fVar6;
  if ((int)fVar6 < (int)*param_1) {
    local_ac = (float *)(unsigned int)((param_1 + (int)fVar6 * 0x10 + 0x14));
    fVar12 = fVar6;
    do {
      if (local_af) goto LAB_00459efb;
      local_a4[(int)fVar12 + 1] = *(float *)(unsigned int)((param_2 + 0x3d4));
      if ((int)fVar6 < (int)fVar12) {
        fVar1 = local_ac[-1] - local_ac[-5];
        fVar2 = *local_ac - local_ac[-4];
      }
      else {
        pfVar7 = (float *)FUN_0041f5e0();
        fVar1 = local_ac[-1] - *pfVar7;
        fVar2 = *local_ac - pfVar7[1];
      }
      cVar5 = *param_1;
      fVar12 = (float)((int)fVar12 + 1);
      local_ac = local_ac + 4;
      afStack_54[(int)fVar12] = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    } while ((int)fVar12 < (int)cVar5);
  }
  else if (local_af) {
LAB_00459efb:
    iVar11 = (int)fVar6 + 1;
    fVar13 = ((float10)*(float *)(unsigned int)((param_2 + 0x3d4)) + (float10)local_a4[(int)fVar6 + 1]) *
             (float10)(unsigned int)(_DAT_006cc7dc) * (float10)afStack_54[(int)fVar6 + 1];
    fVar14 = (float10)afStack_54[(int)fVar6 + 1];
    while (iVar11 < *param_1) {
      pfVar7 = local_a4 + iVar11;
      iVar11 = iVar11 + 1;
      fVar13 = ((float10)(unsigned int)(*pfVar7) + (float10)local_a4[iVar11]) * (float10)(unsigned int)(_DAT_006cc7dc) *
               (float10)afStack_54[iVar11] + fVar13;
      fVar14 = fVar14 + (float10)afStack_54[iVar11];
    }
    if ((float10)(unsigned int)(DAT_006cc7a4) < fVar14) {
      return fVar13 / fVar14;
    }
    goto LAB_00459f5d;
  }
  local_ae = '\x01';
  fVar12 = ABS(*(float *)(unsigned int)((param_2 + 0x3d4)));
  if ((fVar12 < _DAT_006cc8bc == (fVar12 == _DAT_006cc8bc)) ||
     (fVar1 = ABS(local_a4[(int)fVar6 + 1]), fVar12 = _DAT_006cca64,
     fVar1 < _DAT_006cc8bc == (fVar1 == _DAT_006cc8bc))) {
    fVar12 = afStack_54[(int)fVar6 + 1] /
             ((local_a4[(int)fVar6 + 1] + *(float *)(unsigned int)((param_2 + 0x3d4))) * _DAT_006cc7dc);
  }
  if (fVar12 < _DAT_006b7528) {
    fVar12 = fVar6;
    pfVar7 = (float *)(unsigned int)((param_1 + ((int)fVar6 + 1) * 0x10));
    do {
      fVar6 = fVar12;
      if ((int)*param_1 <= (int)fVar12) break;
      fVar6 = (float)((int)fVar12 + 1);
      pfVar8 = (float *)FUN_0041f5e0();
      fVar1 = *pfVar8 - pfVar7[4];
      fVar2 = ABS(*(float *)(unsigned int)((param_2 + 0x3d4)));
      if ((fVar2 < _DAT_006cc8bc == (fVar2 == _DAT_006cc8bc)) ||
         (fVar3 = ABS(local_a4[(int)fVar12 + 2]), fVar2 = _DAT_006cca64,
         fVar3 < _DAT_006cc8bc == (fVar3 == _DAT_006cc8bc))) {
        fVar2 = SQRT(fVar1 * fVar1 + (pfVar8[1] - pfVar7[5]) * (pfVar8[1] - pfVar7[5])) /
                ((local_a4[(int)fVar12 + 2] + *(float *)(unsigned int)((param_2 + 0x3d4))) * _DAT_006cc7dc);
      }
      fVar12 = fVar6;
      pfVar7 = pfVar7 + 4;
    } while (fVar2 < _DAT_006b7528);
  }
  iVar11 = (int)fVar6 + 1;
  if ((iVar11 < *param_1) && (local_ae = FUN_00459f70(param_1,DAT_006b752c), local_ae == '\0')) {
    local_af = true;
    bVar4 = false;
  }
  if (param_1[0x1b0] == -1) {
    cVar5 = *param_1 + -2;
  }
  else {
    cVar5 = param_1[0x1b0] + -1;
  }
  fVar6 = local_a4[0];
  do {
    if ((local_af) || (cVar5 < iVar11)) {
      if (bVar4) goto LAB_00459efb;
      break;
    }
    pfVar7 = (float *)(unsigned int)((param_1 + iVar11 * 0x10));
    iVar9 = (iVar11 + 1) * 0x10;
    pfVar8 = local_a4 + iVar11;
    fVar12 = pfVar7[1] - *(float *)(unsigned int)(((int)(param_1 + iVar9) + 4));
    local_ac = (float *)(unsigned int)(SQRT((*(float *)(param_1 + iVar11 * 0x10) - *(float *)(param_1 + iVar9)) *
                             (*(float *)(param_1 + iVar11 * 0x10) - *(float *)(param_1 + iVar9)) +
                             fVar12 * fVar12));
    fVar12 = ABS(*pfVar8);
    if ((fVar12 < _DAT_006cc8bc == (fVar12 == _DAT_006cc8bc)) ||
       (fVar12 = ABS(local_a4[iVar11 + 1]), fVar1 = _DAT_006cca64,
       fVar12 < _DAT_006cc8bc == (fVar12 == _DAT_006cc8bc))) {
      fVar1 = (float)(unsigned int)(local_ac) / ((*pfVar8 + local_a4[iVar11 + 1]) * _DAT_006cc7dc);
    }
    if (fVar1 < _DAT_006b7528) {
      pfVar10 = (float *)(unsigned int)((param_1 + iVar9));
      iVar9 = iVar11;
      do {
        iVar11 = iVar9;
        if (*param_1 <= iVar9) break;
        fVar12 = *pfVar7 - pfVar10[4];
        iVar11 = iVar9 + 1;
        local_ac = (float *)(unsigned int)(SQRT(fVar12 * fVar12 +
                                 (pfVar7[1] - pfVar10[5]) * (pfVar7[1] - pfVar10[5])));
        fVar12 = ABS(*pfVar8);
        if ((fVar12 < _DAT_006cc8bc == (fVar12 == _DAT_006cc8bc)) ||
           (fVar12 = ABS(local_a4[iVar9 + 2]), fVar1 = _DAT_006cca64,
           fVar12 < _DAT_006cc8bc == (fVar12 == _DAT_006cc8bc))) {
          fVar1 = (float)(unsigned int)(local_ac) / ((*pfVar8 + local_a4[iVar9 + 2]) * _DAT_006cc7dc);
        }
        pfVar10 = pfVar10 + 4;
        iVar9 = iVar11;
      } while (fVar1 < _DAT_006b7528);
    }
    local_a4[0] = fVar6;
    if (cVar5 < iVar11) {
      local_af = true;
    }
    else {
      local_ae = FUN_0045a000(param_1,param_2,param_1 + (iVar11 + 2) * 0x10,local_ac,*pfVar8);
      iVar11 = iVar11 + 1;
    }
    fVar6 = local_a4[0];
  } while (local_ae != '\0');
LAB_00459f5d:
  return (float10)(unsigned int)(_DAT_006cc8a8);
}
