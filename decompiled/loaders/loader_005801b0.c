/* spd-match: far pct=2.78 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00580240();
extern int DAT_006f0d54;
extern int _DAT_006b5bc4;
extern int _DAT_006b5bc8;
extern int _DAT_006b5bec;
extern int _DAT_006cc7bc;
extern int _DAT_006cc9f0;
extern int _DAT_006ccc58;
extern int _DAT_006f0d50;
int unaff_ESI;

float10 __fastcall FUN_005801b0(undefined4 param_1)

{
  float fVar1;
  int unaff_ESI;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00580240(param_1);
  fVar2 = (((float10)*(float *)(unaff_ESI + 0x30c) * (float10)*(float *)(unaff_ESI + 0x300) -
           (float10)(unsigned int)(_DAT_006f0d50)) / ((float10)(unsigned int)(DAT_006f0d54) - (float10)(unsigned int)(_DAT_006f0d50))) *
          (float10)(unsigned int)(_DAT_006b5bec) +
          ((float10)(unsigned int)(_DAT_006cc7bc) - (float10)(unsigned int)(_DAT_006b5bec)) *
          ((fVar2 * (float10)(unsigned int)(_DAT_006cc9f0) - (float10)(unsigned int)(_DAT_006b5bc4)) /
          ((float10)(unsigned int)(_DAT_006b5bc8) - (float10)(unsigned int)(_DAT_006b5bc4)));
  fVar1 = (float)fVar2;
  if ((float10)(unsigned int)(_DAT_006ccc58) < fVar2) {
    if (_DAT_006cc7bc < fVar1) {
      fVar1 = (unsigned int)(_DAT_006cc7bc);
    }
    return (float10)fVar1;
  }
  return (float10)(unsigned int)(_DAT_006ccc58);
}
