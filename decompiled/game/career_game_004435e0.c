/* spd-match: far pct=7.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004435E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004435e0(float val, float *param_1)

{
  float *pfVar1;

  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[1] = val;
  if ((val != 0.0) && (iVar3 = 0, 0 < (int)param_1[6])) {
    iVar4 = 0;
    do {
      pfVar1 = (float *)((int)param_1[7] + 0x1c + iVar4);
      iVar2 = (int)param_1[7] + iVar4;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xb4;
      *(float *)(iVar2 + 0x1c) = *param_1 - *pfVar1;
      *(float *)(iVar2 + 0x20) = *param_1 - *(float *)(iVar2 + 0x20);
      *(float *)(iVar2 + 0x24) = *param_1 - *(float *)(iVar2 + 0x24);
    } while (iVar3 < (int)param_1[6]);
  }
  return;
}
