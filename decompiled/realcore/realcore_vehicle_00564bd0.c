/* spd-match: far pct=7.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc980;
extern int _DAT_006cca40;
extern int _DAT_006cca44;
extern int _DAT_006cca48;
extern int _DAT_006cca70;
extern int _DAT_006cca74;
extern int _DAT_006cca78;
extern int _DAT_006cca7c;
extern int _DAT_006cca80;
extern int _DAT_006cca84;
extern int _DAT_006cca88;
extern int _DAT_006cca8c;
extern int _DAT_006cca90;

void __fastcall FUN_00564bd0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort in_AX;
  undefined4 local_10;
  
  local_10 = 1.0;
  fVar1 = (float)in_AX * ((int)_DAT_006cc980);
  if (fVar1 < _DAT_006cca90) {
    if (_DAT_006cca40 <= fVar1) {
      fVar1 = fVar1 - _DAT_006cca44;
      local_10 = -1.0;
    }
  }
  else {
    fVar1 = fVar1 - _DAT_006cca48;
  }
  fVar2 = fVar1 * fVar1;
  fVar3 = fVar2 * fVar1 * fVar2;
  fVar5 = fVar2 * fVar2 * fVar2;
  fVar4 = fVar3 * fVar2;
  fVar6 = fVar5 * fVar2;
  *param_1 = (fVar4 * fVar2 * ((int)_DAT_006cca80) +
             ((fVar3 * ((int)_DAT_006cca88) + (fVar1 - fVar2 * fVar1 * ((int)_DAT_006cca8c))) -
             fVar4 * ((int)_DAT_006cca84))) * local_10;
  *param_2 = ((fVar6 * ((int)_DAT_006cca74) +
              ((fVar2 * fVar2 * ((int)_DAT_006cca7c) + (((int)_DAT_006cc7bc) - ((int)_DAT_006cc7dc) * fVar2)) -
              fVar5 * ((int)_DAT_006cca78))) - fVar6 * fVar2 * ((int)_DAT_006cca70)) * local_10;
  return;
}
