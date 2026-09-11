/* spd-match: far pct=3.16 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_00627640 */
#include "ghidra_compat.h"

void __fastcall FUN_00627640(undefined4* self, int dummy_edx, float param_2, int param_3, int param_4, int param_5)
{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(self + 4);
  uVar4 = uVar6 + 1 & 0xfffffffe;
  iVar5 = 0;
  pfVar1 = (float *)(self + (uVar4 + 4 + uVar6 * param_3 * 2) * 2);
  if (uVar6 != 0) {
    pfVar3 = pfVar1;
    do {
      iVar2 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(float *)(param_5 + (uint)*(ushort *)(self + 8 + iVar2) * 4) =
           (*(float *)(((self + (uVar4 + 4 + uVar6 * param_4 * 2) * 2) - (int)pfVar1) +
                      (int)pfVar3) - *pfVar3) * param_2 + *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(self + 4));
  }
  return;
}
