/* spd-match: far pct=17.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00456830();
int __cdecl FUN_00578730();
int __cdecl FUN_0057a5f0();
extern int DAT_006cc7a4;
extern int _DAT_006cc7dc;
extern int _DAT_007006f0;

undefined4 FUN_004569b0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x90) +
          *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x94) +
          *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x98);
  if (param_4 < DAT_006cc7a4) {
    FUN_00456830(param_1,*(undefined4 *)(param_1 + 0x3d4));
  }
  pfVar2 = (float *)FUN_00578730();
  if (*(float *)(param_1 + 0x90) * *pfVar2 + *(float *)(param_1 + 0x94) * pfVar2[1] <= DAT_006cc7a4)
  {
    fVar3 = (float10)FUN_0057a5f0();
    fVar3 = fVar3 + (float10)fVar1;
  }
  else {
    fVar3 = (float10)FUN_0057a5f0();
    fVar3 = (float10)fVar1 - fVar3;
  }
  if ((float10)param_2 <
      ((float10)(unsigned int)(_DAT_007006f0) * fVar3 * (float10)(unsigned int)(_DAT_006cc7dc) + (float10)param_3) *
      (float10)(unsigned int)(_DAT_007006f0)) {
    return 1;
  }
  return 0;
}
