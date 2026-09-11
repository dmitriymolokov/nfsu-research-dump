/* spd-match: far pct=9.13 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_00583ea0();
extern int DAT_006cc7a4;
extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0078a344;
extern int _DAT_006b720c;
extern int _DAT_006b7210;
extern int _DAT_006b7238;
extern int _DAT_006b723c;
extern int _DAT_006cc7bc;
extern int _DAT_006cca20;
extern int _DAT_006cca38;
extern int _DAT_006ccb78;
extern int _DAT_006ffff0;
extern int _DAT_00700024;
extern int _DAT_0070002c;
int unaff_EDI;

float10 FUN_0046cff0(void)

{
  int iVar1;
  float fVar2;
  int unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = (float10)FUN_00583ea0(*(float *)(unaff_EDI + 0x14) * _DAT_006ccb78);
  fVar3 = fVar3 * (float10)*(float *)(unaff_EDI + 0xa0);
  if (*(int *)(unaff_EDI + 0x74) != 0) {
    fVar3 = fVar3 * (float10)_DAT_00700024;
  }
  if (*(float *)(unaff_EDI + 0x9c) == DAT_006cc7a4) {
    fVar4 = (float10)*(float *)(unaff_EDI + 0x80) * (float10)*(float *)(unaff_EDI + 0x78);
  }
  else {
    fVar4 = (float10)DAT_006cc7a4;
  }
  local_8 = (float)(fVar3 * fVar4);
  if (*(int *)(unaff_EDI + 0x84) != 0) {
    iVar1 = **(int **)(unaff_EDI + 0x1c);
    fVar3 = (float10)FUN_00583ea0(*(float *)(unaff_EDI + 0x14) * _DAT_006ccb78);
    local_8 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x2ac) + (float10)local_8);
    if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) &&
       (fVar2 = ((int)(_DAT_0070002c)) + *(float *)(unaff_EDI + 0x88),
       (float)DAT_0073ad34 * _DAT_006cca38 < fVar2 != ((float)DAT_0073ad34 * _DAT_006cca38 == fVar2)
       )) {
      local_8 = _DAT_006b7238 * local_8;
    }
  }
  if (_DAT_006ffff0 < *(float *)(unaff_EDI + 0x8c)) {
    local_8 = ((_DAT_006cc7bc -
               (*(float *)(unaff_EDI + 0x8c) - _DAT_006ffff0) / (_DAT_006cc7bc - _DAT_006ffff0)) /
              _DAT_006b720c) * local_8;
  }
  if (*(float *)(unaff_EDI + 0x9c) == DAT_006cc7a4) {
    local_4 = *(float *)(unaff_EDI + 0x80) * *(float *)(unaff_EDI + 0x78);
  }
  else {
    local_4 = 0.0;
  }
  fVar3 = (float10)FUN_00583ea0(*(float *)(unaff_EDI + 0x14) * _DAT_006ccb78);
  fVar3 = -(((float10)_DAT_006cc7bc - (float10)local_4) * fVar3);
  if ((DAT_006cc7a4 < *(float *)(unaff_EDI + 0x9c)) &&
     (*(int *)(*(int *)(unaff_EDI + 0x20) + 0x3c) != 1)) {
    fVar3 = fVar3 * (float10)_DAT_006b7210;
  }
  fVar3 = fVar3 + (float10)local_8;
  if (fVar3 < (float10)DAT_006cc7a4) {
    if (*(int *)(*(int *)(unaff_EDI + 0x20) + 0x3c) == 1) {
      return fVar3 * (float10)_DAT_006b723c;
    }
    if (*(int *)(*(int *)(unaff_EDI + 0x1c) + 0x3c0) == 1) {
      fVar3 = fVar3 * (float10)_DAT_006cca20;
    }
  }
  return fVar3;
}
