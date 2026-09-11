/* spd-match: far pct=5.15 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00434a10();
int __cdecl FUN_00443a10();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_007372b0;
extern int DAT_0077af20;
extern int DAT_0078a2fc;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc83c;
extern int _DAT_006cc8f0;
extern int _DAT_006cc9f8;
extern int _DAT_006ccd40;

float * FUN_00432e80(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float local_70;
  float local_6c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar10 = DAT_0078a2fc;
  pfVar8 = param_1;
  for (iVar6 = 0x200; pfVar8 = pfVar8 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = 0.0;
  }
  *param_1 = 0.0;
  piVar11 = DAT_0077af20;
  piVar5 = (int *)FUN_0040a880();
  if (piVar11 != piVar5) {
    param_2 = param_2 + iVar10 * 5;
    do {
      if (((char)piVar11[param_2 * 0xd + 0xd] != '\0') ||
         (*(char *)(param_2 * 0x34 + 0x35 + (int)piVar11) != '\0')) {
        iVar9 = (int)(short)piVar11[4];
        local_28 = 0;
        local_10 = 0;
        local_c = 0;
        iVar6 = 0;
        local_30 = 0;
        local_2c = 0;
        local_24 = 0;
        local_20 = 0.0;
        local_1c = 0;
        local_18 = 0x3f800000;
        local_14 = 0;
        if (iVar9 != 1 && -1 < iVar9 + -1) {
          do {
            iVar1 = iVar6 + 1;
            iVar7 = iVar1;
            if (iVar10 == 1) {
              iVar9 = iVar9 - iVar6;
              iVar6 = iVar9 + -1;
              iVar7 = iVar9 + -2;
            }
            pfVar8 = (float *)(piVar11 + iVar6 * 0x22 + 0x9f);
            pfVar2 = (float *)(piVar11 + iVar7 * 0x22 + 0x9f);
            fVar3 = (float)((int)*(short *)((int)pfVar8 + param_2 * 2 + 0x3c) << 8) * ((int)_DAT_006cc83c);
            local_3c = -pfVar8[3];
            local_50 = pfVar8[3] * ((int)DAT_006cc7a4) + pfVar8[4] * fVar3 + *pfVar8;
            local_4c = pfVar8[4] * ((int)DAT_006cc7a4) + local_3c * fVar3 + pfVar8[1];
            fVar3 = (float)((int)*(short *)((int)pfVar2 + param_2 * 2 + 0x3c) << 8) * ((int)_DAT_006cc83c);
            local_34 = -pfVar2[3];
            local_48 = pfVar2[3] * ((int)DAT_006cc7a4) + pfVar2[4] * fVar3 + *pfVar2;
            local_44 = pfVar2[4] * ((int)DAT_006cc7a4) + local_34 * fVar3 + pfVar2[1];
            FUN_00443a10(&DAT_007372b0,&local_50);
            fVar12 = (float10)FUN_00434a10(local_20 * ((int)_DAT_006cc9f8));
            local_70 = (float)fVar12;
            FUN_00443a10(&DAT_007372b0,&local_48);
            fVar12 = (float10)FUN_00434a10(local_20 * ((int)_DAT_006cc9f8));
            if (fVar12 - (float10)local_70 <= (float10)((int)_DAT_006cc7dc)) {
              if ((float10)((int)_DAT_006cc7dc) < (float10)local_70 - fVar12) {
                fVar12 = fVar12 + (float10)((int)_DAT_006cc7bc);
              }
            }
            else {
              local_70 = (float)((float10)local_70 + (float10)((int)_DAT_006cc7bc));
            }
            local_6c = 0.0;
            fVar3 = (float)((uint)*(byte *)(param_2 + 0x6a + (int)pfVar8) << 0x10) * ((int)_DAT_006cc83c);
            if (DAT_006cc7a4 < fVar3) {
              local_6c = (float)((fVar12 - (float10)local_70) /
                                (SQRT(((float10)local_50 - (float10)local_48) *
                                      ((float10)local_50 - (float10)local_48) +
                                      ((float10)local_4c - (float10)local_44) *
                                      ((float10)local_4c - (float10)local_44)) / (float10)fVar3));
            }
            FUN_00674898();
            iVar6 = FUN_00674898();
            if ((DAT_006cc7a4 < local_6c) && (param_1[iVar6 * 2 + 1] == DAT_006cc7a4)) {
              param_1[iVar6 * 2 + 1] = local_6c;
            }
            iVar9 = (int)(short)piVar11[4];
            iVar6 = iVar1;
          } while (iVar1 < iVar9 + -1);
        }
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != piVar5);
  }
  iVar10 = 0x20;
  pfVar8 = param_1 + 4;
  fVar4 = DAT_006cc7a4;
  fVar3 = _DAT_006ccd40;
  do {
    pfVar8[-2] = fVar4;
    if (pfVar8[-3] == DAT_006cc7a4) {
      pfVar8[-3] = fVar3;
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[-3] + fVar4;
    *pfVar8 = fVar4;
    if (pfVar8[-1] == DAT_006cc7a4) {
      pfVar8[-1] = pfVar8[-3];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[-1] + fVar4;
    pfVar8[2] = fVar4;
    if (pfVar8[1] == DAT_006cc7a4) {
      pfVar8[1] = pfVar8[-1];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[1] + fVar4;
    pfVar8[4] = fVar4;
    if (pfVar8[3] == DAT_006cc7a4) {
      pfVar8[3] = pfVar8[1];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[3] + fVar4;
    pfVar8[6] = fVar4;
    if (pfVar8[5] == DAT_006cc7a4) {
      pfVar8[5] = pfVar8[3];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[5] + fVar4;
    pfVar8[8] = fVar4;
    if (pfVar8[7] == DAT_006cc7a4) {
      pfVar8[7] = pfVar8[5];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[7] + fVar4;
    pfVar8[10] = fVar4;
    if (pfVar8[9] == DAT_006cc7a4) {
      pfVar8[9] = pfVar8[7];
    }
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[9] + fVar4;
    pfVar8[0xc] = fVar4;
    if (pfVar8[0xb] == DAT_006cc7a4) {
      pfVar8[0xb] = pfVar8[9];
    }
    iVar10 = iVar10 + -1;
    fVar4 = ((int)_DAT_006cc8f0) / pfVar8[0xb] + fVar4;
    fVar3 = pfVar8[0xb];
    pfVar8 = pfVar8 + 0x10;
  } while (iVar10 != 0);
  *param_1 = fVar4;
  return param_1;
}
