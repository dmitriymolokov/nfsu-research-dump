/* spd-match: far pct=9.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0046ccc0();
extern int DAT_006cc7a4;
extern int DAT_00700004;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0078a344;
extern int _DAT_006b7208;
extern int _DAT_006b7214;
extern int _DAT_006cc7bc;
extern int _DAT_006cc968;
extern int _DAT_006cca38;
extern int _DAT_006ccab4;
extern int _DAT_006ccb78;
extern int _DAT_006ffff8;
extern int _DAT_006ffffc;
extern int _DAT_00700000;

void __fastcall FUN_0046ca90(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = *(float **)(param_1 + 0x18);
  fVar3 = *pfVar2 * ((int)_DAT_006ccab4);
  if (*pfVar2 * ((int)_DAT_006ccab4) < *(float *)(param_1 + 0x14)) {
    fVar3 = *(float *)(param_1 + 0x14);
  }
  if (pfVar2[2] * ((int)_DAT_006ccab4) < fVar3) {
    fVar3 = pfVar2[2] * ((int)_DAT_006ccab4);
  }
  *(float *)(param_1 + 0x14) = fVar3;
  fVar3 = fVar3 * ((int)_DAT_006ccb78);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) && (*(int *)(param_1 + 0x94) == 0)) {
    if ((*DAT_0073619c < 4) ||
       ((*(int *)(*(int *)(param_1 + 0x20) + 0x3c) == 2 &&
        (DAT_006cc7a4 < *(float *)(*(int *)(param_1 + 0x20) + 0x68))))) {
      *(float *)(param_1 + 0x90) = (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38);
    }
    fVar4 = (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38);
    fVar1 = *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x90) = fVar4;
    fVar5 = _DAT_00700000;
    if (pfVar2[1] <= fVar3) {
      fVar5 = _DAT_006ffff8;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      fVar5 = fVar5 + _DAT_006ffffc;
    }
    if ((fVar5 < DAT_006cc7a4) || (*(float *)(param_1 + 0x8c) < _DAT_006cc7bc)) {
      *(float *)(param_1 + 0x8c) = fVar5 * (fVar4 - fVar1) + *(float *)(param_1 + 0x8c);
    }
    if (*(float *)(param_1 + 0x8c) < DAT_006cc7a4) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    if (*(float *)(param_1 + 0x8c) < _DAT_006cc968) {
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      if (*(float *)(param_1 + 0x98) == DAT_006cc7a4) {
        *(float *)(param_1 + 0x98) = (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38);
      }
      if (_DAT_006b7208 < (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38) - *(float *)(param_1 + 0x98)) {
        *(undefined4 *)(param_1 + 0x94) = 1;
      }
    }
  }
  if (DAT_006cc7a4 == *(float *)(param_1 + 0x9c)) {
    if (pfVar2[2] - _DAT_006b7214 < fVar3) {
      *(float *)(param_1 + 0x9c) =
           (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38) +
           *(float *)(&((int)DAT_00700004) + *(int *)(*(int *)(param_1 + 0x20) + 0x3c) * 4);
      FUN_0046ccc0();
      return;
    }
  }
  else if (*(float *)(param_1 + 0x9c) < (float)((int)DAT_0073ad34) * ((int)_DAT_006cca38)) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_0046ccc0();
  return;
}
