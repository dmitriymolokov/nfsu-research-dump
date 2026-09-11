/* spd-match: far pct=6.44 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059D430 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0059d430(int obj, undefined4 param_1, float *param_2, int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  iVar1 = *(int *)(obj + 0x24);
  fVar2 = *param_2 - *(float *)(param_3 * 0x10 + iVar1);
  iVar5 = param_3 * 0x10 + iVar1;
  fVar4 = param_2[1] - *(float *)(iVar5 + 4);
  iVar8 = param_3 + 1;
  fVar3 = param_2[2] - *(float *)(iVar5 + 8);
  fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  iVar5 = param_3;
  if (iVar8 < (int)(uint)*(ushort *)(obj + 0x1e)) {
    pfVar7 = (float *)(iVar8 * 0x10 + iVar1);
    do {
      iVar6 = iVar8;
      fVar3 = SQRT((*param_2 - *pfVar7) * (*param_2 - *pfVar7) +
                   (param_2[1] - pfVar7[1]) * (param_2[1] - pfVar7[1]) +
                   (param_2[2] - pfVar7[2]) * (param_2[2] - pfVar7[2]));
      if (fVar2 <= fVar3) break;
      pfVar7 = pfVar7 + 4;
      iVar8 = iVar6 + 1;
      iVar5 = iVar6;
      fVar2 = fVar3;
    } while (iVar6 + 1 < (int)(uint)*(ushort *)(obj + 0x1e));
  }
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    pfVar7 = (float *)(param_3 * 0x10 + iVar1);
    iVar8 = iVar5;
    do {
      iVar5 = param_3;
      fVar3 = SQRT((*param_2 - *pfVar7) * (*param_2 - *pfVar7) +
                   (param_2[1] - pfVar7[1]) * (param_2[1] - pfVar7[1]) +
                   (param_2[2] - pfVar7[2]) * (param_2[2] - pfVar7[2]));
      if (fVar2 <= fVar3) {
        return iVar8;
      }
      pfVar7 = pfVar7 + -4;
      param_3 = iVar5 + -1;
      iVar8 = iVar5;
      fVar2 = fVar3;
    } while (-1 < iVar5 + -1);
  }
  return iVar5;
}
