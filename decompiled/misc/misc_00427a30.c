/* spd-match: far pct=5.28 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_007000e4;
extern int DAT_00700d94;
extern int DAT_00700d98;
extern int DAT_00700d9c;
extern int DAT_00700da0;
extern int DAT_00700da4;
extern int DAT_00700da8;
extern int _DAT_006cc79c;
extern int _DAT_006cc9f8;
extern int _DAT_00700d60;
extern int _DAT_00700d64;
extern int _DAT_00700d90;
extern int _DAT_00700dac;
extern int _DAT_00700db0;
extern int _DAT_007361ec;
extern void LAB_00427c0d(void);
int unaff_ESI;

void FUN_00427a30(void)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  float local_20;
  float local_1c [7];
  
  fVar3 = _DAT_007361ec;
  if (_DAT_007361ec <= DAT_006cc7a4) {
    fVar3 = *(float *)(unaff_ESI + 0x3d4);
  }
  if (DAT_00700da8 <= fVar3) {
    fVar3 = DAT_00700da8 - _DAT_006cc79c;
  }
  fVar4 = ((int)(_DAT_00700db0)) + *(float *)(unaff_ESI + 0x4c0);
  if ((fVar3 <= fVar4) &&
     (fVar5 = *(float *)(unaff_ESI + 0x4c0) - _DAT_00700db0, fVar4 = fVar3, fVar3 < fVar5)) {
    fVar4 = fVar5;
  }
  bVar2 = DAT_00700d94 <= fVar4;
  local_20 = 0.0;
  *(float *)(unaff_ESI + 0x4c0) = fVar4;
  fVar3 = DAT_007000e4;
  if (bVar2) {
    local_1c[2] = (float)DAT_00700d98;
    local_1c[1] = DAT_00700d94;
    local_1c[4] = (float)DAT_00700da0;
    local_1c[3] = (float)DAT_00700d9c;
    local_1c[6] = DAT_00700da8;
    local_1c[5] = (float)DAT_00700da4;
    iVar6 = 1;
    do {
      if (fVar4 < local_1c[iVar6 + 1]) {
        iVar7 = iVar6 + 2;
        if (6 < iVar7) {
          iVar7 = 6;
        }
        pfVar1 = (float *)(iVar6 * 8 + 0x700d68);
        local_20 = (*(float *)(iVar6 * 8 + 0x700d6c) - *pfVar1) *
                   ((fVar4 - local_1c[iVar6]) / (local_1c[iVar6 + 1] - local_1c[iVar6])) + *pfVar1;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = *(int *)(unaff_ESI + 0x3d8);
    } while (iVar6 < 6);
  }
  else {
    if (_DAT_00700d90 <= fVar4) {
      iVar7 = 2;
    }
    else {
      iVar7 = 0;
    }
    fVar5 = ABS(fVar4);
    if (DAT_00700d94 < ABS(fVar4)) {
      fVar5 = DAT_00700d94;
    }
    local_20 = (fVar5 / DAT_00700d94) * (_DAT_00700d64 - _DAT_00700d60) + _DAT_00700d60;
  }
  if (*(int *)(unaff_ESI + 0x3d8) == iVar7) {
    fVar4 = DAT_007000e4;
    if (DAT_007000e4 == _DAT_006cc9f8) {
      fVar4 = *(float *)(unaff_ESI + 0x3e0);
    }
    fVar5 = ((int)(_DAT_00700dac)) + fVar4;
    if ((fVar5 < local_20) || (fVar5 = fVar4 - _DAT_00700dac, local_20 < fVar4 - _DAT_00700dac))
    goto LAB_00427c0d;
  }
  fVar5 = local_20;
LAB_00427c0d:
  *(int *)(unaff_ESI + 0x3d8) = iVar7;
  if (fVar3 == _DAT_006cc9f8) {
    *(float *)(unaff_ESI + 0x3e0) = fVar5;
    return;
  }
  *(float *)(unaff_ESI + 0x3e0) = DAT_007000e4;
  return;
}
