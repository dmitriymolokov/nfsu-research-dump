/* spd-match: far pct=9.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004939E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004939e0(int obj, float param_1)

{
  float fVar1;
  float *pfVar2;

  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(obj + 4) + -1;
  pfVar3 = *(float **)(obj + 0xc);
  iVar5 = iVar4;
  pfVar2 = pfVar3;
  if (0 < iVar4) {
    do {
      fVar1 = pfVar2[4] - *pfVar2;
      fVar1 = SQRT(fVar1 * fVar1 + (pfVar2[5] - pfVar2[1]) * (pfVar2[5] - pfVar2[1])) * param_1 +
              pfVar2[2];
      if (fVar1 < pfVar2[6]) {
        pfVar2[6] = fVar1;
      }
      iVar5 = iVar5 + -1;
      pfVar2 = pfVar2 + 4;
    } while (iVar5 != 0);
    if (0 < iVar4) {
      pfVar3 = pfVar3 + iVar4 * 4 + -4;
      do {
        fVar1 = SQRT((*pfVar3 - pfVar3[4]) * (*pfVar3 - pfVar3[4]) +
                     (pfVar3[1] - pfVar3[5]) * (pfVar3[1] - pfVar3[5])) * param_1 + pfVar3[6];
        if (fVar1 < pfVar3[2]) {
          pfVar3[2] = fVar1;
        }
        pfVar3 = pfVar3 + -4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}
