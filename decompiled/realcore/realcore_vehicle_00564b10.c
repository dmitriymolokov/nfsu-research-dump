/* spd-match: far pct=4.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc980;
extern int _DAT_006cca40;
extern int _DAT_006cca44;
extern int _DAT_006cca48;
extern int _DAT_006cca80;
extern int _DAT_006cca84;
extern int _DAT_006cca88;
extern int _DAT_006cca8c;
extern int _DAT_006cca90;

float10 FUN_00564b10(void)

{
  ushort in_AX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)in_AX * (float10)(unsigned int)(_DAT_006cc980);
  fVar2 = (float10)(unsigned int)(_DAT_006cc7bc);
  if (fVar1 < (float10)(unsigned int)(_DAT_006cca90)) {
    if ((float10)(unsigned int)(_DAT_006cca40) <= fVar1) {
      fVar1 = fVar1 - (float10)(unsigned int)(_DAT_006cca44);
      fVar2 = (float10)(unsigned int)(_DAT_006cc8a8);
    }
  }
  else {
    fVar1 = fVar1 - (float10)(unsigned int)(_DAT_006cca48);
  }
  fVar3 = fVar1 * fVar1;
  fVar4 = fVar3 * fVar1 * fVar3;
  fVar5 = fVar4 * fVar3;
  return (fVar5 * fVar3 * (float10)(unsigned int)(_DAT_006cca80) +
         ((fVar4 * (float10)(unsigned int)(_DAT_006cca88) + (fVar1 - fVar3 * fVar1 * (float10)(unsigned int)(_DAT_006cca8c))) -
         fVar5 * (float10)(unsigned int)(_DAT_006cca84))) * fVar2;
}
