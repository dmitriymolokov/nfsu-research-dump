/* spd-match: far pct=2.35 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_004400e0();
extern int DAT_006cc7a4;

float10 FUN_00577370(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
                    undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  pfVar5 = param_2;
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  bVar4 = false;
  param_2 = (float *)0x0;
  for (; puVar2 != (undefined4 *)(param_1 + 0x20); puVar2 = (undefined4 *)*puVar2) {
    if (((DAT_006cc7a4 < (float)puVar2[0x1e]) &&
        (fVar7 = (float10)FUN_004400e0(),
        fVar7 < (float10)(unsigned int)(DAT_006cc7a4) != (fVar7 == (float10)(unsigned int)(DAT_006cc7a4)))) &&
       ((fVar3 = -(((*pfVar5 * (float)puVar2[0x1c] + (float)puVar2[0x1d] * pfVar5[1]) -
                   (float)puVar2[0x1f]) / (float)puVar2[0x1e]), !bVar4 || ((float)(unsigned int)(param_2) < fVar3)))
       ) {
      bVar4 = true;
      if (param_3 != (undefined4 *)0x0) {
        uVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x54))();
        *param_3 = uVar6;
      }
      if (param_4 != (undefined4 *)0x0) {
        uVar6 = puVar2[0x1d];
        uVar1 = puVar2[0x1e];
        *param_4 = puVar2[0x1c];
        param_4[1] = uVar6;
        param_4[2] = uVar1;
      }
      param_2 = (float *)(unsigned int)(fVar3);
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
    }
  }
  return (float10)(float)(unsigned int)(param_2);
}
