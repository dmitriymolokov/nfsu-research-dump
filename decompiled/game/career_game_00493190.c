/* spd-match: far pct=5.26 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2115 */
#include "ghidra_compat.h"

int __cdecl FUN_00424f40();
extern int DAT_006cc7a4;
extern int _DAT_006cc83c;
extern void LAB_0049322f(void);
int unaff_ESI;

float10 FUN_00493190(int param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *unaff_ESI;
  int iVar9;
  float local_14;
  float local_10;
  
  bVar1 = false;
  local_14 = 1e+06;
  local_10 = 0.0;
  iVar9 = 0;
  iVar8 = -1;
  do {
    if (iVar9 == 1) {
      iVar7 = iVar8;
      if ((bVar1) ||
         (pfVar5 = (float *)FUN_00424f40(),
         *pfVar5 * *(float *)(param_1 + 8) + pfVar5[1] * *(float *)(param_1 + 0xc) < DAT_006cc7a4))
      break;
      iVar7 = -1;
      fVar2 = DAT_006cc7a4;
LAB_0049322f:
      fVar3 = *param_4 - (unaff_ESI[3] * ((int)DAT_006cc7a4) + unaff_ESI[4] * fVar2 + *unaff_ESI);
      fVar4 = param_4[1] - (unaff_ESI[4] * ((int)DAT_006cc7a4) + -unaff_ESI[3] * fVar2 + unaff_ESI[1]);
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      if ((fVar3 < local_14) && (iVar8 = iVar7, local_14 = fVar3, local_10 = fVar2, bVar1)) break;
    }
    else {
      iVar7 = iVar9 + param_5;
      iVar6 = param_3 + iVar7 * 0x34;
      if ((*(char *)(iVar6 + 0x34) != '\0') || (*(char *)(iVar6 + 0x35) != '\0')) {
        bVar1 = true;
        fVar2 = (float)((int)*(short *)((int)unaff_ESI + iVar7 * 2 + 0x3c) << 8) * ((int)_DAT_006cc83c);
        goto LAB_0049322f;
      }
    }
    iVar7 = iVar8;
    iVar9 = iVar9 + 1;
    iVar8 = iVar7;
  } while (iVar9 < 2);
  param_2[4] = iVar7;
  *param_2 = param_3;
  param_2[1] = (int)unaff_ESI;
  param_2[3] = (int)local_10;
  return (float10)local_14;
}
