/* spd-match: far pct=16.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00588520 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00588520(int obj, undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;

  *(undefined4 *)(obj + 0x88) = param_1;
  pfVar5 = *(float **)(*(int *)(obj + 0xa0) + 0x14);
  iVar6 = *(int *)(obj + 0xa4);
  fVar1 = pfVar5[1];
  fVar2 = *(float *)(iVar6 + 0x1d4);
  fVar3 = pfVar5[2];
  fVar4 = *(float *)(iVar6 + 0x1d8);
  *(float *)(obj + 0x90) = *pfVar5 - *(float *)(iVar6 + 0x1d0);
  *(float *)(obj + 0x98) = fVar3 - fVar4;
  *(float *)(obj + 0x94) = fVar1 - fVar2;
  return;
}
