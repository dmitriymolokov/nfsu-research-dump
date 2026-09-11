/* spd-match: far pct=20.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc844;
extern int _DAT_006cc8c4;
extern void LAB_0052f054(void);

void __fastcall FUN_0052f030(int param_1)

{
  int iVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  if (*(float *)(*(int *)(param_1 + 0x204) + 0x178) == DAT_006cc7a4) {
LAB_0052f054:
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + 8);
  if (iVar1 == 1) {
    fVar2 = *(float *)(param_1 + 0x90 + *(int *)(param_1 + 0xcc) * 4) -
            *(float *)(param_1 + 0x98 + *(int *)(param_1 + 0xcc) * 4);
  }
  else {
    if (iVar1 != 2) goto LAB_0052f054;
    fVar2 = *(float *)(param_1 + 0x80 + *(int *)(param_1 + 0xcc) * 4) -
            *(float *)(param_1 + 0x88 + *(int *)(param_1 + 0xcc) * 4);
  }
  *(float *)(param_1 + 0xb8) =
       ((int)_DAT_006cc8c4) / ((fVar2 / *(float *)(*(int *)(param_1 + 0x204) + 0x178)) *
        *(float *)(*(int *)(param_1 + 0xbc) + 100) * ((int)_DAT_006cc844) + _DAT_006cc8c4);
  return;
}
