/* spd-match: far pct=0.60 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_7/buckets/realcore_p2/batches/20260724T153653Z_w0_tp1 */
#include "ghidra_compat.h"

struct ThisCallBox {
  float * FUN_0058dca0(int param_2, float param_3, float param_4, float param_5);
};
float * ThisCallBox::FUN_0058dca0(int param_2, float param_3, float param_4, float param_5) {
  short sVar1;
  float *pfVar2;
  int iVar3;
  short *psVar4;
  
  sVar1 = *(short *)(param_2 + 0xe);
  iVar3 = 0;
  if (0 < sVar1) {
    psVar4 = (short *)(param_2 + 0x1c);
    do {
      pfVar2 = (float *)(*psVar4 * 0x30 + *((int *)this));
      if (((pfVar2[4] < ABS(param_3 - *pfVar2) == (pfVar2[4] == ABS(param_3 - *pfVar2))) &&
          (pfVar2[5] < ABS(param_4 - pfVar2[1]) == (pfVar2[5] == ABS(param_4 - pfVar2[1])))) &&
         (pfVar2[6] < ABS(param_5 - pfVar2[2]) == (pfVar2[6] == ABS(param_5 - pfVar2[2])))) {
        if (*(short *)((int)pfVar2 + 0xe) < 1) {
          return pfVar2;
        }
        pfVar2 = (float *)FUN_0058dca0((int)pfVar2,param_3,param_4,param_5);
        if (pfVar2 != (float *)0x0) {
          return pfVar2;
        }
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < sVar1);
  }
  return (float *)0x0;
}
