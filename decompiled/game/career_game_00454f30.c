/* spd-match: far pct=3.35 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00454F30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
void __fastcall FUN_00454f30(undefined4 * obj, float *param_1, float param_2)

{
  int iVar1;
  float fVar2;

  int iVar3;
  float *pfVar4;
  float *pfVar5;
  
  iVar1 = obj[1];
  if (iVar1 < 2) {
    if (iVar1 < 1) {
      return;
    }
    pfVar4 = (float *)*obj;
  }
  else {
    pfVar4 = (float *)*obj;
    if (param_2 < *pfVar4 == (param_2 == *pfVar4)) {
      if (pfVar4[iVar1 * 2 + -2] <= param_2) {
        *param_1 = pfVar4[iVar1 * 2 + -1];
        return;
      }
      iVar3 = 0;
      pfVar5 = pfVar4;
      if (iVar1 + -1 < 1) {
        return;
      }
      while ((param_2 < *pfVar5 || (pfVar5[2] <= param_2))) {
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 2;
        if (iVar1 + -1 <= iVar3) {
          return;
        }
      }
      fVar2 = (param_2 - pfVar4[iVar3 * 2]) / (pfVar4[iVar3 * 2 + 2] - pfVar4[iVar3 * 2]);
      *param_1 = fVar2 * pfVar4[iVar3 * 2 + 3] + (_DAT_006cc7bc - fVar2) * pfVar4[iVar3 * 2 + 1];
      return;
    }
  }
  *param_1 = pfVar4[1];
  return;
}
